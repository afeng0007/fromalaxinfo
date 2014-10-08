////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2014
// Created by Roman Ryltsov roman@alax.info

#pragma once

#include <dxgi.h>
#include "AboutDialog.h"
#include <dshow.h>
#include <d3d9.h>
#include <vmr9.h>
#include <evr.h>
#include <evr9.h>
#include "rodshow.h"

#pragma comment(lib, "dxgi.lib")

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
		const CComQIPtr<IVMRFilterConfig> pVmrFilterConfig = pBaseFilter;
		__D(pVmrFilterConfig, E_NOINTERFACE);
		__C(pVmrFilterConfig->SetRenderingMode(VMRMode_Windowless));
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
			_Z45_HRESULT(nRepaintVideoResult);
		} else
			SetMsgHandled(FALSE);
		return 0;
	}
	LRESULT OnDisplayChange(UINT nDepth, CSize Extent)
	{
		if(m_pVmrWindowlessControl)
		{
			const HRESULT nDisplayModeChangedResult = m_pVmrWindowlessControl->DisplayModeChanged();
			_Z45_HRESULT(nDisplayModeChangedResult);
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
				_Z45_HRESULT(nSetVideoPositionResult);
			}
		return 0;
	}
	LRESULT OnLButtonDblClk(UINT, CPoint)
	{
		COlePropertyFrameDialog Dialog(m_pBaseFilter, _T("VMR-7"));
		Dialog.SetObjectPages();
		Dialog.DoModal(m_hWnd);
		return 0;
	}
};

////////////////////////////////////////////////////////////
// CEvrWindow

class CEvrWindow :
	public CControlWindowT<CEvrWindow>
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
	static CLSID GetRendererClassIdentifier() throw()
	{
		return CLSID_EnhancedVideoRenderer;
	}
	static CComPtr<IBaseFilter> CoCreateBaseFilterInstance()
	{
		CComPtr<IBaseFilter> pBaseFilter;
		HRESULT nCoCreateInstanceResult = pBaseFilter.CoCreateInstance(GetRendererClassIdentifier());
		_Z45_HRESULT(nCoCreateInstanceResult);
		if(nCoCreateInstanceResult == REGDB_E_CLASSNOTREG)
		{
			#pragma region Windows XP Second Chance Instantiation
			HINSTANCE hInstance = CoLoadLibrary(CT2OLE(_T("evr.dll")), TRUE);
			if(hInstance)
			{
				_ATLTRY
				{
					typedef HRESULT (STDMETHODCALLTYPE *DLLGETCLASSOBJECT)(REFCLSID ClassIdentifier, REFIID InterfaceIdentifier, LPVOID* ppvObject);
					DLLGETCLASSOBJECT pDllGetClassObject = (DLLGETCLASSOBJECT) GetProcAddress(hInstance, "DllGetClassObject");
					__E(pDllGetClassObject);
					CComPtr<IClassFactory> pClassFactory;
					__C((pDllGetClassObject)(GetRendererClassIdentifier(), __uuidof(IClassFactory), (VOID**) &pClassFactory));
					_A(pClassFactory);
					const HRESULT nCreateInstanceResult = pClassFactory->CreateInstance(NULL, __uuidof(IBaseFilter), (VOID**) &pBaseFilter);
					_Z45_HRESULT(nCreateInstanceResult);
					if(SUCCEEDED(nCreateInstanceResult))
						nCoCreateInstanceResult = nCreateInstanceResult;
				}
				_ATLCATCHALL()
				{
					_Z_EXCEPTION();
				}
				//CoFreeLibrary(hInstance);
			}
			#pragma endregion 
		}
		__C(nCoCreateInstanceResult);
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
		CRect VideoPosition = GetVideoPosition();
		_Z4(atlTraceGeneral, 4, _T("pMfVideoDisplayControl 0x%p, VideoPosition at (%d, %d) size (%d, %d)\n"), pMfVideoDisplayControl, VideoPosition.left, VideoPosition.top, VideoPosition.Width(), VideoPosition.Height());
		__C(pMfVideoDisplayControl->SetVideoPosition(NULL, VideoPosition));
		//__C(pMfVideoDisplayControl->SetAspectRatioMode(MFVideoARMode_None)); // As opposed to default MFVideoARMode_Picture - disable letterboxing
	}
	VOID Terminate() throw()
	{
		m_pBaseFilter = NULL;
		m_pMfVideoDisplayControl = NULL;
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
			{
				CRect VideoPosition = GetVideoPosition();
				const HRESULT nSetVideoPositionResult = m_pMfVideoDisplayControl->SetVideoPosition(NULL, &VideoPosition);
				_Z4(atlTraceUI, SUCCEEDED(nSetVideoPositionResult) ? 6 : 4, _T("nSetVideoPositionResult 0x%08x\n"), nSetVideoPositionResult);
			}
		return 0;
	}
	LRESULT OnLButtonDblClk(UINT, CPoint Position)
	{
		COlePropertyFrameDialog Dialog(m_pBaseFilter, _T("EVR"));
		Dialog.SetObjectPages();
		Dialog.DoModal(m_hWnd);
		return 0;
	}
};

