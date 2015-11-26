////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2015
// Created by Roman Ryltsov roman@alax.info, http://alax.info
//
// This source code is published to complement DirectShowSpy developer powertoy 
// and demonstrate the internal use of APIs and tricks powering the tool. It is 
// allowed to freely re-use the portions of the code in other projects, commercial 
// or otherwise (provided that you don’t pretend that you wrote the original tool).
//
// Please keep in mind that DirectShowSpy is a developer tool, it is strongly recommended
// that it is not shipped with release grade software. It is allowed to distribute
// DirectShowSpy if only it is not registered with Windows by default and either
// used privately, or registered on specific throubleshooting request. The advice applies 
// to hooking methods used by DirectShowSpy in general as well.

#pragma once

#include "Module_i.h"
#include "Common.h"

////////////////////////////////////////////////////////////
// CFilterGraphTableBase

class CFilterGraphTableBase
{
public:

	////////////////////////////////////////////////////////
	// Structure

	#pragma pack(push)
	#pragma pack(push, 16)

	enum
	{
		ITEMFLAGS_NONE = 0,
		ITEMFLAG_ACTIVE = 0x01,
		ITEMFLAGS_DEFAULT = ITEMFLAGS_NONE,
	};

	typedef struct _ITEM
	{
		UINT32 nFlags;
		UINT32 nProcessIdentifier;
		GUID ActiveObjectClassIdentifier;
	} ITEM;

	typedef struct _HEADER
	{
		UINT64 nCapacity;
		UINT64 nSpinValue;
		UINT32 nItemCount;
		ITEM pItems[1];

		CInterlockedLongLong& GetSpinValue()
		{
			return reinterpret_cast<CInterlockedLongLong&>(nSpinValue);
		}
		VOID Lock()
		{
			CInterlockedLongLong& nSpinValue = GetSpinValue();
			for(; ; )
			{
				if(nSpinValue.Increment() == 0)
					break;
				nSpinValue.Decrement();
				SwitchToThread();
			}
		}
		VOID Unlock()
		{
			CInterlockedLongLong& nSpinValue = GetSpinValue();
			nSpinValue.Decrement();
		}
	} HEADER;

	#pragma pack(pop)

	////////////////////////////////////////////////////////
	// CActiveObjectFileMapping

	class CActiveObjectFileMapping :
		public CAtlFileMapping<HEADER>
	{
	public:
	// CActiveObjectFileMapping
		static CString GetName()
		{
			// NOTE: Kernel object namespaces
			return _T("Global\\") _T("AlaxInfoDirectShowSpy.ActiveObjectFileMapping");
		}
		static SIZE_T GetCapacity()
		{
			return 1 << 20; // 1 MB
		}
		VOID Create()
		{
			_A(!GetHandle());
			const SIZE_T nCapacity = GetCapacity();
			// TODO: Security
			BOOL bExist;
			const HRESULT nResult = __super::MapSharedMem(nCapacity, GetName(), &bExist);
			if(!bExist)
			{
				#pragma region Security
				CDacl AccessControlList;
				__E(AtlGetDacl(GetHandle(), SE_KERNEL_OBJECT, &AccessControlList));
				//AccessControlList.AddAllowedAce(Sids::Admins(), FILE_MAP_ALL_ACCESS, OBJECT_INHERIT_ACE | CONTAINER_INHERIT_ACE);
				//AccessControlList.AddAllowedAce(Sids::Interactive(), FILE_MAP_READ, OBJECT_INHERIT_ACE | CONTAINER_INHERIT_ACE);
				AccessControlList.AddAllowedAce(Sids::World(), FILE_MAP_ALL_ACCESS, OBJECT_INHERIT_ACE | CONTAINER_INHERIT_ACE);
				__E(AtlSetDacl(GetHandle(), SE_KERNEL_OBJECT, AccessControlList));
				#pragma endregion 
				HEADER* pHeader = *this;
				pHeader->nCapacity = (UINT32) nCapacity;
				_A(!pHeader->nItemCount);
				pHeader->GetSpinValue().Decrement();
			}
		}
		BOOL Open()
		{
			_A(!GetHandle());
			const HRESULT nResult = __super::OpenMapping(GetName(), GetCapacity());
			return SUCCEEDED(nResult);
		}
	};

	////////////////////////////////////////////////////////
	// CActiveObject

