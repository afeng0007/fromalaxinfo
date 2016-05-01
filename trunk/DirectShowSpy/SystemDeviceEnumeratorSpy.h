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

#include <mmdeviceapi.h>
#include "rodshow.h"
#include "romf.h"
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
	public ICreateDevEnum,
	public IMMDeviceActivator
{
	typedef CSystemDeviceEnumeratorSpyT<T, t_pSystemDeviceEnumeratorClassIdentifier> CSystemDeviceEnumeratorSpy;

public:
	//enum { IDR = IDR_SYSTEMDEVICEENUMERATORSPY };

//DECLARE_REGISTRY_RESOURCEID(IDR)

DECLARE_PROTECT_FINAL_CONSTRUCT()

DECLARE_GET_CONTROLLING_UNKNOWN()

DECLARE_QI_TRACE(CSystemDeviceEnumeratorSpyT)

BEGIN_COM_MAP(CSystemDeviceEnumeratorSpyT)
	COM_INTERFACE_ENTRY(ISystemDeviceEnumeratorSpy)
	COM_INTERFACE_ENTRY(ICreateDevEnum)
	COM_INTERFACE_ENTRY(IMMDeviceActivator)
	COM_INTERFACE_ENTRY_FUNC(CLSID_SystemDeviceEnum, 0, QuerySystemDeviceEnumInterface)
	COM_INTERFACE_ENTRY_AGGREGATE_BLIND(m_pSystemDeviceEnum.p)
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
			_Z4_THIS();
		}
		~CPropertyBag()
		{
			_Z4_THIS();
		}
		VOID Initialize(IPropertyBag* pPropertyBag)
		{
			_A(pPropertyBag);
			_A(!m_pPropertyBag);
			m_pPropertyBag = pPropertyBag;
			m_pPropertyBag2 = CComQIPtr<IPropertyBag2>(pPropertyBag);
		}

	// IPropertyBag
		STDMETHOD(Read)(LPCOLESTR pszPropertyName, VARIANT* pvValue, IErrorLog* pErrorLog) override
		{
			_Z4(atlTraceCOM, 4, _T("pszPropertyName %s\n"), CString(pszPropertyName));
			_ATLTRY
			{
				HRESULT nResult = m_pPropertyBag->Read(pszPropertyName, pvValue, pErrorLog);
				#pragma region DevicePath Fix for Skype 6.0.0.126
				//if(nResult == HRESULT_FROM_WIN32(ERROR_FILE_NOT_FOUND) && pszPropertyName && _wcsicmp(pszPropertyName, L"DevicePath") == 0 && pvValue)
				//{
				//	_Z4(atlTraceGeneral, 4, _T("nResult 0x%08X\n"), nResult);
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
					_Z4(atlTraceGeneral, 4, _T("nResult 0x%08X, pvValue->vt 0x%X, %s\n"), nResult, pvValue->vt, sValue);
				} else
				{
					_Z4(atlTraceGeneral, 4, _T("nResult 0x%08X\n"), nResult);
				}
				return nResult;
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(Write)(LPCOLESTR pszPropertyName, VARIANT* pvValue) override
		{
			_Z4(atlTraceCOM, 4, _T("pszPropertyName %s, pvValue->vt 0x%X\n"), CString(pszPropertyName), pvValue->vt);
			_ATLTRY
			{
				const HRESULT nResult = m_pPropertyBag->Write(pszPropertyName, pvValue);
				_Z4(atlTraceGeneral, 4, _T("nResult 0x%08X\n"), nResult);
				return nResult;
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}

	// IPropertyBag2
		STDMETHOD(Read)(ULONG cProperties, PROPBAG2 *pPropBag, IErrorLog *pErrLog, VARIANT *pvarValue, HRESULT *phrError) override
		{
			_Z4(atlTraceCOM, 4, _T("...\n"));
			_ATLTRY
			{
				const HRESULT nResult = m_pPropertyBag2->Read(cProperties, pPropBag, pErrLog, pvarValue, phrError);
				_Z4(atlTraceGeneral, 4, _T("nResult 0x%08X\n"), nResult);
				return nResult;
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(Write)(ULONG cProperties, PROPBAG2 *pPropBag, VARIANT *pvarValue) override
		{
			_Z4(atlTraceCOM, 4, _T("...\n"));
			_ATLTRY
			{
				const HRESULT nResult = m_pPropertyBag2->Write(cProperties, pPropBag, pvarValue);
				_Z4(atlTraceGeneral, 4, _T("nResult 0x%08X\n"), nResult);
				return nResult;
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(CountProperties)(ULONG *pcProperties) override
		{
			_Z4(atlTraceCOM, 4, _T("...\n"));
			_ATLTRY
			{
				const HRESULT nResult = m_pPropertyBag2->CountProperties(pcProperties);
				_Z4(atlTraceGeneral, 4, _T("nResult 0x%08X\n"), nResult);
				return nResult;
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(GetPropertyInfo)(ULONG iProperty, ULONG cProperties, PROPBAG2* pPropBag, ULONG *pcProperties) override
		{
			_Z4(atlTraceCOM, 4, _T("...\n"));
			_ATLTRY
			{
				const HRESULT nResult = m_pPropertyBag2->GetPropertyInfo(iProperty, cProperties, pPropBag, pcProperties);
				_Z4(atlTraceGeneral, 4, _T("nResult 0x%08X\n"), nResult);
				return nResult;
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(LoadObject)(LPCOLESTR pstrName, DWORD dwHint, IUnknown *pUnkObject, IErrorLog *pErrLog) override
		{
			_Z4(atlTraceCOM, 4, _T("...\n"));
			_ATLTRY
			{
				const HRESULT nResult = m_pPropertyBag2->LoadObject(pstrName, dwHint, pUnkObject, pErrLog);
				_Z4(atlTraceGeneral, 4, _T("nResult 0x%08X\n"), nResult);
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
		CObjectPtr<T> m_pT;
		CComPtr<IMoniker> m_pMoniker;

	public:
	// CMoniker
		CMoniker()
		{
			_Z4_THIS();
		}
		~CMoniker()
		{
			_Z4_THIS();
		}
		VOID Initialize(T* pT, IMoniker* pMoniker)
		{
			_A(pT && pMoniker);
			_A(!m_pT && !m_pMoniker);
			m_pT = pT;
			m_pMoniker = pMoniker;
		}

	// IPersist
		STDMETHOD(GetClassID)(CLSID* pClassIdentifier) override
		{
			_Z4(atlTraceCOM, 4, _T("...\n"));
			return m_pMoniker->GetClassID(pClassIdentifier);
		}

    // IPersistStream
		STDMETHOD(IsDirty)() override
		{
			_Z4(atlTraceCOM, 4, _T("...\n"));
			return m_pMoniker->IsDirty();
		}
		STDMETHOD(Load)(IStream* pStream) override
		{
			_Z4(atlTraceCOM, 4, _T("...\n"));
			return m_pMoniker->Load(pStream);
		}
		STDMETHOD(Save)(IStream* pStream, BOOL bClearDirty) override
		{
			_Z4(atlTraceCOM, 4, _T("...\n"));
			return m_pMoniker->Save(pStream, bClearDirty);
		}
		STDMETHOD(GetSizeMax)(ULARGE_INTEGER* pnMaximalSize) override
		{
			_Z4(atlTraceCOM, 4, _T("...\n"));
			return m_pMoniker->GetSizeMax(pnMaximalSize);
		}

	// IMoniker
		STDMETHOD(BindToObject)(IBindCtx* pBindCtx, IMoniker* pLeftMoniker, REFIID InterfaceIdentifier, VOID** ppvObject) override
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
		STDMETHOD(BindToStorage)(IBindCtx* pBindCtx, IMoniker* pLeftMoniker, REFIID InterfaceIdentifier, VOID** ppvObject) override
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
		STDMETHOD(Reduce)(IBindCtx* pBindCtx, DWORD nDepth, IMoniker** ppLeftMoniker, IMoniker** ppReducedMoniker) override
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
		STDMETHOD(ComposeWith)(IMoniker* pRightMoniker, BOOL bOnlyIfNotGeneric, IMoniker** ppCompositeMoniker) override
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
		STDMETHOD(Enum)(BOOL bForward, IEnumMoniker** ppEnumMoniker) override
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
		STDMETHOD(IsEqual)(IMoniker* pMoniker) override
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
		STDMETHOD(Hash)(DWORD* pnHashValue) override
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
		STDMETHOD(IsRunning)(IBindCtx* pBindCtx, IMoniker* pLeftMoniker, IMoniker* pNewlyRunning) override
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
		STDMETHOD(GetTimeOfLastChange)(IBindCtx* pBindCtx, IMoniker* pLeftMoniker, FILETIME* pFileTime) override
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
		STDMETHOD(Inverse)(IMoniker** ppMoniker) override
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
		STDMETHOD(CommonPrefixWith)(IMoniker* pMoniker, IMoniker** ppPrefixMoniker) override
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
		STDMETHOD(RelativePathTo)(IMoniker* pMoniker, IMoniker** ppRelativeMoniker) override
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
		STDMETHOD(GetDisplayName)(IBindCtx* pBindCtx, IMoniker* pLeftMoniker, LPOLESTR* ppszDisplayName) override
		{
			_Z4(atlTraceCOM, 4, _T("pBindCtx 0x%p, pLeftMoniker 0x%p\n"), pBindCtx, pLeftMoniker);
			_ATLTRY
			{
				const HRESULT nResult = m_pMoniker->GetDisplayName(pBindCtx, pLeftMoniker, ppszDisplayName);
				if(SUCCEEDED(nResult))
					_Z4(atlTraceGeneral, 4, _T("nResult 0x%08X, *ppszDisplayName %s\n"), nResult, CString(*ppszDisplayName));
				else
					_Z4(atlTraceGeneral, 4, _T("nResult 0x%08X\n"), nResult);
				return nResult;
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(ParseDisplayName)(IBindCtx* pBindCtx, IMoniker* pLeftMoniker, LPOLESTR pszDisplayName, ULONG* pnEatenLength, IMoniker** ppOutputMoniker) override
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
		STDMETHOD(IsSystemMoniker)(DWORD* pnSystemMonikerType) override
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
		CObjectPtr<T> m_pT;
		CComPtr<IEnumMoniker> m_pEnumMoniker;

	public:
	// CEnumMoniker
		CEnumMoniker()
		{
			_Z4_THIS();
		}
		~CEnumMoniker()
		{
			_Z4_THIS();
		}
		VOID Initialize(T* pT, IEnumMoniker* pEnumMoniker)
		{
			_A(pT && pEnumMoniker);
			_A(!m_pT && !m_pEnumMoniker);
			// NOTE: T is references to make sure that m_hDevEnumModule is not unloaded too early (esp. after ~CSystemDeviceEnumeratorSpyT 
			//       but before ~CEnumMoniker)
			m_pT = pT;
			m_pEnumMoniker = pEnumMoniker;
		}

	// IEnumMoniker
		STDMETHOD(Next)(ULONG nElementCount, IMoniker** ppMoniker, ULONG* pnFetchElementCount) override
		{
			_Z4(atlTraceCOM, 4, _T("this 0x%p, nElementCount %d\n"), this, nElementCount);
			_ATLTRY
			{
				const HRESULT nNextResult = m_pEnumMoniker->Next(nElementCount, ppMoniker, pnFetchElementCount);
				CRoArrayT<CString> Array;
				if(pnFetchElementCount)
					Array.Add(AtlFormatString(_T("*pnFetchElementCount %d"), *pnFetchElementCount));
				_Z4(atlTraceGeneral, 4, _T("nNextResult 0x%08X, %s\n"), nNextResult, _StringHelper::Join(Array, _T(", ")));
				if(SUCCEEDED(nNextResult))
				{
					ULONG nFetchedElementCount = nElementCount;
					if(nNextResult != S_OK && pnFetchElementCount)
						nFetchedElementCount = *pnFetchElementCount;
					for(ULONG nIndex = 0; nIndex < nFetchedElementCount; nIndex++)
					{
						CComPtr<IMoniker>& pMoniker = reinterpret_cast<CComPtr<IMoniker>&>(ppMoniker[nIndex]);
						if(!pMoniker)
							break;
						CObjectPtr<CMoniker> pMonikerWrapper;
						pMonikerWrapper.Construct()->Initialize(m_pT, pMoniker);
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
		STDMETHOD(Skip)(ULONG nElementCount) override
		{
			_Z4(atlTraceCOM, 4, _T("this 0x%p, nElementCount %d\n"), this, nElementCount);
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
		STDMETHOD(Reset)() override
		{
			_Z4(atlTraceCOM, 4, _T("this 0x%p\n"), this);
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
		STDMETHOD(Clone)(IEnumMoniker** ppEnumMoniker) override
		{
			_Z4(atlTraceCOM, 4, _T("this 0x%p\n"), this);
			_ATLTRY
			{
				__C(m_pEnumMoniker->Clone(ppEnumMoniker));
				CComPtr<IEnumMoniker>& pEnumMoniker = reinterpret_cast<CComPtr<IEnumMoniker>&>(*ppEnumMoniker);
				_A(pEnumMoniker);
				CObjectPtr<CEnumMoniker> pEnumMonikerWrapper;
				pEnumMonikerWrapper.Construct()->Initialize(m_pT, pEnumMoniker);
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
	CComPtr<IMMDeviceActivator> m_pMmDeviceActivator;

	HRESULT QuerySystemDeviceEnumInterface(REFIID InterfaceIdentifier, VOID** ppvObject)
	{
		_A(InterfaceIdentifier == CLSID_SystemDeviceEnum);
		_A(ppvObject);
		*ppvObject = CComPtr<IUnknown>(m_pSystemDeviceEnum).Detach();
		return S_OK;
	}
	static HRESULT WINAPI QuerySystemDeviceEnumInterface(VOID* pvInstance, REFIID InterfaceIdentifier, VOID** ppvObject, DWORD_PTR)
	{
		return ((CSystemDeviceEnumeratorSpy*) pvInstance)->QuerySystemDeviceEnumInterface(InterfaceIdentifier, ppvObject);
	}

public:
// CSystemDeviceEnumeratorSpyT
	static LPCTSTR GetOriginalLibraryName()
	{
		return _T("devenum.dll");
	}
	static CString GetObjectFriendlyName()
	{
		return _StringHelper::GetLine(T::IDR, 2);
	}
	static HRESULT WINAPI UpdateRegistry(BOOL bRegister)
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
	CSystemDeviceEnumeratorSpyT() :
		m_hDevEnumModule(NULL)
	{
		_Z4_THIS();
	}
	~CSystemDeviceEnumeratorSpyT()
	{
		_Z4_THIS();
	}
	HRESULT FinalConstruct()
	{
		_ATLTRY
		{
			TCHAR pszPath[MAX_PATH] = { 0 };
			_W(GetModuleFileName(NULL, pszPath, DIM(pszPath)));
			_Z4(atlTraceRefcount, 4, _T("pszPath \"%s\", this 0x%p, m_dwRef %d\n"), pszPath, this, m_dwRef);
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
				const CComQIPtr<IMMDeviceActivator> pMmDeviceActivator = pUnknown;
				__D(pCreateDevEnum, E_NOINTERFACE);
				m_pSystemDeviceEnum = pSystemDeviceEnum;
				m_pCreateDevEnum = pCreateDevEnum;
				m_pMmDeviceActivator = pMmDeviceActivator;
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
	VOID FinalRelease()
	{
		_Z5(atlTraceRefcount, 5, _T("m_dwRef 0x%X\n"), m_dwRef);
		m_pSystemDeviceEnum.Release();
		m_pCreateDevEnum.Release();
		m_pMmDeviceActivator.Release();
		if(m_hDevEnumModule)
		{
			CoFreeLibrary(m_hDevEnumModule);
			m_hDevEnumModule = NULL;
		}
	}
	static CString FormatDeviceCategory(const GUID& DeviceCategory)
	{
		static const struct 
		{ 
			const GUID* pIdentifier; 
			LPCSTR pszName; 
		} g_pMap[] = 
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
		for(auto&& Item: g_pMap)
			if(*Item.pIdentifier == DeviceCategory)
				return CString(Item.pszName);
		return CString(_PersistHelper::StringFromIdentifier(DeviceCategory));
	}

// ISystemDeviceEnumeratorSpy

// ICreateDevEnum
	STDMETHOD(CreateClassEnumerator)(REFCLSID DeviceCategory, IEnumMoniker** ppEnumMoniker, DWORD nFlags) override
	{
		_Z4(atlTraceCOM, 4, _T("this 0x%p, DeviceCategory %s, nFlags 0x%X\n"), this, FormatDeviceCategory(DeviceCategory), nFlags);
		_ATLTRY
		{
			const HRESULT nCreateClassEnumeratorResult = m_pCreateDevEnum->CreateClassEnumerator(DeviceCategory, ppEnumMoniker, nFlags);
			__C(nCreateClassEnumeratorResult);
			_D(nCreateClassEnumeratorResult == S_OK, nCreateClassEnumeratorResult);
			CComPtr<IEnumMoniker>& pEnumMoniker = reinterpret_cast<CComPtr<IEnumMoniker>&>(*ppEnumMoniker);
			if(pEnumMoniker)
			{
				#pragma region Trace Moniker
				__C(pEnumMoniker->Reset());
				for(; ; )
				{
					CComPtr<IMoniker> pMoniker;
					ULONG nElementCount;
					if(pEnumMoniker->Next(1, &pMoniker, &nElementCount) != S_OK)
						break;
					_Z4(atlTraceGeneral, 4, _T("pMoniker %ls\n"), _FilterGraphHelper::GetMonikerDisplayName(pMoniker));
					CComPtr<IBindCtx> pBindCtx;
					__C(CreateBindCtx(0, &pBindCtx));
					CComPtr<IPropertyBag> pPropertyBag;
					__C(pMoniker->BindToStorage(pBindCtx, NULL, __uuidof(IPropertyBag), (VOID**) &pPropertyBag));
					const CStringW sFriendlyName = _FilterGraphHelper::ReadPropertyBagString(pPropertyBag, OLESTR("FriendlyName"));
					const CStringW sDescription = _FilterGraphHelper::ReadPropertyBagString(pPropertyBag, OLESTR("Description"));
					const CStringW sDevicePath = _FilterGraphHelper::ReadPropertyBagString(pPropertyBag, OLESTR("DevicePath"));
					_Z4(atlTraceCOM, 4, _T("sFriendlyName \"%ls\", sDescription \"%ls\", sDevicePath \"%ls\"\n"), sFriendlyName, sDescription, sDevicePath);
				}
				__C(pEnumMoniker->Reset());
				#pragma endregion
				CObjectPtr<CEnumMoniker> pEnumMonikerWrapper;
				pEnumMonikerWrapper.Construct()->Initialize(static_cast<T*>(this), pEnumMoniker);
				pEnumMoniker = pEnumMonikerWrapper;
			}
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}

// IMMDeviceActivator
    STDMETHOD(Activate)(REFIID InterfaceIdentifier, IMMDevice* pMmDevice, PROPVARIANT* pvActivationParameters, VOID** ppObject) override
	{
		_Z4(atlTraceCOM, 4, _T("this 0x%p, InterfaceIdentifier %s, pMmDevice 0x%p\n"), this, _FilterGraphHelper::StringFromIdentifier(InterfaceIdentifier), pMmDevice);
		_ATLTRY
		{
			if(pvActivationParameters)
				_Z4(atlTraceCOM, 4, _T("*pvActivationParameters %s\n"), reinterpret_cast<MF::CPropVariant&>(*pvActivationParameters).Format());
			__D(m_pMmDeviceActivator, E_NOINTERFACE);
			const HRESULT nActivateResult = m_pMmDeviceActivator->Activate(InterfaceIdentifier, pMmDevice, pvActivationParameters, ppObject);
			_Z4_DSHRESULT(nActivateResult);
			return nActivateResult;
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
