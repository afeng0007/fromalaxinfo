////////////////////////////////////////////////////////////
// AboutDialog.h - 
// 
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#pragma once

#include <atlctrls.h>
#include <atlctrlx.h>
#include "rocontrols.h"

#pragma comment(lib, "version.lib")

////////////////////////////////////////////////////////////
// CAboutDialog

class CAboutDialog : 
	public CDialogImpl<CAboutDialog>
{
public:

	enum { IDD = IDD_ABOUT };

BEGIN_MSG_MAP_EX(CAboutDialog)
	MSG_WM_INITDIALOG(OnInitDialog)
	MSG_WM_DESTROY(OnDestroy)
	COMMAND_ID_HANDLER_EX(IDOK, OnCommand)
	COMMAND_ID_HANDLER_EX(IDCANCEL, OnCommand)
END_MSG_MAP()

protected:
	CFont m_TitleFont;
	CFont m_DisclaimerFont;
	CRoHyperStatic m_WebsiteHyperStatic;
	CRoHyperStatic m_EmailHyperStatic;

public:
// CAboutDialog
	CAboutDialog() throw()
	{
		_Z4(atlTraceRefcount, 4, _T("this 0x%08x\n"), this);
	}
	~CAboutDialog() throw()
	{
		_Z4(atlTraceRefcount, 4, _T("this 0x%08x\n"), this);
	}

// Window message handlers
	LRESULT OnInitDialog(HWND, LPARAM)
	{
		CStatic(GetDlgItem(IDC_ABOUT_ICON)).SetIcon(AtlLoadIconImage(IDI_MODULE, LR_DEFAULTCOLOR, 48, 48));
		// Create and apply title font
		{
			CLogFont LogFont;
			LogFont.lfHeight = -MulDiv(12, GetDeviceCaps(CClientDC(m_hWnd), LOGPIXELSY), 72);
			LogFont.lfWeight = FW_BOLD;
			LogFont.lfItalic = TRUE;
			_tcsncpy_s(LogFont.lfFaceName, _countof(LogFont.lfFaceName), _T("Arial"), _TRUNCATE);
			_W(m_TitleFont.CreateFontIndirect(&LogFont));
			CStatic(GetDlgItem(IDC_ABOUT_TITLE)).SetFont(m_TitleFont);
		}
		// Create and apply disclaimer font
		{
			CLogFont LogFont;
			LogFont.lfHeight = -MulDiv(7, GetDeviceCaps(CClientDC(m_hWnd), LOGPIXELSY), 72);
			LogFont.lfWeight = FW_NORMAL;
			_tcsncpy_s(LogFont.lfFaceName, _countof(LogFont.lfFaceName), _T("Lucida Console"), _TRUNCATE);
			_W(m_DisclaimerFont.CreateFontIndirect(&LogFont));
			CStatic CopyrightWarningText = GetDlgItem(IDC_ABOUT_COPYRIGHTWARNING);
			CopyrightWarningText.SetFont(m_DisclaimerFont);
			{
				CString sText = AtlLoadString(IDC_ABOUT_COPYRIGHTWARNING);
				CopyrightWarningText.SetWindowText(sText);
				CRect CurrentPosition;
				_W(CopyrightWarningText.GetWindowRect(CurrentPosition));
				CRect Position = CurrentPosition;
				{
					CClientDC Dc(CopyrightWarningText);
					CGdiSelector FontSelector(Dc, m_DisclaimerFont);
					_W(Dc.DrawText(sText, -1, Position, DT_TOP | DT_LEFT | DT_WORDBREAK | DT_CALCRECT));
				}
				Position.right = CurrentPosition.right;
				CRect WindowPosition;
				_W(GetWindowRect(WindowPosition));
				_W(SetWindowPos(NULL, 0, 0, WindowPosition.Width(), WindowPosition.Height() + (Position.Height() - CurrentPosition.Height()), SWP_NOMOVE | SWP_NOACTIVATE | SWP_NOZORDER));
				static const LONG g_nSafetyHeight = 4;
				_W(CopyrightWarningText.SetWindowPos(NULL, 0, 0, Position.Width(), Position.Height() + g_nSafetyHeight, SWP_NOMOVE | SWP_NOACTIVATE | SWP_NOZORDER));
			}
		}
		// Update version text
		CStatic ProductVersionStatic = GetDlgItem(IDC_ABOUT_PRODUCTVERSION), FileVersionStatic = GetDlgItem(IDC_ABOUT_FILEVERSION);
		CString sProductVersionFormat, sFileVersionFormat;
		ProductVersionStatic.GetWindowText(sProductVersionFormat);
		FileVersionStatic.GetWindowText(sFileVersionFormat);
		CPath sModulePath = _VersionInfoHelper::GetModulePath();
		ProductVersionStatic.SetWindowText(_VersionInfoHelper::GetVersionString(_VersionInfoHelper::GetProductVersion(sModulePath), sProductVersionFormat));
		FileVersionStatic.SetWindowText(_VersionInfoHelper::GetVersionString(_VersionInfoHelper::GetFileVersion(sModulePath), sFileVersionFormat));
		// Update hyperlinks
		_W(m_WebsiteHyperStatic.SubclassWindow(GetDlgItem(IDC_ABOUT_WEBSITE)));
		_W(m_EmailHyperStatic.SubclassWindow(GetDlgItem(IDC_ABOUT_EMAIL)));
		// Update caption
		{
#if _TRACE
			CString sCaption;
			_W(GetWindowText(sCaption));
			sCaption.Append(_T(" // "));
#if _DEVELOPMENT
			sCaption.Append(_T("Dev "));
#endif // _DEVELOPMENT
			sCaption.Append(_VersionInfoHelper::GetVersionString(_VersionInfoHelper::GetFileVersion(_VersionInfoHelper::GetModulePath())));
			_W(SetWindowText(sCaption));
#endif // _TRACE
		}
		// Update window position and focus
		_W(CenterWindow(GetParent()));
		GetDlgItem(IDOK).SetFocus();
		return FALSE;
	}
	LRESULT OnDestroy() throw()
	{
		_W(m_TitleFont.DeleteObject());
		_W(m_DisclaimerFont.DeleteObject());
		return 0;
	}
	LRESULT OnCommand(UINT, INT nIdentifier, HWND) throw()
	{
		_W(EndDialog(nIdentifier));
		return 0;
	}
};
