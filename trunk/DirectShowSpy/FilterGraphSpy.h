////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2011
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#pragma once

#include "rodshow.h"
#include "DirectShowSpy_i.h"
#include "Common.h"

////////////////////////////////////////////////////////////
// CSpyT

LPCTSTR g_pszAddRemoveHookName = _T("Add/Remove Hooks");
LPCTSTR g_pszConnectHookName = _T("Connect Hooks");
LPCTSTR g_pszStateControlHookName = _T("State Control Hooks");

template <typename T, const CLSID* t_pFilterGraphClassIdentifier>
class ATL_NO_VTABLE CSpyT :
	public CComObjectRootEx<CComMultiThreadModel>,
	//public CComCoClass<CSpyT, &CLSID_Spy>,
	public CTransparentCoClassT<T, t_pFilterGraphClassIdentifier>,
	public IDispatchImpl<ISpy>,
	public IFilterGraph2,
	public IDispatchImpl<IMediaControl, &__uuidof(IMediaControl), &__uuidof(Quartz::__QuartzTypeLib)>,
	public IMediaEventSink,
	public IDispatchImpl<IMediaEventEx, &__uuidof(IMediaEventEx), &__uuidof(Quartz::__QuartzTypeLib)>,
	public IObjectWithSite,
	public CHookHostT<T, IFilterGraphAddRemoveHook, &g_pszAddRemoveHookName>,
	public CHookHostT<T, IFilterGraphConnectHook, &g_pszConnectHookName>,
	public CHookHostT<T, IFilterGraphStateControlHook, &g_pszStateControlHookName>
{
	typedef CSpyT<T, t_pFilterGraphClassIdentifier> CSpy;
	typedef CHookHostT<T, IFilterGraphAddRemoveHook, &g_pszAddRemoveHookName> CFilterGraphAddRemoveHookHost;
	typedef CHookHostT<T, IFilterGraphConnectHook, &g_pszConnectHookName> CFilterGraphConnectHookHost;
	typedef CHookHostT<T, IFilterGraphStateControlHook, &g_pszStateControlHookName> CFilterGraphStateControlHookHost;

public:
	//enum { IDR = IDR_FILTERGRAPHSPY };

//DECLARE_CLASSFACTORY(...

//DECLARE_AGGREGATABLE(...

//DECLARE_REGISTRY_RESOURCEID(IDR)

DECLARE_PROTECT_FINAL_CONSTRUCT()

DECLARE_GET_CONTROLLING_UNKNOWN()

DECLARE_QI_TRACE(CSpy)

BEGIN_COM_MAP(CSpy)
	COM_INTERFACE_ENTRY(ISpy)
	COM_INTERFACE_ENTRY_FUNC(__uuidof(IFilterGraph3), 0, QueryFilterGraph3Interface)
	COM_INTERFACE_ENTRY(IFilterGraph2)
	COM_INTERFACE_ENTRY(IGraphBuilder)
	COM_INTERFACE_ENTRY(IFilterGraph)
	COM_INTERFACE_ENTRY(IMediaControl)
	COM_INTERFACE_ENTRY(IMediaEventSink)
	COM_INTERFACE_ENTRY(IMediaEventEx)
	COM_INTERFACE_ENTRY(IMediaEvent)
	COM_INTERFACE_ENTRY_FUNC(__uuidof(IObjectWithSite), 0, QueryObjectWithSiteInterface)
	COM_INTERFACE_ENTRY_AGGREGATE_BLIND(m_pInnerUnknown)
	//COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

public:

	////////////////////////////////////////////////////////
	// CAmGraphBuilderCallback

	class ATL_NO_VTABLE CAmGraphBuilderCallback :
		public CComObjectRootEx<CComMultiThreadModelNoCS>,
		public IAMGraphBuilderCallback
	{
	public:

	BEGIN_COM_MAP(CAmGraphBuilderCallback)
		COM_INTERFACE_ENTRY(IAMGraphBuilderCallback)
	END_COM_MAP()

	private:
		mutable CRoCriticalSection m_DataCriticalSection;
		T* m_pSpy;

		CObjectPtr<T> GetSpy() const throw()
		{
			CRoCriticalSectionLock DataLock(m_DataCriticalSection);
			return m_pSpy;
		}

	public:
	// CAmGraphBuilderCallback
		CAmGraphBuilderCallback() throw() :
			m_pSpy(NULL)
		{
			_Z5(atlTraceRefcount, 5, _T("this 0x%p\n"), this);
		}
		~CAmGraphBuilderCallback() throw()
		{
			_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
		}
		VOID Initialize(T* pSpy) throw()
		{
			_A(pSpy);
			CRoCriticalSectionLock DataLock(m_DataCriticalSection);
			_Z4(atlTraceRefcount, 4, _T("this 0x%p, pSpy 0x%p\n"), this, pSpy);
			_A(!m_pSpy);
			m_pSpy = pSpy;
		}
		VOID Terminate() throw()
		{
			CRoCriticalSectionLock DataLock(m_DataCriticalSection);
			m_pSpy = NULL;
		}
		BOOL SetGraphBuilder(const CComQIPtr<IObjectWithSite> pObjectWithSite) throw()
		{
			if(!pObjectWithSite)
				return FALSE;
			const HRESULT nSetSiteResult = pObjectWithSite->SetSite(this);
			if(SUCCEEDED(nSetSiteResult))
				return TRUE;
			_Z4(atlTraceRefcount, 4, _T("nSetSiteResult 0x%08x\n"), nSetSiteResult);
			return FALSE;
		}
		BOOL SetGraphBuilder(IUnknown* pObjectWithSiteUnknown) throw()
		{
			return SetGraphBuilder(CComQIPtr<IObjectWithSite>(pObjectWithSiteUnknown));
		}

	// IAMGraphBuilderCallback
        STDMETHOD(SelectedFilter)(IMoniker* pMoniker) throw()
		{
			_Z4(atlTraceCOM, 4, _T("this 0x%p, pMoniker %ls\n"), this, _FilterGraphHelper::GetMonikerDisplayName(pMoniker));
			_ATLTRY
			{
				_A(pMoniker);
				const CObjectPtr<T> pSpy = GetSpy();
				HRESULT nSelectedFilterResult;
				if(pSpy)
					if(pSpy->SelectedFilter(pMoniker, nSelectedFilterResult))
					{
						_Z4(atlTraceGeneral, 4, _T("this 0x%p, nSelectedFilterResult 0x%08x\n"), this, nSelectedFilterResult);
						return nSelectedFilterResult;
					}
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(CreatedFilter)(IBaseFilter* pBaseFilter) throw()
		{
			_Z4(atlTraceCOM, 4, _T("this 0x%p, pBaseFilter 0x%p %ls \"%ls\"\n"), this, pBaseFilter, _FilterGraphHelper::GetFilterClassIdentifierString(pBaseFilter), _FilterGraphHelper::GetFilterName(pBaseFilter));
			_ATLTRY
			{
				_A(pBaseFilter);
				const CObjectPtr<T> pSpy = GetSpy();
				HRESULT nCreatedFilterResult;
				if(pSpy)
					if(pSpy->CreatedFilter(pBaseFilter, nCreatedFilterResult))
					{
						_Z4(atlTraceGeneral, 4, _T("this 0x%p, nCreatedFilterResult 0x%08x\n"), this, nCreatedFilterResult);
						return nCreatedFilterResult;
					}
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
	};

private:
	BOOL m_bIsAggregated;
	HINSTANCE m_hQuartzModule;
	CComPtr<IUnknown> m_pInnerUnknown;
	CComPtr<IFilterGraph2> m_pInnerFilterGraph2;
	CComPtr<IFilterGraph3> m_pInnerFilterGraph3;
	CComPtr<IMediaControl> m_pInnerMediaControl;
	CComPtr<IMediaEventSink> m_pInnerMediaEventSink;
	CComPtr<IMediaEventEx> m_pInnerMediaEventEx;
	_FilterGraphHelper::CRotRunningFilterGraph m_RunningFilterGraph;
	CComPtr<IUnknown> m_pTemporaryUnknown;
	CObjectPtr<CAmGraphBuilderCallback> m_pPrivateAmGraphBuilderCallback;
	mutable CRoCriticalSection m_DataCriticalSection;
	CComPtr<IUnknown> m_pSite;

	BOOL IsAggregated() const throw()
	{
		return (ULONG) m_dwRef >= 0x00001000;
	}
	VOID ReleaseTemporaryUnknown() throw()
	{
		CComPtr<IUnknown> pUnknown;
		Lock();
		SwapMemory(&m_pTemporaryUnknown.p, &pUnknown.p);
		Unlock();
	}
	VOID SetRunningFilterGraph()
	{
		if(m_RunningFilterGraph.GetCookie())
			return;
		_Z4(atlTraceRefcount, 4, _T("this 0x%p, m_dwRef %d\n"), this, m_dwRef);
		static CConstIntegerRegistryValue g_nEnableRotMonikerItemNameSuffix(_T("Enable ROT Moniker Item Name Suffix")); // 0 Default (Enabled), 1 Disabled, 2 Enabled
		if(g_nEnableRotMonikerItemNameSuffix != 1)
		{
			TCHAR pszPath[MAX_PATH] = { 0 };
			_W(GetModuleFileName(NULL, pszPath, DIM(pszPath)));
			LPCTSTR pszName = FindFileName(pszPath);
			SYSTEMTIME Time;
			GetLocalTime(&Time);
			CString sItemName = AtlFormatString(_T("%s; process: %s, time: %02d-%02d-%02d"), m_RunningFilterGraph.GetDefaultMonikerItemName(GetControllingUnknown()), pszName, Time.wHour, Time.wMinute, Time.wSecond);
			m_RunningFilterGraph.SetFilterGraph(GetControllingUnknown(), CStringW(sItemName));
		} else
			m_RunningFilterGraph.SetFilterGraph(GetControllingUnknown());
		_Z4(atlTraceRefcount, 4, _T("this 0x%p, m_dwRef %d\n"), this, m_dwRef);
		Release();
	}
	VOID ResetRunningFilterGraph() throw()
	{
		if(!m_RunningFilterGraph.GetCookie())
			return;
		AddRef();
		_Z4(atlTraceRefcount, 4, _T("this 0x%p, m_dwRef 0x%x\n"), this, m_dwRef);
		m_RunningFilterGraph.SetFilterGraph(NULL);
		_Z4(atlTraceRefcount, 4, _T("this 0x%p, m_dwRef 0x%x\n"), this, m_dwRef);
	}
	HRESULT InternalQueryFilterGraph3Interface(REFIID InterfaceIdentifier, VOID** ppvObject) throw()
	{
		_A(InterfaceIdentifier == __uuidof(IFilterGraph3));
		_A(ppvObject);
		if(!m_pInnerFilterGraph3)
		{
			*ppvObject = NULL;
			return E_NOINTERFACE;
		}
		T* pT = static_cast<T*>(this);
		*ppvObject = (IFilterGraph3*) pT;
		pT->InternalAddRef();
		return S_OK;
	}
	static HRESULT WINAPI QueryFilterGraph3Interface(VOID* pvThis, REFIID InterfaceIdentifier, VOID** ppvObject, DWORD_PTR) throw()
	{
		return ((CSpy*) pvThis)->InternalQueryFilterGraph3Interface(InterfaceIdentifier, ppvObject);
	}
	HRESULT HookMediaControlAddSourceFilter(BSTR sFileName, IBaseFilter** ppBaseFilter, BOOL* pbDefault) throw()
	{
		_A(pbDefault);
		HOOK_PROLOG(CFilterGraphAddRemoveHookHost)
			OnAddSourceFilter(pT, sFileName, NULL, reinterpret_cast<IUnknown**>(ppBaseFilter), &bDefault);
			*pbDefault = bDefault;
		HOOK_EPILOG()
		return S_OK;
	}

public:
// CSpyT
	static LPCTSTR GetOriginalLibraryName() throw()
	{
		return _T("quartz.dll");
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
			TreatAsUpdateRegistryFromResource<T>(*t_pFilterGraphClassIdentifier, bRegister);
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
	CSpyT() throw()	:
		m_hQuartzModule(NULL)
	{
		_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
	}
	~CSpyT() throw()
	{
		_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
	}
	HRESULT FinalConstruct() throw()
	{
		m_bIsAggregated = IsAggregated();
		if(!m_bIsAggregated)
			InternalAddRef();
		_ATLTRY
		{
			TCHAR pszPath[MAX_PATH] = { 0 };
			_W(GetModuleFileName(NULL, pszPath, DIM(pszPath)));
			_Z4(atlTraceRefcount, 4, _T("pszPath \"%s\", this 0x%p, m_dwRef %d, m_bIsAggregated %d\n"), pszPath, this, m_dwRef, m_bIsAggregated);
			const HINSTANCE hModule = CoLoadOriginalLibrary();
			_ATLTRY
			{
				_A(hModule);
				const CComPtr<IUnknown> pControllingUnknown = GetControllingUnknown();
				#pragma region Instantiation
				{
					{ const ULONG nAddRefCount = pControllingUnknown.p->AddRef(); const ULONG nReleaseCount = pControllingUnknown.p->Release(); _Z5(atlTraceRefcount, 5, _T("m_dwRef 0x%x, AddRef %d, Release %d\n"), m_dwRef, nAddRefCount, nReleaseCount); }
					const CComPtr<IUnknown> pUnknown = CoCreateOriginalInstance(hModule, pControllingUnknown);
					// NOTE: DirectShow FilterGraph is incorrectly implementing COM aggregation adding outer reference to interfaces queried from private IUnknown
					const CComQIPtr<IFilterGraph2> pFilterGraph2 = pUnknown;
					__D(pFilterGraph2, E_NOINTERFACE);
					pFilterGraph2.p->Release();
					const CComQIPtr<IFilterGraph3> pFilterGraph3 = pUnknown;
					if(pFilterGraph3)
						pFilterGraph3.p->Release();
					const CComQIPtr<IMediaControl> pMediaControl = pUnknown;
					__D(pMediaControl, E_NOINTERFACE);
					pMediaControl.p->Release();
					const CComQIPtr<IMediaEventSink> pMediaEventSink = pUnknown;
					__D(pMediaEventSink, E_NOINTERFACE);
					pMediaEventSink.p->Release();
					const CComQIPtr<IMediaEventEx> pMediaEventEx = pUnknown;
					__D(pMediaEventEx, E_NOINTERFACE);
					pMediaEventEx.p->Release();
					#pragma region ROT Registration
					{ const ULONG nAddRefCount = pControllingUnknown.p->AddRef(); const ULONG nReleaseCount = pControllingUnknown.p->Release(); _Z5(atlTraceRefcount, 5, _T("m_dwRef 0x%x, AddRef %d, Release %d\n"), m_dwRef, nAddRefCount, nReleaseCount); }
					SetRunningFilterGraph();
					{ const ULONG nAddRefCount = pControllingUnknown.p->AddRef(); const ULONG nReleaseCount = pControllingUnknown.p->Release(); _Z5(atlTraceRefcount, 5, _T("m_dwRef 0x%x, AddRef %d, Release %d\n"), m_dwRef, nAddRefCount, nReleaseCount); }
					#pragma endregion
					m_pInnerUnknown = pUnknown;
					m_pInnerFilterGraph2 = pFilterGraph2;
					m_pInnerFilterGraph3 = pFilterGraph3;
					m_pInnerMediaControl = pMediaControl;
					m_pInnerMediaEventSink = pMediaEventSink;
					m_pInnerMediaEventEx = pMediaEventEx;
				}
				#pragma endregion
				#pragma region Set Private IAMGraphBuilderCallback
				static CConstIntegerRegistryValue g_nSetPrivateCallback(_T("Set Private CSpyT IAMGraphBuilderCallback")); // 0 Default (Enabled), 1 Disabled, 2 Enabled
				const DWORD nSetPrivateCallback = g_nSetPrivateCallback;
				if(nSetPrivateCallback != 1)
				{
					CObjectPtr<CAmGraphBuilderCallback> pAmGraphBuilderCallback;
					pAmGraphBuilderCallback.Construct();
					pAmGraphBuilderCallback->Initialize(static_cast<T*>(this));
					// WARN: Private site only forwards IAMGraphBuilderCallback interface and indicates other as not implemented 
					//       even if the external site does provide such implementation
					if(pAmGraphBuilderCallback->SetGraphBuilder(pControllingUnknown))
						m_pPrivateAmGraphBuilderCallback = pAmGraphBuilderCallback;
					else
						pAmGraphBuilderCallback->Terminate();
				}
				#pragma endregion
				#pragma region Temporary Reference for Aggregated Instantiation
				if(m_bIsAggregated)
				{
					pControllingUnknown.p->AddRef();
					const ULONG nReferenceCount = pControllingUnknown.p->Release();
					if(nReferenceCount == 1)
						m_pTemporaryUnknown = pControllingUnknown;
				}
				#pragma endregion
			}
			_ATLCATCHALL()
			{
				CoFreeLibrary(hModule);
				_ATLRETHROW;
			}
#if defined(_DEBUG) && FALSE
			typedef HRESULT (WINAPI *DLLCANUNLOADNOW)();
			DLLCANUNLOADNOW DllCanUnloadNow = (DLLCANUNLOADNOW) GetProcAddress(hModule, "DllCanUnloadNow");
			__E(DllCanUnloadNow);
			const HRESULT nDllCanUnloadNowResult = DllCanUnloadNow();
			_Z4(atlTraceRefcount, 4, _T("nDllCanUnloadNowResult 0x%08x\n"), nDllCanUnloadNowResult); 
#endif // defined(_DEBUG)
			_A(!m_hQuartzModule);
			m_hQuartzModule = hModule;
			#pragma region Extra Reference
			// NOTE: This feature allows to leave an extra COM reference on the object to extend its lifetime and work around early destruction issues
			static CConstIntegerRegistryValue g_nAddExtraReference(_T("Add Extra CSpyT Reference")); // 0 Default (Disabled), 1 Not Aggregated Only, 2 Aggregated Only, 3 Both
			const DWORD nAddExtraReference = g_nAddExtraReference;
			if(!m_bIsAggregated)
			{
				if(nAddExtraReference & 1)
					InternalAddRef();
			} else
				if(nAddExtraReference & 2)
					GetControllingUnknown()->AddRef();
			#pragma endregion
		}
		_ATLCATCH(Exception)
		{
			if(!m_bIsAggregated)
				_W(InternalRelease() > 0);
			_C(Exception);
		}
		// NOTE: x64 build experiences a problem under COM Surrogate process that we're already being released to zero while still in this method
		if(!m_bIsAggregated)
			if(InternalRelease() <= 0)
				return E_UNEXPECTED;
		return S_OK;
	}
	VOID FinalRelease() throw()
	{
		_Z5(atlTraceRefcount, 5, _T("m_dwRef 0x%x\n"), m_dwRef);
		_A(!m_pTemporaryUnknown);
		const CComPtr<IUnknown> pControllingUnknown = GetControllingUnknown();
		#pragma region Reset Private IAMGraphBuilderCallback
		if(m_pPrivateAmGraphBuilderCallback)
		{
			m_pPrivateAmGraphBuilderCallback->Terminate();
			m_pPrivateAmGraphBuilderCallback = NULL;
		}
		#pragma endregion
		ResetRunningFilterGraph();
		#pragma region Release Secondary Inner Interfaces
		if(m_pInnerMediaEventEx)
		{
			pControllingUnknown.p->AddRef();
			m_pInnerMediaEventEx = NULL;
		}
		if(m_pInnerMediaEventSink)
		{
			pControllingUnknown.p->AddRef();
			m_pInnerMediaEventSink = NULL;
		}
		if(m_pInnerMediaControl)
		{
			pControllingUnknown.p->AddRef();
			m_pInnerMediaControl = NULL;
		}
		if(m_pInnerFilterGraph3)
		{
			pControllingUnknown.p->AddRef();
			m_pInnerFilterGraph3 = NULL;
		}
		if(m_pInnerFilterGraph2)
		{
			pControllingUnknown.p->AddRef();
			m_pInnerFilterGraph2 = NULL;
		}
		#pragma endregion
		#pragma region Release Primary Inner IUnknown
		_ATLTRY
		{
			m_pInnerUnknown = NULL;
		}
		_ATLCATCHALL()
		{
			_Z_EXCEPTION();
			// NOTE: For some unidentified reason Quartz's FilterGraph may crash during final release, to smooth the effect the exception is silently caught
			m_pInnerUnknown.p = NULL;
		}
		#pragma endregion
		#pragma region Release Quartz Library
		if(m_hQuartzModule)
		{
			CoFreeLibrary(m_hQuartzModule);
			m_hQuartzModule = NULL;
		}
		#pragma endregion
	}
	HRESULT QueryObjectWithSiteInterface(REFIID InterfaceIdentifier, LPVOID* ppvObject) throw()
	{
		_A(InterfaceIdentifier == __uuidof(IObjectWithSite));
		_A(ppvObject);
		if(m_pPrivateAmGraphBuilderCallback)
		{
			reinterpret_cast<CComPtr<IObjectWithSite>&>(*ppvObject) = static_cast<T*>(this);
			return S_OK;
		}
		_A(m_pInnerUnknown);
		return m_pInnerUnknown->QueryInterface(InterfaceIdentifier, ppvObject);
	}
	static HRESULT WINAPI QueryObjectWithSiteInterface(VOID* pvInstance, REFIID InterfaceIdentifier, LPVOID* ppvObject, DWORD_PTR) throw()
	{
		return ((CSpy*) pvInstance)->QueryObjectWithSiteInterface(InterfaceIdentifier, ppvObject);
	}
	CComPtr<IUnknown> GetSite() const throw()
	{
		CRoCriticalSectionLock DataLock(m_DataCriticalSection);
		return m_pSite;
	}
	BOOL SelectedFilter(IMoniker* pMoniker, HRESULT& nSelectedFilterResult)
	{
		const CComQIPtr<IAMGraphBuilderCallback> pAmGraphBuilderCallback = GetSite();
		if(pAmGraphBuilderCallback)
		{
			nSelectedFilterResult = pAmGraphBuilderCallback->SelectedFilter(pMoniker);
			return TRUE;
		}
		return FALSE;
	}
	BOOL CreatedFilter(IBaseFilter* pBaseFilter, HRESULT& nCreatedFilterResult)
	{
		const CComQIPtr<IAMGraphBuilderCallback> pAmGraphBuilderCallback = GetSite();
		if(pAmGraphBuilderCallback)
		{
			nCreatedFilterResult = pAmGraphBuilderCallback->CreatedFilter(pBaseFilter);
			return TRUE;
		}
		return FALSE;
	}
	static BOOL LookupEventCodeName(LONG nEventCode, LPCSTR& pszName) throw()
	{
		// NOTE: See Windows SDK evcode.h
		static const struct { LONG nEventCode; LPCSTR pszName; } g_pMap[] = 
		{
			#define A(x) { x, #x },
			A(EC_COMPLETE)
			A(EC_USERABORT)
			A(EC_ERRORABORT)
			A(EC_TIME)
			A(EC_REPAINT)
			A(EC_STREAM_ERROR_STOPPED)
			A(EC_STREAM_ERROR_STILLPLAYING)
			A(EC_ERROR_STILLPLAYING)
			A(EC_PALETTE_CHANGED)
			A(EC_VIDEO_SIZE_CHANGED)
			A(EC_QUALITY_CHANGE)
			A(EC_SHUTTING_DOWN)
			A(EC_CLOCK_CHANGED)
			A(EC_PAUSED)
			A(EC_OPENING_FILE)
			A(EC_BUFFERING_DATA)
			A(EC_FULLSCREEN_LOST)
			A(EC_ACTIVATE)
			A(EC_NEED_RESTART)
			A(EC_WINDOW_DESTROYED)
			A(EC_DISPLAY_CHANGED)
			A(EC_STARVATION)
			A(EC_OLE_EVENT)
			A(EC_NOTIFY_WINDOW)
			A(EC_STREAM_CONTROL_STOPPED)
			A(EC_STREAM_CONTROL_STARTED)
			A(EC_END_OF_SEGMENT)
			A(EC_SEGMENT_STARTED)
			A(EC_LENGTH_CHANGED)
			A(EC_DEVICE_LOST)
			A(EC_SAMPLE_NEEDED)
			A(EC_PROCESSING_LATENCY)
			A(EC_SAMPLE_LATENCY)
			A(EC_SCRUB_TIME)
			A(EC_STEP_COMPLETE)
			#undef A
		};
		for(SIZE_T nIndex = 0; nIndex < DIM(g_pMap); nIndex++)
			if(g_pMap[nIndex].nEventCode == nEventCode)
			{
				pszName = g_pMap[nIndex].pszName;
				return TRUE;
			}
		return FALSE;
	}

// ISpy

// IFilterGraph
	STDMETHOD(AddFilter)(IBaseFilter* pBaseFilter, LPCWSTR pszName) throw()
	{
		_Z4(atlTraceCOM, 4, _T("this 0x%p, pBaseFilter 0x%p %ls, pszName \"%s\"\n"), this, pBaseFilter, _FilterGraphHelper::GetFilterClassIdentifierString(pBaseFilter), CString(pszName));
		ReleaseTemporaryUnknown();
		HOOK_PROLOG(CFilterGraphAddRemoveHookHost)
			OnAddFilter(pT, pBaseFilter, pszName, &bDefault);
		HOOK_EPILOG()
		const HRESULT nResult = m_pInnerFilterGraph2->AddFilter(pBaseFilter, pszName);
		if(SUCCEEDED(nResult))
			_ATLTRY
			{
				const CStringW sName = _FilterGraphHelper::GetFilterName(pBaseFilter);
				_Z4(atlTraceGeneral, 4, _T("this 0x%p, sName \"%ls\"\n"), this, sName);
			}
			_ATLCATCHALL()
			{
				_Z_EXCEPTION();
			}
		return nResult;
	}
    STDMETHOD(RemoveFilter)(IBaseFilter* pBaseFilter) throw()
	{
		_Z4(atlTraceCOM, 4, _T("this 0x%p, pBaseFilter 0x%p\n"), this, pBaseFilter);
		if(pBaseFilter)
			_ATLTRY
			{
				const CStringW sName = _FilterGraphHelper::GetFilterName(pBaseFilter);
				_Z4(atlTraceGeneral, 4, _T("this 0x%p, sName \"%ls\"\n"), this, sName);
			}
			_ATLCATCHALL()
			{
				_Z_EXCEPTION();
			}
		HOOK_PROLOG(CFilterGraphAddRemoveHookHost)
			OnRemoveFilter(pT, pBaseFilter, &bDefault);
		HOOK_EPILOG()
		return m_pInnerFilterGraph2->RemoveFilter(pBaseFilter);
	}
    STDMETHOD(EnumFilters)(IEnumFilters** ppEnumFilters) throw()
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		return m_pInnerFilterGraph2->EnumFilters(ppEnumFilters);
	}
    STDMETHOD(FindFilterByName)(LPCWSTR pszName, IBaseFilter** ppFilter) throw()
	{
		_Z4(atlTraceCOM, 4, _T("pszName \"%s\"\n"), CString(pszName));
		return m_pInnerFilterGraph2->FindFilterByName(pszName, ppFilter);
	}
    STDMETHOD(ConnectDirect)(IPin* pOutputPin, IPin* pInputPin, const AM_MEDIA_TYPE* pMediaType) throw()
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		if(pOutputPin && pInputPin)
			_ATLTRY
			{
				_Z4(atlTraceGeneral, 4, _T("pOutputPin \"%ls\", pInputPin \"%ls\"\n"), _FilterGraphHelper::GetPinFullName(pOutputPin), _FilterGraphHelper::GetPinFullName(pInputPin));
				if(pMediaType)
					_FilterGraphHelper::TraceMediaType(pMediaType);
			}
			_ATLCATCHALL()
			{
				_Z_EXCEPTION();
			}
		HOOK_PROLOG(CFilterGraphConnectHookHost)
			OnConnectDirect(pT, pOutputPin, pInputPin, (const BYTE*) pMediaType, &bDefault);
		HOOK_EPILOG()
		return m_pInnerFilterGraph2->ConnectDirect(pOutputPin, pInputPin, pMediaType);
	}
    STDMETHOD(Reconnect)(IPin* pPin) throw()
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		HOOK_PROLOG(CFilterGraphConnectHookHost)
			OnReconnect(pT, pPin, &bDefault);
		HOOK_EPILOG()
		return m_pInnerFilterGraph2->Reconnect(pPin);
	}
    STDMETHOD(Disconnect)(IPin* pPin) throw()
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		HOOK_PROLOG(CFilterGraphConnectHookHost)
			OnDisconnect(pT, pPin, &bDefault);
		HOOK_EPILOG()
		return m_pInnerFilterGraph2->Disconnect(pPin);
	}
    STDMETHOD(SetDefaultSyncSource)() throw()
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		return m_pInnerFilterGraph2->SetDefaultSyncSource();
	}

// IGraphBuilder
    STDMETHOD(Connect)(IPin* pOutputPin, IPin* pInputPin) throw()
	{
		_Z4(atlTraceCOM, 4, _T("pOutputPin 0x%p, pInputPin 0x%p\n"), pOutputPin, pInputPin);
		if(pOutputPin && pInputPin)
			_ATLTRY
			{
				_Z4(atlTraceGeneral, 4, _T("this 0x%p, pOutputPin 0x%p \"%ls\" (filter 0x%p), pInputPin 0x%p \"%ls\" (filter 0x%p)\n"), this, 
					pOutputPin, _FilterGraphHelper::GetPinFullName(pOutputPin), _FilterGraphHelper::GetPinFilter(pOutputPin),
					pInputPin, _FilterGraphHelper::GetPinFullName(pInputPin), _FilterGraphHelper::GetPinFilter(pInputPin),
					0);
			}
			_ATLCATCHALL()
			{
				_Z_EXCEPTION();
			}
		HOOK_PROLOG(CFilterGraphConnectHookHost)
			OnConnect(pT, pOutputPin, pInputPin, &bDefault);
		HOOK_EPILOG()
		return m_pInnerFilterGraph2->Connect(pOutputPin, pInputPin);
	}
    STDMETHOD(Render)(IPin* pOutputPin) throw()
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		return m_pInnerFilterGraph2->Render(pOutputPin);
	}
    STDMETHOD(RenderFile)(LPCWSTR pszFileName, LPCWSTR pszPlayListFileName) throw()
	{
		_Z4(atlTraceCOM, 4, _T("pszFileName \"%s\", pszPlayListFileName \"%s\"\n"), CString(pszFileName), CString(pszPlayListFileName));
		return m_pInnerFilterGraph2->RenderFile(pszFileName, pszPlayListFileName);
	}
    STDMETHOD(AddSourceFilter)(LPCWSTR pszFileName, LPCWSTR pszFilterName, IBaseFilter** ppBaseFilter) throw()
	{
		_Z4(atlTraceCOM, 4, _T("pszFileName \"%s\", pszFilterName \"%s\"\n"), CString(pszFileName), CString(pszFilterName));
		ReleaseTemporaryUnknown();
		HOOK_PROLOG(CFilterGraphAddRemoveHookHost)
			OnAddSourceFilter(pT, pszFileName, pszFilterName, reinterpret_cast<IUnknown**>(ppBaseFilter), &bDefault);
		HOOK_EPILOG()
		return m_pInnerFilterGraph2->AddSourceFilter(pszFileName, pszFilterName, ppBaseFilter);
	}
	STDMETHOD(SetLogFile)(DWORD_PTR hFile) throw()
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		return m_pInnerFilterGraph2->SetLogFile(hFile);
	}
	STDMETHOD(Abort)() throw()
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		return m_pInnerFilterGraph2->Abort();
	}
	STDMETHOD(ShouldOperationContinue)() throw()
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		return m_pInnerFilterGraph2->ShouldOperationContinue();
	}

