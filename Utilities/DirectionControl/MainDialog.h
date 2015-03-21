////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2013-2014
// Created by Roman Ryltsov roman@alax.info
//
// A permission to use the source code is granted as long as reference to 
// source website http://alax.info is retained.

#pragma once

//#import "libid:B9EC374B-834B-4DA9-BFB5-C1872CE736FF" raw_interfaces_only // AlaxInfoDirectShowSpy
#include "AboutDialog.h"
#include "rocontrols.h"

////////////////////////////////////////////////////////////
// CControl

template <typename T, typename _Base = CStatic, class _WinTraits = CControlWinTraits>
class ATL_NO_VTABLE CControlT : 
	public CControlWindowT<T, _Base, _WinTraits>
{
public:

BEGIN_MSG_MAP_EX(CRoIconStaticT)
	MSG_WM_CREATE(OnCreate)
	MSG_WM_DESTROY(OnDestroy)
	MSG_WM_ENABLE(OnEnable)
	MSG_WM_SIZE(OnSize)
	MSG_WM_ERASEBKGND(OnEraseBkgnd)
	MSG_WM_PAINT(OnPaint)
	MSG_WM_PRINTCLIENT(OnPrintClient)
	MSG_WM_UPDATEUISTATE(OnUpdateUiState)
	MSG_WM_SETCURSOR(OnSetCursor)
	MSG_WM_MOUSEMOVE(OnMouseMove)
	MSG_WM_LBUTTONDOWN(OnLButtonDown)
	MSG_WM_LBUTTONUP(OnLButtonUp)
	DEFAULT_REFLECTION_HANDLER()
END_MSG_MAP()

public:

	////////////////////////////////////////////////////////
	// Conrol styles

	enum
	{
		CS_NONE = 0,
		CS_DEFAULT = CS_NONE,
	};

	////////////////////////////////////////////////////////
	// Notification codes

	enum
	{
		NC_FIRST = 1024,
		NC_CHANGING,
		NC_CHANGED,
	};

private:
	ULONG m_nExtendedStyle;
	UINT m_nVersion;
	DOUBLE m_fAngle;
	DOUBLE m_fToleranceAngle;
	CPoint m_CenterPosition;
	BOOL m_bLayoutValid;
	LONG m_nArrowSize;
	LONG m_nToleranceArrowSize;
	CPoint m_ArrowHandlePosition;
	CPoint m_ToleranceArrowHandlePositionA;
	CPoint m_ToleranceArrowHandlePositionB;
	UINT m_nDragVersion;
	UINT m_nDragMode;
	CPoint m_DragButtonDownPosition;
	CPoint m_DragRelativeButtonDownPosition;

protected:
	VOID InitializeWindow()
	{
		T* pT = static_cast<T*>(this);
		_A(IsWindow());
		_A((GetStyle() & SS_TYPEMASK) == SS_LEFT); //_A((UINT) ((GetStyle() & SS_TYPEMASK) - SS_LEFT) < (SS_RIGHT - SS_LEFT + 1));
		//ModifyStyle(0, SS_NOTIFY);
		_A(GetExStyle() & WS_EX_TRANSPARENT);
		CWindow Parent = GetParent();
		pT->UpdateLayout();
		m_nVersion = 0;
		m_nDragMode = 0;
	}

public:
// CControlT
	CControlT() : 
		m_nExtendedStyle(CS_DEFAULT)
	{
		m_fAngle = 10.0 / 180 * M_PI;
		m_fToleranceAngle = 90.0 / 180 * M_PI;
		m_bLayoutValid = FALSE;
	}
	~CControlT()
	{
	}
	ULONG GetExtendedStyle() const
	{
		return m_nExtendedStyle;
	}
	VOID SetExtendedStyle(ULONG nStyle)
	{
		if(m_nExtendedStyle != nStyle)
		{
			m_nExtendedStyle = nStyle;
			if(IsWindow())
				_W(Invalidate());
		}
	}
	static DOUBLE Round(DOUBLE fValue) 
	{
		return (fValue > 0.0) ? floor(fValue + 0.5) : ceil(fValue - 0.5);
	}
	CPoint Transform(DOUBLE fX, DOUBLE fY, DOUBLE fAngle) const
	{
		CPoint Value;
		const DOUBLE S = sin(fAngle), C = cos(fAngle);
		// NOTE: Clockwise from Right
		Value.x = (LONG) Round(+ fX * C + fY * S);
		Value.y = (LONG) Round(- fX * S + fY * C);
		Value.Offset(m_CenterPosition);
		return Value;
	}
	VOID UpdateLayout()
	{
		T* pT = static_cast<T*>(this);
		CRect ClientPosition;
		_W(GetClientRect(ClientPosition));
		m_CenterPosition = ClientPosition.CenterPoint();
		m_nArrowSize = min(ClientPosition.Width(), ClientPosition.Height()) / 2 - 2;
		m_bLayoutValid = m_nArrowSize >= 24;
		if(!m_bLayoutValid)
			return;
		m_nToleranceArrowSize = m_nArrowSize * 3 / 4;
		m_ArrowHandlePosition = Transform(m_nArrowSize - 6, 0, m_fAngle);
		m_ToleranceArrowHandlePositionA = Transform(m_nToleranceArrowSize - 6, 0, m_fAngle - m_fToleranceAngle / 2);
		m_ToleranceArrowHandlePositionB = Transform(m_nToleranceArrowSize - 6, 0, m_fAngle + m_fToleranceAngle / 2);
	}
	VOID EraseBackground(CDCHandle Dc)
	{
		Dc;
	}
	VOID Paint(CDCHandle Dc)
	{
		const BOOL bEnabled = IsWindowEnabled();
		CRect Position;
		_W(GetClientRect(Position));
		Dc.SetBkMode(TRANSPARENT);
		if(!m_nArrowSize)
			return;
		CPen ArrowPen;
		_W(ArrowPen.CreatePen(PS_SOLID, 1, RGB(0x77, 0x77, 0x77)));
		CGdiSelector ArrowPenSelector(Dc, ArrowPen);
		CBrush Brush;
		_W(Brush.CreateSolidBrush(RGB(0xFF, 0xFF, 0xFF)));
		{
			#pragma region Tolerance Arrow
			{
				CBrush ToleranceArrowBrush;
				_W(ToleranceArrowBrush.CreateSolidBrush(RGB(0xCC, 0xFF, 0xCC)));
				CGdiSelector ToleranceArrowBrushSelector(Dc, ToleranceArrowBrush);
				if(m_fToleranceAngle > 0)
				{
					Dc.MoveTo(m_CenterPosition.x, m_CenterPosition.y);
					Dc.AngleArc(m_CenterPosition.x, m_CenterPosition.y, 2 * m_nToleranceArrowSize / 3, (FLOAT) ((m_fAngle - m_fToleranceAngle / 2) * 180 / M_PI), (FLOAT) (m_fToleranceAngle * 180 / M_PI));
					static const LONG A = 3;
					static const LONG B = 7;
					static const LONG C = 12;
					static const LONG D = 14;
					{
						const DOUBLE fAngle = m_fAngle - m_fToleranceAngle / 2;
						POINT pArrowPoints[] = {
							Transform(                        0, -A, fAngle),
							Transform(m_nToleranceArrowSize - C, -A, fAngle),
							Transform(m_nToleranceArrowSize - D, -B, fAngle),
							Transform(m_nToleranceArrowSize,      0, fAngle),
							Transform(m_nToleranceArrowSize - D, +B, fAngle),
							Transform(m_nToleranceArrowSize - C, +A, fAngle),
							Transform(                        0, +A, fAngle),
						};
						Dc.Polygon(pArrowPoints, DIM(pArrowPoints));
					}
					{
						const DOUBLE fAngle = m_fAngle + m_fToleranceAngle / 2;
						POINT pArrowPoints[] = {
							Transform(                        0, -A, fAngle),
							Transform(m_nToleranceArrowSize - C, -A, fAngle),
							Transform(m_nToleranceArrowSize - D, -B, fAngle),
							Transform(m_nToleranceArrowSize,      0, fAngle),
							Transform(m_nToleranceArrowSize - D, +B, fAngle),
							Transform(m_nToleranceArrowSize - C, +A, fAngle),
							Transform(                        0, +A, fAngle),
						};
						Dc.Polygon(pArrowPoints, DIM(pArrowPoints));
					}
				}
			}
			#pragma endregion 
			#pragma region Arrow
			CGdiSelector BrushSelector(Dc, Brush);
			static const LONG A = 4;
			static const LONG B = 10;
			static const LONG C = 12;
			static const LONG D = 14;
			POINT pArrowPoints[] = {
				Transform(               0, -A, m_fAngle),
				Transform(m_nArrowSize - C, -A, m_fAngle),
				Transform(m_nArrowSize - D, -B, m_fAngle),
				Transform(m_nArrowSize,      0, m_fAngle),
				Transform(m_nArrowSize - D, +B, m_fAngle),
				Transform(m_nArrowSize - C, +A, m_fAngle),
				Transform(               0, +A, m_fAngle),
			};
			Dc.Polygon(pArrowPoints, DIM(pArrowPoints));
			#pragma endregion 
		}
		static const LONG D = 8;
		static const LONG F = 1;
		Dc.Ellipse(m_CenterPosition.x - D, m_CenterPosition.y - D, m_CenterPosition.x + D + F, m_CenterPosition.y + D + F);
	}
	static BOOL Close(CPoint PositionA, CPoint PositionB, LONG nDistanceThreshold, CPoint* pRelativePosition = NULL)
	{
		if(pRelativePosition)
			*pRelativePosition = PositionA - PositionB;
		return (PositionA.x - PositionB.x) * (PositionA.x - PositionB.x) + (PositionA.y - PositionB.y) * (PositionA.y - PositionB.y) < (nDistanceThreshold * nDistanceThreshold);
	}
	UINT DragModeFromPosition(CPoint Position, CPoint* pRelativePosition = NULL) const
	{
		if(Close(m_ToleranceArrowHandlePositionA, Position, 6, pRelativePosition))
			return 2;
		if(Close(m_ToleranceArrowHandlePositionB, Position, 6, pRelativePosition))
			return 3;
		if(Close(m_ArrowHandlePosition, Position, 6, pRelativePosition))
			return 1;
		if(Close(m_ToleranceArrowHandlePositionA, Position, 10, pRelativePosition))
			return 2;
		if(Close(m_ToleranceArrowHandlePositionB, Position, 10, pRelativePosition))
			return 3;
		if(Close(m_ArrowHandlePosition, Position, 10, pRelativePosition))
			return 1;
		return 0;
	}
	DOUBLE GetAngle() const
	{
		return m_fAngle;
	}
	DOUBLE GetToleranceAngle() const
	{
		return m_fToleranceAngle;
	}
	VOID SetAngle(DOUBLE fAngle)
	{
		T* pT = static_cast<T*>(this);
		if(m_fAngle == fAngle)
			return;
		m_fAngle = fAngle;
		m_nVersion++;
		if(!pT->IsWindow())
			return;
		pT->UpdateLayout();
		pT->Invalidate();
	}
	VOID SetToleranceAngle(DOUBLE fToleranceAngle)
	{
		T* pT = static_cast<T*>(this);
		if(m_fToleranceAngle == fToleranceAngle)
			return;
		m_fToleranceAngle = fToleranceAngle;
		m_nVersion++;
		if(!pT->IsWindow())
			return;
		pT->UpdateLayout();
		pT->Invalidate();
	}

// CWindowImplBaseT
	BOOL SubclassWindow(HWND hWindow)
	{
		_A(!IsWindow() && CWindow(hWindow).IsWindow());
		_A(_tcsicmp(GetClassNameString(hWindow), GetWndClassName()) == 0);
		if(!__super::SubclassWindow(hWindow))
			return FALSE;
		T* pT = static_cast<T*>(this);
		pT->InitializeWindow();
		return TRUE;
	}

// Window Message Handler
	LRESULT OnCreate(CREATESTRUCT*)
	{
		T* pT = static_cast<T*>(this);
		if(DefWindowProc() != 0)
			return -1;
		pT->InitializeWindow();
		return 0;
	}
	LRESULT OnDestroy()
	{
		SetMsgHandled(FALSE);
		return 0;
	}
	LRESULT OnEnable(BOOL)
	{
		_W(Invalidate());
		_W(UpdateWindow());
		//SetMsgHandled(FALSE);
		return 0;
	}
	LRESULT OnSize(UINT, CSize)
	{
		T* pT = static_cast<T*>(this);
		pT->UpdateLayout();
		SetMsgHandled(FALSE);
		return 0;
	}
	LRESULT OnEraseBkgnd(CDCHandle Dc)
	{
		T* pT = static_cast<T*>(this);
		pT->EraseBackground(Dc);
		return TRUE;
	}
	LRESULT OnPaint(CDCHandle Dc)
	{
		T* pT = static_cast<T*>(this);
		if(Dc)
		{
			pT->EraseBackground(Dc);
			if(pT->GetExStyle() & WS_EX_TRANSPARENT)
				DrawThemeParentBackground(m_hWnd, Dc, NULL);
			pT->Paint(Dc);
		} else
		{
			CPaintDC Dc(m_hWnd);
			pT->EraseBackground((HDC) Dc);
			if(pT->GetExStyle() & WS_EX_TRANSPARENT)
				DrawThemeParentBackground(m_hWnd, Dc, &Dc.m_ps.rcPaint);
			pT->Paint((HDC) Dc);
		}
		return 0;
	}
	LRESULT OnPrintClient(CDCHandle Dc, UINT nOptions)
	{
		T* pT = static_cast<T*>(this);
		if(nOptions & PRF_ERASEBKGND)
			pT->EraseBackground((HDC) Dc);
		if(nOptions & PRF_CLIENT)
			pT->Paint(Dc);
		return 0;
	}
	LRESULT OnUpdateUiState(UINT nAction, UINT nElements)
	{
		// NTOE: If the control is subclassed or superclassed, this message can cause
		//       repainting without WM_PAINT. We don't use this state, so just do nothing.
		nAction; nElements;
		return 0;
	}
	LRESULT OnSetCursor(CWindow, UINT nHitTestCode, UINT nMouseMessage)
	{
		nHitTestCode; nMouseMessage;
		if(m_bLayoutValid)
		{
			CPoint Position;
			if(GetCursorPos(&Position))
			{
				_W(ScreenToClient(&Position));
				const UINT nDragMode = DragModeFromPosition(Position);
				if(nDragMode)
				{
					::SetCursor(AtlLoadSysCursor(IDC_SIZEALL));
					return TRUE;
				}
			}
		}
		SetMsgHandled(FALSE);
		return 0;
	}
	LRESULT OnMouseMove(UINT nButton, CPoint Position)
	{
		switch(m_nDragMode)
		{
		case 1: // Arrow Handle
			{
				CPoint AlignPosition = Position - m_DragRelativeButtonDownPosition;
				const DOUBLE fAngle = atan2(- (DOUBLE) (Position.y - m_CenterPosition.y), (DOUBLE) (Position.x - m_CenterPosition.x));
				m_fAngle = fAngle;
				m_nVersion++;
			}
			break;
		case 2: // Tolerance Arrow Handle (A)
			{
				CPoint AlignPosition = Position - m_DragRelativeButtonDownPosition;
				const DOUBLE fAngle = atan2(- (DOUBLE) (Position.y - m_CenterPosition.y), (DOUBLE) (Position.x - m_CenterPosition.x));
				DOUBLE fToleranceAngle = abs(fAngle - m_fAngle);
				if(fToleranceAngle > M_PI)
					fToleranceAngle = 2 * M_PI - fToleranceAngle;
				_A(fToleranceAngle >= 0 && fToleranceAngle <= M_PI);
				m_fToleranceAngle = 2 * fToleranceAngle;
				m_nVersion++;
			}
			break;
		case 3: // Tolerance Arrow Handle (B)
			{
				CPoint AlignPosition = Position - m_DragRelativeButtonDownPosition;
				const DOUBLE fAngle = atan2(- (DOUBLE) (Position.y - m_CenterPosition.y), (DOUBLE) (Position.x - m_CenterPosition.x));
				DOUBLE fToleranceAngle = abs(fAngle - m_fAngle);
				if(fToleranceAngle > M_PI)
					fToleranceAngle = 2 * M_PI - fToleranceAngle;
				_A(fToleranceAngle >= 0 && fToleranceAngle <= M_PI);
				m_fToleranceAngle = 2 * fToleranceAngle;
				m_nVersion++;
			}
			break;
		default:
			return 0;
		}
		#pragma region Notification
		NMHDR Header;
		Header.hwndFrom = m_hWnd;
		Header.idFrom = GetDlgCtrlID();
		Header.code = NC_CHANGING;
		SendMessage(GetParent(), WM_NOTIFY, (WPARAM) m_hWnd, (LPARAM) &Header);
		#pragma endregion
		UpdateLayout();
		Invalidate();
		return 0;
	}
	LRESULT OnLButtonDown(UINT nButton, CPoint Position)
	{
		if(!m_bLayoutValid)
			return 0;
		if(!(nButton & MK_LBUTTON))
			return 0;
		CPoint RelativePosition;
		m_nDragMode = DragModeFromPosition(Position, &RelativePosition);
		if(!m_nDragMode)
			return 0;
		m_DragButtonDownPosition = Position;
		m_DragRelativeButtonDownPosition = RelativePosition;
		m_nDragVersion = m_nVersion;
		SetCapture();
		::SetCursor(AtlLoadSysCursor(IDC_SIZEALL));
		return 0;
	}
	LRESULT OnLButtonUp(UINT nButton, CPoint Position)
	{
		const UINT nDragMode = m_nDragMode;
		ReleaseCapture();
		m_nDragMode = 0;
		if(nDragMode && m_nVersion != m_nDragVersion)
		{
			m_nDragVersion = m_nVersion;
			#pragma region Notification
			NMHDR Header;
			Header.hwndFrom = m_hWnd;
			Header.idFrom = GetDlgCtrlID();
			Header.code = NC_CHANGED;
			SendMessage(GetParent(), WM_NOTIFY, (WPARAM) m_hWnd, (LPARAM) &Header);
			#pragma endregion
		}
		return 0;
	}
};

