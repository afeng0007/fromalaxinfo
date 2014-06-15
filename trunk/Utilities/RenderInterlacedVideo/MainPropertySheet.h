////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2014
// Created by Roman Ryltsov roman@alax.info

#pragma once

#include "AboutDialog.h"
#include <dshow.h>
#include <d3d9.h>
#include <vmr9.h>
#include <evr.h>
#include <evr9.h>
#include <dxva.h>
#import "libid:B9EC374B-834B-4DA9-BFB5-C1872CE736FF" raw_interfaces_only // AlaxInfoDirectShowSpy
#include "rodshow.h"

////////////////////////////////////////////////////////////
// CVrWindowT

template <typename T>
class CVrWindowT
{
public:
// CVrWindowT
	VOID DoHelperModal(IUnknown* pUnknown, LPCTSTR pszCaption = NULL)
	{
		T* pT = static_cast<T*>(this);
		CComPtr<AlaxInfoDirectShowSpy::IFilterGraphHelper> pFilterGraphHelper;
		const HRESULT nCoCreateInstanceResult = pFilterGraphHelper.CoCreateInstance(__uuidof(AlaxInfoDirectShowSpy::FilterGraphHelper));
		if(SUCCEEDED(nCoCreateInstanceResult))
		{
			__C(pFilterGraphHelper->put_FilterGraph(pUnknown));
			__C(pFilterGraphHelper->DoPropertyFrameModal((LONG) (LONG_PTR) pT->m_hWnd));
			return;
		}
		COlePropertyFrameDialog Dialog(pUnknown, pszCaption);
		Dialog.SetObjectPages();
		Dialog.DoModal(pT->m_hWnd);
	}
};

////////////////////////////////////////////////////////////
// CVmr7Window

class CVmr7Window :
	public CControlWindowT<CVmr7Window>,
	public CVrWindowT<CVmr7Window>
{
public:

BEGIN_MSG_MAP_EX(CVmr7Window)
	//CHAIN_MSG_MAP(CControlWindowT<CVmr7Window>)
	MSG_WM_ERASEBKGND(OnEraseBkgnd)
	MSG_WM_PAINT(OnPaint)
	MSG_WM_DISPLAYCHANGE(OnDisplayChange)
	MSG_WM_SIZE(OnSize)
	MSG_WM_LBUTTONDBLCLK(OnLButtonDblClk)
END_MSG_MAP()

public:
	CComPtr<IBaseFilter> m_pBaseFilter;
	CComPtr<IVMRWindowlessControl> m_pVmrWindowlessControl;

public:
// CVmr7Window
	static CLSID GetRendererClassIdentifier()
	{
		return CLSID_VideoMixingRenderer;
	}
	static CComPtr<IBaseFilter> CoCreateBaseFilterInstance()
	{
		CComPtr<IBaseFilter> pBaseFilter;
		__C(pBaseFilter.CoCreateInstance(GetRendererClassIdentifier()));
		return pBaseFilter;
	}
	VOID Initialize(IBaseFilter* pBaseFilter)
	{
		_A(pBaseFilter);
		_A(!m_pBaseFilter && !m_pVmrWindowlessControl);
		m_pBaseFilter = pBaseFilter;
		CComQIPtr<IVMRFilterConfig> pVmrFilterConfig = pBaseFilter;
		__D(pVmrFilterConfig, E_NOINTERFACE);
		__C(pVmrFilterConfig->SetRenderingMode(VMRMode_Windowless));
		// NOTE: Cause the VMR to load the mixer and compositor
		//       See http://msdn.microsoft.com/en-us/library/windows/desktop/dd390448%28v=vs.85%29.aspx
		__C(pVmrFilterConfig->SetNumberOfStreams(1));
		m_pVmrWindowlessControl = CComQIPtr<IVMRWindowlessControl>(m_pBaseFilter);
		__D(m_pVmrWindowlessControl, E_NOINTERFACE);
		__C(m_pVmrWindowlessControl->SetVideoClippingWindow(m_hWnd));
		UpdateVideoPosition();
	}
	VOID Terminate()
	{
		m_pBaseFilter = NULL;
		m_pVmrWindowlessControl = NULL;
	}
	CRect GetVideoPosition() const
	{
		CRect Position;
		_W(GetClientRect(Position));
		return Position;
	}
	BOOL UpdateVideoPosition()
	{
		_A(m_pVmrWindowlessControl && IsWindow());
		CRect VideoPosition = GetVideoPosition();
		_Z4(atlTraceGeneral, 4, _T("m_pVmrWindowlessControl 0x%p, VideoPosition at (%d, %d) size (%d, %d)\n"), m_pVmrWindowlessControl, VideoPosition.left, VideoPosition.top, VideoPosition.Width(), VideoPosition.Height());
		const HRESULT nSetVideoPositionResult = m_pVmrWindowlessControl->SetVideoPosition(NULL, VideoPosition);
		__C(nSetVideoPositionResult); //_Z45_DSHRESULT(nSetVideoPositionResult);
		return SUCCEEDED(nSetVideoPositionResult);
	}

// Window Message Handlers
	LRESULT OnEraseBkgnd(CDCHandle Dc)
	{
		Dc;
		if(m_pVmrWindowlessControl)
		{
			return TRUE;
		} else
			SetMsgHandled(FALSE);
		return 0;
	}
	LRESULT OnPaint(CDCHandle)
	{
		if(m_pVmrWindowlessControl)
		{
			CPaintDC Dc(m_hWnd);
			const HRESULT nRepaintVideoResult = m_pVmrWindowlessControl->RepaintVideo(m_hWnd, Dc);
			_Z45_DSHRESULT(nRepaintVideoResult);
		} else
			SetMsgHandled(FALSE);
		return 0;
	}
	LRESULT OnDisplayChange(UINT nDepth, CSize Extent)
	{
		if(m_pVmrWindowlessControl)
		{
			const HRESULT nDisplayModeChangedResult = m_pVmrWindowlessControl->DisplayModeChanged();
			_Z4_DSHRESULT(nDisplayModeChangedResult);
		}
		return 0;
	}
	LRESULT OnSize(UINT nType, CSize)
	{
		if(nType != SIZE_MINIMIZED)
			if(m_pVmrWindowlessControl)
				UpdateVideoPosition();
		return 0;
	}
	LRESULT OnLButtonDblClk(UINT, CPoint Position)
	{
		DoHelperModal(m_pBaseFilter, _T("VMR-7"));
		return 0;
	}
};

////////////////////////////////////////////////////////////
// CVmr9Window

class CVmr9Window :
	public CControlWindowT<CVmr9Window>,
	public CVrWindowT<CVmr9Window>
{
public:

BEGIN_MSG_MAP_EX(CVmr9Window)
	//CHAIN_MSG_MAP(CControlWindowT<CVmr9Window>)
	MSG_WM_ERASEBKGND(OnEraseBkgnd)
	MSG_WM_PAINT(OnPaint)
	MSG_WM_DISPLAYCHANGE(OnDisplayChange)
	MSG_WM_SIZE(OnSize)
	MSG_WM_LBUTTONDBLCLK(OnLButtonDblClk)
END_MSG_MAP()

public:

	////////////////////////////////////////////////////////
	// CMonitorInformation

	class CMonitorInformation
	{
	public:
		CComPtr<IVMRMonitorConfig9> m_pVmrMonitorConfig;
		CTempBufferT<VMR9MonitorInfo> m_pMonitorInformations;
		SIZE_T m_nMonitorInformationCount;

	public:
	// CMonitorInformation
		CMonitorInformation() :
			m_nMonitorInformationCount(0)
		{
		}
		CMonitorInformation(IVMRMonitorConfig9* pVmrMonitorConfig) :
			m_nMonitorInformationCount(0)
		{
			Initialize(pVmrMonitorConfig);
		}
		CMonitorInformation(IUnknown* pUnknown) :
			m_nMonitorInformationCount(0)
		{
			Initialize(pUnknown);
		}
		VOID Initialize(IVMRMonitorConfig9* pVmrMonitorConfig)
		{
			_A(pVmrMonitorConfig);
			m_pVmrMonitorConfig = pVmrMonitorConfig;
			DWORD nMonitorInformationCount = 0;
			m_pVmrMonitorConfig->GetAvailableMonitors(NULL, 0, &nMonitorInformationCount);
			if(nMonitorInformationCount < 32)
				nMonitorInformationCount = 32;
			m_pMonitorInformations.Free();
			_W(m_pMonitorInformations.Allocate(nMonitorInformationCount));
			__C(m_pVmrMonitorConfig->GetAvailableMonitors(m_pMonitorInformations, nMonitorInformationCount, &nMonitorInformationCount));
			m_nMonitorInformationCount = nMonitorInformationCount;
		}
		VOID Initialize(IUnknown* pUnknown)
		{
			const CComQIPtr<IVMRMonitorConfig9> pVmrMonitorConfig = pUnknown;
			__D(pVmrMonitorConfig, E_NOINTERFACE);
			Initialize(pVmrMonitorConfig);
		}
		VOID TraceMonitor() const
		{
			#if _DEVELOPMENT
				_A(m_pVmrMonitorConfig);
				UINT nMonitor, nDefaultMonitor;
				__C(m_pVmrMonitorConfig->GetMonitor(&nMonitor));
				__C(m_pVmrMonitorConfig->GetDefaultMonitor(&nDefaultMonitor));
				_Z4(atlTraceGeneral, 4, _T("nMonitor %d, nDefaultMonitor %d\n"), nMonitor, nDefaultMonitor);
			#endif // _DEVELOPMENT
		}
		BOOL SuggestMonitor(RECT Position, UINT& nSuggestMonitor) const
		{
			BOOL bSuggestMonitorAvailable = FALSE;
			LONG nSuggestMonitorScore;
			for(DWORD nIndex = 0; nIndex < m_nMonitorInformationCount; nIndex++)
			{
				const VMR9MonitorInfo& MonitorInformation = m_pMonitorInformations[nIndex];
				const CRect& MonitorPosition = reinterpret_cast<const CRect&>(MonitorInformation.rcMonitor);
				_Z4(atlTraceGeneral, 4, _T("MonitorInformation.uDevID %d, .hMon 0x%08X, .dwFlags 0x%X, .szDevice \"%ls\", .szDescription \"%ls\"\n"), 
					MonitorInformation.uDevID,
					//MonitorInformation.rcMonitor.left, ...
					MonitorInformation.hMon, MonitorInformation.dwFlags, 
					MonitorInformation.szDevice, MonitorInformation.szDescription,
					//MonitorInformation.liDriverVersion,
					//MonitorInformation.dwVendorId, MonitorInformation.dwDeviceId, MonitorInformation.dwSubSysId, MonitorInformation.dwRevision,
					0);
				CRect VisiblePosition;
				if(!VisiblePosition.IntersectRect(MonitorPosition, &Position))
					continue;
				const LONG nScore = VisiblePosition.Height() * VisiblePosition.Width();
				if(bSuggestMonitorAvailable && nSuggestMonitorScore > nScore)
					continue;
				nSuggestMonitor = MonitorInformation.uDevID;
				bSuggestMonitorAvailable = TRUE;
				nSuggestMonitorScore = nScore;
			}
			return bSuggestMonitorAvailable;
		}
	};

public:
	CComPtr<IBaseFilter> m_pBaseFilter;
	CComPtr<IVMRWindowlessControl9> m_pVmrWindowlessControl;

public:
// CVmr9Window
	static CLSID GetRendererClassIdentifier()
	{
		return CLSID_VideoMixingRenderer9;
	}
	static CComPtr<IBaseFilter> CoCreateBaseFilterInstance()
	{
		CComPtr<IBaseFilter> pBaseFilter;
		__C(pBaseFilter.CoCreateInstance(GetRendererClassIdentifier()));
		return pBaseFilter;
	}
	VOID Initialize(IBaseFilter* pBaseFilter)
	{
		_A(pBaseFilter);
		_A(!m_pBaseFilter && !m_pVmrWindowlessControl);
		m_pBaseFilter = pBaseFilter;
		CComQIPtr<IVMRFilterConfig9> pVmrFilterConfig = pBaseFilter;
		__D(pVmrFilterConfig, E_NOINTERFACE);
		__C(pVmrFilterConfig->SetRenderingMode(VMR9Mode_Windowless));
		m_pVmrWindowlessControl = CComQIPtr<IVMRWindowlessControl9>(m_pBaseFilter);
		__D(m_pVmrWindowlessControl, E_NOINTERFACE);
		__C(m_pVmrWindowlessControl->SetVideoClippingWindow(m_hWnd));
		UpdateVideoPosition();
	}
	VOID Terminate()
	{
		m_pBaseFilter = NULL;
		m_pVmrWindowlessControl = NULL;
	}
	CRect GetVideoPosition() const
	{
		CRect Position;
		_W(GetClientRect(Position));
		return Position;
	}
	BOOL UpdateVideoPosition()
	{
		_A(m_pVmrWindowlessControl && IsWindow());
		CRect VideoPosition = GetVideoPosition();
		_Z4(atlTraceGeneral, 4, _T("m_pVmrWindowlessControl 0x%p, VideoPosition at (%d, %d) size (%d, %d)\n"), m_pVmrWindowlessControl, VideoPosition.left, VideoPosition.top, VideoPosition.Width(), VideoPosition.Height());
		const HRESULT nSetVideoPositionResult = m_pVmrWindowlessControl->SetVideoPosition(NULL, VideoPosition);
		__C(nSetVideoPositionResult); //_Z45_DSHRESULT(nSetVideoPositionResult);
		return SUCCEEDED(nSetVideoPositionResult);
	}

// Window Message Handlers
	LRESULT OnEraseBkgnd(CDCHandle Dc)
	{
		Dc;
		if(m_pVmrWindowlessControl)
		{
			return TRUE;
		} else
			SetMsgHandled(FALSE);
		return 0;
	}
	LRESULT OnPaint(CDCHandle)
	{
		if(m_pVmrWindowlessControl)
		{
			CPaintDC Dc(m_hWnd);
			const HRESULT nRepaintVideoResult = m_pVmrWindowlessControl->RepaintVideo(m_hWnd, Dc);
			_Z45_DSHRESULT(nRepaintVideoResult);
		} else
			SetMsgHandled(FALSE);
		return 0;
	}
	LRESULT OnDisplayChange(UINT nDepth, CSize Extent)
	{
		if(m_pVmrWindowlessControl)
		{
			const HRESULT nDisplayModeChangedResult = m_pVmrWindowlessControl->DisplayModeChanged();
			_Z45_DSHRESULT(nDisplayModeChangedResult);
		}
		return 0;
	}
	LRESULT OnSize(UINT nType, CSize)
	{
		if(nType != SIZE_MINIMIZED)
			if(m_pVmrWindowlessControl)
				UpdateVideoPosition();
		return 0;
	}
	LRESULT OnLButtonDblClk(UINT, CPoint Position)
	{
		DoHelperModal(m_pBaseFilter, _T("VMR-9"));
		return 0;
	}
};