// IFilterGraph2
	STDMETHOD(AddSourceFilterForMoniker)(IMoniker* pMoniker, IBindCtx* pBindCtx, LPCWSTR pszFilterName, IBaseFilter** ppBaseFilter) throw()
	{
		_Z4(atlTraceCOM, 4, _T("pszFilterName \"%s\"\n"), CString(pszFilterName));
		ReleaseTemporaryUnknown();
		HOOK_PROLOG(CFilterGraphAddRemoveHookHost)
			OnAddSourceFilterForMoniker(pT, pMoniker, pBindCtx, pszFilterName, reinterpret_cast<IUnknown**>(ppBaseFilter), &bDefault);
		HOOK_EPILOG()
		return m_pInnerFilterGraph2->AddSourceFilterForMoniker(pMoniker, pBindCtx, pszFilterName, ppBaseFilter);
	}
	STDMETHOD(ReconnectEx)(IPin* pPin, const AM_MEDIA_TYPE* pMediaType) throw()
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		HOOK_PROLOG(CFilterGraphConnectHookHost)
			OnReconnectEx(pT, pPin, (const BYTE*) pMediaType, &bDefault);
		HOOK_EPILOG()
		return m_pInnerFilterGraph2->ReconnectEx(pPin, pMediaType);
	}
	STDMETHOD(RenderEx)(IPin* pOutputPin, DWORD nFlags, DWORD* pnContext) throw()
	{
		_Z4(atlTraceCOM, 4, _T("nFlags 0x%x\n"), nFlags);
		return m_pInnerFilterGraph2->RenderEx(pOutputPin, nFlags, pnContext);
	}

