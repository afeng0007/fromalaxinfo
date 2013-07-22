////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2013
// Created by Roman Ryltsov roman@alax.info

#pragma once

#include "AboutDialog.h"
#include <dshow.h>
#include <d3d9.h>
#include <vmr9.h>
#include "rodshow.h"

////////////////////////////////////////////////////////////
// CVmr7Window

class CVmr7Window :
	public CControlWindowT<CVmr7Window>
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
	static CLSID GetRendererClassIdentifier() throw()
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
		CRect VideoPosition = GetVideoPosition();
		_Z4(atlTraceGeneral, 4, _T(".m_pVmrWindowlessControl 0x%p, VideoPosition at (%d, %d) size (%d, %d)\n"), m_pVmrWindowlessControl, VideoPosition.left, VideoPosition.top, VideoPosition.Width(), VideoPosition.Height());
		__C(m_pVmrWindowlessControl->SetVideoPosition(NULL, VideoPosition));
	}
	VOID Terminate() throw()
	{
		m_pBaseFilter = NULL;
		m_pVmrWindowlessControl = NULL;
	}
	CRect GetVideoPosition() const throw()
	{
		CRect Position;
		_W(GetClientRect(Position));
		return Position;
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
			_Z4(atlTraceUI, SUCCEEDED(nRepaintVideoResult) ? 6 : 4, _T("nRepaintVideoResult 0x%08x\n"), nRepaintVideoResult);
		} else
			SetMsgHandled(FALSE);
		return 0;
	}
	LRESULT OnDisplayChange(UINT nDepth, CSize Extent)
	{
		if(m_pVmrWindowlessControl)
		{
			const HRESULT nDisplayModeChangedResult = m_pVmrWindowlessControl->DisplayModeChanged();
			_Z4(atlTraceUI, 4, _T("nDisplayModeChangedResult 0x%08x\n"), nDisplayModeChangedResult);
		}
		return 0;
	}
	LRESULT OnSize(UINT nType, CSize)
	{
		if(nType != SIZE_MINIMIZED)
			if(m_pVmrWindowlessControl)
			{
				CRect VideoPosition = GetVideoPosition();
				const HRESULT nSetVideoPositionResult = m_pVmrWindowlessControl->SetVideoPosition(NULL, &VideoPosition);
				_Z4(atlTraceUI, SUCCEEDED(nSetVideoPositionResult) ? 6 : 4, _T("nSetVideoPositionResult 0x%08x\n"), nSetVideoPositionResult);
			}
		return 0;
	}
	LRESULT OnLButtonDblClk(UINT, CPoint Position)
	{
		COlePropertyFrameDialog Dialog;
		Dialog.SetObject(m_pBaseFilter);
		Dialog.SetObjectPages();
		Dialog.DoModal(m_hWnd);
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
			CThreadContext(CEvent& TerminationEvent) throw() :
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

		public:
		// COutputPin
			COutputPin() throw()
			{
				_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
			}
			~COutputPin() throw()
			{
				_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
			}
			VOID EnumerateMediaTypes(CAtlList<CMediaType>& MediaTypeList)
			{
				//CRoCriticalSectionLock DataLock(GetDataCriticalSection());
				_W(MediaTypeList.AddTail(GetFilter()->m_pRequestedMediaType));
			}
			BOOL CheckMediaType(const CMediaType& pMediaType) const throw()
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
			BOOL DecideMemAllocatorProperties(IMemAllocator* pMemAllocator, ALLOCATOR_PROPERTIES Properties) throw()
			{
				static const SIZE_T g_nMiminalBufferCount = 8;
				Properties.cBuffers = max(Properties.cBuffers, (LONG) g_nMiminalBufferCount);
				CRoCriticalSectionLock DataLock(GetDataCriticalSection());
				const CMediaType& pMediaType = GetMediaTypeReference();
				const CVideoInfoHeader VideoInfoHeader = pMediaType.GetCompatibleVideoInfoHeader();
				return SetMemAllocatorBufferSize(pMemAllocator, Properties, VideoInfoHeader.GetDataSize());
			}
			BOOL ComposeMediaSample(CThreadContext& ThreadContext, IMediaSample* pMediaSample)
			{
				CMediaSampleProperties OutputProperties(pMediaSample);
				#pragma region Dynamic Type Change
				if(OutputProperties.dwSampleFlags & AM_SAMPLE_TYPECHANGED)
				{
					_A(OutputProperties.pMediaType);
					_A(CheckMediaType(OutputProperties.pMediaType));
					SetMediaType(OutputProperties.pMediaType);
				} else
					_A(!OutputProperties.pMediaType);
				#pragma endregion 
				const CMediaType pMediaType = GetMediaType();
				const CVideoInfoHeader VideoInfoHeader = pMediaType.GetCompatibleVideoInfoHeader();
				OutputProperties.dwTypeSpecificFlags = 0;
				OutputProperties.dwSampleFlags = AM_SAMPLE_SPLICEPOINT | (ThreadContext.m_nMediaSampleIndex ? 0 : AM_SAMPLE_DATADISCONTINUITY) | AM_SAMPLE_TIMEVALID | AM_SAMPLE_STOPVALID;
				OutputProperties.lActual = VideoInfoHeader.GetDataSize();
				OutputProperties.tStart = ThreadContext.m_nMediaSampleIndex * VideoInfoHeader.AvgTimePerFrame;
				OutputProperties.tStop = OutputProperties.tStart + 1;
				OutputProperties.dwStreamId = 0;
				#pragma region Data
				const CSize Extent = VideoInfoHeader.GetExtent();
				const CBitmapInfoHeader& BitmapInfoHeader = VideoInfoHeader.GetBitmapInfoHeader();
				SSIZE_T nFirstRowOffset, nNextRowOffset;
				VideoInfoHeader.GetData(nFirstRowOffset, nNextRowOffset);
				_A(BitmapInfoHeader.biCompression == FOURCC_YV12 && BitmapInfoHeader.biCompression == pMediaType->subtype.Data1);
				const BYTE nD = 0x80 + (CHAR) (0x70 * sin((2 * M_PI * ThreadContext.m_nMediaSampleIndex) /  20));
				const BYTE nE = 0x00 + (CHAR) (0x70 * sin((2 * M_PI * ThreadContext.m_nMediaSampleIndex) / 170));
				const BYTE nF = 0x00 + (CHAR) (0x70 * sin((2 * M_PI * ThreadContext.m_nMediaSampleIndex) / 190));
				//_Z4(atlTraceGeneral, 4, _T("m_nMediaSampleIndex %d, tStart %s, %02X %02X %02X\n"), ThreadContext.m_nMediaSampleIndex, _FilterGraphHelper::FormatReferenceTime(OutputProperties.tStart), nD, nE, nF);
				BYTE* pnData = OutputProperties.pbBuffer;
				_A(!nFirstRowOffset);
				FillMemory(OutputProperties.pbBuffer, Extent.cy * nNextRowOffset, nD);
				FillMemory(OutputProperties.pbBuffer + Extent.cy * nNextRowOffset, Extent.cy * nNextRowOffset / 4, nE);
				FillMemory(OutputProperties.pbBuffer + Extent.cy * nNextRowOffset + Extent.cy * nNextRowOffset / 4, Extent.cy * nNextRowOffset / 4, nF);
				#pragma endregion
				OutputProperties.Set();
				ThreadContext.m_nMediaSampleIndex++;
				return TRUE;
			}
		};

	private:
		CObjectPtr<COutputPin> m_pOutputPin;
		CMediaType m_pRequestedMediaType;

	public:
	// CSourceFilter
		CSourceFilter() throw() :
			CBasePersistT<CSourceFilter>(GetDataCriticalSection())
		{
			_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
		}
		~CSourceFilter() throw()
		{
			_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
		}
		HRESULT FinalConstruct() throw()
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
		VOID FinalRelease() throw()
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
		static BOOL CanCue() throw()
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
		VOID PauseFilter() throw()
		{
			m_pOutputPin->PausePin();
		}
		VOID StopFilter() throw()
		{
			m_pOutputPin->StopPin();
		}
		const CObjectPtr<COutputPin>& GetOutputPin() const throw()
		{
			return m_pOutputPin;
		}
		VOID Initialize()
		{
			_A(!m_pRequestedMediaType);
			CMediaType pMediaType;
			pMediaType.AllocateVideoInfo(720, 480, 12, FOURCC_YV12, 1000 * 10000i64 / 40);
			pMediaType->bFixedSizeSamples = TRUE;
			pMediaType->lSampleSize = pMediaType.GetVideoInfoHeader()->GetDataSize();
			m_pRequestedMediaType = pMediaType;
		}
		const CMediaType& GetRequestedMediaType() const throw()
		{
			return m_pRequestedMediaType;
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
		CAmGraphBuilderCallback() throw()
		{
			_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
		}
		~CAmGraphBuilderCallback() throw()
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
		STDMETHOD(SelectedFilter)(IMoniker* pMoniker) throw()
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
		STDMETHOD(CreatedFilter)(IBaseFilter* pBaseFilter) throw()
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
	// CVmr7PropertyPage

	class CVmr7PropertyPage :
		public CPropertyPageT<CVmr7PropertyPage>,
		public CDialogResize<CVmr7PropertyPage>
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
		MESSAGE_HANDLER_EX(WM_FILTERGRAPHEVENT, OnFilterGraphEvent)
		REFLECT_NOTIFICATIONS()
	END_MSG_MAP()

	BEGIN_DLGRESIZE_MAP(CVmr7PropertyPage)
		DLGRESIZE_CONTROL(IDC_MAIN_VMR7_VIDEO, DLSZ_SIZE_X | DLSZ_SIZE_Y)
		DLGRESIZE_CONTROL(IDC_MAIN_VMR7_RUN, DLSZ_MOVE_X)
		DLGRESIZE_CONTROL(IDC_MAIN_VMR7_PAUSE, DLSZ_MOVE_X)
		DLGRESIZE_CONTROL(IDC_MAIN_VMR7_STOP, DLSZ_MOVE_X)
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

	// Window Message Handelrs
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
			DlgResize_Init(FALSE);
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
			m_pSourceFilter = pSourceFilter;
			__C(m_FilterGraph->AddFilter(pSourceFilter, CT2CW(_T("Source"))));
			__C(m_FilterGraph->Connect(pSourceFilter->GetOutputPin(), _FilterGraphHelper::GetFilterPin(m_RendererWindow.m_pBaseFilter)));
			__C(m_FilterGraph.m_pMediaEventEx->SetNotifyWindow((OAHWND) m_hWnd, WM_FILTERGRAPHEVENT, (LONG_PTR) this));
			UpdateControls();
			return 0;
		}
		LRESULT OnDestroy() throw()
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
						switch(nEventCode)
						{
						case EC_ERRORABORT:
							_Z2(atlTraceGeneral, 2, _T("nEventCode EC_ERRORABORT 0x%02X, nParameter1 0x%08x, nParameter2 0x%08x\n"), nEventCode, nParameter1, nParameter2);
							_A(FAILED(nParameter1));
							AtlMessageBoxEx(m_hWnd, (LPCTSTR) AtlFormatString(_T("EC_ERRORABORT Event: %s."), AtlFormatSystemMessage((HRESULT) nParameter1).TrimRight(_T("\t\n\r ."))), IDS_ERROR, MB_ICONERROR | MB_OK);
							break;
						default:
							_Z1(atlTraceGeneral, 1, _T("nEventCode 0x%02X, nParameter1 0x%08x, nParameter2 0x%08x\n"), nEventCode, nParameter1, nParameter2);
						}
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

public:
// CMainPropertySheet
	CMainPropertySheet() :
		CSizablePropertySheetT<CMainPropertySheet>(_T("RenderVideoSync")),
		m_Vmr7PropertyPage(this)
	{
		AddPage(m_Vmr7PropertyPage);
	}
	BOOL SetInitialPosition()
	{
		if(!__super::SetInitialPosition())
			return FALSE;
		_W(PostMessage(WM_SETLARGERINITIALPOSITION));
		return TRUE;
	}

// Window Message Handelrs
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