class CControl : 
	public CControlT<CControl>
{
public:

DECLARE_WND_SUPERCLASS(_T("CControl"), GetWndClassName())

};

////////////////////////////////////////////////////////////
// CMainPropertySheet

class CMainPropertySheet :
	public CSizablePropertySheetT<CMainPropertySheet>
{
public:

BEGIN_MSG_MAP_EX(CMainPropertySheet)
	CHAIN_MSG_MAP(CSizablePropertySheet)
	//MSG_WM_SYSCOMMAND(OnSysCommand)
END_MSG_MAP()

public:

	////////////////////////////////////////////////////////
	// CMainPropertyPage

	class CMainPropertyPage :
		public CPropertyPageT<CMainPropertyPage>,
		public CDialogResize<CMainPropertyPage>,
		public CThemeImpl<CMainPropertyPage>
	{
	public:
		enum { IDD = IDD_MAIN_PROPERTYPAGE };

	BEGIN_MSG_MAP_EX(CMainPropertyPage)
		CHAIN_MSG_MAP(CPropertyPage)
		CHAIN_MSG_MAP(CDialogResize<CMainPropertyPage>)
		CHAIN_MSG_MAP(CThemeImpl<CMainPropertyPage>)
		MSG_WM_INITDIALOG(OnInitDialog)
		MSG_WM_DESTROY(OnDestroy)
		REFLECT_NOTIFICATIONS()
	END_MSG_MAP()

	BEGIN_DLGRESIZE_MAP(CMainPropertyPage)
		DLGRESIZE_CONTROL(IDC_CONTROL, DLSZ_SIZE_X | DLSZ_SIZE_Y)
	END_DLGRESIZE_MAP()

	public:

	private:
		CMainPropertySheet& m_PropertySheet;
		CControl m_Control;

	public:
	// CMainPropertyPage
		CMainPropertyPage(CMainPropertySheet* pPropertySheet) :
			m_PropertySheet(*pPropertySheet)
		{
		}
		VOID UpdateControls()
		{
		}

	// Window Message Handler
		LRESULT OnInitDialog(HWND, LPARAM)
		{
			_ATLTRY
			{
				CWaitCursor WaitCursor;
				_W(m_Control.SubclassWindow(GetDlgItem(IDC_CONTROL)));
				DlgResize_Init(FALSE);
				EnableThemeDialogTexture(ETDT_ENABLETAB);
				UpdateControls();
			}
			_ATLCATCHALL()
			{
				for(CWindow Window = GetWindow(GW_CHILD); Window.IsWindow(); Window = Window.GetWindow(GW_HWNDNEXT))
					Window.EnableWindow(FALSE);
				_ATLRETHROW;
			}
			return TRUE;
		}
		LRESULT OnDestroy()
		{
			return 0;
		}
		INT OnSetActive()
		{
			_ATLTRY
			{
				CWaitCursor WaitCursor;
				UpdateControls();
			}
			_ATLCATCHALL()
			{
				_Z_EXCEPTION();
				return -1;
			}
			return 0;
		}
	};

private:
	CMainPropertyPage m_MainPropertyPage;

public:
// CMainPropertySheet
	CMainPropertySheet() :
		CSizablePropertySheetT<CMainPropertySheet>(IDS_MAIN_PROPERTYSHEETCAPTION),
		m_MainPropertyPage(this)
	{
		AddPage(m_MainPropertyPage);
	}
	BOOL SetInitialPosition()
	{
		if(!__super::SetInitialPosition())
			return FALSE;
		SetIcon(AtlLoadIconImage(IDI_MODULE, LR_DEFAULTCOLOR, GetSystemMetrics(SM_CXICON), GetSystemMetrics(SM_CYICON)), TRUE);
		SetIcon(AtlLoadIconImage(IDI_MODULE, LR_DEFAULTCOLOR, GetSystemMetrics(SM_CXSMICON), GetSystemMetrics(SM_CYSMICON)), FALSE);
		#pragma region Caption
		CString sCaption;
		_W(GetWindowText(sCaption));
		#pragma region Indication of Bitness
		#if defined(_WIN64)
			sCaption.Append(_T(" (64-bit)"));
		#else
			if(SafeIsWow64Process())
				sCaption.Append(_T(" (32-bit)"));
		#endif // defined(_WIN64)
		#pragma endregion
		_W(SetWindowText(sCaption));
		#pragma endregion
		#pragma region System Menu
		//CMenuHandle Menu = GetSystemMenu(FALSE);
		//_W(Menu.AppendMenu(MF_SEPARATOR));
		//_W(Menu.AppendMenu(MF_STRING, ID_APP_ABOUT, _T("&About...")));
		#pragma endregion
		return TRUE;
	}

// Window Message Handelr
	//LRESULT OnSysCommand(UINT nCommand, CPoint)
	//{
	//	switch(nCommand)
	//	{
	//	case ID_APP_ABOUT:
	//		{
	//			CAboutDialog Dialog;
	//			Dialog.DoModal(m_hWnd);
	//		}
	//		break;
	//	default:
	//		SetMsgHandled(FALSE);
	//	}
	//	return 0;
	//}
};