////////////////////////////////////////////////////////////
// CBaseVideoDialog

class CBaseVideoDialog
{
public:
// CBaseVideoDialog
	virtual HWND Create(HWND hParentWindow) = 0;
	virtual BOOL DestroyWindow() = 0;
	virtual BOOL IsWindow() = 0;
	virtual BOOL MoveWindow(const CRect& Position) = 0;
	virtual INT ShowWindow(INT nShowCommand) = 0;
};

////////////////////////////////////////////////////////////
// CVideoDialogT

template <typename T, typename CVrWindow, LPCTSTR* t_ppszType>
class CVideoDialogT : 
	public CDialogImpl<T>,
	public CDialogResize<T>,
	public CBaseVideoDialog
{
	typedef CVideoDialogT<T, CVrWindow, t_ppszType> CVideoDialog;

public:
	enum { IDD = IDD_VIDEO };

BEGIN_MSG_MAP_EX(CVideoDialog)
	//CHAIN_MSG_MAP(CDialogImpl<CVideoDialog>)
	CHAIN_MSG_MAP(CDialogResize<T>)
	MSG_WM_INITDIALOG(OnInitDialog)
	MSG_WM_DESTROY(OnDestroy)
	COMMAND_ID_HANDLER_EX(IDCANCEL, OnCommand)
	COMMAND_ID_HANDLER_EX(IDC_VIDEO_RUN, OnRunButtonClicked)
	COMMAND_ID_HANDLER_EX(IDC_VIDEO_PAUSE, OnPauseButtonClicked)
	COMMAND_ID_HANDLER_EX(IDC_VIDEO_STOP, OnStopButtonClicked)
	MESSAGE_HANDLER_EX(WM_FILTERGRAPHEVENT, OnFilterGraphEvent)
END_MSG_MAP()

BEGIN_DLGRESIZE_MAP(CVideoDialog)
	DLGRESIZE_CONTROL(IDC_VIDEO_AREA, DLSZ_SIZE_X | DLSZ_SIZE_Y)
	DLGRESIZE_CONTROL(IDC_VIDEO_RUN, DLSZ_MOVE_Y)
	DLGRESIZE_CONTROL(IDC_VIDEO_PAUSE, DLSZ_MOVE_Y)
	DLGRESIZE_CONTROL(IDC_VIDEO_STOP, DLSZ_MOVE_Y)
	DLGRESIZE_CONTROL(IDCANCEL, DLSZ_MOVE_X | DLSZ_MOVE_Y)
END_DLGRESIZE_MAP()

public:

	////////////////////////////////////////////////////////
	// Window Message Identifiers

	enum
	{
		WM_FIRST = WM_APP,
		WM_FILTERGRAPHEVENT,
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
				//CRoCriticalSectionLock DataLock(GetDataCriticalSection());
				_A(GetFilter()->m_pRequestedMediaType);
				return CVideoInfoHeader::Compare(&GetFilter()->m_pRequestedMediaType.GetCompatibleVideoInfoHeader(), &pMediaType.GetCompatibleVideoInfoHeader(), FALSE);
			}
			BOOL DecideMemAllocatorProperties(IMemAllocator* pMemAllocator, ALLOCATOR_PROPERTIES Properties) throw()
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
				#pragma region Dynamic Type Change
				if(OutputProperties.dwSampleFlags & AM_SAMPLE_TYPECHANGED)
				{
					_A(OutputProperties.pMediaType);
					_A(CheckMediaType(OutputProperties.pMediaType));
					SetMediaType(OutputProperties.pMediaType);
				} else
					_A(!OutputProperties.pMediaType);
				#pragma endregion 
				OutputProperties.dwTypeSpecificFlags = 0;
				OutputProperties.dwSampleFlags = 0; // AM_SAMPLE_DATADISCONTINUITY
				OutputProperties.lActual = GetMediaType().GetCompatibleVideoInfoHeader().GetDataSize();
				OutputProperties.dwStreamId = 0;
				FillMemory(OutputProperties.pbBuffer, OutputProperties.lActual, rand() & 0xFF);
				OutputProperties.Set();
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
		VOID Initialize(CMediaType& pMediaType)
		{
			_A(!m_pRequestedMediaType && pMediaType);
			m_pRequestedMediaType = pMediaType;
		}
	};