// IFilterGraph3
    STDMETHOD(SetSyncSourceEx)(IReferenceClock* pFilterGraphReferenceClock, IReferenceClock* pFilterReferenceClock, IBaseFilter* pBaseFilter) throw()
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		_A(m_pInnerFilterGraph3);
		return m_pInnerFilterGraph3->SetSyncSourceEx(pFilterGraphReferenceClock, pFilterReferenceClock, pBaseFilter);
	}

// IMediaControl
	STDMETHOD(Run)() throw()
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		_ATLTRY
		{
			OAFilterState State = (OAFilterState) -1;
			if(SUCCEEDED(m_pInnerMediaControl->GetState(0, &State)) && State == State_Stopped)
				_FilterGraphHelper::TraceGraphBuilder(this);
		}
		_ATLCATCHALL()
		{
			_Z_EXCEPTION();
		}
		HOOK_PROLOG(CFilterGraphStateControlHookHost)
			OnRun(pT, &bDefault);
		HOOK_EPILOG()
		const HRESULT nRunResult = m_pInnerMediaControl->Run();
		_Z4(atlTraceGeneral, 4, _T("nRunResult 0x%08x\n"), nRunResult);
		return nRunResult;
	}
	STDMETHOD(Pause)() throw()
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		_ATLTRY
		{
			OAFilterState State = (OAFilterState) -1;
			if(SUCCEEDED(m_pInnerMediaControl->GetState(0, &State)) && State == State_Stopped)
				_FilterGraphHelper::TraceGraphBuilder(this);
		}
		_ATLCATCHALL()
		{
			_Z_EXCEPTION();
		}
		HOOK_PROLOG(CFilterGraphStateControlHookHost)
			OnPause(pT, &bDefault);
		HOOK_EPILOG()
		return m_pInnerMediaControl->Pause();
	}
	STDMETHOD(Stop)() throw()
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		HOOK_PROLOG(CFilterGraphStateControlHookHost)
			OnStop(pT, &bDefault);
		HOOK_EPILOG()
		return m_pInnerMediaControl->Stop();
	}
	STDMETHOD(GetState)(LONG nTimeout, OAFilterState* pState) throw()
	{
		_Z4(atlTraceCOM, 4, _T("nTimeout %d\n"), nTimeout);
		return m_pInnerMediaControl->GetState(nTimeout, pState);
	}
	STDMETHOD(RenderFile)(BSTR sFileName) throw()
	{
		_Z4(atlTraceCOM, 4, _T("sFileName \"%s\"\n"), CString(sFileName));
		return m_pInnerMediaControl->RenderFile(sFileName);
	}
    STDMETHOD(AddSourceFilter)(BSTR sFileName, IDispatch** ppDispatch) throw()
	{
		_Z4(atlTraceCOM, 4, _T("sFileName \"%s\"\n"), CString(sFileName));
		ReleaseTemporaryUnknown();
		_ATLTRY
		{
			CComPtr<IBaseFilter> pBaseFilter;
			BOOL bDefault = TRUE;
			const HRESULT nResult = HookMediaControlAddSourceFilter(sFileName, &pBaseFilter, &bDefault);
			if(!bDefault)
			{
				__D(ppDispatch, E_POINTER);
				*ppDispatch = NULL;
				if(SUCCEEDED(nResult))
				{
					CComQIPtr<IDispatch> pDispatch = pBaseFilter;
					__D(pDispatch, E_NOINTERFACE);
					*ppDispatch = pDispatch.Detach();
				}
				return nResult;
			}
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return m_pInnerMediaControl->AddSourceFilter(sFileName, ppDispatch);
	}
	STDMETHOD(get_FilterCollection)(IDispatch** ppDispatch) throw()
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		ReleaseTemporaryUnknown();
		return m_pInnerMediaControl->get_FilterCollection(ppDispatch);
	}
	STDMETHOD(get_RegFilterCollection)(IDispatch** ppDispatch) throw()
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		ReleaseTemporaryUnknown();
		return m_pInnerMediaControl->get_RegFilterCollection(ppDispatch);
	}
	STDMETHOD(StopWhenReady)() throw()
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		return m_pInnerMediaControl->StopWhenReady();
	}

