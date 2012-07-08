////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2012
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#pragma once

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
	MSG_WM_TIMER(OnTimer)
	COMMAND_ID_HANDLER_EX(IDCANCEL, OnCommand)
	REFLECT_NOTIFICATIONS()
END_MSG_MAP()

public:

	////////////////////////////////////////////////////////
	// Time Identifiers

	enum
	{
		TIMER_FIRST = 0,
		TIMER_UPDATEFORGEOUND,
		TIMER_ACTION,
	};

private:
	CRoEdit m_ForegroundEdit;
	CRoEdit m_StateEdit;
	INT m_nActionCountdown;
	CString m_sAction;

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
		_W(CenterWindow());
		m_ForegroundEdit = GetDlgItem(IDC_FOREGROUND);
		m_StateEdit = GetDlgItem(IDC_STATE);
		GetDlgItem(IDC_EDIT).SetFocus();
		m_nActionCountdown = 7;
		SetTimer(TIMER_UPDATEFORGEOUND, 1000);
		SetTimer(TIMER_ACTION, 7250);
		return FALSE;
	}
	LRESULT OnTimer(UINT_PTR nEvent)
	{
		switch(nEvent)
		{
		case TIMER_UPDATEFORGEOUND:
			{
				CWindow Window = GetForegroundWindow();
				CString sWindow;
				if(Window)
				{
					CString sText;
					Window.GetWindowText(sText);
					if(sText.GetLength() > 32)
						sText = sText.Left(30) + _T("...");
					sWindow = AtlFormatString(_T("0x%08x \"%s\" (%d)"), Window, sText, Window.GetWindowThreadID());
				} else
					sWindow = _T("NULL");
				m_ForegroundEdit.SetWindowText(sWindow);
				m_nActionCountdown--;
				if(m_nActionCountdown > 0)
					m_StateEdit.SetWindowText(AtlFormatString(_T("%d seconds before stealing..."), m_nActionCountdown));
				else if(m_nActionCountdown == 0)
					m_StateEdit.SetWindowText(_T("About to steal..."));
				else
					m_StateEdit.SetWindowText(m_sAction);
			}
			break;
		case TIMER_ACTION:
			{
				KillTimer(TIMER_ACTION);
				CWindow Window = GetForegroundWindow();
				if(Window)
				{
					const DWORD nWindowThreadIdentifier = Window.GetWindowThreadID();
					const DWORD nThreadIdentifier = GetCurrentThreadId();
					__E(AttachThreadInput(nThreadIdentifier, nWindowThreadIdentifier, TRUE));
					GetDlgItem(IDC_EDIT).SetFocus();
					_W(AttachThreadInput(nThreadIdentifier, nWindowThreadIdentifier, FALSE));
					m_sAction = _T("Done");
				} else
					m_sAction = _T("Nothing to do");
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
};
