////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2013
// Created by Roman Ryltsov roman@alax.info

#pragma once

#include "rocontrols.h"

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
	COMMAND_ID_HANDLER_EX(IDCANCEL, OnCancel)
	NOTIFY_HANDLER_EX(IDC_TREE, CRoOptionTreeView::NC_SELECTEDCHANGED, OnTreeViewSelectedChanged)
	NOTIFY_HANDLER_EX(IDC_TREE, CRoOptionTreeView::NC_VALUECHANGED, OnTreeViewValueChanged)
	REFLECT_NOTIFICATIONS()
END_MSG_MAP()

public:

private:
	CRoOptionTreeView m_TreeView;

public:
// CMainDialog
	CMainDialog() throw()
	{
	}

// Window message handlers
	LRESULT OnInitDialog(HWND, LPARAM)
	{
		//SetIcon(AtlLoadIconImage(IDR_MAINFRAME, LR_DEFAULTCOLOR, GetSystemMetrics(SM_CXICON), GetSystemMetrics(SM_CYICON)), FALSE);
		//SetIcon(AtlLoadIconImage(IDR_MAINFRAME, LR_DEFAULTCOLOR, GetSystemMetrics(SM_CXSMICON), GetSystemMetrics(SM_CYSMICON)), FALSE);
		_W(m_TreeView.SubclassWindow(GetDlgItem(IDC_TREE)));

		CObjectPtr<CRoOptionTreeView::CStaticItem> pChecksItem = m_TreeView.InsertStaticItem(_T("check"), _T("Check Boxes"));
		m_TreeView.InsertCheckItem(pChecksItem->m_hItem, _T("a"), _T("Check Box A"));
		m_TreeView.InsertCheckItem(pChecksItem->m_hItem, _T("b"), _T("Check Box B"));
		m_TreeView.InsertCheckItem(pChecksItem->m_hItem, _T("c"), _T("Check Box C"));
		CObjectPtr<CRoOptionTreeView::CStaticItem> pRadiosItem = m_TreeView.InsertStaticItem(_T("radio"), _T("Radio Buttons"));
		m_TreeView.InsertRadioItem(pRadiosItem->m_hItem, _T("a"), _T("Radio Button A"));
		m_TreeView.InsertRadioItem(pRadiosItem->m_hItem, _T("b"), _T("Radio Button B"));
		m_TreeView.InsertRadioItem(pRadiosItem->m_hItem, _T("c"), _T("Radio Button C"));

		static LPCTSTR g_ppszIdentifiers[] = 
		{
			_T("check/b"),
		};
		static LPCTSTR g_ppszInfoTips[] = 
		{
			_T("Check Box B") _T("\r\n") _T("\r\n") _T("Blah Blah Blah"),
		};
		m_TreeView.SetInfoTips(g_ppszIdentifiers, g_ppszInfoTips);

		m_TreeView.SetCheck(_T("check/b"), TRUE);
		m_TreeView.SetRadio(_T("radio"), _T("b"));

		_W(CenterWindow());
		return TRUE;
	}
	LRESULT OnCancel(UINT, INT nIdentifier, HWND)
	{
		//CString s;
		//s += AtlFormatString(_T("check/b: %d"), m_TreeView.GetCheck(_T("check/b"))) + _T("\r\n");
		//s += AtlFormatString(_T("radio: %s"), m_TreeView.GetRadio(_T("radio"))) + _T("\r\n");
		//AtlMessageBoxEx(m_hWnd, (LPCTSTR) s, _T("Value"), MB_OK | MB_ICONINFORMATION);
		_W(EndDialog(nIdentifier));
		return 0;
	}
	LRESULT OnTreeViewSelectedChanged(NMHDR*)
	{
		_Z4(atlTraceGeneral, 4, _T("m_TreeView.GetSelectedIdentifier() %s\n"), m_TreeView.GetSelectedIdentifier());
		return 0;
	}
	LRESULT OnTreeViewValueChanged(NMHDR*)
	{
		_Z4(atlTraceGeneral, 4, _T("...\n"));
		return 0;
	}
};