////////////////////////////////////////////////////////////
// CMainDialog

class CMainDialog : 
	public CDialogImpl<CMainDialog>,
	//public CDialogResize<CMainDialog>,
	public CWindowWithPrivateMessagesT<CMainDialog>
{
public:
	enum { IDD = IDD_MAIN };

BEGIN_MSG_MAP_EX(CMainDialog)
	//CHAIN_MSG_MAP(CDialogResize<CMainDialog>)
	CHAIN_MSG_MAP(CWindowWithPrivateMessages)
	MSG_WM_INITDIALOG(OnInitDialog)
	MSG_WM_DESTROY(OnDestroy)
	MSG_WM_SYSCOMMAND(OnSysCommand)
	COMMAND_ID_HANDLER_EX(IDCANCEL, OnCommand)
	COMMAND_ID_HANDLER_EX(IDC_PROPERTYSHEET, OnPropertySheet)
	NOTIFY_HANDLER_EX(IDC_CONTROL, CControl::NC_CHANGING, OnControlChanging)
	NOTIFY_HANDLER_EX(IDC_CONTROL, CControl::NC_CHANGED, OnControlChanged)
	REFLECT_NOTIFICATIONS()
END_MSG_MAP()

//BEGIN_DLGRESIZE_MAP(CMainDialog)
//	DLGRESIZE_CONTROL(IDC_PROPERTYSHEET, DLSZ_MOVE_X | DLSZ_MOVE_Y)
//	DLGRESIZE_CONTROL(IDCANCEL, DLSZ_MOVE_X | DLSZ_MOVE_Y)
//END_DLGRESIZE_MAP()

public:

private:
	CControl m_Control;

	VOID UpdateControls()
	{
	}

public:
// CMainDialog
	VOID UpdateCaption(LPCTSTR pszEventName)
	{
		SetWindowText(AtlFormatString(_T("%s: %.1f ± %.2f"), pszEventName, m_Control.GetAngle() * 180 / M_PI, (m_Control.GetToleranceAngle() / 2) * 180 / M_PI));
	}

// Window Message Handler
	LRESULT OnInitDialog(HWND, LPARAM)
	{
		_W(m_Control.SubclassWindow(GetDlgItem(IDC_CONTROL)));
		//m_PropertySheetButton = GetDlgItem(OnPropertySheet);
		//DlgResize_Init();
		SetIcon(AtlLoadIconImage(IDI_MODULE, LR_DEFAULTCOLOR, GetSystemMetrics(SM_CXICON), GetSystemMetrics(SM_CYICON)), TRUE);
		SetIcon(AtlLoadIconImage(IDI_MODULE, LR_DEFAULTCOLOR, GetSystemMetrics(SM_CXSMICON), GetSystemMetrics(SM_CYSMICON)), FALSE);
		CMenuHandle Menu = GetSystemMenu(FALSE);
		_W(Menu.AppendMenu(MF_SEPARATOR));
		_W(Menu.AppendMenu(MF_STRING, ID_APP_ABOUT, _T("&About...")));
		_W(CenterWindow());
		UpdateControls();
		#if _DEVELOPMENT
			// ...
		#endif // _DEVELOPMENT
		return TRUE;
	}
	LRESULT OnDestroy()
	{
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
	LRESULT OnControlChanging(NMHDR*)
	{
		UpdateCaption(_T("Changing"));
		return 0;
	}
	LRESULT OnControlChanged(NMHDR*)
	{
		UpdateCaption(_T("Changed"));
		return 0;
	}
	LRESULT OnPropertySheet(UINT, INT, HWND)
	{
		CMainPropertySheet PropertySheet;
		PropertySheet.DoModal(m_hWnd);
		return 0;
	}
};
