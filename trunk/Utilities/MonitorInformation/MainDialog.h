////////////////////////////////////////////////////////////
// MainDialog.h
//
// Copyright (C) Alax.Info, 2006-2008
// http://alax.info
//
// A permission to use the source code is granted as long as reference to 
// source website http://alax.info is retained.
// 
// Created by Roman Ryltsov roman@alax.info
// 
// $Id: MainDialog.h 219 2010-08-20 12:57:35Z alax $

#pragma once

#include <atlcoll.h>
#include <atlcrack.h>
#include <atlmisc.h>

////////////////////////////////////////////////////////////
// CMainDialog

class CMainDialog : 
	public CDialogImpl<CMainDialog>,
	public CDialogResize<CMainDialog>
{
public:

	enum { IDD = IDD_MAIN };

BEGIN_MSG_MAP_EX(CMainDialog)
	MSG_WM_GETMINMAXINFO(OnGetMinMaxInfo)
	CHAIN_MSG_MAP(CDialogResize<CMainDialog>)
	MSG_WM_INITDIALOG(OnInitDialog)
	COMMAND_ID_HANDLER_EX(IDOK, OnCommand)
	COMMAND_ID_HANDLER_EX(IDCANCEL, OnCommand)
END_MSG_MAP()

BEGIN_DLGRESIZE_MAP(CMainDialog)
	DLGRESIZE_CONTROL(IDC_TEXT, DLSZ_SIZE_X | DLSZ_SIZE_Y)
	DLGRESIZE_CONTROL(IDC_MODE, DLSZ_MOVE_Y)
	DLGRESIZE_CONTROL(IDOK, DLSZ_MOVE_X | DLSZ_MOVE_Y)
END_DLGRESIZE_MAP()

public:
	typedef MONITORINFOEX MYMONITORINFO; // To switch between MONITORINFO and MONITORINFOEX

	////////////////////////////////////////////////////////
	// CMonitorInformation

	class CMonitorInformation
	{
	public:
		MYMONITORINFO m_MonitorInformation;

	public:
	// CMonitorInformation
		CMonitorInformation() throw()
		{
		}
		CMonitorInformation(const CMonitorInformation& MonitorInformation) throw() :
			m_MonitorInformation(MonitorInformation.m_MonitorInformation)
		{
		}
		CMonitorInformation(const MYMONITORINFO& MonitorInformation) throw() :
			m_MonitorInformation(MonitorInformation)
		{
		}
	};

	////////////////////////////////////////////////////////
	// CMonitorInformationArray

	class CMonitorInformationArray :
		public CAtlArray<CMonitorInformation>
	{
	public:
	// CMonitorInformationArray
	};

private:
	CMonitorInformationArray m_MonitorInformationArray;
	SIZE_T m_nMonitorIndex;
	CString m_sText;
	CEdit m_TextEdit;
	CComboBox m_ModeComboBox;

	BOOL EnumerateMonitors(HMONITOR hMonitor, CDCHandle MonitorDc, const CRect& MonitorPosition)
	{
		m_sText.AppendFormat(_T("Monitor %d at (%d, %d) - (%d, %d):\r\n"), m_nMonitorIndex, MonitorPosition.left, MonitorPosition.top, MonitorPosition.right, MonitorPosition.bottom);
		MYMONITORINFO MonitorInformation;
		ZeroMemory(&MonitorInformation, sizeof MonitorInformation);
		MonitorInformation.cbSize = sizeof MonitorInformation;
		ATLVERIFY(GetMonitorInfo(hMonitor, &MonitorInformation));
		m_sText.AppendFormat(_T("  Coordinates (rcMonitor): (%d, %d) - (%d, %d)\r\n"), MonitorInformation.rcMonitor.left, MonitorInformation.rcMonitor.top, MonitorInformation.rcMonitor.right, MonitorInformation.rcMonitor.bottom);
		m_sText.AppendFormat(_T("  Work Area (rcWork): (%d, %d) - (%d, %d)\r\n"), MonitorInformation.rcWork.left, MonitorInformation.rcWork.top, MonitorInformation.rcWork.right, MonitorInformation.rcWork.bottom);
		m_sText.AppendFormat(_T("  Flags (dwFlags): 0x%x\r\n"), MonitorInformation.dwFlags);
		__if_exists(MYMONITORINFO::szDevice)
		{
			m_sText.AppendFormat(_T("  Device Name (szDevice): %s\r\n"), MonitorInformation.szDevice);
		}
		m_sText.Append(_T("\r\n"));
		ATLVERIFY(m_MonitorInformationArray.Add(MonitorInformation) == m_nMonitorIndex);
		m_nMonitorIndex++;
		return TRUE;
	}
	static BOOL CALLBACK EnumerateMonitors(HMONITOR hMonitor, HDC hMonitorDc, RECT* pMonitorPosition, LPARAM nParameter) throw()
	{
		return ((CMainDialog*) nParameter)->EnumerateMonitors(hMonitor, hMonitorDc, *pMonitorPosition);
	}

public:
// CMainDialog
	VOID Initialize()
	{
		m_MonitorInformationArray.RemoveAll();
		m_nMonitorIndex = 0;
		m_sText.Empty();
		m_sText.Append(_T("System Metrics:\r\n"));
		m_sText.AppendFormat(_T("  SM_XVIRTUALSCREEN: %d\r\n"), GetSystemMetrics(SM_XVIRTUALSCREEN));
		m_sText.AppendFormat(_T("  SM_YVIRTUALSCREEN: %d\r\n"), GetSystemMetrics(SM_YVIRTUALSCREEN));
		m_sText.AppendFormat(_T("  SM_CXVIRTUALSCREEN: %d\r\n"), GetSystemMetrics(SM_CXVIRTUALSCREEN));
		m_sText.AppendFormat(_T("  SM_CYVIRTUALSCREEN: %d\r\n"), GetSystemMetrics(SM_CYVIRTUALSCREEN));
		m_sText.AppendFormat(_T("  SM_CMONITORS: %d\r\n"), GetSystemMetrics(SM_CMONITORS));
		m_sText.AppendFormat(_T("  SM_SAMEDISPLAYFORMAT: %d\r\n"), GetSystemMetrics(SM_SAMEDISPLAYFORMAT));
		m_sText.Append(_T("\r\n"));
		EnumDisplayMonitors(NULL, NULL, EnumerateMonitors, (LPARAM) this);
	}

// Window message handlers
	LRESULT OnInitDialog(HWND, LPARAM)
	{
		Initialize();
		DlgResize_Init(FALSE);
		m_TextEdit = GetDlgItem(IDC_TEXT);
		m_TextEdit.SetWindowText(m_sText);
		m_ModeComboBox = GetDlgItem(IDC_MODE);
		for(SIZE_T nMonitorIndex = 0; nMonitorIndex < m_MonitorInformationArray.GetCount(); nMonitorIndex++)
		{
			const CMonitorInformation& MonitorInformation = m_MonitorInformationArray[nMonitorIndex];
			CString sText;
			sText.Format(_T("Maximize to Monitor #%d, (%d, %d) - (%d, %d)"), nMonitorIndex + 1, MonitorInformation.m_MonitorInformation.rcMonitor.left, MonitorInformation.m_MonitorInformation.rcMonitor.top, MonitorInformation.m_MonitorInformation.rcMonitor.right, MonitorInformation.m_MonitorInformation.rcMonitor.bottom);
			m_ModeComboBox.SetItemData(m_ModeComboBox.AddString(sText), (DWORD_PTR) nMonitorIndex);
		}
		m_ModeComboBox.SetCurSel(0);
		SetIcon(AtlLoadIconImage(IDR_MAINFRAME, GetSystemMetrics(SM_CXICON), GetSystemMetrics(SM_CYICON), LR_DEFAULTCOLOR), TRUE);
		//SetIcon(AtlLoadIconImage(IDR_MAINFRAME, GetSystemMetrics(SM_CXSMICON), GetSystemMetrics(SM_CYSMICON), LR_DEFAULTCOLOR), FALSE);
		ATLVERIFY(CenterWindow());
		return TRUE;
	}
	LRESULT OnGetMinMaxInfo(MINMAXINFO* pMinMaxInfo)
	{
		ATLASSERT(pMinMaxInfo);
		const CMonitorInformation& MonitorInformation = m_MonitorInformationArray[m_ModeComboBox.GetItemData(m_ModeComboBox.GetCurSel())];
		reinterpret_cast<CPoint&>(pMinMaxInfo->ptMaxPosition) = reinterpret_cast<const CRect&>(MonitorInformation.m_MonitorInformation.rcMonitor).TopLeft();
		reinterpret_cast<CPoint&>(pMinMaxInfo->ptMaxTrackSize) = reinterpret_cast<const CRect&>(MonitorInformation.m_MonitorInformation.rcMonitor).Size();
		return 0;
	}
	LRESULT OnCommand(UINT, INT nIdentifier, HWND)
	{
		ATLVERIFY(EndDialog(nIdentifier));
		return 0;
	}
};