private:
	CMediaType m_pMediaType;
	SIZE_T m_nLayout;
	CStatic m_AreaStatic;
	CGenericFilterGraph m_FilterGraph;
	CRoArrayT<CVrWindow> m_VrWindowArray;
	CButton m_RunButton;
	CButton m_PauseButton;
	CButton m_StopButton;

	CRect GetVideoPosition(const CRect& Position, SIZE_T nIndex)
	{
		CRect VideoPosition;
		VideoPosition.SetRectEmpty();
		switch(m_nLayout)
		{
		case 0: // 1
			if(nIndex < 1)
				VideoPosition = Position;
			break;
		case 1: // 4
		case 2: // 9
		case 3: // 16
		case 4: // 25
		case 5: // 36
			if(nIndex < (m_nLayout + 1) * (m_nLayout + 1))
			{
				const SIZE_T nZ = m_nLayout + 1;
				VideoPosition.left = (LONG) (Position.left + (Position.Width() - (nZ - 1) * Position.left) * (nIndex % nZ) / nZ + Position.left * (nIndex % nZ));
				VideoPosition.top = (LONG) (Position.top + (Position.Height() - (nZ - 1) * Position.top) * (nIndex / nZ) / nZ + Position.top * (nIndex / nZ));
				VideoPosition.right = (LONG) (VideoPosition.left + (Position.Width() - (nZ - 1) * Position.left) / nZ);
				VideoPosition.bottom = (LONG) (VideoPosition.top + (Position.Height() - (nZ - 1) * Position.top) / nZ);
			}
			break;
		//default:
			//VideoPosition.SetRectEmpty();
		}
		_A(!VideoPosition.IsRectEmpty());
		return VideoPosition;
	}
	CRect GetVideoPosition(SIZE_T nIndex)
	{
		CRect Position;
		_W(m_AreaStatic.GetWindowRect(Position));
		_W(ScreenToClient(Position));
		return GetVideoPosition(Position, nIndex);
	}
	VOID UpdateControls()
	{
		if(m_FilterGraph.m_pMediaControl)
		{
			OAFilterState State;
			if(SUCCEEDED(m_FilterGraph.m_pMediaControl->GetState(0, &State)))
			{
				m_RunButton.EnableWindow(State != State_Running);
				m_PauseButton.EnableWindow(State != State_Paused);
				m_StopButton.EnableWindow(State != State_Stopped);
				return;
			}
		}
		m_RunButton.EnableWindow(FALSE);
		m_PauseButton.EnableWindow(FALSE);
		m_StopButton.EnableWindow(FALSE);
	}

public:
// CVideoDialog
	CVideoDialogT(const CMediaType& pMediaType, SIZE_T nLayout) :
		m_pMediaType(pMediaType),
		m_nLayout(nLayout)
	{
		_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
	}
	~CVideoDialogT() throw()
	{
		_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
	}

// CDialogImpl
	VOID OnFinalMessage(HWND)
	{
		T* pT = static_cast<T*>(this);
		delete pT;
	}

// CBaseVideoDialog
	HWND Create(HWND hParentWindow)
	{
		return CDialogImpl<T>::Create(hParentWindow);
	}
	BOOL DestroyWindow()
	{
		return CDialogImpl<T>::DestroyWindow();
	}
	BOOL IsWindow()
	{
		return CDialogImpl<T>::IsWindow();
	}
	BOOL MoveWindow(const CRect& Position)
	{
		return CDialogImpl<T>::MoveWindow(Position);
	}
	INT ShowWindow(INT nShowCommand)
	{
		return CDialogImpl<T>::ShowWindow(nShowCommand);
	}

