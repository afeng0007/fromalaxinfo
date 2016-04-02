////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2015
// Created by Roman Ryltsov roman@alax.info, http://alax.info
//
// This source code is published to complement DirectShowSpy developer powertoy 
// and demonstrate the internal use of APIs and tricks powering the tool. It is 
// allowed to freely re-use the portions of the code in other projects, commercial 
// or otherwise (provided that you don�t pretend that you wrote the original tool).
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
#include "RunPropertyBag.h"
#include "MediaSampleTrace.h"
#include "FilterGraphTable.h"

HRESULT FilterGraphHelper_OpenGraphStudioNext(LONG nParentWindowHandle, LPCWSTR pszMonikerDisplayName, VARIANT_BOOL* pbResult);
HRESULT FilterGraphHelper_OpenGraphEdit(LONG nParentWindowHandle, LPCWSTR pszMonikerDisplayName, VARIANT_BOOL* pbResult);

////////////////////////////////////////////////////////////
// CModuleVersionInformationT

template <typename T>
class ATL_NO_VTABLE CModuleVersionInformationT :
	public IDispatchImpl<IModuleVersionInformation>
{
public:
// CModuleVersionInformationT

// IModuleVersionInformation
	STDMETHOD(get_Path)(BSTR* psPath)
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		_ATLTRY
		{
			__D(psPath, E_POINTER);
			*psPath = CComBSTR(_VersionInfoHelper::GetModulePath()).Detach();
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
	STDMETHOD(get_FileVersion)(LONGLONG* pnFileVersion)
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		_ATLTRY
		{
			__D(pnFileVersion, E_POINTER);
			*pnFileVersion = (LONGLONG) _VersionInfoHelper::GetFileVersion(_VersionInfoHelper::GetModulePath());
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
	STDMETHOD(get_FileVersionString)(BSTR* psFileVersionString)
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		_ATLTRY
		{
			__D(psFileVersionString, E_POINTER);
			*psFileVersionString = CComBSTR(_VersionInfoHelper::GetVersionString(_VersionInfoHelper::GetFileVersion(_VersionInfoHelper::GetModulePath()))).Detach();
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
};

////////////////////////////////////////////////////////////
// CFilterGraphMemoryAllocatorData

template <typename T>
class ATL_NO_VTABLE CFilterGraphMemoryAllocatorDataT :
	public IDispatchImpl<IFilterGraphMemoryAllocatorData>
{
public:

	////////////////////////////////////////////////////////
	// CMemoryAllocatorData

	class CMemoryAllocatorData
	{
	public:
		CComPtr<IMemAllocator> m_pMemAllocator;
		CRoArrayT<CString> m_NameArray;

	public:
	// CMemoryAllocatorData
		CComVariantArray GetAsVariant() const
		{
			CRoArrayT<CComVariantArray> Array;
			Array.Add(CComVariant((LONG) (LONG_PTR) (IMemAllocator*) m_pMemAllocator));
			Array.Add(CComVariant(_StringHelper::Join(m_NameArray, _T(", "))));
			#pragma region IMemAllocator, ALLOCATOR_PROPERTIES
			_ATLTRY
			{
				ALLOCATOR_PROPERTIES Properties;
				const HRESULT nGetPropertiesResult = m_pMemAllocator->GetProperties(&Properties);
				__C(nGetPropertiesResult);
				Array.Add(CComVariant());
				Array.Add(CComVariant(Properties.cBuffers));
				Array.Add(CComVariant(Properties.cbBuffer));
				Array.Add(CComVariant(Properties.cbAlign));
				Array.Add(CComVariant(Properties.cbPrefix));
			}
			_ATLCATCH(Exception)
			{
				_Z_ATLEXCEPTION(Exception);
				Array.Add(CComVariant((LONG) (HRESULT) Exception));
			}
			#pragma endregion
			#pragma region IMemAllocatorCallbackTemp
			const CComQIPtr<IMemAllocatorCallbackTemp> pMemAllocatorCallbackTemp = m_pMemAllocator;
			if(pMemAllocatorCallbackTemp)
			{
				_ATLTRY
				{
					LONG nFreeCount = 0;
					__C(pMemAllocatorCallbackTemp->GetFreeCount(&nFreeCount));
					Array.Add(CComVariant());
					Array.Add(CComVariant(nFreeCount));
				}
				_ATLCATCH(Exception)
				{
					_Z_ATLEXCEPTION(Exception);
					Array.Add(CComVariant((LONG) (HRESULT) Exception));
				}
			} else
				Array.Add(CComVariant((LONG) (HRESULT) E_NOINTERFACE));
			#pragma endregion
			CComVariantArray vResult;
			return vResult.FromElementArray(Array);
		}
	};

public:
// CFilterGraphMemoryAllocatorDataT
	static BOOL CompareMemAllocator(const CMemoryAllocatorData& Data, IMemAllocator* pMemAllocator)
	{
		return Data.m_pMemAllocator == pMemAllocator;
	}
	CComVariantArray GetValue()
	{
		#pragma region Enumerate
		CRoArrayT<CMemoryAllocatorData> DataArray;
		{
			_FilterGraphHelper::CFilterArray FilterArray;
			_FilterGraphHelper::GetGraphFilters((IFilterGraph2*) static_cast<T*>(this), FilterArray);
			for(auto&& pBaseFilter: FilterArray)
			{
				_ATLTRY
				{
					_FilterGraphHelper::CPinArray PinArray;
					_FilterGraphHelper::GetFilterPins(pBaseFilter, PINDIR_INPUT, PinArray);
					for(auto&& pInputPin: PinArray)
					{
						_ATLTRY
						{
							const CComPtr<IPin> pOutputPin = _FilterGraphHelper::GetPeerPin(pInputPin);
							if(!pOutputPin)
								continue;
							const CComQIPtr<IMemInputPin> pMemInputPin = pInputPin;
							if(!pMemInputPin)
								continue;
							CComPtr<IMemAllocator> pMemAllocator;
							pMemInputPin->GetAllocator(&pMemAllocator);
							if(!pMemAllocator)
								continue;
							SIZE_T nIndex;
							if(!DataArray.FindFirstThatT<IMemAllocator*>(&CFilterGraphMemoryAllocatorDataT<T>::CompareMemAllocator, pMemAllocator, &nIndex))
							{
								nIndex = DataArray.Add();
								DataArray[nIndex].m_pMemAllocator = pMemAllocator;
							}
							CMemoryAllocatorData& Data = DataArray[nIndex];
							Data.m_NameArray.Add(AtlFormatString(_T("%ls - %ls"), _FilterGraphHelper::GetPinFullName(pOutputPin), _FilterGraphHelper::GetPinFullName(pInputPin)));
						}
						_ATLCATCHALL()
						{
							_Z_EXCEPTION();
						}
					}
				}
				_ATLCATCHALL()
				{
					_Z_EXCEPTION();
				}
			}
		}
		#pragma endregion 
		CRoArrayT<CComVariantArray> Array;
		for(auto&& Data: DataArray)
			Array.Add(Data.GetAsVariant());
		CComVariantArray vResult;
		return vResult.FromElementArray(Array);
	}

// IFilterGraphMemoryAllocatorData
	STDMETHOD(get_Value)(VARIANT* pvValue)
	{
		_Z4(atlTraceCOM, 4, _T("this 0x%p\n"), this);
		_ATLTRY
		{
			__D(pvValue, E_POINTER);
			VariantInit(pvValue);
			_V(GetValue().Detach(pvValue));
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
};

////////////////////////////////////////////////////////////
// CSpyT

extern LPCTSTR g_pszAddRemoveHookName;
extern LPCTSTR g_pszConnectHookName;
extern LPCTSTR g_pszStateControlHookName;

__declspec(selectany) LPCTSTR g_pszAddRemoveHookName = _T("Add/Remove Hooks");
__declspec(selectany) LPCTSTR g_pszConnectHookName = _T("Connect Hooks");
__declspec(selectany) LPCTSTR g_pszStateControlHookName = _T("State Control Hooks");

template <typename T, const CLSID* t_pFilterGraphClassIdentifier>
class ATL_NO_VTABLE CSpyT :
	public CComObjectRootEx<CComMultiThreadModel>,
	//public CComCoClass<CSpyT, &CLSID_Spy>,
	public CTransparentCoClassT<T, t_pFilterGraphClassIdentifier>,
	public IDispatchImpl<ISpy>,
	public ISpyEx,
	public IFilterGraph2,
	public IDispatchImpl<IMediaControl, &__uuidof(IMediaControl), &__uuidof(Quartz::__QuartzTypeLib)>,
	public IMediaEventSink,
	public IDispatchImpl<IMediaEventEx, &__uuidof(IMediaEventEx), &__uuidof(Quartz::__QuartzTypeLib)>,
	public IObjectWithSite,
	public CModuleVersionInformationT<T>,
	public CFilterGraphMemoryAllocatorDataT<T>,
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
	COM_INTERFACE_ENTRY(ISpyEx)
	COM_INTERFACE_ENTRY(IFilterGraph2)
	COM_INTERFACE_ENTRY(IGraphBuilder)
	COM_INTERFACE_ENTRY(IFilterGraph)
	COM_INTERFACE_ENTRY(IMediaControl)
	COM_INTERFACE_ENTRY(IMediaEventSink)
	COM_INTERFACE_ENTRY(IMediaEventEx)
	COM_INTERFACE_ENTRY(IMediaEvent)
	COM_INTERFACE_ENTRY_FUNC(__uuidof(IObjectWithSite), 0, QueryObjectWithSiteInterface)
	COM_INTERFACE_ENTRY(IModuleVersionInformation)
	COM_INTERFACE_ENTRY(IFilterGraphMemoryAllocatorData)
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

		CObjectPtr<T> GetSpy() const
		{
			CRoCriticalSectionLock DataLock(m_DataCriticalSection);
			return m_pSpy;
		}

	public:
	// CAmGraphBuilderCallback
		CAmGraphBuilderCallback() :
			m_pSpy(NULL)
		{
			_Z5_THIS();
		}
		~CAmGraphBuilderCallback()
		{
			_Z5_THIS();
		}
		VOID Initialize(T* pSpy)
		{
			_A(pSpy);
			CRoCriticalSectionLock DataLock(m_DataCriticalSection);
			_Z4(atlTraceRefcount, 4, _T("this 0x%p, pSpy 0x%p\n"), this, pSpy);
			_A(!m_pSpy);
			m_pSpy = pSpy;
		}
		VOID Terminate()
		{
			CRoCriticalSectionLock DataLock(m_DataCriticalSection);
			m_pSpy = NULL;
		}
		BOOL SetGraphBuilder(const CComQIPtr<IObjectWithSite> pObjectWithSite)
		{
			if(!pObjectWithSite)
				return FALSE;
			const HRESULT nSetSiteResult = pObjectWithSite->SetSite(this);
			if(SUCCEEDED(nSetSiteResult))
				return TRUE;
			_Z4_HRESULT(nSetSiteResult);
			return FALSE;
		}
		BOOL SetGraphBuilder(IUnknown* pObjectWithSiteUnknown)
		{
			return SetGraphBuilder(CComQIPtr<IObjectWithSite>(pObjectWithSiteUnknown));
		}

	// IAMGraphBuilderCallback
        STDMETHOD(SelectedFilter)(IMoniker* pMoniker)
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
						_Z4(atlTraceGeneral, 4, _T("this 0x%p, nSelectedFilterResult 0x%08X\n"), this, nSelectedFilterResult);
						return nSelectedFilterResult;
					}
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(CreatedFilter)(IBaseFilter* pBaseFilter)
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
						_Z4(atlTraceGeneral, 4, _T("this 0x%p, nCreatedFilterResult 0x%08X\n"), this, nCreatedFilterResult);
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

	////////////////////////////////////////////////////////
	// CLogFilter

	class __declspec(uuid("{DC544824-CC2C-4CEF-AABC-9FA815530733}")) CLogFilterBase;

	class ATL_NO_VTABLE CLogFilter :
		public CComObjectRootEx<CComMultiThreadModelNoCS>,
		public CComCoClass<CLogFilter, &__uuidof(CLogFilterBase)>,
		public CTransformFilterT<CLogFilter>,
		public CBasePersistT<CLogFilter>
	{
	public:
		//enum { IDR =  };

	//DECLARE_REGISTRY_RESOURCEID(IDR)

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	//DECLARE_QI_TRACE(CLogFilter)

	BEGIN_COM_MAP(CLogFilter)
		COM_INTERFACE_ENTRY(IBaseFilter)
		COM_INTERFACE_ENTRY(IMediaFilter)
		COM_INTERFACE_ENTRY_IID(__uuidof(IPersist), IBaseFilter)
	END_COM_MAP()

	BEGIN_PROP_MAP(CLogFilter)
	END_PROP_MAP()

	public:

		////////////////////////////////////////////////////////
		// CInputPin

		class ATL_NO_VTABLE CInputPin :
			public CComObjectRootEx<CComMultiThreadModelNoCS>,
			public CInputPinT<CInputPin, CLogFilter>
		{
		public:

		//DECLARE_QI_TRACE(CInspectionFilter::CLogFilter)

		BEGIN_COM_MAP(CInputPin)
			COM_INTERFACE_ENTRY(IPin)
			COM_INTERFACE_ENTRY(IMemInputPin)
		END_COM_MAP()

		public:
		// CInputPin
			CInputPin()
			{
				_Z5_THIS();
			}
			~CInputPin()
			{
				_Z5_THIS();
			}
			BOOL CheckMediaType(const CMediaType& pMediaType) const
			{
				_A(pMediaType);
				return TRUE;
			}
			VOID ResetPeerPin()
			{
				CRoCriticalSectionLock DataLock(GetDataCriticalSection());
				__super::ResetPeerPin();
				GetFilter()->DisconnectPin(GetFilter()->GetOutputPin());
			}
		};

		////////////////////////////////////////////////////////
		// COutputPin

		class ATL_NO_VTABLE COutputPin :
			public CComObjectRootEx<CComMultiThreadModelNoCS>,
			public COutputPinT<COutputPin, CLogFilter>,
			public CUpstreamMediaPositionAwareOutputPinT<COutputPin>
		{
		public:

		//DECLARE_QI_TRACE(CInspectionFilter::COutputPin)

		BEGIN_COM_MAP(COutputPin)
			COM_INTERFACE_ENTRY(IPin)
			COM_INTERFACE_ENTRY_FUNC(__uuidof(IMediaSeeking), 0, QueryUpstreamMediaPositionInterface)
			COM_INTERFACE_ENTRY_FUNC(__uuidof(IMediaPosition), 0, QueryUpstreamMediaPositionInterface)
			COM_INTERFACE_ENTRY_FUNC(__uuidof(IDispatch), 0, QueryUpstreamMediaPositionInterface)
		END_COM_MAP()

		public:
		// COutputPin
			COutputPin()
			{
				_Z5_THIS();
			}
			~COutputPin()
			{
				_Z5_THIS();
			}
			HRESULT FinalConstruct()
			{
				_ATLTRY
				{
					CreateUpstreamMediaPosition();
				}
				_ATLCATCH(Exception)
				{
					_C(Exception);
				}
				return S_OK;
			}
			VOID FinalRelease()
			{
				DestroyUpstreamMediaPosition();
			}
			VOID EnumerateMediaTypes(CRoListT<CMediaType>& MediaTypeList) const
			{
				CRoCriticalSectionLock DataLock(GetDataCriticalSection());
				const CMediaType& pInputMediaType = GetFilter()->GetInputPin()->GetMediaTypeReference();
				if(pInputMediaType)
					_W(MediaTypeList.AddTail(pInputMediaType));
			}
			BOOL CheckMediaType(const CMediaType& pMediaType) const
			{
				_A(pMediaType);
				const CObjectPtr<CInputPin>& pInputPin = GetFilter()->GetInputPin();
				CRoCriticalSectionLock DataLock(GetDataCriticalSection());
				const CComPtr<IPin>& pInputPeerPin = pInputPin->GetPeerPinReference();
				if(!pInputPeerPin)
					return FALSE; // No Input Connected
				const CMediaType& pInputMediaType = pInputPin->GetMediaTypeReference();
				if(!pInputMediaType.Compare(pMediaType))
					return FALSE; // Input Media Type Mismatch
				return TRUE;
			}
			BOOL DecideMemAllocator(const CMediaType& pMediaType)
			{
				_A(VerifyCriticalSectionLocked(GetDataCriticalSection()));
				_A(GetPeerMemInputPinReference());
				const CObjectPtr<CInputPin>& pInputPin = GetFilter()->GetInputPin();
				const CComPtr<IMemAllocator>& pMemAllocator = pInputPin->GetMemAllocatorReference();
				const HRESULT nNotifyAllocatorResult = GetPeerMemInputPinReference()->NotifyAllocator(pMemAllocator, pInputPin->GetMemAllocatorReadOnly());
				_Z45_DSHRESULT(nNotifyAllocatorResult);
				if(FAILED(nNotifyAllocatorResult))
					return FALSE;
				SetMemAllocator(pMemAllocator);
				return TRUE;
			}
		};

	private:
		CObjectPtr<CInputPin> m_pInputPin;
		CObjectPtr<COutputPin> m_pOutputPin;

	public:
	// CLogFilter
		CLogFilter() :
			CBasePersistT<CLogFilter>(GetDataCriticalSection())
		{
			_Z4_THIS();
		}
		~CLogFilter()
		{
			_Z4_THIS();
		}
		HRESULT FinalConstruct()
		{
			_ATLTRY
			{
				m_pInputPin.Construct()->Initialize(this, L"Input");
				m_pOutputPin.Construct()->Initialize(this, L"Output");
				AddPins(2, (IPin*) m_pInputPin, (IPin*) m_pOutputPin);
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		VOID FinalRelease()
		{
			m_pInputPin.Release();
			m_pOutputPin.Release();
		}
		VOID DeliverEndOfStream(CInputPin*)
		{
			_Z2(atlTraceGeneral, 2, _T("this 0x%p, \"%ls\"\n"), this, GetName());
			CRoCriticalSectionLock ReceiveLock(GetReceiveCriticalSection());
			m_pOutputPin->DeliverEndOfStream();
		}
 		VOID DeliverBeginFlush(CInputPin*)
		{
			_Z2(atlTraceGeneral, 2, _T("this 0x%p, \"%ls\"\n"), this, GetName());
			m_pOutputPin->DeliverBeginFlush();
		}
		VOID DeliverEndFlush(CInputPin*)
		{
			_Z2(atlTraceGeneral, 2, _T("this 0x%p, \"%ls\"\n"), this, GetName());
			m_pOutputPin->DeliverEndFlush();
		}
		VOID DeliverNewSegment(CInputPin*, REFERENCE_TIME nStartTime, REFERENCE_TIME nStopTime, DOUBLE fRate)
		{
			_Z2(atlTraceGeneral, 2, _T("this 0x%p, \"%ls\", nStartTime %s, nStopTime %s, fRate %.3f\n"), this, GetName(), _FilterGraphHelper::FormatReferenceTime(nStartTime), _FilterGraphHelper::FormatReferenceTime(nStopTime), fRate);
			m_pOutputPin->DeliverNewSegment(nStartTime, nStopTime, fRate);
		}
		VOID CueFilter()
		{
			_Z2(atlTraceGeneral, 2, _T("this 0x%p, \"%ls\"\n"), this, GetName());
			CRoCriticalSectionLock ReceiveLock(GetReceiveCriticalSection());
			StartStreaming();
		}
		VOID RunFilter(REFERENCE_TIME nStartTime)
		{
			_Z2(atlTraceGeneral, 2, _T("this 0x%p, \"%ls\"\n"), this, GetName());
			nStartTime;
		}
		VOID PauseFilter()
		{
			_Z2(atlTraceGeneral, 2, _T("this 0x%p, \"%ls\"\n"), this, GetName());
		}
		VOID StopFilter()
		{
			_Z2(atlTraceGeneral, 2, _T("this 0x%p, \"%ls\"\n"), this, GetName());
			CRoCriticalSectionLock ReceiveLock(GetReceiveCriticalSection());
			StopStreaming();
		}
		VOID ReceiveMediaSample(CInputPin* pInputPin, IMediaSample2* pMediaSample, HRESULT& nReceiveResult)
		{
			_A(pInputPin == m_pInputPin);
			_A(pMediaSample);
			CRoCriticalSectionLock ReceiveLock(GetReceiveCriticalSection());
			if(!IsStreaming())
				return;
			CMediaSampleProperties Properties(pMediaSample);
			{
				CRoArrayT<CString> Array1, Array2;
				Array2.Add(AtlFormatString(_T("%d"), GetTickCount()));
				Array2.Add(GetName());
				Array1.Add(AtlFormatString(_T("dwSampleFlags %s"), _FilterGraphHelper::FormatSampleFlags(Properties.dwSampleFlags)));
				Array2.Add(AtlFormatString(_T("0x%X"), Properties.dwSampleFlags));
				if(Properties.dwSampleFlags & AM_SAMPLE_TIMEVALID)
				{
					Array1.Add(AtlFormatString(_T("tStart %s"), _FilterGraphHelper::FormatReferenceTime(Properties.tStart)));
					Array2.Add(AtlFormatString(_T("%I64d"), Properties.tStart));
					if(Properties.dwSampleFlags & AM_SAMPLE_STOPVALID)
					{
						Array1.Add(AtlFormatString(_T("tStop %s (+ %s)"), _FilterGraphHelper::FormatReferenceTime(Properties.tStop), _FilterGraphHelper::FormatReferenceTime(Properties.tStop - Properties.tStart)));
						Array2.Add(AtlFormatString(_T("%I64d"), Properties.tStop));
						Array2.Add(AtlFormatString(_T("%I64d"), Properties.tStop - Properties.tStart));
					}
				}
				Array1.Add(AtlFormatString(_T("lActual %s"), _StringHelper::FormatNumber(Properties.lActual)));
				_Z2(atlTraceGeneral, 2, _T("this 0x%p, \"%ls\", %s") _T("\t\t%s\t") _T("\n"), this, GetName(), _StringHelper::Join(Array1, _T(", ")), _StringHelper::Join(Array2, _T("\t")));
			}
			HandleMediaTypeChange<CInputPin, COutputPin>(Properties, m_pInputPin, m_pOutputPin);
			DeliverMediaSample(m_pOutputPin->GetPeerMemInputPin(), pMediaSample, nReceiveResult);
		}
		const CObjectPtr<CInputPin>& GetInputPin() const
		{
			return m_pInputPin;
		}
		const CObjectPtr<COutputPin>& GetOutputPin() const
		{
			return m_pOutputPin;
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
	INT m_nRunningFilterGraphReference;
	CLocalObjectPtr<CFilterGraphTableItem> m_pFilterGraphTableItem;
	SYSTEMTIME m_Time;
	CStringW m_sMonikerDisplayName;
	CComPtr<IUnknown> m_pTemporaryUnknown;
	CObjectPtr<CAmGraphBuilderCallback> m_pPrivateAmGraphBuilderCallback;
	mutable CRoCriticalSection m_DataCriticalSection;
	CComPtr<IUnknown> m_pSite;
	CStringW m_sFriendlyName;

	BOOL IsAggregated() const
	{
		return (ULONG) m_dwRef >= 0x00001000;
	}
	VOID ReleaseTemporaryUnknown()
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
		m_nRunningFilterGraphReference = 0;
		CInterlockedLong& nReferenceCount = reinterpret_cast<CInterlockedLong&>(m_dwRef);
		const LONG nBeforeReferenceCount = m_dwRef;
		SYSTEMTIME Time;
		GetLocalTime(&Time);
		CStringW sMonikerDisplayName;
		static CConstIntegerRegistryValue g_nEnableRotMonikerItemNameSuffix(_T("Enable ROT Moniker Item Name Suffix")); // 0 Default (Enabled), 1 Disabled, 2 Enabled
		if(g_nEnableRotMonikerItemNameSuffix != 1) // Disabled
		{
			TCHAR pszPath[MAX_PATH] = { 0 };
			_W(GetModuleFileName(NULL, pszPath, DIM(pszPath)));
			LPCTSTR pszName = FindFileName(pszPath);
			CString sItemName = AtlFormatString(_T("%s; process: %s, time: %02d-%02d-%02d"), m_RunningFilterGraph.GetDefaultMonikerItemName(GetControllingUnknown()), pszName, Time.wHour, Time.wMinute, Time.wSecond);
			m_RunningFilterGraph.SetFilterGraph(GetControllingUnknown(), CStringW(sItemName), &sMonikerDisplayName);
		} else
			m_RunningFilterGraph.SetFilterGraph(GetControllingUnknown(), &sMonikerDisplayName);
		_Z4(atlTraceRefcount, 4, _T("this 0x%p, m_bIsAggregated %d, m_dwRef %d, sMonikerDisplayName \"%ls\"\n"), this, m_bIsAggregated, m_dwRef, sMonikerDisplayName);
		{
			CRoCriticalSectionLock DataLock(m_DataCriticalSection);
			m_Time = Time;
			m_sMonikerDisplayName = sMonikerDisplayName;
		}
		#pragma region Filter Graph Table Item
		static CConstIntegerRegistryValue g_nAutomaticFilterGraphTableItem(_T("Automatic Filter Graph Table Item")); // 0 Default (Disabled), 1 Disabled, 2 Enabled
		if(g_nAutomaticFilterGraphTableItem == 2) // Enabled
			_ATLTRY
			{
				_A(!m_pFilterGraphTableItem->IsFilterGraphAvailable());
				m_pFilterGraphTableItem->SetFilterGraph(this);
				Release();
			}
			_ATLCATCHALL()
			{
				_Z_EXCEPTION();
			}
		#pragma endregion
		if(!m_bIsAggregated)
		{
			m_nRunningFilterGraphReference++;
			const LONG nAfterReferenceCount = m_dwRef;
			if(nBeforeReferenceCount == nAfterReferenceCount)
			{
				// NOTE: Putting onto Running Object Table succeeded, however no external reference detected which we need to compensate by self-releasing
				m_nRunningFilterGraphReference++;
				return;
			}
		}
		Release();
	}
	VOID ResetRunningFilterGraph()
	{
		if(!m_RunningFilterGraph.GetCookie())
			return;
		#pragma region Filter Graph Table Item
		_ATLTRY
		{
			if(m_pFilterGraphTableItem->IsFilterGraphAvailable())
			{
				AddRef();
				m_pFilterGraphTableItem->SetFilterGraph(NULL);
			}
		}
		_ATLCATCHALL()
		{
			_Z_EXCEPTION();
		}
		#pragma endregion
		if(m_nRunningFilterGraphReference != 2)
			AddRef();
		_Z4(atlTraceRefcount, 4, _T("this 0x%p, m_dwRef 0x%x\n"), this, m_dwRef);
		m_RunningFilterGraph.SetFilterGraph(NULL);
		{
			CRoCriticalSectionLock DataLock(m_DataCriticalSection);
			m_sMonikerDisplayName.Empty();
		}
		_Z4(atlTraceRefcount, 4, _T("this 0x%p, m_dwRef 0x%x\n"), this, m_dwRef);
	}
	HRESULT InternalQueryFilterGraph3Interface(REFIID InterfaceIdentifier, VOID** ppvObject)
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
	static HRESULT WINAPI QueryFilterGraph3Interface(VOID* pvThis, REFIID InterfaceIdentifier, VOID** ppvObject, DWORD_PTR)
	{
		return ((CSpy*) pvThis)->InternalQueryFilterGraph3Interface(InterfaceIdentifier, ppvObject);
	}
	HRESULT HookMediaControlAddSourceFilter(BSTR sFileName, IBaseFilter** ppBaseFilter, BOOL* pbDefault)
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
	static LPCTSTR GetOriginalLibraryName()
	{
		return _T("quartz.dll");
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
			TreatAsUpdateRegistryFromResource<T>(*t_pFilterGraphClassIdentifier, bRegister);
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
	CSpyT()	:
		m_hQuartzModule(NULL)
	{
		_Z4_THIS();
		ZeroMemory(&m_Time, sizeof m_Time);
	}
	~CSpyT()
	{
		_Z4_THIS();
	}
	HRESULT FinalConstruct()
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
				_Z4_HRESULT(nDllCanUnloadNowResult); 
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
	VOID FinalRelease()
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
	HRESULT QueryObjectWithSiteInterface(REFIID InterfaceIdentifier, LPVOID* ppvObject)
	{
		_A(InterfaceIdentifier == __uuidof(IObjectWithSite));
		_A(ppvObject);
		if(m_pPrivateAmGraphBuilderCallback)
		{
			*ppvObject = CComPtr<IObjectWithSite>(static_cast<T*>(this)).Detach();
			return S_OK;
		}
		_A(m_pInnerUnknown);
		return m_pInnerUnknown->QueryInterface(InterfaceIdentifier, ppvObject);
	}
	static HRESULT WINAPI QueryObjectWithSiteInterface(VOID* pvInstance, REFIID InterfaceIdentifier, LPVOID* ppvObject, DWORD_PTR)
	{
		return ((CSpy*) pvInstance)->QueryObjectWithSiteInterface(InterfaceIdentifier, ppvObject);
	}
	CComPtr<IUnknown> GetSite() const
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
	CStringW GetMonikerDisplayName() const
	{
		CRoCriticalSectionLock DataLock(m_DataCriticalSection);
		return m_sMonikerDisplayName;
	}

// ISpy
    STDMETHOD(get_MonikerDisplayName)(BSTR* psMonikerDisplayName)
	{
		_Z4(atlTraceCOM, 4, _T("this 0x%p\n"), this);
		_ATLTRY
		{
			__D(psMonikerDisplayName, E_POINTER);
			*psMonikerDisplayName = CComBSTR(GetMonikerDisplayName()).Detach();
		}
		_ATLCATCHALL()
		{
			_Z_EXCEPTION();
		}
		return S_OK;
	}
	STDMETHOD(get_CreationTime)(DATE* pfTime)
	{
		_Z4(atlTraceCOM, 4, _T("this 0x%p\n"), this);
		_ATLTRY
		{
			__D(pfTime, E_POINTER);
			CRoCriticalSectionLock DataLock(m_DataCriticalSection);
			FILETIME LocalFileTime, FileTime;
			_W(SystemTimeToFileTime(&m_Time, &LocalFileTime));
			_W(LocalFileTimeToFileTime(&LocalFileTime, &FileTime));
			SYSTEMTIME Time;
			_W(FileTimeToSystemTime(&FileTime, &Time));
			_W(SystemTimeToVariantTime(&Time, pfTime));
		}
		_ATLCATCHALL()
		{
			_Z_EXCEPTION();
		}
		return S_OK;
	}
	STDMETHOD(get_FriendlyName)(BSTR* psFriendlyName)
	{
		_Z4(atlTraceCOM, 4, _T("this 0x%p\n"), this);
		_ATLTRY
		{
			__D(psFriendlyName, E_POINTER);
			CRoCriticalSectionLock DataLock(m_DataCriticalSection);
			*psFriendlyName = CComBSTR(m_sFriendlyName).Detach();
		}
		_ATLCATCHALL()
		{
			_Z_EXCEPTION();
		}
		return S_OK;
	}
	STDMETHOD(put_FriendlyName)(BSTR sFriendlyName)
	{
		_Z4(atlTraceCOM, 4, _T("this 0x%p, sFriendlyName \"%s\"\n"), this, CString(sFriendlyName));
		_ATLTRY
		{
			CRoCriticalSectionLock DataLock(m_DataCriticalSection);
			m_sFriendlyName = sFriendlyName;
		}
		_ATLCATCHALL()
		{
			_Z_EXCEPTION();
		}
		return S_OK;
	}
	STDMETHOD(DoPropertyFrameModal)(LONG nParentWindowHandle)
	{
		_Z4(atlTraceCOM, 4, _T("this 0x%p, nParentWindowHandle 0x%08X\n"), this, nParentWindowHandle);
		_ATLTRY
		{
			T* pT = static_cast<T*>(this);
			return FilterGraphHelper_DoPropertyFrameModal(nParentWindowHandle, (IFilterGraph*) CComQIPtr<IFilterGraph>(pT));
		}
		_ATLCATCHALL()
		{
			_Z_EXCEPTION();
		}
		return S_OK;
	}
	STDMETHOD(DoFilterGraphListModal)(LONG nParentWindowHandle)
	{
		_Z4(atlTraceCOM, 4, _T("this 0x%p, nParentWindowHandle 0x%08X\n"), this, nParentWindowHandle);
		_ATLTRY
		{
			return FilterGraphHelper_DoFilterGraphListModal(nParentWindowHandle);
		}
		_ATLCATCHALL()
		{
			_Z_EXCEPTION();
		}
		return S_OK;
	}
	STDMETHOD(OpenGraphStudioNext)(LONG nParentWindowHandle, VARIANT_BOOL* pbResult)
	{
		_Z4(atlTraceCOM, 4, _T("this 0x%p, nParentWindowHandle 0x%08X\n"), this, nParentWindowHandle);
		_ATLTRY
		{
			return FilterGraphHelper_OpenGraphStudioNext(nParentWindowHandle, GetMonikerDisplayName(), pbResult);
		}
		_ATLCATCHALL()
		{
			_Z_EXCEPTION();
		}
		return S_OK;
	}
	STDMETHOD(OpenGraphEdit)(LONG nParentWindowHandle, VARIANT_BOOL* pbResult)
	{
		_Z4(atlTraceCOM, 4, _T("this 0x%p, nParentWindowHandle 0x%08X\n"), this, nParentWindowHandle);
		_ATLTRY
		{
			return FilterGraphHelper_OpenGraphEdit(nParentWindowHandle, GetMonikerDisplayName(), pbResult);
		}
		_ATLCATCHALL()
		{
			_Z_EXCEPTION();
		}
		return S_OK;
	}
	STDMETHOD(ReadRunPropertyBag)(IUnknown* pBaseFilterUnknown, VARIANT_BOOL bAllowExtension, VARIANT* pvValue)
	{
		_Z4(atlTraceCOM, 4, _T("this 0x%p, pBaseFilterUnknown 0x%p, bAllowExtension %d\n"), this, pBaseFilterUnknown, bAllowExtension);
		_ATLTRY
		{
			__D(pBaseFilterUnknown, E_INVALIDARG);
			__D(pvValue, E_POINTER);
			VariantInit(pvValue);
			_V(CRunPropertyBagHelper::ReadRunPropertyBag(pBaseFilterUnknown, bAllowExtension != ATL_VARIANT_FALSE).Detach(pvValue));
		}
		_ATLCATCHALL()
		{
			_Z_EXCEPTION();
		}
		return S_OK;
	}
	STDMETHOD(CreateMediaSampleTrace)(IMediaSampleTrace** ppMediaSampleTrace)
	{
		_Z4(atlTraceCOM, 4, _T("this 0x%p\n"), this);
		_ATLTRY
		{
			__D(ppMediaSampleTrace, E_POINTER);
			*ppMediaSampleTrace = NULL;
			CObjectPtr<CMediaSampleTrace> pMediaSampleTrace;
			pMediaSampleTrace.Construct()->Initialize(this);
			*ppMediaSampleTrace = pMediaSampleTrace.Detach();
		}
		_ATLCATCHALL()
		{
			_Z_EXCEPTION();
		}
		return S_OK;
	}

// ISpyEx

// IFilterGraph
	STDMETHOD(AddFilter)(IBaseFilter* pBaseFilter, LPCWSTR pszName)
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
    STDMETHOD(RemoveFilter)(IBaseFilter* pBaseFilter)
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
    STDMETHOD(EnumFilters)(IEnumFilters** ppEnumFilters)
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		return m_pInnerFilterGraph2->EnumFilters(ppEnumFilters);
	}
    STDMETHOD(FindFilterByName)(LPCWSTR pszName, IBaseFilter** ppFilter)
	{
		_Z4(atlTraceCOM, 4, _T("pszName \"%s\"\n"), CString(pszName));
		return m_pInnerFilterGraph2->FindFilterByName(pszName, ppFilter);
	}
    STDMETHOD(ConnectDirect)(IPin* pOutputPin, IPin* pInputPin, const AM_MEDIA_TYPE* pMediaType)
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		if(pOutputPin && pInputPin)
			_ATLTRY
			{
				_Z4(atlTraceGeneral, 4, _T("pOutputPin \"%ls\", pInputPin \"%ls\", pMediaType 0x%p\n"), _FilterGraphHelper::GetPinFullName(pOutputPin), _FilterGraphHelper::GetPinFullName(pInputPin), pMediaType);
				if(pMediaType)
					_FilterGraphHelper::TraceMediaType(pMediaType);
				#pragma region Log Filter
				// NOTE: This inserts additional filter without graph owner's will, for troubleshooting purposes; CLogFilter logs streaming details
				#if FALSE
					const CComPtr<IBaseFilter> pOutputBaseFilter = _FilterGraphHelper::GetPinFilter(pOutputPin);
					const CComPtr<IBaseFilter> pInputBaseFilter = _FilterGraphHelper::GetPinFilter(pInputPin);
					class __declspec(uuid("{09075D10-D7EC-420f-A8F9-940E1602A371}")) AudioSplitter;
					if(_FilterGraphHelper::GetFilterClassIdentifier(pOutputBaseFilter) == __uuidof(AudioSplitter) || _FilterGraphHelper::GetFilterClassIdentifier(pInputBaseFilter) == __uuidof(AudioSplitter))
						_ATLTRY
						{
							_A(_FilterGraphHelper::GetPinDirection(pOutputPin) == PINDIR_OUTPUT);
							CObjectPtr<CLogFilter> pLogFilter;
							pLogFilter.Construct();
							CString sName = AtlFormatString(_T("Log (%s; %s)"), _FilterGraphHelper::GetFilterName(pOutputBaseFilter), _FilterGraphHelper::GetFilterName(pInputBaseFilter));
							__C(m_pInnerFilterGraph2->AddFilter(pLogFilter, CStringW(sName)));
							_ATLTRY
							{
								__C(m_pInnerFilterGraph2->ConnectDirect(pOutputPin, pLogFilter->GetInputPin(), pMediaType));
								__C(m_pInnerFilterGraph2->ConnectDirect(pLogFilter->GetOutputPin(), pInputPin, pMediaType));
								_Z4(atlTraceGeneral, 4, _T("this 0x%p, pLogFilter->GetName() \"%ls\"\n"), this, pLogFilter->GetName());
								return S_OK;
							}
							_ATLCATCHALL()
							{
								__C(m_pInnerFilterGraph2->RemoveFilter(pLogFilter));
								_ATLRETHROW;
							}
						}
						_ATLCATCHALL()
						{
							_Z_EXCEPTION();
						}
				#endif
				#pragma endregion 
			}
			_ATLCATCHALL()
			{
				_Z_EXCEPTION();
			}
		HOOK_PROLOG(CFilterGraphConnectHookHost)
			OnConnectDirect(pT, pOutputPin, pInputPin, (const BYTE*) pMediaType, &bDefault);
		HOOK_EPILOG()
		const HRESULT nConnectDirectResult = m_pInnerFilterGraph2->ConnectDirect(pOutputPin, pInputPin, pMediaType);
		_Z4(atlTraceGeneral, 4, _T("this 0x%p, nConnectDirectResult 0x%08X\n"), this, nConnectDirectResult);
		return nConnectDirectResult;
	}
    STDMETHOD(Reconnect)(IPin* pPin)
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		HOOK_PROLOG(CFilterGraphConnectHookHost)
			OnReconnect(pT, pPin, &bDefault);
		HOOK_EPILOG()
		return m_pInnerFilterGraph2->Reconnect(pPin);
	}
    STDMETHOD(Disconnect)(IPin* pPin)
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		HOOK_PROLOG(CFilterGraphConnectHookHost)
			OnDisconnect(pT, pPin, &bDefault);
		HOOK_EPILOG()
		return m_pInnerFilterGraph2->Disconnect(pPin);
	}
    STDMETHOD(SetDefaultSyncSource)()
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		return m_pInnerFilterGraph2->SetDefaultSyncSource();
	}

// IGraphBuilder
    STDMETHOD(Connect)(IPin* pOutputPin, IPin* pInputPin)
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
		const HRESULT nConnectResult = m_pInnerFilterGraph2->Connect(pOutputPin, pInputPin);
		_Z4(atlTraceGeneral, 4, _T("this 0x%p, nConnectResult 0x%08X\n"), this, nConnectResult);
		return nConnectResult;
	}
    STDMETHOD(Render)(IPin* pOutputPin)
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		return m_pInnerFilterGraph2->Render(pOutputPin);
	}
    STDMETHOD(RenderFile)(LPCWSTR pszFileName, LPCWSTR pszPlayListFileName)
	{
		_Z4(atlTraceCOM, 4, _T("pszFileName \"%s\", pszPlayListFileName \"%s\"\n"), CString(pszFileName), CString(pszPlayListFileName));
		return m_pInnerFilterGraph2->RenderFile(pszFileName, pszPlayListFileName);
	}
    STDMETHOD(AddSourceFilter)(LPCWSTR pszFileName, LPCWSTR pszFilterName, IBaseFilter** ppBaseFilter)
	{
		_Z4(atlTraceCOM, 4, _T("pszFileName \"%s\", pszFilterName \"%s\"\n"), CString(pszFileName), CString(pszFilterName));
		ReleaseTemporaryUnknown();
		HOOK_PROLOG(CFilterGraphAddRemoveHookHost)
			OnAddSourceFilter(pT, pszFileName, pszFilterName, reinterpret_cast<IUnknown**>(ppBaseFilter), &bDefault);
		HOOK_EPILOG()
		return m_pInnerFilterGraph2->AddSourceFilter(pszFileName, pszFilterName, ppBaseFilter);
	}
	STDMETHOD(SetLogFile)(DWORD_PTR hFile)
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		return m_pInnerFilterGraph2->SetLogFile(hFile);
	}
	STDMETHOD(Abort)()
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		return m_pInnerFilterGraph2->Abort();
	}
	STDMETHOD(ShouldOperationContinue)()
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		return m_pInnerFilterGraph2->ShouldOperationContinue();
	}

