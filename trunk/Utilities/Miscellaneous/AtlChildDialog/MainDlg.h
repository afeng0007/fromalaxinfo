#pragma once

class CChildDialog :
	public CDialogImpl<CChildDialog>
{
public:
	enum { IDD = IDD_CHILD };

BEGIN_MSG_MAP(CChildDialog)
	MESSAGE_HANDLER(WM_INITDIALOG, OnInitDialog)
END_MSG_MAP()

public:
	CWindow m_EditWindow;

public:
// CChildDialog

// Window Message Handlers
	LRESULT OnInitDialog(UINT, WPARAM, LPARAM, BOOL&)
	{
		m_EditWindow = GetDlgItem(IDC_EDIT);
		return TRUE;
	}
};

class CMainDialog : 
	public CDialogImpl<CMainDialog>
{
public:
	enum { IDD = IDD_MAIN };

BEGIN_MSG_MAP(CMainDialog)
	MESSAGE_HANDLER(WM_INITDIALOG, OnInitDialog)
	COMMAND_ID_HANDLER(IDCANCEL, OnCancel)
END_MSG_MAP()

private:
	CChildDialog m_ChildDialog;

public:
// CMainDialog

// Window Message Handlers
	LRESULT OnInitDialog(UINT, WPARAM, LPARAM, BOOL&)
	{
		ATLVERIFY(m_ChildDialog.Create(m_hWnd, (LPARAM) this));
		ATLVERIFY(m_ChildDialog.MoveWindow(50, 50, 200, 150));
		m_ChildDialog.m_EditWindow.SetWindowText(_T("Some Text"));
		m_ChildDialog.ShowWindow(SW_SHOWNORMAL);
		m_ChildDialog.SetFocus();
		CenterWindow();
		return FALSE;
	}
	LRESULT OnCancel(UINT, INT nIdentifier, HWND, BOOL&)
	{
		EndDialog(nIdentifier);
		return 0;
	}
};