// CDialogResize
	VOID DlgResize_UpdateLayout(INT nWidth, INT nHeight)
	{
		__super::DlgResize_UpdateLayout(nWidth, nHeight);
		CRect Position;
		_W(m_AreaStatic.GetWindowRect(Position));
		_W(ScreenToClient(Position));
		CDeferWindowPos DeferWindowPos;
		_W(DeferWindowPos.Begin((INT) m_VrWindowArray.GetCount()));
		for(SIZE_T nIndex = 0; nIndex < m_VrWindowArray.GetCount(); nIndex++)
			_W(DeferWindowPos.SetWindowPos(m_VrWindowArray[nIndex], NULL, GetVideoPosition(Position, nIndex), SWP_NOZORDER | SWP_NOACTIVATE));
		_W(DeferWindowPos.End());
	}

// Window Message Handelrs
	LRESULT OnInitDialog(HWND, LPARAM)
	{
		m_AreaStatic = GetDlgItem(IDC_VIDEO_AREA);
		m_AreaStatic.ShowWindow(SW_HIDE);
		m_RunButton = GetDlgItem(IDC_VIDEO_RUN);
		m_PauseButton = GetDlgItem(IDC_VIDEO_PAUSE);
		m_StopButton = GetDlgItem(IDC_VIDEO_STOP);
		DlgResize_Init(TRUE);
		UpdateControls();
		m_FilterGraph.CoCreateInstance();
		const SIZE_T nCount = (m_nLayout + 1) * (m_nLayout + 1); // 1, 4, 9, 16, ...
		_A(m_VrWindowArray.IsEmpty());
		_W(m_VrWindowArray.SetCount(0, (INT) nCount));
		for(SIZE_T nIndex = 0; nIndex < nCount; nIndex++)
		{
			CVrWindow& VrWindow = m_VrWindowArray[m_VrWindowArray.Add()];
			CComPtr<IBaseFilter> pBaseFilter = CVrWindow::CoCreateBaseFilterInstance();
			__C(m_FilterGraph->AddFilter(pBaseFilter, CT2CW(AtlFormatString(_T("Renderer %02d"), nIndex + 1))));
			VrWindow.Create(m_hWnd);
			VrWindow.ShowWindow(SW_SHOWNORMAL);
			VrWindow.Initialize(pBaseFilter);
			CObjectPtr<CSourceFilter> pSourceFilter;
			pSourceFilter.Construct()->Initialize(m_pMediaType);
			__C(m_FilterGraph->AddFilter(pSourceFilter, CT2CW(AtlFormatString(_T("Source %02d"), nIndex + 1))));
			m_FilterGraph->Connect(pSourceFilter->GetOutputPin(), _FilterGraphHelper::GetFilterPin(VrWindow.m_pBaseFilter));
		}
		__C(m_FilterGraph.m_pMediaEventEx->SetNotifyWindow((OAHWND) m_hWnd, WM_FILTERGRAPHEVENT, (LONG_PTR) this));
		UpdateControls();
		CRect Position;
		_W(GetClientRect(Position));
		DlgResize_UpdateLayout(Position.Width(), Position.Height());
		CString sCaption;
		GetWindowText(sCaption);
		const CSize Extent = m_pMediaType.GetCompatibleVideoInfoHeader().GetExtent();
		SetWindowText(AtlFormatString(sCaption, nCount, *t_ppszType, Extent.cx, Extent.cy));
		return 0;
	}
	LRESULT OnDestroy() throw()
	{
		if(m_FilterGraph.m_pMediaControl)
			_V(m_FilterGraph.m_pMediaControl->Stop());
		for(SIZE_T nIndex = 0; nIndex < m_VrWindowArray.GetCount(); nIndex++)
			m_VrWindowArray[nIndex].Terminate();
		m_FilterGraph.Release();
		CWindow OwnerWindow = GetWindow(GW_OWNER);
		if(OwnerWindow.IsWindow())
			OwnerWindow.SendMessage(WM_COMMAND, 'CL', (LPARAM) (CBaseVideoDialog*) this);
		return 0;
	}
	LRESULT OnCommand(UINT, INT nIdentifier, HWND)
	{
		DestroyWindow();
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
};

