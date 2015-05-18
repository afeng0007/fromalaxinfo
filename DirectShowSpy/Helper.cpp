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

#include "stdafx.h"
#include "resource.h"
#include "FilterGraphHelper.h"
#include "MediaSampleTrace.h"

////////////////////////////////////////////////////////////
// Test

#if _DEVELOPMENT && FALSE

COMPILER_MESSAGE("Development: CFilterGraphHelper::DoPropertyFrameModal as Test")

#if defined(_WIN64)
	extern "C" __declspec(dllexport) 
#else
	#pragma comment(linker, "/EXPORT:Test=_Test@0,PRIVATE")
	extern "C" // __declspec(dllexport) 
#endif // defined(_WIN64)

HRESULT STDMETHODCALLTYPE Test()
{
	_ATLTRY
	{
		CSingleThreadedApartment SingleThreadedApartment;
		CGenericFilterGraph FilterGraph;
		FilterGraph.CoCreateInstance();
		__C(FilterGraph.m_pFilterGraph->RenderFile(_T("E:\\Media\\Robotica_1080.wmv"), NULL));
		_ATLTRY
		{
			const CComQIPtr<ISpy> pSpy = FilterGraph.m_pFilterGraph;
			if(pSpy)
				__C(pSpy->put_FriendlyName(CComBSTR(_T("Test"))));
		}
		_ATLCATCHALL()
		{
			_Z_EXCEPTION();
		}
		CLocalObjectPtr<CFilterGraphHelper> pHelper;
		pHelper->SetFilterGraph(FilterGraph.m_pFilterGraph);
		pHelper->DoPropertyFrameModal(0);
	}
	_ATLCATCH(Exception)
	{
		_C(Exception);
	}
	return S_OK;
}

#endif // _DEVELOPMENT

#if _DEVELOPMENT //&& FALSE

COMPILER_MESSAGE("Development: MediaSampleTrace test as Test")

////////////////////////////////////////////////////////////
// CRendererFilter