// IFilterGraph2
	STDMETHOD(AddSourceFilterForMoniker)(IMoniker* pMoniker, IBindCtx* pBindCtx, LPCWSTR pszFilterName, IBaseFilter** ppBaseFilter)
	{
		_Z4(atlTraceCOM, 4, _T("pszFilterName \"%s\"\n"), CString(pszFilterName));
		ReleaseTemporaryUnknown();
		HOOK_PROLOG(CFilterGraphAddRemoveHookHost)
			OnAddSourceFilterForMoniker(pT, pMoniker, pBindCtx, pszFilterName, reinterpret_cast<IUnknown**>(ppBaseFilter), &bDefault);
		HOOK_EPILOG()
		return m_pInnerFilterGraph2->AddSourceFilterForMoniker(pMoniker, pBindCtx, pszFilterName, ppBaseFilter);
	}
	STDMETHOD(ReconnectEx)(IPin* pPin, const AM_MEDIA_TYPE* pMediaType)
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		HOOK_PROLOG(CFilterGraphConnectHookHost)
			OnReconnectEx(pT, pPin, (const BYTE*) pMediaType, &bDefault);
		HOOK_EPILOG()
		return m_pInnerFilterGraph2->ReconnectEx(pPin, pMediaType);
	}
	STDMETHOD(RenderEx)(IPin* pOutputPin, DWORD nFlags, DWORD* pnContext)
	{
		_Z4(atlTraceCOM, 4, _T("nFlags 0x%x\n"), nFlags);
		return m_pInnerFilterGraph2->RenderEx(pOutputPin, nFlags, pnContext);
	}

