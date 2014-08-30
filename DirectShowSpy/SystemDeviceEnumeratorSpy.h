////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2014
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

#include "rodshow.h"
#include "Module_i.h"
#include "Common.h"

////////////////////////////////////////////////////////////
// CSystemDeviceEnumeratorSpyT

// NOTE: Original CLSID_SystemDeviceEnum does not support aggregation

template <typename T, const CLSID* t_pSystemDeviceEnumeratorClassIdentifier>
class ATL_NO_VTABLE CSystemDeviceEnumeratorSpyT :
	public CComObjectRootEx<CComMultiThreadModel>,
	//public CComCoClass<CSystemDeviceEnumeratorSpyT, &CLSID_SystemDeviceEnumeratorSpy>,
	public CTransparentCoClassT<T, t_pSystemDeviceEnumeratorClassIdentifier>,
	public IDispatchImpl<ISystemDeviceEnumeratorSpy>,
	public ICreateDevEnum
{
	typedef CSystemDeviceEnumeratorSpyT<T, t_pSystemDeviceEnumeratorClassIdentifier> CSystemDeviceEnumeratorSpy;

public:
	//enum { IDR = IDR_SYSTEMDEVICEENUMERATORSPY };

//DECLARE_REGISTRY_RESOURCEID(IDR)

DECLARE_PROTECT_FINAL_CONSTRUCT()

DECLARE_GET_CONTROLLING_UNKNOWN()

DECLARE_QI_TRACE(CSystemDeviceEnumeratorSpy)

BEGIN_COM_MAP(CSystemDeviceEnumeratorSpy)
	COM_INTERFACE_ENTRY(ISystemDeviceEnumeratorSpy)
	COM_INTERFACE_ENTRY(ICreateDevEnum)
	COM_INTERFACE_ENTRY_FUNC(CLSID_SystemDeviceEnum, 0, QuerySystemDeviceEnumInterface)
	//COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

public:

	////////////////////////////////////////////////////////
	// CPropertyBag

	class ATL_NO_VTABLE CPropertyBag :
		public CComObjectRootEx<CComMultiThreadModelNoCS>,
		public IPropertyBag,
		public IPropertyBag2
	{
	public:

	DECLARE_QI_TRACE(CPropertyBag)

	BEGIN_COM_MAP(CPropertyBag)
		COM_INTERFACE_ENTRY(IPropertyBag2)
		COM_INTERFACE_ENTRY(IPropertyBag)
	END_COM_MAP()

	private:
		CComPtr<IPropertyBag> m_pPropertyBag;
		CComPtr<IPropertyBag2> m_pPropertyBag2;

	public:
	// CPropertyBag
		CPropertyBag()
		{
			_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
		}
		~CPropertyBag()
		{
			_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
		}
		VOID Initialize(IPropertyBag* pPropertyBag)
		{
			_A(pPropertyBag);
			_A(!m_pPropertyBag);
			m_pPropertyBag = pPropertyBag;
			m_pPropertyBag2 = CComQIPtr<IPropertyBag2>(pPropertyBag);
		}

	// IPropertyBag
		STDMETHOD(Read)(LPCOLESTR pszPropertyName, VARIANT* pvValue, IErrorLog* pErrorLog) throw()
		{
			_Z4(atlTraceCOM, 4, _T("pszPropertyName %s\n"), CString(pszPropertyName));
			_ATLTRY
			{
				HRESULT nResult = m_pPropertyBag->Read(pszPropertyName, pvValue, pErrorLog);
				#pragma region DevicePath Fix for Skype 6.0.0.126
				//if(nResult == HRESULT_FROM_WIN32(ERROR_FILE_NOT_FOUND) && pszPropertyName && _wcsicmp(pszPropertyName, L"DevicePath") == 0 && pvValue)
				//{
				//	_Z4(atlTraceGeneral, 4, _T("nResult 0x%08x\n"), nResult);
				//	CComVariant vValue = L"\\\\?\\fake";
				//	_V(vValue.Detach(pvValue));
				//	nResult = S_OK;
				//}
				#pragma endregion 
				if(SUCCEEDED(nResult))
				{
					CString sValue = _T("???");
					CComVariant vStringValue;
					if(SUCCEEDED(vStringValue.ChangeType(VT_BSTR, pvValue)))
						sValue = CString(vStringValue.bstrVal);
					_Z4(atlTraceGeneral, 4, _T("nResult 0x%08x, pvValue->vt 0x%x, %s\n"), nResult, pvValue->vt, sValue);
				} else
				{
					_Z4(atlTraceGeneral, 4, _T("nResult 0x%08x\n"), nResult);
				}
				return nResult;
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(Write)(LPCOLESTR pszPropertyName, VARIANT* pvValue) throw()
		{
			_Z4(atlTraceCOM, 4, _T("pszPropertyName %s, pvValue->vt 0x%x\n"), CString(pszPropertyName), pvValue->vt);
			_ATLTRY
			{
				const HRESULT nResult = m_pPropertyBag->Write(pszPropertyName, pvValue);
				_Z4(atlTraceGeneral, 4, _T("nResult 0x%08x\n"), nResult);
				return nResult;
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}

	// IPropertyBag2
		STDMETHOD(Read)(ULONG cProperties, PROPBAG2 *pPropBag, IErrorLog *pErrLog, VARIANT *pvarValue, HRESULT *phrError) throw()
		{
			_Z4(atlTraceCOM, 4, _T("...\n"));
			_ATLTRY
			{
				const HRESULT nResult = m_pPropertyBag2->Read(cProperties, pPropBag, pErrLog, pvarValue, phrError);
				_Z4(atlTraceGeneral, 4, _T("nResult 0x%08x\n"), nResult);
				return nResult;
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(Write)(ULONG cProperties, PROPBAG2 *pPropBag, VARIANT *pvarValue) throw()
		{
			_Z4(atlTraceCOM, 4, _T("...\n"));
			_ATLTRY
			{
				const HRESULT nResult = m_pPropertyBag2->Write(cProperties, pPropBag, pvarValue);
				_Z4(atlTraceGeneral, 4, _T("nResult 0x%08x\n"), nResult);
				return nResult;
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(CountProperties)(ULONG *pcProperties) throw()
		{
			_Z4(atlTraceCOM, 4, _T("...\n"));
			_ATLTRY
			{
				const HRESULT nResult = m_pPropertyBag2->CountProperties(pcProperties);
				_Z4(atlTraceGeneral, 4, _T("nResult 0x%08x\n"), nResult);
				return nResult;
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(GetPropertyInfo)(ULONG iProperty, ULONG cProperties, PROPBAG2* pPropBag, ULONG *pcProperties) throw()
		{
			_Z4(atlTraceCOM, 4, _T("...\n"));
			_ATLTRY
			{
				const HRESULT nResult = m_pPropertyBag2->GetPropertyInfo(iProperty, cProperties, pPropBag, pcProperties);
				_Z4(atlTraceGeneral, 4, _T("nResult 0x%08x\n"), nResult);
				return nResult;
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(LoadObject)(LPCOLESTR pstrName, DWORD dwHint, IUnknown *pUnkObject, IErrorLog *pErrLog) throw()
		{
			_Z4(atlTraceCOM, 4, _T("...\n"));
			_ATLTRY
			{
				const HRESULT nResult = m_pPropertyBag2->LoadObject(pstrName, dwHint, pUnkObject, pErrLog);
				_Z4(atlTraceGeneral, 4, _T("nResult 0x%08x\n"), nResult);
				return nResult;
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
	};

	////////////////////////////////////////////////////////
	// CMoniker

	class ATL_NO_VTABLE CMoniker :
		public CComObjectRootEx<CComMultiThreadModelNoCS>,
		public IMoniker
	{
	public:

	DECLARE_QI_TRACE(CMoniker)

	BEGIN_COM_MAP(CMoniker)
		COM_INTERFACE_ENTRY(IMoniker)
		COM_INTERFACE_ENTRY(IPersistStream)
		COM_INTERFACE_ENTRY(IPersist)
	END_COM_MAP()

	private:
		CComPtr<IMoniker> m_pMoniker;

	public:
	// CMoniker
		CMoniker()
		{
			_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
		}
		~CMoniker()
		{
			_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
		}
		VOID Initialize(IMoniker* pMoniker)
		{
			_A(pMoniker);
			_A(!m_pMoniker);
			m_pMoniker = pMoniker;
		}

	// IPersist
		STDMETHOD(GetClassID)(CLSID* pClassIdentifier) throw()
		{
			_Z4(atlTraceCOM, 4, _T("...\n"));
			return m_pMoniker->GetClassID(pClassIdentifier);
		}

    // IPersistStream
		STDMETHOD(IsDirty)() throw()
		{
			_Z4(atlTraceCOM, 4, _T("...\n"));
			return m_pMoniker->IsDirty();
		}
		STDMETHOD(Load)(IStream* pStream) throw()
		{
			_Z4(atlTraceCOM, 4, _T("...\n"));
			return m_pMoniker->Load(pStream);
		}
		STDMETHOD(Save)(IStream* pStream, BOOL bClearDirty) throw()
		{
			_Z4(atlTraceCOM, 4, _T("...\n"));
			return m_pMoniker->Save(pStream, bClearDirty);
		}
		STDMETHOD(GetSizeMax)(ULARGE_INTEGER* pnMaximalSize) throw()
		{
			_Z4(atlTraceCOM, 4, _T("...\n"));
			return m_pMoniker->GetSizeMax(pnMaximalSize);
		}

	// IMoniker
		STDMETHOD(BindToObject)(IBindCtx* pBindCtx, IMoniker* pLeftMoniker, REFIID InterfaceIdentifier, VOID** ppvObject) throw()
		{
			_Z4(atlTraceCOM, 4, _T("pBindCtx 0x%p, pLeftMoniker 0x%p, InterfaceIdentifier %ls\n"), pBindCtx, pLeftMoniker, _PersistHelper::StringFromInterfaceIdentifier(InterfaceIdentifier));
			_ATLTRY
			{
				return m_pMoniker->BindToObject(pBindCtx, pLeftMoniker, InterfaceIdentifier, ppvObject);
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(BindToStorage)(IBindCtx* pBindCtx, IMoniker* pLeftMoniker, REFIID InterfaceIdentifier, VOID** ppvObject) throw()
		{
			_Z4(atlTraceCOM, 4, _T("pBindCtx 0x%p, pLeftMoniker 0x%p, InterfaceIdentifier %ls\n"), pBindCtx, pLeftMoniker, _PersistHelper::StringFromInterfaceIdentifier(InterfaceIdentifier));
			_ATLTRY
			{
				const HRESULT nResult = m_pMoniker->BindToStorage(pBindCtx, pLeftMoniker, InterfaceIdentifier, ppvObject);
				if(SUCCEEDED(nResult) && *ppvObject)
				{
					if(InterfaceIdentifier == __uuidof(IPropertyBag) || InterfaceIdentifier == __uuidof(IPropertyBag2))
					{
						CComPtr<IPropertyBag>& pPropertyBag = reinterpret_cast<CComPtr<IPropertyBag>&>(*ppvObject);
						CObjectPtr<CPropertyBag> pPropertyBagWrapper;
						pPropertyBagWrapper.Construct()->Initialize(pPropertyBag);
						pPropertyBag = pPropertyBagWrapper;
					}
				}
				return nResult;
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(Reduce)(IBindCtx* pBindCtx, DWORD nDepth, IMoniker** ppLeftMoniker, IMoniker** ppReducedMoniker) throw()
		{
			_Z4(atlTraceCOM, 4, _T("...\n"));
			_ATLTRY
			{
				return m_pMoniker->Reduce(pBindCtx, nDepth, ppLeftMoniker, ppReducedMoniker);
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(ComposeWith)(IMoniker* pRightMoniker, BOOL bOnlyIfNotGeneric, IMoniker** ppCompositeMoniker) throw()
		{
			_Z4(atlTraceCOM, 4, _T("...\n"));
			_ATLTRY
			{
				return m_pMoniker->ComposeWith(pRightMoniker, bOnlyIfNotGeneric, ppCompositeMoniker);
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(Enum)(BOOL bForward, IEnumMoniker** ppEnumMoniker) throw()
		{
			_Z4(atlTraceCOM, 4, _T("bForward %d\n"), bForward);
			_ATLTRY
			{
				return m_pMoniker->Enum(bForward, ppEnumMoniker);
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(IsEqual)(IMoniker* pMoniker) throw()
		{
			_Z4(atlTraceCOM, 4, _T("...\n"));
			_ATLTRY
			{
				return m_pMoniker->IsEqual(pMoniker);
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(Hash)(DWORD* pnHashValue) throw()
		{
			_Z4(atlTraceCOM, 4, _T("...\n"));
			_ATLTRY
			{
				return m_pMoniker->Hash(pnHashValue);
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(IsRunning)(IBindCtx* pBindCtx, IMoniker* pLeftMoniker, IMoniker* pNewlyRunning) throw()
		{
			_Z4(atlTraceCOM, 4, _T("...\n"));
			_ATLTRY
			{
				return m_pMoniker->IsRunning(pBindCtx, pLeftMoniker, pNewlyRunning);
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(GetTimeOfLastChange)(IBindCtx* pBindCtx, IMoniker* pLeftMoniker, FILETIME* pFileTime) throw()
		{
			_Z4(atlTraceCOM, 4, _T("...\n"));
			_ATLTRY
			{
				return m_pMoniker->GetTimeOfLastChange(pBindCtx, pLeftMoniker, pFileTime);
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(Inverse)(IMoniker** ppMoniker) throw()
		{
			_Z4(atlTraceCOM, 4, _T("...\n"));
			_ATLTRY
			{
				return m_pMoniker->Inverse(ppMoniker);
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(CommonPrefixWith)(IMoniker* pMoniker, IMoniker** ppPrefixMoniker) throw()
		{
			_Z4(atlTraceCOM, 4, _T("...\n"));
			_ATLTRY
			{
				return m_pMoniker->CommonPrefixWith(pMoniker, ppPrefixMoniker);
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(RelativePathTo)(IMoniker* pMoniker, IMoniker** ppRelativeMoniker) throw()
		{
			_Z4(atlTraceCOM, 4, _T("...\n"));
			_ATLTRY
			{
				return m_pMoniker->RelativePathTo(pMoniker, ppRelativeMoniker);
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(GetDisplayName)(IBindCtx* pBindCtx, IMoniker* pLeftMoniker, LPOLESTR* ppszDisplayName) throw()
		{
			_Z4(atlTraceCOM, 4, _T("pBindCtx 0x%p, pLeftMoniker 0x%p\n"), pBindCtx, pLeftMoniker);
			_ATLTRY
			{
				const HRESULT nResult = m_pMoniker->GetDisplayName(pBindCtx, pLeftMoniker, ppszDisplayName);
				if(SUCCEEDED(nResult))
					_Z4(atlTraceGeneral, 4, _T("nResult 0x%08x, *ppszDisplayName %s\n"), nResult, CString(*ppszDisplayName));
				else
					_Z4(atlTraceGeneral, 4, _T("nResult 0x%08x\n"), nResult);
				return nResult;
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(ParseDisplayName)(IBindCtx* pBindCtx, IMoniker* pLeftMoniker, LPOLESTR pszDisplayName, ULONG* pnEatenLength, IMoniker** ppOutputMoniker) throw()
		{
			_Z4(atlTraceCOM, 4, _T("pBindCtx 0x%p, pLeftMoniker 0x%p, pszDisplayName %s\n"), pBindCtx, pLeftMoniker, CString(pszDisplayName));
			_ATLTRY
			{
				return m_pMoniker->ParseDisplayName(pBindCtx, pLeftMoniker, pszDisplayName, pnEatenLength, ppOutputMoniker);
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(IsSystemMoniker)(DWORD* pnSystemMonikerType) throw()
		{
			_Z4(atlTraceCOM, 4, _T("...\n"));
			_ATLTRY
			{
				return m_pMoniker->IsSystemMoniker(pnSystemMonikerType);
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
	};

	////////////////////////////////////////////////////////
	// CEnumMoniker

	class ATL_NO_VTABLE CEnumMoniker :
		public CComObjectRootEx<CComMultiThreadModelNoCS>,
		public IEnumMoniker
	{
	public:

	DECLARE_QI_TRACE(CEnumMoniker)

	BEGIN_COM_MAP(CEnumMoniker)
		COM_INTERFACE_ENTRY(IEnumMoniker)
	END_COM_MAP()

	private:
		CComPtr<IEnumMoniker> m_pEnumMoniker;

	public:
	// CEnumMoniker
		CEnumMoniker()
		{
			_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
		}
		~CEnumMoniker()
		{
			_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
		}
		VOID Initialize(IEnumMoniker* pEnumMoniker)
		{
			_A(pEnumMoniker);
			_A(!m_pEnumMoniker);
			m_pEnumMoniker = pEnumMoniker;
		}

	// IEnumMoniker
		STDMETHOD(Next)(ULONG nElementCount, IMoniker** ppMoniker, ULONG* pnFetchedElementCount) throw()
		{
			_Z4(atlTraceCOM, 4, _T("nElementCount %d\n"), nElementCount);
			_ATLTRY
			{
				const HRESULT nNextResult = m_pEnumMoniker->Next(nElementCount, ppMoniker, pnFetchedElementCount);
				_Z4(atlTraceGeneral, 4, _T("nNextResult 0x%08x, *pnFetchedElementCount %s\n"), nNextResult, pnFetchedElementCount ? (LPCTSTR) AtlFormatString(_T("%d"), *pnFetchedElementCount) : _T("(null)"));
				if(SUCCEEDED(nNextResult))
				{
					ULONG nFetchedElementCount = nElementCount;
					if(nNextResult != S_OK && pnFetchedElementCount)
						nFetchedElementCount = *pnFetchedElementCount;
					for(SIZE_T nIndex = 0; nIndex < nFetchedElementCount; nIndex++)
					{
						CComPtr<IMoniker>& pMoniker = reinterpret_cast<CComPtr<IMoniker>&>(ppMoniker[nIndex]);
						if(!pMoniker)
							break;
						CObjectPtr<CMoniker> pMonikerWrapper;
						pMonikerWrapper.Construct()->Initialize(pMoniker);
						pMoniker = pMonikerWrapper;
					}
				}
				return nNextResult;
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(Skip)(ULONG nElementCount) throw()
		{
			_Z4(atlTraceCOM, 4, _T("nElementCount %d\n"), nElementCount);
			_ATLTRY
			{
				return m_pEnumMoniker->Skip(nElementCount);
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(Reset)() throw()
		{
			_Z4(atlTraceCOM, 4, _T("...\n"));
			_ATLTRY
			{
				return m_pEnumMoniker->Reset();
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(Clone)(IEnumMoniker** ppEnumMoniker) throw()
		{
			_Z4(atlTraceCOM, 4, _T("...\n"));
			_ATLTRY
			{
				__C(m_pEnumMoniker->Clone(ppEnumMoniker));
				CComPtr<IEnumMoniker>& pEnumMoniker = reinterpret_cast<CComPtr<IEnumMoniker>&>(*ppEnumMoniker);
				_A(pEnumMoniker);
				CObjectPtr<CEnumMoniker> pEnumMonikerWrapper;
				pEnumMonikerWrapper.Construct()->Initialize(pEnumMoniker);
				pEnumMoniker = pEnumMonikerWrapper;
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
	};

private:
	HINSTANCE m_hDevEnumModule;
	CComPtr<IUnknown> m_pSystemDeviceEnum;
	CComPtr<ICreateDevEnum> m_pCreateDevEnum;

	HRESULT QuerySystemDeviceEnumInterface(REFIID InterfaceIdentifier, VOID** ppvObject)
	{
		_A(InterfaceIdentifier == CLSID_SystemDeviceEnum);
		_A(ppvObject);
		*ppvObject = CComPtr<IUnknown>(m_pSystemDeviceEnum).Detach();
		return S_OK;
	}
	static HRESULT WINAPI QuerySystemDeviceEnumInterface(VOID* pvInstance, REFIID InterfaceIdentifier, VOID** ppvObject, DWORD)
	{
		return ((CSystemDeviceEnumeratorSpy*) pvInstance)->QuerySystemDeviceEnumInterface(InterfaceIdentifier, ppvObject);
	}

public:
// CSystemDeviceEnumeratorSpyT
	static LPCTSTR GetOriginalLibraryName() throw()
	{
		return _T("devenum.dll");
	}
	static CString GetObjectFriendlyName()
	{
		return _StringHelper::GetLine(T::IDR, 2);
	}
	static HRESULT WINAPI UpdateRegistry(BOOL bRegister) throw()
	{
		_Z2(atlTraceRegistrar, 2, _T("bRegister %d\n"), bRegister);
		_ATLTRY
		{
			TreatAsUpdateRegistryFromResource<T>(*t_pSystemDeviceEnumeratorClassIdentifier, bRegister);
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
	CSystemDeviceEnumeratorSpyT() throw() :
		m_hDevEnumModule(NULL)
	{
		_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
	}
	~CSystemDeviceEnumeratorSpyT() throw()
	{
		_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
	}
	HRESULT FinalConstruct() throw()
	{
		_ATLTRY
		{
			TCHAR pszPath[MAX_PATH] = { 0 };
			_W(GetModuleFileName(NULL, pszPath, DIM(pszPath)));
			_Z4(atlTraceRefcount, 4, _T("pszPath \"%s\", this 0x%08x, m_dwRef %d\n"), pszPath, this, m_dwRef);
			const HINSTANCE hModule = CoLoadLibrary(const_cast<LPOLESTR>((LPCOLESTR) CT2COLE(GetOriginalLibraryName())), TRUE);
			_ATLTRY
			{
				typedef HRESULT (WINAPI *DLLGETCLASSOBJECT)(REFCLSID, REFIID, VOID**);
				DLLGETCLASSOBJECT DllGetClassObject = (DLLGETCLASSOBJECT) GetProcAddress(hModule, "DllGetClassObject");
				__E(DllGetClassObject);
				CComPtr<IClassFactory> pClassFactory;
				__C(DllGetClassObject(*t_pSystemDeviceEnumeratorClassIdentifier, __uuidof(IClassFactory), (VOID**) &pClassFactory));
				_A(pClassFactory);
				CComPtr<IUnknown> pUnknown;
				__C(pClassFactory->CreateInstance(NULL, __uuidof(IUnknown), (VOID**) &pUnknown));
				__D(pUnknown, E_NOINTERFACE);
				CComPtr<IUnknown> pSystemDeviceEnum;
				__C(pUnknown->QueryInterface(CLSID_SystemDeviceEnum, (VOID**) &pSystemDeviceEnum));
				const CComQIPtr<ICreateDevEnum> pCreateDevEnum = pUnknown;
				__D(pCreateDevEnum, E_NOINTERFACE);
				m_pSystemDeviceEnum = pSystemDeviceEnum;
				m_pCreateDevEnum = pCreateDevEnum;
			}
			_ATLCATCHALL()
			{
				CoFreeLibrary(hModule);
				_ATLRETHROW;
			}
			_A(!m_hDevEnumModule);
			m_hDevEnumModule = hModule;
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
	VOID FinalRelease() throw()
	{
		_Z5(atlTraceRefcount, 5, _T("m_dwRef 0x%x\n"), m_dwRef);
		m_pSystemDeviceEnum = NULL;
		m_pCreateDevEnum = NULL;
		if(m_hDevEnumModule)
		{
			CoFreeLibrary(m_hDevEnumModule);
			m_hDevEnumModule = NULL;
		}
	}
	static CString FormatDeviceCategory(const GUID& DeviceCategory)
	{
		static const struct { const GUID* pIdentifier; LPCSTR pszName; } g_pMap[] = 
		{
			#define A(x) { &x, #x },
			A(CLSID_VideoInputDeviceCategory)
			A(CLSID_LegacyAmFilterCategory)
			A(CLSID_VideoCompressorCategory)
			A(CLSID_AudioCompressorCategory)
			A(CLSID_AudioInputDeviceCategory)
			A(CLSID_AudioRendererCategory)
			A(CLSID_MidiRendererCategory)
			A(CLSID_TransmitCategory)
			A(CLSID_DeviceControlCategory)
			A(CLSID_ActiveMovieCategories)
			A(CLSID_DVDHWDecodersCategory)
			A(CLSID_MediaEncoderCategory)
			A(CLSID_MediaMultiplexerCategory)
			#undef A
		};
		for(SIZE_T nIndex = 0; nIndex < DIM(g_pMap); nIndex++)
			if(*g_pMap[nIndex].pIdentifier == DeviceCategory)
				return CString(g_pMap[nIndex].pszName);
		return CString(_PersistHelper::StringFromIdentifier(DeviceCategory));
	}

// ISystemDeviceEnumeratorSpy

// ICreateDevEnum
	STDMETHOD(CreateClassEnumerator)(REFCLSID DeviceCategory, IEnumMoniker** ppEnumMoniker, DWORD nFlags) throw()
	{
		_Z4(atlTraceCOM, 4, _T("DeviceCategory %s, nFlags 0x%x\n"), FormatDeviceCategory(DeviceCategory), nFlags);
		_ATLTRY
		{
			__C(m_pCreateDevEnum->CreateClassEnumerator(DeviceCategory, ppEnumMoniker, nFlags));
			CComPtr<IEnumMoniker>& pEnumMoniker = reinterpret_cast<CComPtr<IEnumMoniker>&>(*ppEnumMoniker);
			if(pEnumMoniker)
			{
				#pragma region Trace Monikers
				__C(pEnumMoniker->Reset());
				CComPtr<IMoniker> pMoniker;
				while(pEnumMoniker->Next(1, &pMoniker, NULL) == S_OK)
				{
					_Z4(atlTraceCOM, 4, _T("pMoniker %ls\n"), _FilterGraphHelper::GetMonikerDisplayName(pMoniker));
					CComPtr<IBindCtx> pBindCtx;
					__C(CreateBindCtx(0, &pBindCtx));
					CComPtr<IPropertyBag> pPropertyBag;
					__C(pMoniker->BindToStorage(pBindCtx, NULL, __uuidof(IPropertyBag), (VOID**) &pPropertyBag));
					const CStringW sFriendlyName = _FilterGraphHelper::ReadPropertyBagString(pPropertyBag, OLESTR("FriendlyName"));
					const CStringW sDescription = _FilterGraphHelper::ReadPropertyBagString(pPropertyBag, OLESTR("Description"));
					const CStringW sDevicePath = _FilterGraphHelper::ReadPropertyBagString(pPropertyBag, OLESTR("DevicePath"));
					_Z4(atlTraceCOM, 4, _T("sFriendlyName \"%ls\", sDescription \"%ls\", sDevicePath \"%ls\"\n"), sFriendlyName, sDescription, sDevicePath);
					pMoniker.Release();
				}
				__C(pEnumMoniker->Reset());
				#pragma endregion
				CObjectPtr<CEnumMoniker> pEnumMonikerWrapper;
				pEnumMonikerWrapper.Construct()->Initialize(pEnumMoniker);
				pEnumMoniker = pEnumMonikerWrapper;
			}
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
};

////////////////////////////////////////////////////////////
// CSystemDeviceEnumeratorSpy

class ATL_NO_VTABLE CSystemDeviceEnumeratorSpy :
	public CSystemDeviceEnumeratorSpyT<CSystemDeviceEnumeratorSpy, &CLSID_SystemDeviceEnum>,
	public CComCoClass<CSystemDeviceEnumeratorSpy, &CLSID_SystemDeviceEnumeratorSpy>
{
public:
	enum { IDR = IDR_SYSTEMDEVICEENUMERATORSPY };

private:
	static LPCTSTR g_pszClassName;

public:
	//typedef CBlackListAwareComCreatorT<CComObjectCached<CSystemDeviceEnumeratorSpy>, CSystemDeviceEnumeratorSpy, &g_pszClassName> _ClassFactoryCreatorClass; // DECLARE_CLASSFACTORY override
	typedef CComCreator2<CBlackListAwareComCreatorT<CComObject<CSystemDeviceEnumeratorSpy>, CSystemDeviceEnumeratorSpy, &g_pszClassName>, CBlackListAwareComCreatorT<CComAggObject<CSystemDeviceEnumeratorSpy>, CSystemDeviceEnumeratorSpy, &g_pszClassName> > _CreatorClass; // DECLARE_AGGREGATABLE override

public:
// CSystemDeviceEnumeratorSpy
};

__declspec(selectany) LPCTSTR CSystemDeviceEnumeratorSpy::g_pszClassName = _T("CSystemDeviceEnumeratorSpy");

OBJECT_ENTRY_AUTO(__uuidof(SystemDeviceEnumeratorSpy), CSystemDeviceEnumeratorSpy)