// IMediaEventSink
    STDMETHOD(Notify)(LONG nEventCode, LONG_PTR nParameter1, LONG_PTR nParameter2) throw()
	{
		#if TRUE
			LPCSTR pszEventName = NULL;
			if(LookupEventCodeName(nEventCode, pszEventName))
			{
				_Z4(atlTraceCOM, 4, _T("nEventCode %hs (0x%02X), nParameter1 0x%p, nParameter2 0x%p\n"), pszEventName, nEventCode, nParameter1, nParameter2);
			} else
		#endif
		_Z4(atlTraceCOM, 4, _T("nEventCode 0x%02X, nParameter1 0x%p, nParameter2 0x%p\n"), nEventCode, nParameter1, nParameter2);
		#if defined(_M_IX86)
			// WARN: Guarding section around might be preventing from walknig frame up the stack
			if(nEventCode == EC_ERRORABORT) // || nEventCode == EC_VIDEO_SIZE_CHANGED)
			{
				CONTEXT ThreadContext = { CONTEXT_FULL };
				GetCurrentThreadContext(&ThreadContext);
				CDebugTraceCallStack::TraceCallStack(ThreadContext, 32); //(nEventCode == EC_ERRORABORT) ? 32 : 8);
			}
		#endif // defined(_M_IX86)
		if(!m_pInnerMediaEventSink)
			return S_FALSE;
		return m_pInnerMediaEventSink->Notify(nEventCode, nParameter1, nParameter2);
	}