// IFilterGraph3
    STDMETHOD(SetSyncSourceEx)(IReferenceClock* pFilterGraphReferenceClock, IReferenceClock* pFilterReferenceClock, IBaseFilter* pBaseFilter)
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		_A(m_pInnerFilterGraph3);
		return m_pInnerFilterGraph3->SetSyncSourceEx(pFilterGraphReferenceClock, pFilterReferenceClock, pBaseFilter);
	}

// IMediaControl
	STDMETHOD(Run)()
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
		_Z4_DSHRESULT(nRunResult);
		return nRunResult;
	}
	STDMETHOD(Pause)()
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
	STDMETHOD(Stop)()
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		HOOK_PROLOG(CFilterGraphStateControlHookHost)
			OnStop(pT, &bDefault);
		HOOK_EPILOG()
		return m_pInnerMediaControl->Stop();
	}
	STDMETHOD(GetState)(LONG nTimeout, OAFilterState* pState)
	{
		_Z5(atlTraceCOM, 5, _T("nTimeout %d\n"), nTimeout);
		return m_pInnerMediaControl->GetState(nTimeout, pState);
	}
	STDMETHOD(RenderFile)(BSTR sFileName)
	{
		_Z4(atlTraceCOM, 4, _T("sFileName \"%s\"\n"), CString(sFileName));
		return m_pInnerMediaControl->RenderFile(sFileName);
	}
    STDMETHOD(AddSourceFilter)(BSTR sFileName, IDispatch** ppDispatch)
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
	STDMETHOD(get_FilterCollection)(IDispatch** ppDispatch)
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		ReleaseTemporaryUnknown();
		return m_pInnerMediaControl->get_FilterCollection(ppDispatch);
	}
	STDMETHOD(get_RegFilterCollection)(IDispatch** ppDispatch)
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		ReleaseTemporaryUnknown();
		return m_pInnerMediaControl->get_RegFilterCollection(ppDispatch);
	}
	STDMETHOD(StopWhenReady)()
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		return m_pInnerMediaControl->StopWhenReady();
	}

