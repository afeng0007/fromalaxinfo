// MainDlg.h : interface of the CMainDlg class
//
/////////////////////////////////////////////////////////////////////////////

#pragma once

#include <atlmisc.h>

class CMyFileDialog :
	public CFileDialogImpl<CMyFileDialog>
{
public:

BEGIN_MSG_MAP(CMyFileDialog)
	CHAIN_MSG_MAP(CFileDialogImpl<CMyFileDialog>)
	MESSAGE_HANDLER(WM_INITDIALOG, OnInitDialog)
	COMMAND_HANDLER(123, BN_CLICKED, OnTestClicked)
END_MSG_MAP()

private:
	CButton m_Button;

public:
// CMyFileDialog
	CMyFileDialog() :
		CFileDialogImpl<CMyFileDialog>(TRUE)
	{
	}

// Window Message Handler
	LRESULT OnInitDialog(UINT, WPARAM, LPARAM, BOOL& bHandled)
	{
		CRect Position;
		ATLVERIFY(GetWindowRect(Position));
		ATLVERIFY(SetWindowPos(NULL, 0, 0, Position.Width(), Position.Height() + 50, SWP_NOMOVE | SWP_NOZORDER | SWP_NOACTIVATE));
		CRect ButtonPosition;
		ButtonPosition.left = 10;
		ButtonPosition.top = Position.Height() + 10;
		ButtonPosition.right = 90;
		ButtonPosition.bottom = ButtonPosition.top + 20;
		m_Button.Create(m_hWnd, ButtonPosition, _T("Test"), CControlWinTraits::GetWndStyle(0), CControlWinTraits::GetWndExStyle(0), 123);
		bHandled = FALSE;
		return 0;
	}
	LRESULT OnTestClicked(UINT, INT, HWND, BOOL&)
	{
		AtlMessageBox(m_hWnd, _T("Test"), _T("Debug"), MB_ICONINFORMATION | MB_OK);
		return 0;
	}
};

class CMainDlg : public CDialogImpl<CMainDlg>
{
public:
	enum { IDD = IDD_MAINDLG };

	BEGIN_MSG_MAP(CMainDlg)
		MESSAGE_HANDLER(WM_INITDIALOG, OnInitDialog)
		COMMAND_ID_HANDLER(ID_APP_ABOUT, OnAppAbout)
		COMMAND_ID_HANDLER(IDOK, OnOK)
		COMMAND_ID_HANDLER(IDCANCEL, OnCancel)
	END_MSG_MAP()

// Handler prototypes (uncomment arguments if needed):
//	LRESULT MessageHandler(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/)
//	LRESULT CommandHandler(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/)
//	LRESULT NotifyHandler(int /*idCtrl*/, LPNMHDR /*pnmh*/, BOOL& /*bHandled*/)

	LRESULT OnInitDialog(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/)
	{
		// center the dialog on the screen
		CenterWindow();

		// set icons
		HICON hIcon = AtlLoadIconImage(IDR_MAINFRAME, LR_DEFAULTCOLOR, ::GetSystemMetrics(SM_CXICON), ::GetSystemMetrics(SM_CYICON));
		SetIcon(hIcon, TRUE);
		HICON hIconSmall = AtlLoadIconImage(IDR_MAINFRAME, LR_DEFAULTCOLOR, ::GetSystemMetrics(SM_CXSMICON), ::GetSystemMetrics(SM_CYSMICON));
		SetIcon(hIconSmall, FALSE);

		return TRUE;
	}

	LRESULT OnAppAbout(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/)
	{
		CSimpleDialog<IDD_ABOUTBOX, FALSE> dlg;
		dlg.DoModal();
		return 0;
	}

	LRESULT OnOK(WORD /*wNotifyCode*/, WORD wID, HWND /*hWndCtl*/, BOOL& /*bHandled*/)
	{
		CMyFileDialog Dialog;
		Dialog.DoModal(m_hWnd);

		// TODO: Add validation code 
		EndDialog(wID);
		return 0;
	}

	LRESULT OnCancel(WORD /*wNotifyCode*/, WORD wID, HWND /*hWndCtl*/, BOOL& /*bHandled*/)
	{
		EndDialog(wID);
		return 0;
	}
};