////////////////////////////////////////////////////////////
// CEvrWindow

class CEvrWindow :
	public CControlWindowT<CEvrWindow>,
	public CVrWindowT<CEvrWindow>
{
public:

BEGIN_MSG_MAP_EX(CEvrWindow)
	//CHAIN_MSG_MAP(CControlWindowT<CEvrWindow>)
	MSG_WM_ERASEBKGND(OnEraseBkgnd)
	MSG_WM_PAINT(OnPaint)
	MSG_WM_SIZE(OnSize)
	MSG_WM_LBUTTONDBLCLK(OnLButtonDblClk)
END_MSG_MAP()

public:
	CComPtr<IBaseFilter> m_pBaseFilter;
	CComPtr<IMFVideoDisplayControl> m_pMfVideoDisplayControl;

public:
// CEvrWindow
	static CLSID GetRendererClassIdentifier()
	{
		return CLSID_EnhancedVideoRenderer;
	}
	static CComPtr<IBaseFilter> CoCreateBaseFilterInstance()
	{
		CComPtr<IBaseFilter> pBaseFilter;
		__C(pBaseFilter.CoCreateInstance(GetRendererClassIdentifier()));
		return pBaseFilter;
	}
	VOID Initialize(IBaseFilter* pBaseFilter)
	{
		_A(pBaseFilter);
		_A(!m_pBaseFilter && !m_pMfVideoDisplayControl);
		m_pBaseFilter = pBaseFilter;
		CComQIPtr<IMFGetService> pMfGetInterface = pBaseFilter;
		CComPtr<IMFVideoDisplayControl> pMfVideoDisplayControl;
		__C(pMfGetInterface->GetService(MR_VIDEO_RENDER_SERVICE, __uuidof(IMFVideoDisplayControl), (VOID**) &pMfVideoDisplayControl));
		_A(pMfVideoDisplayControl);
		m_pMfVideoDisplayControl = pMfVideoDisplayControl;
		__C(pMfVideoDisplayControl->SetVideoWindow(m_hWnd));
		UpdateVideoPosition();
		//__C(pMfVideoDisplayControl->SetAspectRatioMode(MFVideoARMode_None)); // As opposed to default MFVideoARMode_Picture - disable letterboxing
	}
	VOID Terminate()
	{
		m_pBaseFilter = NULL;
		m_pMfVideoDisplayControl = NULL;
	}
	CRect GetVideoPosition() const
	{
		CRect Position;
		_W(GetClientRect(Position));
		return Position;
	}
	BOOL UpdateVideoPosition()
	{
		_A(m_pMfVideoDisplayControl && IsWindow());
		CRect VideoPosition = GetVideoPosition();
		_Z4(atlTraceGeneral, 4, _T("m_pMfVideoDisplayControl 0x%p, VideoPosition at (%d, %d) size (%d, %d)\n"), m_pMfVideoDisplayControl, VideoPosition.left, VideoPosition.top, VideoPosition.Width(), VideoPosition.Height());
		const HRESULT nSetVideoPositionResult = m_pMfVideoDisplayControl->SetVideoPosition(NULL, VideoPosition);
		__C(nSetVideoPositionResult); //_Z45_DSHRESULT(nSetVideoPositionResult);
		return SUCCEEDED(nSetVideoPositionResult);
	}

// Window Message Handlers
	LRESULT OnEraseBkgnd(CDCHandle Dc)
	{
		Dc;
		if(m_pMfVideoDisplayControl)
		{
			return TRUE;
		} else
			SetMsgHandled(FALSE);
		return 0;
	}
	LRESULT OnPaint(CDCHandle)
	{
		if(m_pMfVideoDisplayControl)
		{
			CPaintDC Dc(m_hWnd);
			const HRESULT nRepaintVideoResult = m_pMfVideoDisplayControl->RepaintVideo();
			_Z4(atlTraceUI, SUCCEEDED(nRepaintVideoResult) ? 6 : 4, _T("nRepaintVideoResult 0x%08x\n"), nRepaintVideoResult);
		} else
			SetMsgHandled(FALSE);
		return 0;
	}
	LRESULT OnSize(UINT nType, CSize)
	{
		if(nType != SIZE_MINIMIZED)
			if(m_pMfVideoDisplayControl)
				UpdateVideoPosition();
		return 0;
	}
	LRESULT OnLButtonDblClk(UINT, CPoint Position)
	{
		DoHelperModal(m_pBaseFilter, _T("EVR"));
		return 0;
	}
};

////////////////////////////////////////////////////////////
// CMainPropertySheet