// IMediaEventSink
    STDMETHOD(Notify)(LONG nEventCode, LONG_PTR nParameter1, LONG_PTR nParameter2)
	{
		_Z4(atlTraceCOM, 4, _T("nEventCode %s, nParameter1 0x%p, nParameter2 0x%p\n"), _FilterGraphHelper::FormatEventCode(nEventCode), nParameter1, nParameter2);
		//#if defined(_M_IX86)
			// WARN: Guarding section around might be preventing from walking frame up the stack
			// WARN: No guarding section however might cause hosting application crash, within RtlCaptureContext API unfortunately
			if(nEventCode == EC_ERRORABORT) // || nEventCode == EC_VIDEO_SIZE_CHANGED)
				_ATLTRY
				{
					CONTEXT ThreadContext = { CONTEXT_FULL };
					GetCurrentThreadContext(&ThreadContext);
					CDebugTraceCallStack::TraceCallStack(ThreadContext, 32); //(nEventCode == EC_ERRORABORT) ? 32 : 8);
				}
				_ATLCATCHALL()
				{
					_Z_EXCEPTION();
				}
			if(nEventCode == EC_COMPLETE)
				_ATLTRY
				{
					IBaseFilter* pBaseFilter = (IBaseFilter*) nParameter2;
					if(pBaseFilter)
					{
						const CStringW sName = _FilterGraphHelper::GetFilterName(pBaseFilter);
						_Z3(atlTraceCOM, 3, _T("Received EC_COMPLETE from filter 0x%p \"%ls\"\n"), pBaseFilter, sName);
					}
				}
				_ATLCATCHALL()
				{
					_Z_EXCEPTION();
				}
		//#endif // defined(_M_IX86)
		if(!m_pInnerMediaEventSink)
			return S_FALSE;
		return m_pInnerMediaEventSink->Notify(nEventCode, nParameter1, nParameter2);
	}