// IMediaEvent
	STDMETHOD(GetEventHandle)(OAEVENT* pnEventHandle) throw()
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		return m_pInnerMediaEventEx->GetEventHandle(pnEventHandle);
	}
	STDMETHOD(GetEvent)(LONG* pnEventCode, LONG_PTR* pnParameter1, LONG_PTR* pnParameter2, LONG nTimeout) throw()
	{
		_Z4(atlTraceCOM, nTimeout ? 4 : 5, _T("nTimeout %d\n"), nTimeout);
		const HRESULT nGetEventResult = m_pInnerMediaEventEx->GetEvent(pnEventCode, pnParameter1, pnParameter2, nTimeout);
		if(pnEventCode && pnParameter1 && pnParameter2)
			_Z4(atlTraceCOM, (nGetEventResult != E_ABORT) ? 4 : 5, _T("nGetEventResult 0x%x, *pnEventCode 0x%02X, *pnParameter1 0x%p, *pnParameter2 0x%p\n"), nGetEventResult, *pnEventCode, *pnParameter1, *pnParameter2);
		return nGetEventResult;
	}
	STDMETHOD(WaitForCompletion)(LONG nTimeout, LONG* pnEventCode) throw()
	{
		_Z4(atlTraceCOM, 4, _T("nTimeout %d\n"), nTimeout);
		const HRESULT nWaitForCompletionResult = m_pInnerMediaEventEx->WaitForCompletion(nTimeout, pnEventCode);
		if(pnEventCode)
			_Z4(atlTraceCOM, 4, _T("nWaitForCompletionResult 0x%x, *pnEventCode 0x%02X\n"), nWaitForCompletionResult, *pnEventCode);
		return nWaitForCompletionResult;
	}
	STDMETHOD(CancelDefaultHandling)(LONG nEventCode) throw()
	{
		#if TRUE
			LPCSTR pszEventName = NULL;
			if(LookupEventCodeName(nEventCode, pszEventName))
			{
				_Z4(atlTraceCOM, 4, _T("nEventCode %hs (0x%02X)\n"), pszEventName, nEventCode);
			} else
		#endif
		_Z4(atlTraceCOM, 4, _T("nEventCode 0x%02X\n"), nEventCode);
		return m_pInnerMediaEventEx->CancelDefaultHandling(nEventCode);
	}
	STDMETHOD(RestoreDefaultHandling)(LONG nEventCode) throw()
	{
		#if TRUE
			LPCSTR pszEventName = NULL;
			if(LookupEventCodeName(nEventCode, pszEventName))
			{
				_Z4(atlTraceCOM, 4, _T("nEventCode %hs (0x%02X)\n"), pszEventName, nEventCode);
			} else
		#endif
		_Z4(atlTraceCOM, 4, _T("nEventCode 0x%02X\n"), nEventCode);
		return m_pInnerMediaEventEx->RestoreDefaultHandling(nEventCode);
	}
	STDMETHOD(FreeEventParams)(LONG nEventCode, LONG_PTR nParameter1, LONG_PTR nParameter2) throw()
	{
		_Z4(atlTraceCOM, 4, _T("nEventCode 0x%02X, nParameter1 0x%p, nParameter2 0x%p\n"), nEventCode, nParameter1, nParameter2);
		return m_pInnerMediaEventEx->FreeEventParams(nEventCode, nParameter1, nParameter2);
	}
       