	class ATL_NO_VTABLE CActiveObject :
		public CComObjectRootEx<CComMultiThreadModelNoCS>,
		public IExternalConnectionImpl<CActiveObject>,
		public IDispatchImpl<IFilterGraphTableActiveObject>
	{
	DECLARE_NO_REGISTRY()

	DECLARE_QI_TRACE(CActiveObject)

	BEGIN_COM_MAP(CActiveObject)
		COM_INTERFACE_ENTRY(IExternalConnection)
		COM_INTERFACE_ENTRY(IFilterGraphTableActiveObject)
		COM_INTERFACE_ENTRY(IDispatch)
	END_COM_MAP()

	public:

	private:
		static CActiveObject* g_pInstance;
		mutable CRoCriticalSection m_DataCriticalSection;
		CRoArrayT<CComPtr<IFilterGraphTableItem>> m_ItemList;
		GUID m_ClassIdentifier;
		::CActiveObject m_ActiveObject;
		//::CActiveObjectT<CDefaultActiveObjectHandler> m_ActiveObject;
		CActiveObjectFileMapping m_FileMapping;
		UINT32 m_nItemIndex;

	public:
	// CActiveObject
		CActiveObject() :
			m_ClassIdentifier(CLSID_NULL)
		{
			_Z4_THIS();
		}
		~CActiveObject()
		{
			_Z4_THIS();
		}
		VOID Register()
		{
			CRoCriticalSectionLock DataLock(m_DataCriticalSection);
			if(m_ActiveObject.IsRegistered())
				return;
			if(m_ClassIdentifier == CLSID_NULL)
				__C(CoCreateGuid(&m_ClassIdentifier));
			// TODO: Handle CO_E_WRONG_SERVER_IDENTITY 
			m_ActiveObject.Register((IFilterGraphTableActiveObject*) this, m_ClassIdentifier);
			_ATLTRY
			{
				if(!m_FileMapping.GetHandle())
					m_FileMapping.Create();
				HEADER* pHeader = m_FileMapping;
				_A(pHeader);
				pHeader->Lock();
				_ATLTRY
				{
					#pragma region File Mapping Item
					UINT32 nItemIndex;
					for(nItemIndex = 0; nItemIndex < pHeader->nItemCount; nItemIndex++)
						if(!(pHeader->pItems[nItemIndex].nFlags & ITEMFLAG_ACTIVE))
							break;
					if(nItemIndex >= pHeader->nItemCount)
					{
						// TODO: Compact items
						__D((SIZE_T) ((BYTE*) &pHeader->pItems[nItemIndex + 1] - (BYTE*) pHeader) <= pHeader->nCapacity, HRESULT_FROM_WIN32(ERROR_BUFFER_OVERFLOW));
						ITEM& Item = pHeader->pItems[nItemIndex];
						ZeroMemory(&Item, sizeof Item);
						pHeader->nItemCount++;
					}
					ITEM& Item = pHeader->pItems[nItemIndex];
					Item.nFlags = ITEMFLAG_ACTIVE;
					Item.nProcessIdentifier = GetCurrentProcessId();
					Item.ActiveObjectClassIdentifier = m_ClassIdentifier;
					m_nItemIndex = nItemIndex;
					#pragma endregion
				}
				_ATLCATCHALL()
				{
					pHeader->Unlock();
					_ATLRETHROW;
				}
				pHeader->Unlock();
			}
			_ATLCATCHALL()
			{
				m_ActiveObject.Unregister();
				_ATLRETHROW;
			}
		}
		VOID Revoke()
		{
			CRoCriticalSectionLock DataLock(m_DataCriticalSection);
			if(!m_ActiveObject.IsRegistered())
				return;
			_A(m_ClassIdentifier != CLSID_NULL);
			_A(m_FileMapping);
			#pragma region File Mapping Item
			HEADER* pHeader = m_FileMapping;
			pHeader->Lock();
			_A(m_nItemIndex < pHeader->nItemCount);
			ITEM& Item = pHeader->pItems[m_nItemIndex];
			Item.nFlags = 0;
			while(pHeader->nItemCount && !(pHeader->pItems[pHeader->nItemCount - 1].nFlags & ITEMFLAG_ACTIVE))
				pHeader->nItemCount--;
			pHeader->Unlock();
			#pragma endregion
			m_ActiveObject.Unregister();
		}
		static CObjectPtr<CActiveObject> GetInstance()
		{
			_A(_pAtlModule);
			CComCritSecLock<CComCriticalSection> Lock(_pAtlModule->m_csStaticDataInitAndTypeInfo);
			if(!g_pInstance)
			{
				CObjectPtr<CActiveObject> pInstance;
				pInstance.Construct();
				reinterpret_cast<CObjectPtr<CActiveObject>&>(g_pInstance) = pInstance;
				return pInstance;
			}
			return g_pInstance;
		}
		VOID Add(IFilterGraphTableItem* pItem)
		{
			_A(pItem);
			CRoCriticalSectionLock DataLock(m_DataCriticalSection);
			_A(!m_ItemList.FindFirst(pItem));
			m_ItemList.Add(pItem);
			if(m_ItemList.GetCount() == 1)
				Register();
		}
		VOID Remove(IFilterGraphTableItem* pItem)
		{
			_A(pItem);
			CRoCriticalSectionLock DataLock(m_DataCriticalSection);
			SIZE_T nIndex;
			if(!m_ItemList.FindFirst(pItem, &nIndex))
				return;
			m_ItemList.RemoveAt(nIndex);
			if(m_ItemList.IsEmpty())
				Revoke();
		}

	// CComObjectRootEx
		ULONG InternalRelease()
		{
			ULONG nReferenceCount = __super::InternalRelease();
			if(nReferenceCount == 1)
			{
				_A(_pAtlModule);
				CComCritSecLock<CComCriticalSection> Lock(_pAtlModule->m_csStaticDataInitAndTypeInfo);
				_Z4(atlTraceRefcount, 4, _T("this 0x%p, nReferenceCount %d, g_pInstance 0x%p\n"), this, nReferenceCount, g_pInstance);
				if(g_pInstance)
				{
					if(m_dwRef == 1)
					{
						g_pInstance = NULL;
						_W(__super::InternalRelease() == 0);
						nReferenceCount = 0;
					}
				}
			}
			return nReferenceCount;
		}

	// IFilterGraphTableActiveObject
		STDMETHOD(GetFilterGraphs)(LONG* pnProcessIdentifier, VARIANT* pvArray) override
		{
			_Z4(atlTraceCOM, 4, _T("...\n"));
			_ATLTRY
			{
				__D(pnProcessIdentifier && pvArray, E_POINTER);
				VariantInit(pvArray);
				const DWORD nProcessIdentifier = GetCurrentProcessId();
				CRoCriticalSectionLock DataLock(m_DataCriticalSection);
				*pnProcessIdentifier  = (LONG) nProcessIdentifier;
				CRoArrayT<CComVariantArray> Array;
				for(auto&& pFilterGraphTableItem: m_ItemList)
				{
					_ATLTRY
					{
						CComPtr<IUnknown> pFilterGraphUnknown;
						__C(pFilterGraphTableItem->get_FilterGraph(&pFilterGraphUnknown));
						if(pFilterGraphUnknown)
						{
							DATE fTime;
							__C(pFilterGraphTableItem->get_Time(&fTime));
							CComVariantArray vItemValue;
							vItemValue.FromElements(4, 
								CComVariant((LONG) nProcessIdentifier),
								CComVariant((LONGLONG) (LONG_PTR) (IUnknown*) pFilterGraphUnknown),
								CComVariant((IUnknown*) pFilterGraphUnknown),
								CComVariant(fTime, VT_DATE),
								0);
							Array.Add(vItemValue);
						}
					}
					_ATLCATCHALL()
					{
						_Z_EXCEPTION();
					}
				}
				CComVariantArray vValue;
				vValue.FromElementArray(Array);
				_V(vValue.Detach(pvArray));
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
	};

public:
// CFilterGraphTableBase
};

__declspec(selectany) CFilterGraphTableBase::CActiveObject* CFilterGraphTableBase::CActiveObject::g_pInstance = NULL;

////////////////////////////////////////////////////////////
// CFilterGraphTableItem

class ATL_NO_VTABLE CFilterGraphTableItem :
	public CComObjectRootEx<CComMultiThreadModelNoCS>,
	public CComCoClass<CFilterGraphTableItem, &__uuidof(FilterGraphTableItem)>,
	public IProvideClassInfo2Impl<&__uuidof(FilterGraphTableItem), &IID_NULL>,
	public IDispatchImpl<IFilterGraphTableItem>,
	public CFilterGraphTableBase
{
public:
	enum { IDR = IDR_FILTERGRAPHTABLEITEM };

//DECLARE_REGISTRY_RESOURCEID(IDR)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CFilterGraphTableItem)
	COM_INTERFACE_ENTRY(IFilterGraphTableItem)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(IProvideClassInfo2)
	COM_INTERFACE_ENTRY(IProvideClassInfo)
	COM_INTERFACE_ENTRY_IID(__uuidof(FilterGraphTableItem), CFilterGraphTableItem)
END_COM_MAP()

public:

private:
	mutable CRoCriticalSection m_DataCriticalSection;
	CComPtr<IFilterGraph2> m_pFilterGraph;
	CObjectPtr<CActiveObject> m_pActiveObject;
	ULONGLONG m_nTime;

public:
// CFilterGraphTableItem
	static HRESULT WINAPI UpdateRegistry(BOOL bRegister)
	{
		_Z2(atlTraceRegistrar, 2, _T("bRegister %d\n"), bRegister);
		_ATLTRY
		{
			UpdateRegistryFromResource<CFilterGraphTableItem>(bRegister);
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
	CFilterGraphTableItem() :
		m_nTime(0)
	{
		_Z4_THIS();
	}
	~CFilterGraphTableItem()
	{
		_Z4_THIS();
	}
	HRESULT FinalConstruct()
	{
		return S_OK;
	}
	VOID FinalRelease()
	{
		if(m_pActiveObject)
		{
			m_pActiveObject->Remove(this);
			m_pActiveObject.Release();
		}
	}
	CComPtr<IFilterGraph2> GetFilterGraph() const
	{
		CRoCriticalSectionLock DataLock(m_DataCriticalSection);
		return m_pFilterGraph;
	}
	BOOL IsFilterGraphAvailable() const
	{
		CRoCriticalSectionLock DataLock(m_DataCriticalSection);
		return m_pFilterGraph != NULL;
	}
	BOOL SetFilterGraph(IFilterGraph2* pFilterGraph)
	{
		CRoCriticalSectionLock DataLock(m_DataCriticalSection);
		if(m_pFilterGraph == pFilterGraph)
			return FALSE;
		if(m_pFilterGraph)
			_ATLTRY
			{
				_A(m_pActiveObject);
				if(m_pActiveObject)
					m_pActiveObject->Remove(this);
			}
			_ATLCATCHALL()
			{
				_Z_EXCEPTION();
			}
		if(pFilterGraph)
		{
			m_pFilterGraph = pFilterGraph;
			_ATLTRY
			{
				if(!m_pActiveObject)
					m_pActiveObject = CActiveObject::GetInstance();
				m_pActiveObject->Add(this);
			}
			_ATLCATCHALL()
			{
				_Z_EXCEPTION();
				m_pFilterGraph.Release();
				_ATLRETHROW;
			}
		} else
			m_pFilterGraph.Release();
		m_nTime = CMsAccurateFileTime::GetTime();
		return TRUE;
	}

// IFilterGraphTableItem
	STDMETHOD(get_FilterGraph)(IUnknown** ppFilterGraphUnknown)
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		_ATLTRY
		{
			__D(ppFilterGraphUnknown, E_POINTER);
			CRoCriticalSectionLock DataLock(m_DataCriticalSection);
			*ppFilterGraphUnknown = CComPtr<IFilterGraph2>(m_pFilterGraph).Detach();
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
	STDMETHOD(put_FilterGraph)(IUnknown* pFilterGraphUnknown)
	{
		_Z4(atlTraceCOM, 4, _T("pFilterGraphUnknown 0x%p\n"), pFilterGraphUnknown);
		_ATLTRY
		{
			const CComQIPtr<IFilterGraph2> pFilterGraph = pFilterGraphUnknown;
			__D(pFilterGraph || !pFilterGraphUnknown, E_INVALIDARG);
			if(!SetFilterGraph(pFilterGraph))
				return S_FALSE;
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
	STDMETHOD(get_Time)(DATE* pfTime)
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		_ATLTRY
		{
			__D(pfTime, E_POINTER);
			DATE fTime = 0;
			CRoCriticalSectionLock DataLock(m_DataCriticalSection);
			if(m_nTime)
			{
				SYSTEMTIME Time;
				_W(FileTimeToSystemTime(&reinterpret_cast<const FILETIME&>(m_nTime), &Time));
				_W(SystemTimeToVariantTime(&Time, &fTime));
			}
			*pfTime = fTime;
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
};

OBJECT_ENTRY_AUTO(__uuidof(FilterGraphTableItem), CFilterGraphTableItem)

////////////////////////////////////////////////////////////
// CFilterGraphTable

class ATL_NO_VTABLE CFilterGraphTable :
	public CComObjectRootEx<CComMultiThreadModelNoCS>,
	public CComCoClass<CFilterGraphTable, &__uuidof(FilterGraphTable)>,
	public IProvideClassInfo2Impl<&__uuidof(FilterGraphTable), &IID_NULL>,
	public IDispatchImpl<IFilterGraphTable>,
	public CFilterGraphTableBase
{
public:
	enum { IDR = IDR_FILTERGRAPHTABLE };

//DECLARE_REGISTRY_RESOURCEID(IDR)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CFilterGraphTable)
	COM_INTERFACE_ENTRY(IFilterGraphTable)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(IProvideClassInfo2)
	COM_INTERFACE_ENTRY(IProvideClassInfo)
END_COM_MAP()

public:

	////////////////////////////////////////////////////////
	// CItem

	class CItem
	{
	public:
		DWORD m_nProcessIdentifier;
		UINT64 m_nInstance;
		ULONGLONG m_nTime;
		CComPtr<IFilterGraph2> m_pFilterGraph;

	public:
	// CItem
		CComVariantArray GetAsVariant() const
		{
			SYSTEMTIME Time;
			_W(FileTimeToSystemTime(&reinterpret_cast<const FILETIME&>(m_nTime), &Time));
			DATE fTime;
			_W(SystemTimeToVariantTime(&Time, &fTime));
			CComVariantArray vValue;
			vValue.FromElements(4, 
				CComVariant((LONG) m_nProcessIdentifier),
				CComVariant((LONGLONG) m_nInstance),
				CComVariant((IUnknown*) m_pFilterGraph),
				CComVariant(fTime, VT_DATE),
				0);
			return vValue;
		}
	};

	////////////////////////////////////////////////////////
	// CItemArray

	class CItemArray :
		public CRoArrayT<CItem>
	{
	public:
	// CItemArray
	};

private:
	mutable CRoCriticalSection m_DataCriticalSection;
	CItemArray m_ItemArray;

public:
// CFilterGraphTable
	static HRESULT WINAPI UpdateRegistry(BOOL bRegister)
	{
		_Z2(atlTraceRegistrar, 2, _T("bRegister %d\n"), bRegister);
		_ATLTRY
		{
			UpdateRegistryFromResource<CFilterGraphTable>(bRegister);
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
	CFilterGraphTable()
	{
		_Z4_THIS();
	}
	~CFilterGraphTable()
	{
		_Z4_THIS();
	}
	HRESULT FinalConstruct()
	{
		_ATLTRY
		{
			Initialize();
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
	VOID FinalRelease()
	{
	}
	VOID Initialize()
	{
		CRoCriticalSectionLock DataLock(m_DataCriticalSection);
		_ATLTRY
		{
			CActiveObjectFileMapping FileMapping;
			if(FileMapping.Open())
			{
				CRoArrayT<CLSID> ClassIdentifierArray;
				HEADER* pHeader = FileMapping;
				pHeader->Lock();
				_ATLTRY
				{
					ClassIdentifierArray.SetCount(0, (INT) pHeader->nItemCount);
					for(UINT32 nItemIndex = 0; nItemIndex < pHeader->nItemCount; nItemIndex++)
					{
						const ITEM& Item = pHeader->pItems[nItemIndex];
						if(Item.nFlags & ITEMFLAG_ACTIVE)
							ClassIdentifierArray.Add(Item.ActiveObjectClassIdentifier);
					}
				}
				_ATLCATCHALL()
				{
					pHeader->Unlock();
					_ATLRETHROW;
				}
				pHeader->Unlock();
				for(auto&& ClassIdentifier: ClassIdentifierArray)
				{
					CComPtr<IUnknown> pUnknown;
					const HRESULT nResult = GetActiveObject(ClassIdentifier, NULL, &pUnknown);
					if(FAILED(nResult))
						continue;
					_A(pUnknown);
					_ATLTRY
					{
						const CComQIPtr<IFilterGraphTableActiveObject> pFilterGraphTableActiveObject = pUnknown;
						__D(pFilterGraphTableActiveObject, E_NOINTERFACE);
						LONG nProcessIdentifier;
						CComVariantArray vFilterGraphs;
						__C(pFilterGraphTableActiveObject->GetFilterGraphs(&nProcessIdentifier, &vFilterGraphs));
						_Z4(atlTraceGeneral, 4, _T("nProcessIdentifier %d, vFilterGraphs.vt 0x%X\n"), nProcessIdentifier, vFilterGraphs.vt);
						if(vFilterGraphs.vt > VT_NULL)
						{
							CRoArrayT<CComVariantArray> Array;
							vFilterGraphs.ToElementArray(Array);
							for(auto&& Item: Array)
							{
								CRoArrayT<CComVariantArray> Array;
								Item.ToElementArray(Array);
								__D(Array.GetCount() >= 4, E_UNNAMED);
								CItem Item;
								Item.m_nProcessIdentifier = (DWORD) Array[0].GetAsType(VT_I4).lVal;
								Item.m_nInstance = (UINT64) Array[1].GetAsType(VT_I8).llVal;
								const DATE fTime = Array[3].GetAsType(VT_DATE).date;
								_A(fTime > 0);
								SYSTEMTIME Time;
								_W(VariantTimeToSystemTime(fTime, &Time));
								_W(SystemTimeToFileTime(&Time, &reinterpret_cast<FILETIME&>(Item.m_nTime)));
								Item.m_pFilterGraph = CComQIPtr<IFilterGraph2>(Array[2].GetAsType(VT_UNKNOWN).punkVal);
								m_ItemArray.Add(Item);
							}
						}
					}
					_ATLCATCHALL()
					{
						_Z_EXCEPTION();
					}
				}
			}
		}
		_ATLCATCHALL()
		{
			_Z_EXCEPTION();
		}
	}
	SIZE_T GetItems(CItemArray& ItemArray) const
	{
		_A(ItemArray.IsEmpty());
		CRoCriticalSectionLock DataLock(m_DataCriticalSection);
		ItemArray.Append(m_ItemArray);
		return ItemArray.GetCount();
	}

// IFilterGraphTable
	STDMETHOD(get__NewEnum)(IUnknown** ppEnum)
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		_ATLTRY
		{
			__D(ppEnum, E_POINTER);
			CRoCriticalSectionLock DataLock(m_DataCriticalSection);
			CRoArrayT<CComVariant> VariantArray;
			VariantArray.SetCount(0, (INT) m_ItemArray.GetCount());
			for(auto&& Item: m_ItemArray)
				VariantArray.Add(Item.GetAsVariant());
			typedef CComEnum<IEnumVARIANT, &__uuidof(IEnumVARIANT), VARIANT, _Copy<VARIANT> > CEnumVariant;
			CObjectPtr<CEnumVariant> pEnumVariant;
			__C(pEnumVariant.Construct()->Init(VariantArray.GetData(), VariantArray.GetData() + VariantArray.GetCount(), (IFilterGraphTable*) this, AtlFlagCopy));
			*ppEnum = pEnumVariant.Detach();
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
	STDMETHOD(get_Item)(VARIANT vIndex, VARIANT* pvItem)
	{
		_Z4(atlTraceCOM, 4, _T("vIndex.vt 0x%x, .lVal %d\n"), vIndex.vt, vIndex.lVal);
		_ATLTRY
		{
			__D(pvItem, E_POINTER);
			VariantInit(pvItem);
			CRoCriticalSectionLock DataLock(m_DataCriticalSection);
			CComVariant vLongIndex;
			__C(vLongIndex.ChangeType(VT_I4, &vIndex));
			__D((SIZE_T) vLongIndex.lVal < m_ItemArray.GetCount(), E_INVALIDARG);
			_V(m_ItemArray[(SIZE_T) vLongIndex.lVal].GetAsVariant().Detach(pvItem));
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
	STDMETHOD(get_Count)(LONG* pnCount)
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		_ATLTRY
		{
			__D(pnCount, E_POINTER);
			CRoCriticalSectionLock DataLock(m_DataCriticalSection);
			*pnCount = (LONG) m_ItemArray.GetCount();
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
};

OBJECT_ENTRY_AUTO(__uuidof(FilterGraphTable), CFilterGraphTable)