////////////////////////////////////////////////////////////
// CVmr7VideoDialog, CEvrVideoDialog

LPCTSTR g_pszVmr7 = _T("VMR-7");

class CVmr7VideoDialog :
	public CVideoDialogT<CVmr7VideoDialog, CVmr7Window, &g_pszVmr7>
{
public:
// CVmr7VideoDialog
	CVmr7VideoDialog(const CMediaType& pMediaType, SIZE_T nLayout) :
		CVideoDialogT<CVmr7VideoDialog, CVmr7Window, &g_pszVmr7>(pMediaType, nLayout)
	{
	}
};

LPCTSTR g_pszEvr = _T("EVR");

class CEvrVideoDialog :
	public CVideoDialogT<CEvrVideoDialog, CEvrWindow, &g_pszEvr>
{
public:
// CEvrVideoDialog
	CEvrVideoDialog(const CMediaType& pMediaType, SIZE_T nLayout) :
		CVideoDialogT<CEvrVideoDialog, CEvrWindow, &g_pszEvr>(pMediaType, nLayout)
	{
	}
};

////////////////////////////////////////////////////////////
// CMainDialog

class CMainDialog : 
	public CDialogImpl<CMainDialog>
{
public:
	enum { IDD = IDD_MAIN };

BEGIN_MSG_MAP_EX(CMainDialog)
	//CHAIN_MSG_MAP(CDialogImpl<CMainDialog>)
	MSG_WM_INITDIALOG(OnInitDialog)
	MSG_WM_DESTROY(OnDestroy)
	MSG_WM_TIMER(OnTimer)
	MSG_WM_SYSCOMMAND(OnSysCommand)
	COMMAND_ID_HANDLER_EX(IDCANCEL, OnCommand)
	COMMAND_ID_HANDLER_EX(IDC_CREATE, OnCreateButtonClicked)
	COMMAND_ID_HANDLER_EX('CL', OnCloseVideoDialog)
	REFLECT_NOTIFICATIONS()
END_MSG_MAP()

public:

	////////////////////////////////////////////////////////
	// Time Identifiers

	enum
	{
		TIMER_FIRST = 0,
		TIMER_UPDATEADAPTERS,
	};

private:
	CRoEdit m_DxgiEdit;
	CComPtr<IDXGIFactory> m_pDxgiFactory;
	CRect m_DefaultPosition;
	CRoListT<CBaseVideoDialog*> m_VideoDialogList;

public:
// CMainDialog
	CMainDialog()
	{
	}

// Window Message Handelrs
	LRESULT OnInitDialog(HWND, LPARAM)
	{
		SetIcon(AtlLoadIconImage(IDI_MODULE, LR_DEFAULTCOLOR, GetSystemMetrics(SM_CXICON), GetSystemMetrics(SM_CYICON)), TRUE);
		SetIcon(AtlLoadIconImage(IDI_MODULE, LR_DEFAULTCOLOR, GetSystemMetrics(SM_CXSMICON), GetSystemMetrics(SM_CYSMICON)), FALSE);
		CMenuHandle Menu = GetSystemMenu(FALSE);
		_W(Menu.AppendMenu(MF_SEPARATOR));
		_W(Menu.AppendMenu(MF_STRING, ID_APP_ABOUT, _T("&About...")));
		{
			CString sCaption;
			GetWindowText(sCaption);
			#if defined(_WIN64)
				sCaption.Append(_T(" (64-bit)"));
			#else
				if(SafeIsWow64Process())
					sCaption.Append(_T(" (32-bit)"));
			#endif // defined(_WIN64)
			SetWindowText(sCaption);
		}
		_W(CenterWindow());
		CButton(GetDlgItem(IDC_TYPE_EVR)).SetCheck(TRUE);
		CButton(GetDlgItem(IDC_RESOLUTION_19201080)).SetCheck(TRUE);
		CButton(GetDlgItem(IDC_PIXELFORMAT_NV12)).SetCheck(TRUE);
		CButton(GetDlgItem(IDC_LAYOUT_9)).SetCheck(TRUE);
		#pragma region DXGI
		m_DxgiEdit = GetDlgItem(IDC_DXGI);
		if(GetOsVersion() >= 0x00060000) // Windows Vista+
		{
			_ATLTRY
			{
				__C(CreateDXGIFactory(__uuidof(IDXGIFactory), (VOID**) &m_pDxgiFactory));
				SetTimer(TIMER_UPDATEADAPTERS, 5 * 1000); // 5 seconds
				_W(PostMessage(WM_TIMER, TIMER_UPDATEADAPTERS));
			}
			_ATLCATCH(Exception)
			{
				_Z_ATLEXCEPTION(Exception);
				m_DxgiEdit.SetValue(AtlFormatString(_T("Failed to initialize with DXGI: %s."), AtlFormatSystemMessage(Exception).TrimRight(_T("\t\n\r ."))));
			}
		} else
			m_DxgiEdit.SetValue(_T("DXGI is not available."));
		#pragma endregion 
		_W(GetWindowRect(m_DefaultPosition));
		GetDlgItem(IDC_CREATE).SetFocus();
		return FALSE;
	}
	LRESULT OnDestroy() throw()
	{
		for(POSITION Position = m_VideoDialogList.GetHeadPosition(); Position; m_VideoDialogList.GetNext(Position))
		{
			CBaseVideoDialog* pVideoDialog = m_VideoDialogList.GetAt(Position);
			_A(pVideoDialog);
			if(pVideoDialog->IsWindow())
				_W(pVideoDialog->DestroyWindow());
		}
		m_VideoDialogList.RemoveAll();
		return 0;
	}
	LRESULT OnTimer(UINT_PTR nEvent)
	{
		switch(nEvent)
		{
		case TIMER_UPDATEADAPTERS:
			_ATLTRY
			{
				_A(m_pDxgiFactory);
				CWaitCursor WaitCursor;
				CString sText;
				for(UINT nAdapter = 0; ; nAdapter++)
				{
					CComPtr<IDXGIAdapter> pDxgiAdapter;
					const HRESULT nEnumAdaptersResult = m_pDxgiFactory->EnumAdapters(nAdapter, &pDxgiAdapter);
					_Z4(atlTraceGeneral, 4, _T("nAdapter %d, nEnumAdaptersResult 0x%08x\n"), nAdapter, nEnumAdaptersResult);
					if(nEnumAdaptersResult == DXGI_ERROR_NOT_FOUND)
						break;
					_ATLTRY
					{
						DXGI_ADAPTER_DESC Description;
						__C(pDxgiAdapter->GetDesc(&Description));
						sText.AppendFormat(_T("Adatper %d: %ls, Vendor 0x%x, Device 0x%x, Subsystem 0x%x, Revision 0x%x\n"), nAdapter, Description.Description, Description.VendorId, Description.DeviceId, Description.SubSysId, Description.Revision);
						sText.AppendFormat(
							_T("  ") _T("DedicatedVideoMemory %s") _T("\n")
							_T("  ") _T("DedicatedSystemMemory %s") _T("\n")
							_T("  ") _T("SharedSystemMemory %s") _T("\n")
							_T("  ") _T("AdapterLuid %d.%u") _T("\n")
							, 
							_StringHelper::FormatNumber((LONGLONG) Description.DedicatedVideoMemory), 
							_StringHelper::FormatNumber((LONGLONG) Description.DedicatedSystemMemory), 
							_StringHelper::FormatNumber((LONGLONG) Description.SharedSystemMemory), 
							Description.AdapterLuid.HighPart, Description.AdapterLuid.LowPart,
							0);
					}
					_ATLCATCH(Exception)
					{
						_Z_ATLEXCEPTION(Exception);
						sText.AppendFormat(_T("Adatper %d Failure: %s\n"), nAdapter, AtlFormatSystemMessage(Exception).TrimRight(_T("\t\n\r .")));
					}
				}
				sText.Replace(_T("\n"), _T("\r\n"));
				m_DxgiEdit.SetValue(sText);
			}
			_ATLCATCH(Exception)
			{
				_Z_ATLEXCEPTION(Exception);
				m_DxgiEdit.SetValue(AtlFormatString(_T("Failed to initialize with DXGI: %s."), AtlFormatSystemMessage(Exception).TrimRight(_T("\t\n\r ."))));
			}
			break;
		default:
			SetMsgHandled(FALSE);
		}
		return 0;
	}
	LRESULT OnSysCommand(UINT nCommand, CPoint)
	{
		switch(nCommand)
		{
		case ID_APP_ABOUT:
			{
				CAboutDialog Dialog;
				Dialog.DoModal(m_hWnd);
			}
			break;
		default:
			SetMsgHandled(FALSE);
		}
		return 0;
	}
	LRESULT OnCommand(UINT, INT nIdentifier, HWND)
	{
		_W(EndDialog(nIdentifier));
		return 0;
	}
	LRESULT OnCreateButtonClicked(UINT, INT, HWND)
	{
		CWaitCursor WaitCursor;
		#pragma region Query Controls
		SIZE_T nType;
		for(INT nIdentifier = IDC_TYPE_VMR7; nIdentifier <= IDC_TYPE_EVR; nIdentifier++)
			if(IsDlgButtonChecked(nIdentifier))
			{
				nType = nIdentifier - IDC_TYPE_VMR7;
				break;
			}
		SIZE_T nResolution;
		for(INT nIdentifier = IDC_RESOLUTION_720576; nIdentifier <= IDC_RESOLUTION_19201080; nIdentifier++)
			if(IsDlgButtonChecked(nIdentifier))
			{
				nResolution = nIdentifier - IDC_RESOLUTION_720576;
				break;
			}
		SIZE_T nPixelFormat;
		for(INT nIdentifier = IDC_PIXELFORMAT_NV12; nIdentifier <= IDC_PIXELFORMAT_RGB32; nIdentifier++)
			if(IsDlgButtonChecked(nIdentifier))
			{
				nPixelFormat = nIdentifier - IDC_PIXELFORMAT_NV12;
				break;
			}
		SIZE_T nLayout;
		for(INT nIdentifier = IDC_LAYOUT_1; nIdentifier <= IDC_LAYOUT_36; nIdentifier++)
			if(IsDlgButtonChecked(nIdentifier))
			{
				nLayout = nIdentifier - IDC_LAYOUT_1;
				break;
			}
		#pragma endregion
		static const SIZE g_pExtents[] = { { 720, 576 }, { 1280, 720 }, { 1920, 1080} };
		static const DWORD g_pnCompressions[] = { MAKEFOURCC('N', 'V', '1', '2'), MAKEFOURCC('Y', 'U', 'Y', '2'), BI_RGB, BI_RGB };
		static const WORD g_pnBitCounts[] = { 12, 16, 24, 32 };
		CMediaType pMediaType;
		pMediaType.AllocateVideoInfo(g_pExtents[nResolution], g_pnBitCounts[nPixelFormat], g_pnCompressions[nPixelFormat]);
		CBaseVideoDialog* pVideoDialog;
		switch(nType)
		{
		case 0: // IDC_TYPE_VMR7
			pVideoDialog = new CVmr7VideoDialog(pMediaType, nLayout);
			break;
		case 1: // IDC_TYPE_EVR
			pVideoDialog = new CEvrVideoDialog(pMediaType, nLayout);
			break;
		default:
			__C(E_NOTIMPL);
		}
		_ATLTRY
		{
			pVideoDialog->Create(m_hWnd);
			_ATLTRY
			{
				CRect Position;
				GetWindowRect(Position);
				if(Position == m_DefaultPosition && m_VideoDialogList.IsEmpty())
				{
					Position.OffsetRect(-Position.Width() / 3, 0);
					_W(MoveWindow(Position));
				}
				Position.left += Position.Width();
				const LONG nOffset = GetSystemMetrics(SM_CYCAPTION);
				Position.OffsetRect(nOffset * (INT) m_VideoDialogList.GetCount(), nOffset * (INT) m_VideoDialogList.GetCount());
				_W(pVideoDialog->MoveWindow(Position));
				pVideoDialog->ShowWindow(SW_SHOWNORMAL);
				m_VideoDialogList.AddTail(pVideoDialog);
			}
			_ATLCATCHALL()
			{
				_W(pVideoDialog->DestroyWindow());
				_ATLRETHROW;
			}
		}
		_ATLCATCHALL()
		{
			delete pVideoDialog;
			_ATLRETHROW;
		}
		return 0;
	}
	LRESULT OnCloseVideoDialog(UINT, INT, HWND hWindow)
	{
		CBaseVideoDialog* pBaseVideoDialog = (CBaseVideoDialog*) hWindow;
		POSITION Position;
		if(m_VideoDialogList.FindFirst(pBaseVideoDialog, &Position))
			m_VideoDialogList.RemoveAt(Position);
		return 0;
	}
};