// IMediaEventEx
	STDMETHOD(SetNotifyWindow)(OAHWND nWindowHandle, LONG nMessage, LONG_PTR nParameter) throw()
	{
		_Z4(atlTraceCOM, 4, _T("nWindowHandle 0x%08x, nMessage 0x%04x, nParameter %p\n"), nWindowHandle, nMessage, nParameter);
		return m_pInnerMediaEventEx->SetNotifyWindow(nWindowHandle, nMessage, nParameter);
	}
	STDMETHOD(SetNotifyFlags)(LONG nNotifyFlags) throw()
	{
		_Z4(atlTraceCOM, 4, _T("nNotifyFlags 0x%x\n"), nNotifyFlags);
		return m_pInnerMediaEventEx->SetNotifyFlags(nNotifyFlags);
	}
	STDMETHOD(GetNotifyFlags)(LONG* pnNotifyFlags) throw()
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		return m_pInnerMediaEventEx->GetNotifyFlags(pnNotifyFlags);
	}

// IObjectWithSite
	STDMETHOD(SetSite)(IUnknown* pSite) throw()
	{
		_Z4(atlTraceCOM, 4, _T("pSite 0x%p\n"), pSite);
		_ATLTRY
		{
			CRoCriticalSectionLock DataLock(m_DataCriticalSection);
			m_pSite = pSite;
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
    STDMETHOD(GetSite)(REFIID InterfaceIdentifier, VOID** ppvSite) throw()
	{
		_Z4(atlTraceCOM, 4, _T("InterfaceIdentifier %ls\n"), _PersistHelper::StringFromInterfaceIdentifier(InterfaceIdentifier));
		_ATLTRY
		{
			__D(ppvSite, E_POINTER);
			*ppvSite = NULL;
			CRoCriticalSectionLock DataLock(m_DataCriticalSection);
			_D(m_pSite, E_FAIL);
			return m_pSite->QueryInterface(InterfaceIdentifier, ppvSite);
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
};

////////////////////////////////////////////////////////////
// CSpy

class ATL_NO_VTABLE CSpy :
	public CSpyT<CSpy, &CLSID_FilterGraph>,
	public CComCoClass<CSpy, &CLSID_Spy>
{
public:
	enum { IDR = IDR_FILTERGRAPHSPY };

private:
	static LPCTSTR g_pszClassName;

public:
	//typedef CBlackListAwareComCreatorT<CComObjectCached<CSpy>, CSpy, &g_pszClassName> _ClassFactoryCreatorClass; // DECLARE_CLASSFACTORY override
	typedef CComCreator2<CBlackListAwareComCreatorT<CComObject<CSpy>, CSpy, &g_pszClassName>, CBlackListAwareComCreatorT<CComAggObject<CSpy>, CSpy, &g_pszClassName> > _CreatorClass; // DECLARE_AGGREGATABLE override

public:
// CSpy
};

__declspec(selectany) LPCTSTR CSpy::g_pszClassName = _T("CSpy");

OBJECT_ENTRY_AUTO(__uuidof(Spy), CSpy)

////////////////////////////////////////////////////////////
// CNoThreadSpy

class ATL_NO_VTABLE CNoThreadSpy :
	public CSpyT<CNoThreadSpy, &CLSID_FilterGraphNoThread>,
	public CComCoClass<CNoThreadSpy, &CLSID_NoThreadSpy>
{
public:
	enum { IDR = IDR_NOTHREADFILTERGRAPHSPY };

private:
	static LPCTSTR g_pszClassName;

public:
	//typedef CBlackListAwareComCreatorT<CComObjectCached<CNoThreadSpy>, CNoThreadSpy, &g_pszClassName> _ClassFactoryCreatorClass; // DECLARE_CLASSFACTORY override
	typedef CComCreator2<CBlackListAwareComCreatorT<CComObject<CNoThreadSpy>, CNoThreadSpy, &g_pszClassName>, CBlackListAwareComCreatorT<CComAggObject<CNoThreadSpy>, CNoThreadSpy, &g_pszClassName> > _CreatorClass; // DECLARE_AGGREGATABLE override

public:
// CNoThreadSpy
};

__declspec(selectany) LPCTSTR CNoThreadSpy::g_pszClassName = _T("CNoThreadSpy");

OBJECT_ENTRY_AUTO(__uuidof(NoThreadSpy), CNoThreadSpy)