// IMediaEvent
	STDMETHOD(GetEventHandle)(OAEVENT* pnEventHandle)
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		return m_pInnerMediaEventEx->GetEventHandle(pnEventHandle);
	}
	STDMETHOD(GetEvent)(LONG* pnEventCode, LONG_PTR* pnParameter1, LONG_PTR* pnParameter2, LONG nTimeout)
	{
		_Z4(atlTraceCOM, nTimeout ? 4 : 5, _T("nTimeout %d\n"), nTimeout);
		const HRESULT nGetEventResult = m_pInnerMediaEventEx->GetEvent(pnEventCode, pnParameter1, pnParameter2, nTimeout);
		if(pnEventCode && pnParameter1 && pnParameter2)
			_Z4(atlTraceCOM, (nGetEventResult != E_ABORT) ? 4 : 5, _T("nGetEventResult 0x%08X, *pnEventCode %s, *pnParameter1 0x%p, *pnParameter2 0x%p\n"), nGetEventResult, _FilterGraphHelper::FormatEventCode(*pnEventCode), *pnParameter1, *pnParameter2);
		return nGetEventResult;
	}
	STDMETHOD(WaitForCompletion)(LONG nTimeout, LONG* pnEventCode)
	{
		_Z4(atlTraceCOM, 4, _T("nTimeout %d\n"), nTimeout);
		const HRESULT nWaitForCompletionResult = m_pInnerMediaEventEx->WaitForCompletion(nTimeout, pnEventCode);
		if(pnEventCode)
			_Z4(atlTraceCOM, 4, _T("nWaitForCompletionResult 0x%08X, *pnEventCode %s\n"), nWaitForCompletionResult, _FilterGraphHelper::FormatEventCode(*pnEventCode));
		return nWaitForCompletionResult;
	}
	STDMETHOD(CancelDefaultHandling)(LONG nEventCode)
	{
		_Z4(atlTraceCOM, 4, _T("nEventCode %s\n"), _FilterGraphHelper::FormatEventCode(nEventCode));
		return m_pInnerMediaEventEx->CancelDefaultHandling(nEventCode);
	}
	STDMETHOD(RestoreDefaultHandling)(LONG nEventCode)
	{
		_Z4(atlTraceCOM, 4, _T("nEventCode %s\n"), _FilterGraphHelper::FormatEventCode(nEventCode));
		return m_pInnerMediaEventEx->RestoreDefaultHandling(nEventCode);
	}
	STDMETHOD(FreeEventParams)(LONG nEventCode, LONG_PTR nParameter1, LONG_PTR nParameter2)
	{
		_Z4(atlTraceCOM, 4, _T("nEventCode %s, nParameter1 0x%p, nParameter2 0x%p\n"), _FilterGraphHelper::FormatEventCode(nEventCode), nParameter1, nParameter2);
		return m_pInnerMediaEventEx->FreeEventParams(nEventCode, nParameter1, nParameter2);
	}
       