class ATL_NO_VTABLE CRendererFilter :
	public CComObjectRootEx<CComMultiThreadModelNoCS>,
	//public CComCoClass<CRendererFilter>,
	public CBaseFilterT<CRendererFilter>,
	public CBasePersistT<CRendererFilter>,
	public CAmFilterMiscFlagsT<CRendererFilter, AM_FILTER_MISC_FLAGS_IS_RENDERER>,
	public CUpstreamMediaPositionAwareRendererFilterT<CRendererFilter>
{
public:
	//enum { IDR = };

DECLARE_NO_REGISTRY() //DECLARE_REGISTRY_RESOURCEID(IDR)

DECLARE_PROTECT_FINAL_CONSTRUCT()

//DECLARE_QI_TRACE(CRendererFilter)

BEGIN_COM_MAP(CRendererFilter)
	COM_INTERFACE_ENTRY(IBaseFilter)
	COM_INTERFACE_ENTRY(IMediaFilter)
	COM_INTERFACE_ENTRY_IID(__uuidof(IPersist), IBaseFilter)
	COM_INTERFACE_ENTRY(IAMFilterMiscFlags)
	COM_INTERFACE_ENTRY_FUNC(__uuidof(IMediaSeeking), 0, QueryUpstreamMediaPositionInterface)
	COM_INTERFACE_ENTRY_FUNC(__uuidof(IDispatch), 0, QueryUpstreamMediaPositionInterface)
	COM_INTERFACE_ENTRY_FUNC(__uuidof(IMediaPosition), 0, QueryUpstreamMediaPositionInterface)
END_COM_MAP()

public:

	////////////////////////////////////////////////////////
	// CInputPin

	class ATL_NO_VTABLE CInputPin :
		public CComObjectRootEx<CComMultiThreadModelNoCS>,
		public CInputPinT<CInputPin, CRendererFilter>
	{
	public:

	//DECLARE_QI_TRACE(CRendererFilter::CInputPin)

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
	};

private:
	CObjectPtr<CInputPin> m_pInputPin;
	mutable CRoCriticalSection m_ReceiveCriticalSection;
	CComPtr<IMediaSampleTrace> m_pMediaSampleTrace;

public:
// CRendererFilter
	CRendererFilter() :
		CBasePersistT<CRendererFilter>(GetDataCriticalSection())
	{
		_Z4_THIS();
	}
	~CRendererFilter()
	{
		_Z4_THIS();
	}
	HRESULT FinalConstruct()
	{
		_ATLTRY
		{
			m_pInputPin.Construct()->Initialize(this, L"Input");
			AddPin(m_pInputPin);
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
		m_pInputPin.Release();
	}
	VOID DeliverNewSegment(IPin*, REFERENCE_TIME nStartTime, REFERENCE_TIME nStopTime, DOUBLE fRate)
	{
		CRoCriticalSectionLock ReceiveLock(m_ReceiveCriticalSection);
		if(m_pMediaSampleTrace)
			_V(m_pMediaSampleTrace->RegisterNewSegment((IBaseFilter*) this, L"Main", nStartTime, nStopTime, fRate, NULL));
	}
	VOID DeliverEndOfStream(CInputPin*)
	{
		CRoCriticalSectionLock ReceiveLock(m_ReceiveCriticalSection);
		if(m_pMediaSampleTrace)
			_V(m_pMediaSampleTrace->RegisterEndOfStream((IBaseFilter*) this, L"Main", L"That's All!"));
		NotifyComplete(S_OK);
	}
	VOID CueFilter()
	{
		CRoCriticalSectionLock ReceiveLock(m_ReceiveCriticalSection);
		CRoCriticalSectionLock DataLock(GetDataCriticalSection());
		if(!m_pInputPin->IsPeerPinAvailable())
		{
			NotifyComplete(S_FALSE);
			return;
		}
		const CComQIPtr<ISpy> pSpy = GetFilterGraph();
		_A(pSpy);
		CComPtr<IMediaSampleTrace> pMediaSampleTrace;
		__C(pSpy->CreateMediaSampleTrace(&pMediaSampleTrace));
		m_pMediaSampleTrace = pMediaSampleTrace;
	}
	VOID StopFilter()
	{
		CRoCriticalSectionLock ReceiveLock(m_ReceiveCriticalSection);
		CRoCriticalSectionLock DataLock(GetDataCriticalSection());
		m_pMediaSampleTrace.Release();
	}
	VOID ReceiveMediaSample(CInputPin* pInputPin, IMediaSample2* pMediaSample, HRESULT& nReceiveResult)
	{
		CRoCriticalSectionLock ReceiveLock(m_ReceiveCriticalSection);
		CMediaSampleProperties Properties(pMediaSample);
		CRoCriticalSectionLock DataLock(GetDataCriticalSection());
		if(m_pMediaSampleTrace)
			_V(m_pMediaSampleTrace->RegisterMediaSample((IBaseFilter*) this, L"Main", (BYTE*) (AM_SAMPLE2_PROPERTIES*) &Properties, NULL));
		nReceiveResult = S_OK;
	}
	const CObjectPtr<CInputPin>& GetInputPin() const
	{
		return m_pInputPin;
	}
};

#if defined(_WIN64)
	extern "C" __declspec(dllexport) 
#else
	#pragma comment(linker, "/EXPORT:Test=_Test@0,PRIVATE")
	extern "C" // __declspec(dllexport) 
#endif // defined(_WIN64)

HRESULT STDMETHODCALLTYPE Test()
{
	_ATLTRY
	{
		CSingleThreadedApartment SingleThreadedApartment;
		CGenericFilterGraph FilterGraph;
		FilterGraph.CoCreateInstance();
		const CComPtr<IBaseFilter> pSourceBaseFilter = FilterGraph.AddSourceFilter(
			_T("E:\\Media\\Robotica_1080.wmv")
			//_T("E:\\Media\\Windows Phone - Design for Developers.mp4")
			);
		CComPtr<IPin> pOutputPin = _FilterGraphHelper::GetFilterPin(pSourceBaseFilter, PINDIR_OUTPUT);
		if(FALSE)
		{
			class __declspec(uuid("{025BE2E4-1787-4DA4-A585-C5B2B9EEB57C}")) Demultiplexer;
			CComPtr<IBaseFilter> pBaseFilter;
			__C(pBaseFilter.CoCreateInstance(__uuidof(Demultiplexer)));
			__C(FilterGraph.AddFilter(pBaseFilter, _T("Demultiplexer")));
			__C(FilterGraph.Connect(pOutputPin, _FilterGraphHelper::GetFilterPin(pBaseFilter, PINDIR_INPUT)));
			pOutputPin = _FilterGraphHelper::GetFilterPin(pBaseFilter, PINDIR_OUTPUT);
		}
		CObjectPtr<CRendererFilter> pRendererFilter;
		pRendererFilter.Construct();
		__C(FilterGraph.AddFilter(pRendererFilter, _T("Renderer")));
		__C(FilterGraph.Connect(pOutputPin, pRendererFilter->GetInputPin()));
		__C(FilterGraph.m_pMediaFilter->SetSyncSource(NULL));
		const CComQIPtr<ISpy> pSpy = FilterGraph.m_pFilterGraph;
		_A(pSpy);
		__C(pSpy->put_FriendlyName(CComBSTR(_T("Test"))));
		__C(FilterGraph.m_pMediaControl->Run());
		__C(FilterGraph.WaitForCompletionDispatchingMessages());
		CMediaSampleTracePropertySheet PropertySheet;
		PropertySheet.DoModal(GetActiveWindow());
	}
	_ATLCATCH(Exception)
	{
		_C(Exception);
	}
	return S_OK;
}

#endif // _DEVELOPMENT