class CMainPropertySheet : 
	public CSizablePropertySheetT<CMainPropertySheet>
{
public:

BEGIN_MSG_MAP_EX(CMainPropertySheet)
	CHAIN_MSG_MAP(CSizablePropertySheet)
	MESSAGE_HANDLER_EX(WM_SETLARGERINITIALPOSITION, OnSetLargerInitialPosition)
END_MSG_MAP()

public:

	////////////////////////////////////////////////////////
	// Window Message Identifiers

	enum
	{
		MW_FIRST = WM_APP + 100,
		WM_SETLARGERINITIALPOSITION,
	};

	////////////////////////////////////////////////////////
	// CSourceFilter

	class ATL_NO_VTABLE CSourceFilter :
		public CComObjectRootEx<CComMultiThreadModelNoCS>,
		public CComCoClass<CSourceFilter>,
		public CPushSourceFilterT<CSourceFilter>,
		public CBasePersistT<CSourceFilter>,
		public CAmFilterMiscFlagsT<CSourceFilter, AM_FILTER_MISC_FLAGS_IS_SOURCE>
	{
	public:

	DECLARE_NO_REGISTRY()

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	//DECLARE_QI_TRACE(CSourceFilter)

	BEGIN_COM_MAP(CSourceFilter)
		COM_INTERFACE_ENTRY(IBaseFilter)
		COM_INTERFACE_ENTRY(IMediaFilter)
		COM_INTERFACE_ENTRY_IID(__uuidof(IPersist), IBaseFilter)
		COM_INTERFACE_ENTRY(IAMFilterMiscFlags)
	END_COM_MAP()

	public:

		////////////////////////////////////////////////////////
		// CThreadContext

		class CThreadContext :
			public CPushSourceFilter::CThreadContext
		{
		public:
			SIZE_T m_nMediaSampleIndex;

		public:
		// CThreadContext
			CThreadContext(CEvent& TerminationEvent) :
				CPushSourceFilter::CThreadContext(TerminationEvent),
				m_nMediaSampleIndex(0)
			{
			}
		};

		////////////////////////////////////////////////////////
		// COutputPin

		class ATL_NO_VTABLE COutputPin :
			public CComObjectRootEx<CComMultiThreadModelNoCS>,
			public CPushSourceFilterT<CSourceFilter>::COutputPinT<COutputPin, CSourceFilter, CThreadContext>,
			public CAmPushSourceT<COutputPin, 0>
		{
		public:

		//DECLARE_QI_TRACE(CSourceFilter::COutputPin)

		BEGIN_COM_MAP(COutputPin)
			COM_INTERFACE_ENTRY(IPin)
			COM_INTERFACE_ENTRY(IAMPushSource)
			COM_INTERFACE_ENTRY(IAMLatency)
		END_COM_MAP()

		private:

			VOID Paint(BYTE* pnData, SSIZE_T nNextRowOffset, BYTE nColor)
			{
				// 400 px high from 40, 60 px wide from current, line step 2
				for(LONG nY = (480 - 2 * 40) / 2; nY > 0; nY--)
				{
					for(LONG nX = 0; nX < 60; nX++)
						pnData[nX * 2] = nColor;
					pnData += 2 * nNextRowOffset;
				}
			}

		public:
		// COutputPin
			COutputPin()
			{
				_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
			}
			~COutputPin()
			{
				_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
			}
			VOID EnumerateMediaTypes(CAtlList<CMediaType>& MediaTypeList)
			{
				//CRoCriticalSectionLock DataLock(GetDataCriticalSection());
				_W(MediaTypeList.AddTail(GetFilter()->m_pRequestedMediaType));
			}
			BOOL CheckMediaType(const CMediaType& pMediaType) const
			{
				_A(pMediaType);
				if(pMediaType->majortype != MEDIATYPE_Video)
					return FALSE;
				//CRoCriticalSectionLock DataLock(GetDataCriticalSection());
				_A(GetFilter()->m_pRequestedMediaType);
				//if(GetFilter()->m_pRequestedMediaType.Compare(pMediaType))
				//	return TRUE;
				return CVideoInfoHeader::Compare(&GetFilter()->m_pRequestedMediaType.GetCompatibleVideoInfoHeader(), &pMediaType.GetCompatibleVideoInfoHeader(), FALSE);
			}
			BOOL DecideMemAllocatorProperties(IMemAllocator* pMemAllocator, ALLOCATOR_PROPERTIES Properties)
			{
				static const SIZE_T g_nMiminalBufferCount = 8;
				Properties.cBuffers = max(Properties.cBuffers, (LONG) g_nMiminalBufferCount);
				CRoCriticalSectionLock DataLock(GetDataCriticalSection());
				const CMediaType& pMediaType = GetMediaTypeReference();
				const CVideoInfoHeader VideoInfoHeader = pMediaType.GetCompatibleVideoInfoHeader();
				const CSize Extent = VideoInfoHeader.GetExtent();
				SIZE_T nBufferSize;
				if(Extent.cx >= 1080)
				{
					// NOTE: At higher resolutions we are good to go with much smaller buffers
					static const UINT g_nPixelBitCount = 7;
					nBufferSize = Extent.cy * Extent.cx * g_nPixelBitCount / 8;
				} else
				{
					static const UINT g_nPixelBitCount = 14;
					nBufferSize = Extent.cy * Extent.cx * g_nPixelBitCount / 8;
				}
				return SetMemAllocatorBufferSize(pMemAllocator, Properties, nBufferSize);
			}
			BOOL ComposeMediaSample(CThreadContext& ThreadContext, IMediaSample* pMediaSample)
			{
				CMediaSampleProperties OutputProperties(pMediaSample);
				HandleMediaTypeChange(OutputProperties);
				const CMediaType pMediaType = GetMediaType();
				const CVideoInfoHeader2* pVideoInfoHeader2 = pMediaType.GetVideoInfoHeader2();
				OutputProperties.dwTypeSpecificFlags = (!(ThreadContext.m_nMediaSampleIndex & 1) ? AM_VIDEO_FLAG_FIELD2 : AM_VIDEO_FLAG_FIELD1);
				OutputProperties.dwSampleFlags = AM_SAMPLE_SPLICEPOINT | (ThreadContext.m_nMediaSampleIndex ? 0 : AM_SAMPLE_DATADISCONTINUITY) | AM_SAMPLE_TIMEVALID | AM_SAMPLE_STOPVALID;
				OutputProperties.lActual = GetMediaType().GetCompatibleVideoInfoHeader().GetDataSize();
				OutputProperties.tStart = ThreadContext.m_nMediaSampleIndex * pVideoInfoHeader2->AvgTimePerFrame / 2;
				OutputProperties.tStop = OutputProperties.tStart + 1;
				OutputProperties.dwStreamId = 0;
				#pragma region Data
				FillMemory(OutputProperties.pbBuffer, OutputProperties.lActual, 0x80);
				const CSize Extent = pVideoInfoHeader2->GetExtent();
				SSIZE_T nFirstRowOffset, nNextRowOffset;
				pVideoInfoHeader2->GetData(nFirstRowOffset, nNextRowOffset);
				BYTE* pnData = OutputProperties.pbBuffer;
				static const REFERENCE_TIME g_nPeriod = 3 * 1000 * 10000i64; // 3 seconds for the move back and forth
				REFERENCE_TIME nField2Time = (ThreadContext.m_nMediaSampleIndex & ~1) * pVideoInfoHeader2->AvgTimePerFrame / 2;
				REFERENCE_TIME nField1Time = ((ThreadContext.m_nMediaSampleIndex - 1) | 1) * pVideoInfoHeader2->AvgTimePerFrame / 2;
				_Z5(atlTraceGeneral, 5, _T("m_nMediaSampleIndex %d, OutputProperties.tStart %s, nField2Time %s, nField1Time %s\n"), 
					ThreadContext.m_nMediaSampleIndex,
					_FilterGraphHelper::FormatReferenceTime(OutputProperties.tStart),
					_FilterGraphHelper::FormatReferenceTime(nField2Time), 
					_FilterGraphHelper::FormatReferenceTime(nField1Time), 
					0);
				REFERENCE_TIME nPositionA = nField2Time % g_nPeriod;
				LONG nPositionB = (LONG) (abs((g_nPeriod / 2) - nPositionA) * (600 - 60) / (g_nPeriod / 2));
				Paint(pnData + nFirstRowOffset + (40 + 1) * nNextRowOffset + (60 + nPositionB) * 2, nNextRowOffset, 0xFF);
				REFERENCE_TIME nPositionC = nField1Time % g_nPeriod;
				LONG nPositionD = (LONG) (abs((g_nPeriod / 2) - nPositionC) * (600 - 60) / (g_nPeriod / 2));
				Paint(pnData + nFirstRowOffset + (40 + 0) * nNextRowOffset + (60 + nPositionD) * 2, nNextRowOffset, GetFilter()->GetColorize() ? 0x00 : 0xFF);
				if(GetFilter()->GetWeave())
					OutputProperties.dwTypeSpecificFlags |= AM_VIDEO_FLAG_WEAVE;
				#pragma endregion
				OutputProperties.Set();
				ThreadContext.m_nMediaSampleIndex++;
				return TRUE;
			}
		};

	private:
		CObjectPtr<COutputPin> m_pOutputPin;
		CMediaType m_pRequestedMediaType;
		BOOL m_bWeave;
		BOOL m_bColorize;

	public:
	// CSourceFilter
		CSourceFilter() :
			CBasePersistT<CSourceFilter>(GetDataCriticalSection()),
			m_bWeave(FALSE),
			m_bColorize(FALSE)
		{
			_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
		}
		~CSourceFilter()
		{
			_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
		}
		HRESULT FinalConstruct()
		{
			_ATLTRY
			{
				m_pOutputPin.Construct()->Initialize(this, L"Output");
				AddPin(m_pOutputPin);
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		VOID FinalRelease()
		{
			m_pOutputPin = NULL;
		}
		VOID DeliverBeginFlush(IPin*)
		{
			m_pOutputPin->DeliverBeginFlush();
		}
		VOID DeliverEndFlush(IPin*)
		{
			m_pOutputPin->DeliverEndFlush();
		}
		VOID DeliverNewSegment(IPin*, REFERENCE_TIME nStartTime, REFERENCE_TIME nStopTime, DOUBLE fRate)
		{
			m_pOutputPin->DeliverNewSegment(nStartTime, nStopTime, fRate);
		}
		static BOOL CanCue()
		{
			return FALSE;
		}
		VOID CueFilter()
		{
			m_pOutputPin->CuePin();
		}
		VOID RunFilter(REFERENCE_TIME nStartTime)
		{
			m_pOutputPin->RunPin(nStartTime);
		}
		VOID PauseFilter()
		{
			m_pOutputPin->PausePin();
		}
		VOID StopFilter()
		{
			m_pOutputPin->StopPin();
		}
		const CObjectPtr<COutputPin>& GetOutputPin() const
		{
			return m_pOutputPin;
		}
		VOID Initialize()
		{
			_A(!m_pRequestedMediaType);
			CMediaType pMediaType;
			//pMediaType.AllocateVideoInfo(720, 480, 16, MAKEFOURCC('Y', 'U', 'Y', '2'), 1000 * 10000i64 / 30);
			pMediaType.Allocate(MEDIATYPE_Video, MEDIASUBTYPE_YUY2, FORMAT_VideoInfo2, sizeof (VIDEOINFOHEADER2));
			CVideoInfoHeader2* pVideoInfoHeader2 = pMediaType.GetVideoInfoHeader2();
			CBitmapInfoHeader* pBitmapInfoHeader = &pVideoInfoHeader2->GetBitmapInfoHeader();
			pBitmapInfoHeader->biSize = sizeof (BITMAPINFOHEADER);
			pBitmapInfoHeader->biWidth = 720;
			pBitmapInfoHeader->biHeight = 480;
			pBitmapInfoHeader->biPlanes = 1;
			pBitmapInfoHeader->biBitCount = 16;
			pBitmapInfoHeader->biCompression = MEDIASUBTYPE_YUY2.Data1;
			pBitmapInfoHeader->biSizeImage = pBitmapInfoHeader->GetDataSize();
			pVideoInfoHeader2->GetSourcePosition().SetRect(0, 0, pBitmapInfoHeader->biWidth, pBitmapInfoHeader->biHeight);
			pVideoInfoHeader2->GetTargetPosition().SetRect(0, 0, pBitmapInfoHeader->biWidth, pBitmapInfoHeader->biHeight);
			pVideoInfoHeader2->AvgTimePerFrame = 1001 * 10000i64 / 30;
//			pVideoInfoHeader2->AvgTimePerFrame *= 10; // Uncomment to slow down 10 times
			pVideoInfoHeader2->dwBitRate = (DWORD) (8.0 * pBitmapInfoHeader->biSizeImage * 10000000.0 / pVideoInfoHeader2->AvgTimePerFrame + 0.5 - 1E-6);
			pVideoInfoHeader2->dwInterlaceFlags = AMINTERLACE_IsInterlaced | AMINTERLACE_FieldPatBothRegular | AMINTERLACE_DisplayModeBobOrWeave;
//			pVideoInfoHeader2->dwInterlaceFlags = 0; // Uncomment to remove interlacing
			pVideoInfoHeader2->dwPictAspectRatioX = 720;
			pVideoInfoHeader2->dwPictAspectRatioY = 480;
			pMediaType->bFixedSizeSamples = TRUE;
			pMediaType->lSampleSize = pBitmapInfoHeader->biSizeImage;
			m_pRequestedMediaType = pMediaType;
		}
		const CMediaType& GetRequestedMediaType() const
		{
			return m_pRequestedMediaType;
		}
		BOOL GetWeave() const
		{
			CRoCriticalSectionLock DataLock(GetDataCriticalSection());
			return m_bWeave;
		}
		VOID SetWeave(BOOL bWeave)
		{
			CRoCriticalSectionLock DataLock(GetDataCriticalSection());
			m_bWeave = bWeave;
		}
		BOOL GetColorize() const
		{
			CRoCriticalSectionLock DataLock(GetDataCriticalSection());
			return m_bColorize;
		}
		VOID SetColorize(BOOL bColorize)
		{
			CRoCriticalSectionLock DataLock(GetDataCriticalSection());
			m_bColorize = bColorize;
		}
	};

	////////////////////////////////////////////////////////////
	// CAmGraphBuilderCallback

	class ATL_NO_VTABLE CAmGraphBuilderCallback :
		public CComObjectRootEx<CComMultiThreadModelNoCS>,
		public IAMGraphBuilderCallback
	{
	public:

	BEGIN_COM_MAP(CAmGraphBuilderCallback)
		COM_INTERFACE_ENTRY(IAMGraphBuilderCallback)
	END_COM_MAP()

	public:
	// CAmGraphBuilderCallback
		CAmGraphBuilderCallback()
		{
			_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
		}
		~CAmGraphBuilderCallback()
		{
			_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
		}
		VOID SetGraphBuilder(IUnknown* pGraphBuilderUnknown)
		{
			const CComQIPtr<IObjectWithSite> pObjectWithSite = pGraphBuilderUnknown;
			__D(pObjectWithSite, E_NOINTERFACE);
			__C(pObjectWithSite->SetSite(this));
		}

	// IAMGraphBuilderCallback
		STDMETHOD(SelectedFilter)(IMoniker* pMoniker)
		{
			_Z5(atlTraceCOM, 5, _T("...\n"));
			_ATLTRY
			{
				_A(pMoniker);
				CComPtr<IBindCtx> pBindCtx;
				__C(CreateBindCtx(0, &pBindCtx));
				if(_FilterGraphHelper::IsFilterNonGrata(pMoniker))
					return E_FAIL;
				const CStringW sMonikerDisplayName = _FilterGraphHelper::GetMonikerDisplayName(pMoniker, pBindCtx);
				CComPtr<IPropertyBag> pPropertyBag;
				__C(pMoniker->BindToStorage(pBindCtx, NULL, __uuidof(IPropertyBag), (VOID**) &pPropertyBag));
				const CStringW sFriendlyName = _FilterGraphHelper::ReadPropertyBagString(pPropertyBag, OLESTR("FriendlyName"));
				const CStringW sClassIdentifierString = _FilterGraphHelper::ReadPropertyBagString(pPropertyBag, OLESTR("CLSID"));
				const CStringW sPath = _RegKeyHelper::QueryStringValue(HKEY_CLASSES_ROOT, AtlFormatString(_T("CLSID\\%ls\\InprocServer32"), sClassIdentifierString));
				_Z4(atlTraceGeneral, 4, _T("sMonikerDisplayName \"%ls\", sFriendlyName \"%ls\", sClassIdentifierString %ls, sPath \"%ls\"\n"), sMonikerDisplayName, sFriendlyName, sClassIdentifierString, sPath);
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		STDMETHOD(CreatedFilter)(IBaseFilter* pBaseFilter)
		{
			_Z5(atlTraceCOM, 5, _T("...\n"));
			_ATLTRY
			{
				_A(pBaseFilter);
				_Z4(atlTraceGeneral, 4, _T("pBaseFilter %ls \"%ls\"\n"), _FilterGraphHelper::GetFilterClassIdentifierString(pBaseFilter), _FilterGraphHelper::GetFilterName(pBaseFilter));
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
	};

	////////////////////////////////////////////////////
	// CVrPropertyPageT

	template <typename T>
	class CVrPropertyPageT
	{
	public:
	// CVrPropertyPageT
		VOID HandleMediaEvent(LONG nEventCode, LONG_PTR nParameter1, LONG_PTR nParameter2)
		{
			T* pT = static_cast<T*>(this);
			switch(nEventCode)
			{
			#pragma region EC_COMPLETE
			case EC_COMPLETE:
				_Z2(atlTraceGeneral, 2, _T("Filter Graph EC_COMPLETE (0x%X) Event, nParameter1 0x%08X, nParameter2 0x%08X\n"), nEventCode, nParameter1, nParameter2);
				break;
			#pragma endregion 
			#pragma region EC_USERABORT
			case EC_USERABORT:
				_Z2(atlTraceGeneral, 2, _T("Filter Graph EC_USERABORT (0x%X) Event, nParameter1 0x%08X, nParameter2 0x%08X\n"), nEventCode, nParameter1, nParameter2);
				break;
			#pragma endregion 
			#pragma region EC_ERRORABORT
			case EC_ERRORABORT:
				_Z2(atlTraceGeneral, 2, _T("Filter Graph EC_ERRORABORT (0x%X) Event, nParameter1 0x%08X, nParameter2 0x%08X\n"), nEventCode, nParameter1, nParameter2);
				_A(FAILED(nParameter1));
				AtlMessageBoxEx(pT->m_hWnd, (LPCTSTR) AtlFormatString(_T("EC_ERRORABORT Event: %s."), Ds::FormatResult((HRESULT) nParameter1).TrimRight(_T("\t\n\r ."))), IDS_ERROR, MB_ICONERROR | MB_OK);
				break;
			#pragma endregion 
			#pragma region EC_PAUSED
			case EC_PAUSED:
				_Z2(atlTraceGeneral, 2, _T("Filter Graph EC_PAUSED (0x%X) Event, nParameter1 0x%08X, nParameter2 0x%08X\n"), nEventCode, nParameter1, nParameter2);
				break;
			#pragma endregion 
			#pragma region EC_VMR_RENDERDEVICE_SET
			case EC_VMR_RENDERDEVICE_SET:
				{
					CString sParameter1;
					switch(nParameter1)
					{
					case VMR_RENDER_DEVICE_OVERLAY:
						sParameter1 = AtlFormatString(_T("VMR_RENDER_DEVICE_OVERLAY (0x%02X)"), nParameter1);
						break;
					case VMR_RENDER_DEVICE_VIDMEM:
						sParameter1 = AtlFormatString(_T("VMR_RENDER_DEVICE_VIDMEM (0x%02X)"), nParameter1);
						break;
					case VMR_RENDER_DEVICE_SYSMEM:
						sParameter1 = AtlFormatString(_T("VMR_RENDER_DEVICE_SYSMEM (0x%02X)"), nParameter1);
						break;
					default:
						sParameter1 = AtlFormatString(_T("0x%02X"), nParameter1);

					}
					_Z2(atlTraceGeneral, 2, _T("Filter Graph EC_VMR_RENDERDEVICE_SET (0x%X) Event, nParameter1 %s, nParameter2 0x%08X\n"), nEventCode, sParameter1, nParameter2);
				}
				break;
			#pragma endregion 
			default:
				#pragma region EC_xxx (Development)
				#if _DEVELOPMENT
					#define A(x) { x, #x },
					static const struct
					{
						LONG nEventCode;
						LPCSTR pszEventName;
					} g_pMap[] = 
					{
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
						A(EC_WMT_INDEX_EVENT)
						A(EC_WMT_EVENT)
					};
					#undef A
					BOOL bFound = FALSE;
					for(SIZE_T nIndex = 0; nIndex < DIM(g_pMap); nIndex++)
						if(g_pMap[nIndex].nEventCode == nEventCode)
						{
							_Z2(atlTraceGeneral, 2, _T("Filter Graph %hs Event, nEventCode 0x%X, nParameter1 0x%08X, nParameter2 0x%08X\n"), g_pMap[nIndex].pszEventName, nEventCode, nParameter1, nParameter2);
							bFound = TRUE;
							break;
						}
					if(!bFound)
				#endif // _DEVELOPMENT
				#pragma endregion 
				_Z2(atlTraceGeneral, 2, _T("Filter Graph Event, nEventCode 0x%X, nParameter1 0x%08X, nParameter2 0x%08X\n"), nEventCode, nParameter1, nParameter2);
			}
		}
	};

	////////////////////////////////////////////////////
	// CVmr7PropertyPage

	class CVmr7PropertyPage :
		public CPropertyPageT<CVmr7PropertyPage>,
		public CDialogResize<CVmr7PropertyPage>,
		public CVrPropertyPageT<CVmr7PropertyPage>
	{
	public:
		enum { IDD = IDD_MAIN_VMR7 };

	BEGIN_MSG_MAP_EX(CVmr7PropertyPage)
		CHAIN_MSG_MAP(CPropertyPageT<CVmr7PropertyPage>)
		CHAIN_MSG_MAP(CDialogResize<CVmr7PropertyPage>)
		MSG_WM_INITDIALOG(OnInitDialog)
		MSG_WM_DESTROY(OnDestroy)
		COMMAND_ID_HANDLER_EX(IDC_MAIN_VMR7_RUN, OnRunButtonClicked)
		COMMAND_ID_HANDLER_EX(IDC_MAIN_VMR7_PAUSE, OnPauseButtonClicked)
		COMMAND_ID_HANDLER_EX(IDC_MAIN_VMR7_STOP, OnStopButtonClicked)
		COMMAND_ID_HANDLER_EX(IDC_MAIN_VMR7_WEAVE, OnWeaveButtonClicked)
		COMMAND_ID_HANDLER_EX(IDC_MAIN_VMR7_COLORIZE, OnColorizeButtonClicked)
		MESSAGE_HANDLER_EX(WM_FILTERGRAPHEVENT, OnFilterGraphEvent)
		REFLECT_NOTIFICATIONS()
	END_MSG_MAP()

	BEGIN_DLGRESIZE_MAP(CVmr7PropertyPage)
		DLGRESIZE_CONTROL(IDC_MAIN_VMR7_VIDEO, DLSZ_SIZE_X | DLSZ_SIZE_Y)
		DLGRESIZE_CONTROL(IDC_MAIN_VMR7_RUN, DLSZ_MOVE_X)
		DLGRESIZE_CONTROL(IDC_MAIN_VMR7_PAUSE, DLSZ_MOVE_X)
		DLGRESIZE_CONTROL(IDC_MAIN_VMR7_STOP, DLSZ_MOVE_X)
		DLGRESIZE_CONTROL(IDC_MAIN_VMR7_WEAVE, DLSZ_MOVE_Y)
		DLGRESIZE_CONTROL(IDC_MAIN_VMR7_COLORIZE, DLSZ_MOVE_Y)
	END_DLGRESIZE_MAP()

	public:

		////////////////////////////////////////////////////////
		// Window Message Identifiers

		enum
		{
			WM_FIRST = WM_APP,
			WM_FILTERGRAPHEVENT,
		};

	private:
		CMainPropertySheet& m_Owner;
		CStatic m_VideoStatic;
		CGenericFilterGraph m_FilterGraph;
		CObjectPtr<CSourceFilter> m_pSourceFilter;
		CVmr7Window m_RendererWindow;
		CButton m_RunButton;
		CButton m_PauseButton;
		CButton m_StopButton;
		CButton m_WeaveButton;
		CButton m_ColorizeButton;

		VOID UpdateControls()
		{
			OAFilterState State;
			if(SUCCEEDED(m_FilterGraph.m_pMediaControl->GetState(0, &State)))
			{
				m_RunButton.EnableWindow(State != State_Running);
				m_PauseButton.EnableWindow(State != State_Paused);
				m_StopButton.EnableWindow(State != State_Stopped);
			} else
			{
				m_RunButton.EnableWindow(FALSE);
				m_PauseButton.EnableWindow(FALSE);
				m_StopButton.EnableWindow(FALSE);
			}
		}

	public:
	// CVmr7PropertyPage
		CVmr7PropertyPage(CMainPropertySheet* pOwner) :
			m_Owner(*pOwner)
		{
		}

	// CDialogResize
		VOID DlgResize_UpdateLayout(INT nWidth, INT nHeight)
		{
			__super::DlgResize_UpdateLayout(nWidth, nHeight);
			CRect VideoPosition;
			_W(m_VideoStatic.GetWindowRect(VideoPosition));
			_W(ScreenToClient(VideoPosition));
			_W(m_RendererWindow.MoveWindow(VideoPosition));
		}

	// Window Message Handlers
		LRESULT OnInitDialog(HWND, LPARAM)
		{
			m_VideoStatic = GetDlgItem(IDC_MAIN_VMR7_VIDEO);
			m_VideoStatic.ShowWindow(SW_HIDE);
			CRect VideoPosition;
			_W(m_VideoStatic.GetWindowRect(VideoPosition));
			_W(ScreenToClient(VideoPosition));
			m_RunButton = GetDlgItem(IDC_MAIN_VMR7_RUN);
			m_PauseButton = GetDlgItem(IDC_MAIN_VMR7_PAUSE);
			m_StopButton = GetDlgItem(IDC_MAIN_VMR7_STOP);
			m_WeaveButton = GetDlgItem(IDC_MAIN_VMR7_WEAVE);
			m_ColorizeButton = GetDlgItem(IDC_MAIN_VMR7_COLORIZE);
			DlgResize_Init(TRUE);
			m_FilterGraph.CoCreateInstance();
			CObjectPtr<CAmGraphBuilderCallback> pAmGraphBuilderCallback;
			pAmGraphBuilderCallback.Construct();
			pAmGraphBuilderCallback->SetGraphBuilder(m_FilterGraph.m_pFilterGraph);
			const CComPtr<IBaseFilter> pBaseFilter = m_RendererWindow.CoCreateBaseFilterInstance();
			__C(m_FilterGraph->AddFilter(pBaseFilter, CT2CW(_T("VMR-7"))));
			m_RendererWindow.Create(m_hWnd);
			_W(m_RendererWindow.MoveWindow(VideoPosition));
			m_RendererWindow.ShowWindow(SW_SHOWNORMAL);
			m_RendererWindow.Initialize(pBaseFilter);
			CObjectPtr<CSourceFilter> pSourceFilter;
			pSourceFilter.Construct()->Initialize();
			pSourceFilter->SetWeave(m_WeaveButton.GetCheck());
			pSourceFilter->SetColorize(m_ColorizeButton.GetCheck());
			m_pSourceFilter = pSourceFilter;
			__C(m_FilterGraph->AddFilter(pSourceFilter, CT2CW(_T("Source"))));
			__C(m_FilterGraph->Connect(pSourceFilter->GetOutputPin(), _FilterGraphHelper::GetFilterPin(m_RendererWindow.m_pBaseFilter)));
			__C(m_FilterGraph.m_pMediaEventEx->SetNotifyWindow((OAHWND) m_hWnd, WM_FILTERGRAPHEVENT, (LONG_PTR) this));
			UpdateControls();
			return 0;
		}
		LRESULT OnDestroy()
		{
			if(m_FilterGraph.m_pMediaControl)
				_V(m_FilterGraph.m_pMediaControl->Stop());
			m_RendererWindow.Terminate();
			m_pSourceFilter.Release();
			m_FilterGraph.Release();
			return 0;
		}
		LRESULT OnRunButtonClicked(UINT, INT, HWND)
		{
			CWaitCursor WaitCursor;
			__D(m_FilterGraph.m_pMediaControl, E_NOINTERFACE);
			__C(m_FilterGraph.m_pMediaControl->Run());
			UpdateControls();
			#pragma region Capabilities
			_ATLTRY
			{
				const CComQIPtr<IVMRDeinterlaceControl> pVmrDeinterlaceControl = m_RendererWindow.m_pBaseFilter;
				VMRVideoDesc VideoDescription;
				ZeroMemory(&VideoDescription, sizeof VideoDescription);
				VideoDescription.dwSize = sizeof VideoDescription;
				const CVideoInfoHeader2* pVideoInfoHeader2 = m_pSourceFilter->GetRequestedMediaType().GetVideoInfoHeader2();
				_A(pVideoInfoHeader2);
				const CSize Extent = pVideoInfoHeader2->GetExtent();
				VideoDescription.dwSampleWidth = Extent.cx;
				VideoDescription.dwSampleHeight = Extent.cy;
				VideoDescription.SingleFieldPerSample = FALSE;
				VideoDescription.dwFourCC = pVideoInfoHeader2->GetBitmapInfoHeader().biCompression;
				VideoDescription.InputSampleFreq.dwNumerator = 30000;
				VideoDescription.InputSampleFreq.dwDenominator = 1001;
				VideoDescription.OutputFrameFreq.dwNumerator = 60000;
				VideoDescription.OutputFrameFreq.dwDenominator = 1001;
				DWORD nModeCount = 16;
				CTempBufferT<GUID> pModes(nModeCount);
				const HRESULT nGetNumberOfDeinterlaceModesResult = pVmrDeinterlaceControl->GetNumberOfDeinterlaceModes(&VideoDescription, &nModeCount, pModes);
				_Z4(atlTraceGeneral, 4, _T("nGetNumberOfDeinterlaceModesResult 0x%08x, nModeCount %d\n"), nGetNumberOfDeinterlaceModesResult, nModeCount);
				if(SUCCEEDED(nGetNumberOfDeinterlaceModesResult))
				{
					for(DWORD nModeIndex = 0; nModeIndex < nModeCount; nModeIndex++)
					{
						const GUID& Mode = pModes[nModeIndex];
						_Z4(atlTraceGeneral, 4, _T("nModeIndex %d, Mode %s\n"), nModeIndex, FormatDeinterlaceMode(Mode));
						VMRDeinterlaceCaps Capabilities;
						ZeroMemory(&Capabilities, sizeof Capabilities);
						Capabilities.dwSize = sizeof Capabilities;
						const HRESULT nGetDeinterlaceModeCapsResult = pVmrDeinterlaceControl->GetDeinterlaceModeCaps(const_cast<GUID*>(&Mode), &VideoDescription, &Capabilities);
						_Z4(atlTraceGeneral, 4, _T("nGetDeinterlaceModeCapsResult 0x%08x, Capabilities.dwNumPreviousOutputFrames %d, .dwNumForwardRefSamples %d, .dwNumBackwardRefSamples %d, .DeinterlaceTechnology 0x%x\n"), nGetDeinterlaceModeCapsResult, Capabilities.dwNumPreviousOutputFrames, Capabilities.dwNumForwardRefSamples, Capabilities.dwNumBackwardRefSamples, Capabilities.DeinterlaceTechnology);
					}
				}
				GUID DeinterlaceMode = GUID_NULL;
				const HRESULT nGetDeinterlaceModeResult = pVmrDeinterlaceControl->GetDeinterlaceMode(0, &DeinterlaceMode);
				_Z4(atlTraceGeneral, 4, _T("nGetDeinterlaceModeResult 0x%08x\n"), nGetDeinterlaceModeResult);
				if(SUCCEEDED(nGetDeinterlaceModeResult) && !(nGetDeinterlaceModeResult == S_FALSE && DeinterlaceMode == GUID_NULL))
					_Z4(atlTraceGeneral, 4, _T("DeinterlaceMode %s\n"), FormatDeinterlaceMode(DeinterlaceMode));
				DWORD nPreferences = 0;
				const HRESULT nGetDeinterlacePrefsResult = pVmrDeinterlaceControl->GetDeinterlacePrefs(&nPreferences);
				_Z4(atlTraceGeneral, 4, _T("nGetDeinterlacePrefsResult 0x%08x, nPreferences 0x%x\n"), nGetDeinterlacePrefsResult, nPreferences);
				GUID ActualDeinterlaceMode;
				const HRESULT nGetActualDeinterlaceModeResult = pVmrDeinterlaceControl->GetActualDeinterlaceMode(0, &ActualDeinterlaceMode);
				_Z4(atlTraceGeneral, 4, _T("nGetActualDeinterlaceModeResult 0x%08x\n"), nGetActualDeinterlaceModeResult);
				if(SUCCEEDED(nGetActualDeinterlaceModeResult))
					_Z4(atlTraceGeneral, 4, _T("ActualDeinterlaceMode %s\n"), FormatDeinterlaceMode(ActualDeinterlaceMode));
			}
			_ATLCATCHALL()
			{
				_Z_EXCEPTION();
			}
			#pragma endregion
			return 0;
		}
		LRESULT OnPauseButtonClicked(UINT, INT, HWND)
		{
			CWaitCursor WaitCursor;
			__D(m_FilterGraph.m_pMediaControl, E_NOINTERFACE);
			__C(m_FilterGraph.m_pMediaControl->Pause());
			UpdateControls();
			return 0;
		}
		LRESULT OnStopButtonClicked(UINT, INT, HWND)
		{
			CWaitCursor WaitCursor;
			if(m_FilterGraph.m_pMediaControl)
				_V(m_FilterGraph.m_pMediaControl->Stop());
			UpdateControls();
			return 0;
		}
		LRESULT OnWeaveButtonClicked(UINT, INT, HWND)
		{
			if(m_pSourceFilter)
				m_pSourceFilter->SetWeave(m_WeaveButton.GetCheck());
			return 0;
		}
		LRESULT OnColorizeButtonClicked(UINT, INT, HWND)
		{
			if(m_pSourceFilter)
				m_pSourceFilter->SetColorize(m_ColorizeButton.GetCheck());
			return 0;
		}
		LRESULT OnFilterGraphEvent(UINT, WPARAM, LPARAM)
		{
			if(!m_FilterGraph.m_pMediaEventEx)
				return 0;
			_ATLTRY
			{
				for(; ; )
				{
					LONG nEventCode;
					LONG_PTR nParameter1, nParameter2;
					const HRESULT nGetEventResult = m_FilterGraph.m_pMediaEventEx->GetEvent(&nEventCode, &nParameter1, &nParameter2, 0);
					if(nGetEventResult == E_ABORT)
						break;
					__C(nGetEventResult);
					_ATLTRY
					{
						HandleMediaEvent(nEventCode, nParameter1, nParameter2);
					}
					_ATLCATCHALL()
					{
						_V(m_FilterGraph.m_pMediaEventEx->FreeEventParams(nEventCode, nParameter1, nParameter2));
						_ATLRETHROW;
					}
					_V(m_FilterGraph.m_pMediaEventEx->FreeEventParams(nEventCode, nParameter1, nParameter2));
				}
			}
			_ATLCATCHALL()
			{
				_Z_EXCEPTION();
			}
			return 0;
		}
		INT OnKillActive()
		{
			m_StopButton.Click();
			return 0;
		}
	};

	////////////////////////////////////////////////////
	// CVmr9PropertyPage

	class CVmr9PropertyPage :
		public CPropertyPageT<CVmr9PropertyPage>,
		public CDialogResize<CVmr9PropertyPage>,
		public CVrPropertyPageT<CVmr9PropertyPage>
	{
	public:
		enum { IDD = IDD_MAIN_VMR9 };

	BEGIN_MSG_MAP_EX(CVmr9PropertyPage)
		CHAIN_MSG_MAP(CPropertyPageT<CVmr9PropertyPage>)
		CHAIN_MSG_MAP(CDialogResize<CVmr9PropertyPage>)
		MSG_WM_INITDIALOG(OnInitDialog)
		MSG_WM_DESTROY(OnDestroy)
		COMMAND_ID_HANDLER_EX(IDC_MAIN_VMR9_RUN, OnRunButtonClicked)
		COMMAND_ID_HANDLER_EX(IDC_MAIN_VMR9_PAUSE, OnPauseButtonClicked)
		COMMAND_ID_HANDLER_EX(IDC_MAIN_VMR9_STOP, OnStopButtonClicked)
		COMMAND_ID_HANDLER_EX(IDC_MAIN_VMR9_WEAVE, OnWeaveButtonClicked)
		COMMAND_ID_HANDLER_EX(IDC_MAIN_VMR9_COLORIZE, OnColorizeButtonClicked)
		MESSAGE_HANDLER_EX(WM_FILTERGRAPHEVENT, OnFilterGraphEvent)
		REFLECT_NOTIFICATIONS()
	END_MSG_MAP()

	BEGIN_DLGRESIZE_MAP(CVmr9PropertyPage)
		DLGRESIZE_CONTROL(IDC_MAIN_VMR9_VIDEO, DLSZ_SIZE_X | DLSZ_SIZE_Y)
		DLGRESIZE_CONTROL(IDC_MAIN_VMR9_RUN, DLSZ_MOVE_X)
		DLGRESIZE_CONTROL(IDC_MAIN_VMR9_PAUSE, DLSZ_MOVE_X)
		DLGRESIZE_CONTROL(IDC_MAIN_VMR9_STOP, DLSZ_MOVE_X)
		DLGRESIZE_CONTROL(IDC_MAIN_VMR9_WEAVE, DLSZ_MOVE_Y)
		DLGRESIZE_CONTROL(IDC_MAIN_VMR9_COLORIZE, DLSZ_MOVE_Y)
	END_DLGRESIZE_MAP()

	public:

		////////////////////////////////////////////////////////
		// Window Message Identifiers

		enum
		{
			WM_FIRST = WM_APP,
			WM_FILTERGRAPHEVENT,
		};

	private:
		CMainPropertySheet& m_Owner;
		CStatic m_VideoStatic;
		CGenericFilterGraph m_FilterGraph;
		CObjectPtr<CSourceFilter> m_pSourceFilter;
		CVmr9Window m_RendererWindow;
		CButton m_RunButton;
		CButton m_PauseButton;
		CButton m_StopButton;
		CButton m_WeaveButton;
		CButton m_ColorizeButton;

		VOID UpdateControls()
		{
			OAFilterState State;
			if(SUCCEEDED(m_FilterGraph.m_pMediaControl->GetState(0, &State)))
			{
				m_RunButton.EnableWindow(State != State_Running);
				m_PauseButton.EnableWindow(State != State_Paused);
				m_StopButton.EnableWindow(State != State_Stopped);
			} else
			{
				m_RunButton.EnableWindow(FALSE);
				m_PauseButton.EnableWindow(FALSE);
				m_StopButton.EnableWindow(FALSE);
			}
		}

	public:
	// CVmr9PropertyPage
		CVmr9PropertyPage(CMainPropertySheet* pOwner) :
			m_Owner(*pOwner)
		{
		}

	// CDialogResize
		VOID DlgResize_UpdateLayout(INT nWidth, INT nHeight)
		{
			__super::DlgResize_UpdateLayout(nWidth, nHeight);
			CRect VideoPosition;
			_W(m_VideoStatic.GetWindowRect(VideoPosition));
			_W(ScreenToClient(VideoPosition));
			_W(m_RendererWindow.MoveWindow(VideoPosition));
		}

	// Window Message Handlers
		LRESULT OnInitDialog(HWND, LPARAM)
		{
			m_VideoStatic = GetDlgItem(IDC_MAIN_VMR9_VIDEO);
			m_VideoStatic.ShowWindow(SW_HIDE);
			CRect VideoPosition;
			_W(m_VideoStatic.GetWindowRect(VideoPosition));
			_W(ScreenToClient(VideoPosition));
			m_RunButton = GetDlgItem(IDC_MAIN_VMR9_RUN);
			m_PauseButton = GetDlgItem(IDC_MAIN_VMR9_PAUSE);
			m_StopButton = GetDlgItem(IDC_MAIN_VMR9_STOP);
			m_WeaveButton = GetDlgItem(IDC_MAIN_VMR9_WEAVE);
			m_ColorizeButton = GetDlgItem(IDC_MAIN_VMR9_COLORIZE);
			DlgResize_Init(TRUE);
			m_FilterGraph.CoCreateInstance();
			CObjectPtr<CAmGraphBuilderCallback> pAmGraphBuilderCallback;
			pAmGraphBuilderCallback.Construct();
			pAmGraphBuilderCallback->SetGraphBuilder(m_FilterGraph.m_pFilterGraph);
			const CComPtr<IBaseFilter> pBaseFilter = m_RendererWindow.CoCreateBaseFilterInstance();
			__C(m_FilterGraph->AddFilter(pBaseFilter, CT2CW(_T("VMR-9"))));
			m_RendererWindow.Create(m_hWnd);
			_W(m_RendererWindow.MoveWindow(VideoPosition));
			m_RendererWindow.ShowWindow(SW_SHOWNORMAL);
			m_RendererWindow.Initialize(pBaseFilter);
			CObjectPtr<CSourceFilter> pSourceFilter;
			pSourceFilter.Construct()->Initialize();
			pSourceFilter->SetWeave(m_WeaveButton.GetCheck());
			pSourceFilter->SetColorize(m_ColorizeButton.GetCheck());
			m_pSourceFilter = pSourceFilter;
			__C(m_FilterGraph->AddFilter(pSourceFilter, CT2CW(_T("Source"))));
			__C(m_FilterGraph->Connect(pSourceFilter->GetOutputPin(), _FilterGraphHelper::GetFilterPin(m_RendererWindow.m_pBaseFilter)));
			__C(m_FilterGraph.m_pMediaEventEx->SetNotifyWindow((OAHWND) m_hWnd, WM_FILTERGRAPHEVENT, (LONG_PTR) this));
			#pragma region Simulate EC_DISPLAY_CHANGED (Development)
			#if _DEVELOPMENT && FALSE
				__C(m_FilterGraph.m_pMediaEventEx->CancelDefaultHandling(EC_DISPLAY_CHANGED));
				_W(GetParent().SetWindowPos(NULL, 1680 + 100, 100, 0, 0, SWP_NOSIZE | SWP_NOZORDER | SWP_NOACTIVATE));
				CRect RendererPosition;
				_W(m_RendererWindow.GetWindowRect(RendererPosition));
				CVmr9Window::CMonitorInformation MonitorInformation(pBaseFilter);
				UINT nMonitor;
				if(MonitorInformation.SuggestMonitor(RendererPosition, nMonitor))
				{
					_Z4(atlTraceGeneral, 4, _T("nMonitor %d\n"), nMonitor);
					_A(MonitorInformation.m_pVmrMonitorConfig->SetMonitor(nMonitor) == VFW_E_WRONG_STATE);
					const CComPtr<IPin> pInputPin = _FilterGraphHelper::GetFilterPin(pBaseFilter, PINDIR_INPUT);
					const CComPtr<IPin> pOutputPin = _FilterGraphHelper::GetPeerPin(pInputPin);
					__D(pInputPin && pOutputPin, E_NOINTERFACE);
					const CMediaType pMediaType = _FilterGraphHelper::GetPinMediaType(pOutputPin);
					__C(m_FilterGraph.Disconnect(pOutputPin));
					__C(m_FilterGraph.Disconnect(pInputPin));
					const HRESULT nSetMonitorResult = MonitorInformation.m_pVmrMonitorConfig->SetMonitor(nMonitor);
					_Z45_DSHRESULT(nSetMonitorResult);
					m_RendererWindow.UpdateVideoPosition();
					const HRESULT nConnectResult = m_FilterGraph.ConnectDirect(pOutputPin, pInputPin, pMediaType);
					_Z45_DSHRESULT(nConnectResult);
					if(FAILED(nConnectResult))
						__C(m_FilterGraph.Connect(pOutputPin, pInputPin));
				}
			#endif // _DEVELOPMENT
			#pragma endregion
			UpdateControls();
			return 0;
		}
		LRESULT OnDestroy()
		{
			if(m_FilterGraph.m_pMediaControl)
				_V(m_FilterGraph.m_pMediaControl->Stop());
			m_RendererWindow.Terminate();
			m_pSourceFilter.Release();
			m_FilterGraph.Release();
			return 0;
		}
		LRESULT OnRunButtonClicked(UINT, INT, HWND)
		{
			CWaitCursor WaitCursor;
			__D(m_FilterGraph.m_pMediaControl, E_NOINTERFACE);
			__C(m_FilterGraph.m_pMediaControl->Run());
			UpdateControls();
			#pragma region Capabilities
			_ATLTRY
			{
				const CComQIPtr<IVMRDeinterlaceControl9> pVmrDeinterlaceControl9 = m_RendererWindow.m_pBaseFilter;
				VMR9VideoDesc VideoDescription;
				ZeroMemory(&VideoDescription, sizeof VideoDescription);
				VideoDescription.dwSize = sizeof VideoDescription;
				const CVideoInfoHeader2* pVideoInfoHeader2 = m_pSourceFilter->GetRequestedMediaType().GetVideoInfoHeader2();
				_A(pVideoInfoHeader2);
				const CSize Extent = pVideoInfoHeader2->GetExtent();
				VideoDescription.dwSampleWidth = Extent.cx;
				VideoDescription.dwSampleHeight = Extent.cy;
				VideoDescription.SampleFormat = VMR9_SampleFieldInterleavedEvenFirst;
				VideoDescription.dwFourCC = pVideoInfoHeader2->GetBitmapInfoHeader().biCompression;
				VideoDescription.InputSampleFreq.dwNumerator = 30000;
				VideoDescription.InputSampleFreq.dwDenominator = 1001;
				VideoDescription.OutputFrameFreq.dwNumerator = 60000;
				VideoDescription.OutputFrameFreq.dwDenominator = 1001;
				DWORD nModeCount = 16;
				CTempBufferT<GUID> pModes(nModeCount);
				const HRESULT nGetNumberOfDeinterlaceModesResult = pVmrDeinterlaceControl9->GetNumberOfDeinterlaceModes(&VideoDescription, &nModeCount, pModes);
				_Z4(atlTraceGeneral, 4, _T("nGetNumberOfDeinterlaceModesResult 0x%08x, nModeCount %d\n"), nGetNumberOfDeinterlaceModesResult, nModeCount);
				if(SUCCEEDED(nGetNumberOfDeinterlaceModesResult))
				{
					for(DWORD nModeIndex = 0; nModeIndex < nModeCount; nModeIndex++)
					{
						const GUID& Mode = pModes[nModeIndex];
						_Z4(atlTraceGeneral, 4, _T("nModeIndex %d, Mode %s\n"), nModeIndex, FormatDeinterlaceMode(Mode));
						VMR9DeinterlaceCaps Capabilities;
						ZeroMemory(&Capabilities, sizeof Capabilities);
						Capabilities.dwSize = sizeof Capabilities;
						const HRESULT nGetDeinterlaceModeCapsResult = pVmrDeinterlaceControl9->GetDeinterlaceModeCaps(const_cast<GUID*>(&Mode), &VideoDescription, &Capabilities);
						_Z4(atlTraceGeneral, 4, _T("nGetDeinterlaceModeCapsResult 0x%08x, Capabilities.dwNumPreviousOutputFrames %d, .dwNumForwardRefSamples %d, .dwNumBackwardRefSamples %d, .DeinterlaceTechnology 0x%x\n"), nGetDeinterlaceModeCapsResult, Capabilities.dwNumPreviousOutputFrames, Capabilities.dwNumForwardRefSamples, Capabilities.dwNumBackwardRefSamples, Capabilities.DeinterlaceTechnology);
					}
				}
				GUID DeinterlaceMode = GUID_NULL;
				const HRESULT nGetDeinterlaceModeResult = pVmrDeinterlaceControl9->GetDeinterlaceMode(0, &DeinterlaceMode);
				_Z4(atlTraceGeneral, 4, _T("nGetDeinterlaceModeResult 0x%08x\n"), nGetDeinterlaceModeResult);
				if(SUCCEEDED(nGetDeinterlaceModeResult) && !(nGetDeinterlaceModeResult == S_FALSE && DeinterlaceMode == GUID_NULL))
					_Z4(atlTraceGeneral, 4, _T("DeinterlaceMode %s\n"), FormatDeinterlaceMode(DeinterlaceMode));
				DWORD nPreferences = 0;
				const HRESULT nGetDeinterlacePrefsResult = pVmrDeinterlaceControl9->GetDeinterlacePrefs(&nPreferences);
				_Z4(atlTraceGeneral, 4, _T("nGetDeinterlacePrefsResult 0x%08x, nPreferences 0x%x\n"), nGetDeinterlacePrefsResult, nPreferences);
				GUID ActualDeinterlaceMode;
				const HRESULT nGetActualDeinterlaceModeResult = pVmrDeinterlaceControl9->GetActualDeinterlaceMode(0, &ActualDeinterlaceMode);
				_Z4(atlTraceGeneral, 4, _T("nGetActualDeinterlaceModeResult 0x%08x\n"), nGetActualDeinterlaceModeResult);
				if(SUCCEEDED(nGetActualDeinterlaceModeResult))
					_Z4(atlTraceGeneral, 4, _T("ActualDeinterlaceMode %s\n"), FormatDeinterlaceMode(ActualDeinterlaceMode));
			}
			_ATLCATCHALL()
			{
				_Z_EXCEPTION();
			}
			#pragma endregion
			return 0;
		}
		LRESULT OnPauseButtonClicked(UINT, INT, HWND)
		{
			CWaitCursor WaitCursor;
			__D(m_FilterGraph.m_pMediaControl, E_NOINTERFACE);
			__C(m_FilterGraph.m_pMediaControl->Pause());
			UpdateControls();
			return 0;
		}
		LRESULT OnStopButtonClicked(UINT, INT, HWND)
		{
			CWaitCursor WaitCursor;
			if(m_FilterGraph.m_pMediaControl)
				_V(m_FilterGraph.m_pMediaControl->Stop());
			UpdateControls();
			return 0;
		}
		LRESULT OnWeaveButtonClicked(UINT, INT, HWND)
		{
			if(m_pSourceFilter)
				m_pSourceFilter->SetWeave(m_WeaveButton.GetCheck());
			return 0;
		}
		LRESULT OnColorizeButtonClicked(UINT, INT, HWND)
		{
			if(m_pSourceFilter)
				m_pSourceFilter->SetColorize(m_ColorizeButton.GetCheck());
			return 0;
		}
		LRESULT OnFilterGraphEvent(UINT, WPARAM, LPARAM)
		{
			if(!m_FilterGraph.m_pMediaEventEx)
				return 0;
			_ATLTRY
			{
				for(; ; )
				{
					LONG nEventCode;
					LONG_PTR nParameter1, nParameter2;
					const HRESULT nGetEventResult = m_FilterGraph.m_pMediaEventEx->GetEvent(&nEventCode, &nParameter1, &nParameter2, 0);
					if(nGetEventResult == E_ABORT)
						break;
					__C(nGetEventResult);
					_ATLTRY
					{
						HandleMediaEvent(nEventCode, nParameter1, nParameter2);
					}
					_ATLCATCHALL()
					{
						_V(m_FilterGraph.m_pMediaEventEx->FreeEventParams(nEventCode, nParameter1, nParameter2));
						_ATLRETHROW;
					}
					_V(m_FilterGraph.m_pMediaEventEx->FreeEventParams(nEventCode, nParameter1, nParameter2));
				}
			}
			_ATLCATCHALL()
			{
				_Z_EXCEPTION();
			}
			return 0;
		}
		INT OnKillActive()
		{
			m_StopButton.Click();
			return 0;
		}
	};

	////////////////////////////////////////////////////
	// CEvrPropertyPage

	class CEvrPropertyPage :
		public CPropertyPageT<CEvrPropertyPage>,
		public CDialogResize<CEvrPropertyPage>,
		public CVrPropertyPageT<CEvrPropertyPage>
	{
	public:
		enum { IDD = IDD_MAIN_EVR };

	BEGIN_MSG_MAP_EX(CEvrPropertyPage)
		CHAIN_MSG_MAP(CPropertyPageT<CEvrPropertyPage>)
		CHAIN_MSG_MAP(CDialogResize<CEvrPropertyPage>)
		MSG_WM_INITDIALOG(OnInitDialog)
		MSG_WM_DESTROY(OnDestroy)
		COMMAND_ID_HANDLER_EX(IDC_MAIN_EVR_RUN, OnRunButtonClicked)
		COMMAND_ID_HANDLER_EX(IDC_MAIN_EVR_PAUSE, OnPauseButtonClicked)
		COMMAND_ID_HANDLER_EX(IDC_MAIN_EVR_STOP, OnStopButtonClicked)
		COMMAND_ID_HANDLER_EX(IDC_MAIN_EVR_WEAVE, OnWeaveButtonClicked)
		COMMAND_ID_HANDLER_EX(IDC_MAIN_EVR_COLORIZE, OnColorizeButtonClicked)
		MESSAGE_HANDLER_EX(WM_FILTERGRAPHEVENT, OnFilterGraphEvent)
		REFLECT_NOTIFICATIONS()
	END_MSG_MAP()

	BEGIN_DLGRESIZE_MAP(CEvrPropertyPage)
		DLGRESIZE_CONTROL(IDC_MAIN_EVR_VIDEO, DLSZ_SIZE_X | DLSZ_SIZE_Y)
		DLGRESIZE_CONTROL(IDC_MAIN_EVR_RUN, DLSZ_MOVE_X)
		DLGRESIZE_CONTROL(IDC_MAIN_EVR_PAUSE, DLSZ_MOVE_X)
		DLGRESIZE_CONTROL(IDC_MAIN_EVR_STOP, DLSZ_MOVE_X)
		DLGRESIZE_CONTROL(IDC_MAIN_EVR_WEAVE, DLSZ_MOVE_Y)
		DLGRESIZE_CONTROL(IDC_MAIN_EVR_COLORIZE, DLSZ_MOVE_Y)
	END_DLGRESIZE_MAP()

	public:

		////////////////////////////////////////////////////////
		// Window Message Identifiers

		enum
		{
			WM_FIRST = WM_APP,
			WM_FILTERGRAPHEVENT,
		};

	private:
		CMainPropertySheet& m_Owner;
		CStatic m_VideoStatic;
		CGenericFilterGraph m_FilterGraph;
		CObjectPtr<CSourceFilter> m_pSourceFilter;
		CEvrWindow m_RendererWindow;
		CButton m_RunButton;
		CButton m_PauseButton;
		CButton m_StopButton;
		CButton m_WeaveButton;
		CButton m_ColorizeButton;

		VOID UpdateControls()
		{
			OAFilterState State;
			if(SUCCEEDED(m_FilterGraph.m_pMediaControl->GetState(0, &State)))
			{
				m_RunButton.EnableWindow(State != State_Running);
				m_PauseButton.EnableWindow(State != State_Paused);
				m_StopButton.EnableWindow(State != State_Stopped);
			} else
			{
				m_RunButton.EnableWindow(FALSE);
				m_PauseButton.EnableWindow(FALSE);
				m_StopButton.EnableWindow(FALSE);
			}
		}

	public:
	// CEvrPropertyPage
		CEvrPropertyPage(CMainPropertySheet* pOwner) :
			m_Owner(*pOwner)
		{
		}

	// CDialogResize
		VOID DlgResize_UpdateLayout(INT nWidth, INT nHeight)
		{
			__super::DlgResize_UpdateLayout(nWidth, nHeight);
			CRect VideoPosition;
			_W(m_VideoStatic.GetWindowRect(VideoPosition));
			_W(ScreenToClient(VideoPosition));
			_W(m_RendererWindow.MoveWindow(VideoPosition));
		}

	// Window Message Handlers
		LRESULT OnInitDialog(HWND, LPARAM)
		{
			m_VideoStatic = GetDlgItem(IDC_MAIN_EVR_VIDEO);
			m_VideoStatic.ShowWindow(SW_HIDE);
			CRect VideoPosition;
			_W(m_VideoStatic.GetWindowRect(VideoPosition));
			_W(ScreenToClient(VideoPosition));
			m_RunButton = GetDlgItem(IDC_MAIN_EVR_RUN);
			m_PauseButton = GetDlgItem(IDC_MAIN_EVR_PAUSE);
			m_StopButton = GetDlgItem(IDC_MAIN_EVR_STOP);
			m_WeaveButton = GetDlgItem(IDC_MAIN_EVR_WEAVE);
			m_ColorizeButton = GetDlgItem(IDC_MAIN_EVR_COLORIZE);
			DlgResize_Init(TRUE);
			m_FilterGraph.CoCreateInstance();
			CObjectPtr<CAmGraphBuilderCallback> pAmGraphBuilderCallback;
			pAmGraphBuilderCallback.Construct();
			pAmGraphBuilderCallback->SetGraphBuilder(m_FilterGraph.m_pFilterGraph);
			const CComPtr<IBaseFilter> pBaseFilter = m_RendererWindow.CoCreateBaseFilterInstance();
			__C(m_FilterGraph->AddFilter(pBaseFilter, CT2CW(_T("EVR"))));
			m_RendererWindow.Create(m_hWnd);
			_W(m_RendererWindow.MoveWindow(VideoPosition));
			m_RendererWindow.ShowWindow(SW_SHOWNORMAL);
			m_RendererWindow.Initialize(pBaseFilter);
			CObjectPtr<CSourceFilter> pSourceFilter;
			pSourceFilter.Construct()->Initialize();
			pSourceFilter->SetWeave(m_WeaveButton.GetCheck());
			pSourceFilter->SetColorize(m_ColorizeButton.GetCheck());
			m_pSourceFilter = pSourceFilter;
			__C(m_FilterGraph->AddFilter(pSourceFilter, CT2CW(_T("Source"))));
			__C(m_FilterGraph->Connect(pSourceFilter->GetOutputPin(), _FilterGraphHelper::GetFilterPin(m_RendererWindow.m_pBaseFilter)));
			__C(m_FilterGraph.m_pMediaEventEx->SetNotifyWindow((OAHWND) m_hWnd, WM_FILTERGRAPHEVENT, (LONG_PTR) this));
			UpdateControls();
			return 0;
		}
		LRESULT OnDestroy()
		{
			if(m_FilterGraph.m_pMediaControl)
				_V(m_FilterGraph.m_pMediaControl->Stop());
			m_RendererWindow.Terminate();
			m_pSourceFilter.Release();
			m_FilterGraph.Release();
			return 0;
		}
		LRESULT OnRunButtonClicked(UINT, INT, HWND)
		{
			CWaitCursor WaitCursor;
			__D(m_FilterGraph.m_pMediaControl, E_NOINTERFACE);
			__C(m_FilterGraph.m_pMediaControl->Run());
			UpdateControls();
			#pragma region Capabilities
			_ATLTRY
			{
				const CComQIPtr<IMFGetService> pMfGetService = m_RendererWindow.m_pBaseFilter;
				__D(pMfGetService, E_NOINTERFACE);
				CComQIPtr<IMFVideoProcessor> pMfVideoProcessor;
				__C(pMfGetService->GetService(MR_VIDEO_MIXER_SERVICE, __uuidof(IMFVideoProcessor), (VOID**) &pMfVideoProcessor));
				__D(pMfVideoProcessor, E_NOINTERFACE);
				UINT nModeCount = 0;
				CComHeapPtr<GUID> pModes;
				const HRESULT nGetAvailableVideoProcessorModesResult = pMfVideoProcessor->GetAvailableVideoProcessorModes(&nModeCount, &pModes);
				_Z4(atlTraceGeneral, 4, _T("nGetAvailableVideoProcessorModesResult 0x%08x, nModeCount %d\n"), nGetAvailableVideoProcessorModesResult, nModeCount);
				if(SUCCEEDED(nGetAvailableVideoProcessorModesResult))
				{
					for(DWORD nModeIndex = 0; nModeIndex < nModeCount; nModeIndex++)
					{
						const GUID& Mode = pModes[nModeIndex];
						_Z4(atlTraceGeneral, 4, _T("nModeIndex %d, Mode %s\n"), nModeIndex, FormatDeinterlaceMode(Mode));
						DXVA2_VideoProcessorCaps Capabilities;
						ZeroMemory(&Capabilities, sizeof Capabilities);
						const HRESULT nGetVideoProcessorCapsResult = pMfVideoProcessor->GetVideoProcessorCaps(const_cast<GUID*>(&Mode), &Capabilities);
						_Z4(atlTraceGeneral, 4, _T("nGetVideoProcessorCapsResult 0x%08x") _T(", ") 
							_T("Capabilities") 
							_T(".NumForwardRefSamples %d") _T(", ") 
							_T(".NumBackwardRefSamples %d") _T(", ") 
							_T(".DeinterlaceTechnology %d") _T(", ") 
							_T(".ProcAmpControlCaps %d") _T(", ") 
							_T(".VideoProcessorOperations %d") _T(", ") 
							_T(".NoiseFilterTechnology %d") _T(", ") 
							_T(".DetailFilterTechnology %d") _T(", ") 
							_T("\n"), 
							nGetVideoProcessorCapsResult, 
							Capabilities.DeviceCaps,
							//Capabilities.InputPool,
							Capabilities.NumForwardRefSamples,
							Capabilities.NumBackwardRefSamples,
							Capabilities.DeinterlaceTechnology,
							Capabilities.ProcAmpControlCaps,
							Capabilities.VideoProcessorOperations,
							Capabilities.NoiseFilterTechnology,
							Capabilities.DetailFilterTechnology,
							0);
					}
				}
				GUID Mode = GUID_NULL;
				const HRESULT nGetVideoProcessorModeResult = pMfVideoProcessor->GetVideoProcessorMode(&Mode);
				_Z4(atlTraceGeneral, 4, _T("nGetVideoProcessorModeResult 0x%08x\n"), nGetVideoProcessorModeResult);
				if(SUCCEEDED(nGetVideoProcessorModeResult) && !(nGetVideoProcessorModeResult == S_FALSE && Mode == GUID_NULL))
					_Z4(atlTraceGeneral, 4, _T("Mode %s\n"), FormatDeinterlaceMode(Mode));
			}
			_ATLCATCHALL()
			{
				_Z_EXCEPTION();
			}
			#pragma endregion
			return 0;
		}
		LRESULT OnPauseButtonClicked(UINT, INT, HWND)
		{
			CWaitCursor WaitCursor;
			__D(m_FilterGraph.m_pMediaControl, E_NOINTERFACE);
			__C(m_FilterGraph.m_pMediaControl->Pause());
			UpdateControls();
			return 0;
		}
		LRESULT OnStopButtonClicked(UINT, INT, HWND)
		{
			CWaitCursor WaitCursor;
			if(m_FilterGraph.m_pMediaControl)
				_V(m_FilterGraph.m_pMediaControl->Stop());
			UpdateControls();
			return 0;
		}
		LRESULT OnWeaveButtonClicked(UINT, INT, HWND)
		{
			if(m_pSourceFilter)
				m_pSourceFilter->SetWeave(m_WeaveButton.GetCheck());
			return 0;
		}
		LRESULT OnColorizeButtonClicked(UINT, INT, HWND)
		{
			if(m_pSourceFilter)
				m_pSourceFilter->SetColorize(m_ColorizeButton.GetCheck());
			return 0;
		}
		LRESULT OnFilterGraphEvent(UINT, WPARAM, LPARAM)
		{
			if(!m_FilterGraph.m_pMediaEventEx)
				return 0;
			_ATLTRY
			{
				for(; ; )
				{
					LONG nEventCode;
					LONG_PTR nParameter1, nParameter2;
					const HRESULT nGetEventResult = m_FilterGraph.m_pMediaEventEx->GetEvent(&nEventCode, &nParameter1, &nParameter2, 0);
					if(nGetEventResult == E_ABORT)
						break;
					__C(nGetEventResult);
					_ATLTRY
					{
						HandleMediaEvent(nEventCode, nParameter1, nParameter2);
					}
					_ATLCATCHALL()
					{
						_V(m_FilterGraph.m_pMediaEventEx->FreeEventParams(nEventCode, nParameter1, nParameter2));
						_ATLRETHROW;
					}
					_V(m_FilterGraph.m_pMediaEventEx->FreeEventParams(nEventCode, nParameter1, nParameter2));
				}
			}
			_ATLCATCHALL()
			{
				_Z_EXCEPTION();
			}
			return 0;
		}
		INT OnKillActive()
		{
			m_StopButton.Click();
			return 0;
		}
	};

public:
	CVmr7PropertyPage m_Vmr7PropertyPage;
	CVmr9PropertyPage m_Vmr9PropertyPage;
	CEvrPropertyPage m_EvrPropertyPage;

public:
// CMainPropertySheet
	CMainPropertySheet() :
		CSizablePropertySheetT<CMainPropertySheet>(_T("Render Interlaced Video")),
		m_Vmr7PropertyPage(this),
		m_Vmr9PropertyPage(this),
		m_EvrPropertyPage(this)
	{
		AddPage(m_Vmr7PropertyPage);
		AddPage(m_Vmr9PropertyPage);
		AddPage(m_EvrPropertyPage);
	}
	BOOL SetInitialPosition()
	{
		if(!__super::SetInitialPosition())
			return FALSE;
		_W(PostMessage(WM_SETLARGERINITIALPOSITION));
		return TRUE;
	}
	static CString FormatDeinterlaceMode(const GUID& DeinterlaceMode)
	{
		// NOTE: Windows SDK does not provide a linkable identifier...
		#pragma region VMR-7/9
		struct __declspec(uuid("{335aa36e-7884-43a4-9c91-7f87faf3e37e}")) DXVA_DeinterlaceBobDevice;
		struct __declspec(uuid("{0e85cb93-3046-4ff0-aecc-d58cb5f035fd}")) DXVA_DeinterlaceContainerDevice;
		if(DeinterlaceMode == __uuidof(DXVA_DeinterlaceBobDevice))
			return _T("DXVA_DeinterlaceBobDevice");
		if(DeinterlaceMode == __uuidof(DXVA_DeinterlaceContainerDevice))
			return _T("DXVA_DeinterlaceContainerDevice");
		#pragma endregion
		#pragma region EVR, DXVA2
		struct __declspec(uuid("{5a54a0c9-c7ec-4bd9-8ede-f3c75dc4393b}")) DXVA2_VideoProcProgressiveDevice;
		struct __declspec(uuid("{335aa36e-7884-43a4-9c91-7f87faf3e37e}")) DXVA2_VideoProcBobDevice;
		struct __declspec(uuid("{4553d47f-ee7e-4e3f-9475-dbf1376c4810}")) DXVA2_VideoProcSoftwareDevice;
		if(DeinterlaceMode == __uuidof(DXVA2_VideoProcProgressiveDevice))
			return _T("DXVA2_VideoProcProgressiveDevice");
		if(DeinterlaceMode == __uuidof(DXVA2_VideoProcBobDevice))
			return _T("DXVA2_VideoProcBobDevice");
		if(DeinterlaceMode == __uuidof(DXVA2_VideoProcSoftwareDevice))
			return _T("DXVA2_VideoProcSoftwareDevice");
		return CString(_PersistHelper::StringFromIdentifier(DeinterlaceMode));
	}

// Window Message Handlers
	LRESULT OnSetLargerInitialPosition(UINT, WPARAM, LPARAM)
	{
		CRect Position;
		_W(GetWindowRect(Position));
		Position.right += Position.Width();
		Position.bottom += Position.Height() / 4;
		_W(SetWindowPos(NULL, Position, SWP_NOMOVE | SWP_NOZORDER | SWP_NOACTIVATE));
		_W(CenterWindow());
		return 0;
	}
};