// IMediaEventEx
	STDMETHOD(SetNotifyWindow)(OAHWND nWindowHandle, LONG nMessage, LONG_PTR nParameter)
	{
		_Z4(atlTraceCOM, 4, _T("nWindowHandle 0x%08X, nMessage 0x%04x, nParameter %p\n"), nWindowHandle, nMessage, nParameter);
		return m_pInnerMediaEventEx->SetNotifyWindow(nWindowHandle, nMessage, nParameter);
	}
	STDMETHOD(SetNotifyFlags)(LONG nNotifyFlags)
	{
		_Z4(atlTraceCOM, 4, _T("nNotifyFlags 0x%x\n"), nNotifyFlags);
		return m_pInnerMediaEventEx->SetNotifyFlags(nNotifyFlags);
	}
	STDMETHOD(GetNotifyFlags)(LONG* pnNotifyFlags)
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		return m_pInnerMediaEventEx->GetNotifyFlags(pnNotifyFlags);
	}

// IObjectWithSite
	STDMETHOD(SetSite)(IUnknown* pSite)
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
    STDMETHOD(GetSite)(REFIID InterfaceIdentifier, VOID** ppvSite)
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

////////////////////////////////////////////////////////////
// CPrivateThreadSpy

class ATL_NO_VTABLE CPrivateThreadSpy :
	public CSpyT<CPrivateThreadSpy, &CLSID_FilterGraphPrivateThread>,
	public CComCoClass<CPrivateThreadSpy, &CLSID_PrivateThreadSpy>
{
public:
	enum { IDR = IDR_PRIVATETHREADFILTERGRAPHSPY };

private:
	static LPCTSTR g_pszClassName;

public:
	//typedef CBlackListAwareComCreatorT<CComObjectCached<CPrivateThreadSpy>, CPrivateThreadSpy, &g_pszClassName> _ClassFactoryCreatorClass; // DECLARE_CLASSFACTORY override
	typedef CComCreator2<CBlackListAwareComCreatorT<CComObject<CPrivateThreadSpy>, CPrivateThreadSpy, &g_pszClassName>, CBlackListAwareComCreatorT<CComAggObject<CPrivateThreadSpy>, CPrivateThreadSpy, &g_pszClassName> > _CreatorClass; // DECLARE_AGGREGATABLE override

public:
// CPrivateThreadSpy
};

__declspec(selectany) LPCTSTR CPrivateThreadSpy::g_pszClassName = _T("CPrivateThreadSpy");

OBJECT_ENTRY_AUTO(__uuidof(PrivateThreadSpy), CPrivateThreadSpy)
