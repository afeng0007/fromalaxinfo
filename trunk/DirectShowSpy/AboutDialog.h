////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2015
// Created by Roman Ryltsov roman@alax.info, http://alax.info
//
// This source code is published to complement DirectShowSpy developer powertoy 
// and demonstrate the internal use of APIs and tricks powering the tool. It is 
// allowed to freely re-use the portions of the code in other projects, commercial 
// or otherwise (provided that you don’t pretend that you wrote the original tool).
//
// Please keep in mind that DirectShowSpy is a developer tool, it is strongly recommended
// that it is not shipped with release grade software. It is allowed to distribute
// DirectShowSpy if only it is not registered with Windows by default and either
// used privately, or registered on specific throubleshooting request. The advice applies 
// to hooking methods used by DirectShowSpy in general as well.

#pragma once

#include <atlsecurity.h>
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
	static CFontHandle CreateTitleFont()
	{
		CLogFont LogFont;
		LogFont.lfHeight = -MulDiv(12, GetDeviceCaps(CClientDC(GetDesktopWindow()), LOGPIXELSY), 72);
		LogFont.lfWeight = FW_BOLD;
		LogFont.lfItalic = TRUE;
		_tcsncpy_s(LogFont.lfFaceName, _countof(LogFont.lfFaceName), _T("Arial"), _TRUNCATE);
		CFont Font;
		_W(Font.CreateFontIndirect(&LogFont));
		return Font.Detach();
	}
	static CFontHandle CreateDisclaimerFont()
	{
		CLogFont LogFont;
		LogFont.lfHeight = -MulDiv(7, GetDeviceCaps(CClientDC(GetDesktopWindow()), LOGPIXELSY), 72);
		LogFont.lfWeight = FW_NORMAL;
		_tcsncpy_s(LogFont.lfFaceName, _countof(LogFont.lfFaceName), _T("Lucida Console"), _TRUNCATE);
		CFont Font;
		_W(Font.CreateFontIndirect(&LogFont));
		return Font.Detach();
	}
	CAboutDialog()
	{
		_Z4_THIS();
	}
	~CAboutDialog()
	{
		_Z4_THIS();
	}
	static BOOL IsAdministrator()
	{
		bool bIsMember = FALSE;
		return CAccessToken().CheckTokenMembership(Sids::Admins(), &bIsMember) && bIsMember;
	}
	static VOID UpdateCaption(CWindow Window)
	{
		CString sCaption;
		_W(Window.GetWindowText(sCaption));
		CRoArrayT<CString> SpecifierArray;
		#if defined(_WIN64)
			SpecifierArray.Add(_T("64-bit"));
		#else
			if(SafeIsWow64Process())
				SpecifierArray.Add(_T("32-bit"));
		#endif // defined(_WIN64)
		if(IsWindowsVistaOrGreater() && IsAdministrator())
			SpecifierArray.Add(_T("Administrator"));
		if(!SpecifierArray.IsEmpty())
			sCaption = AtlFormatString(_T("%s (%s)"), sCaption, _StringHelper::Join(SpecifierArray, _T(", ")));
		#if _TRACE
			sCaption.Append(_T(" // "));
			#if _DEVELOPMENT
				sCaption.Append(_T("Dev "));
			#endif // _DEVELOPMENT
			sCaption.Append(_VersionInfoHelper::GetVersionString(_VersionInfoHelper::GetFileVersion(_VersionInfoHelper::GetModulePath())));
		#endif // _TRACE
		Window.SetWindowText(sCaption);
	}

// Window message handlers
	LRESULT OnInitDialog(HWND, LPARAM)
	{
		CStatic(GetDlgItem(IDC_ABOUT_ICON)).SetIcon(AtlLoadIconImage(IDI_MODULE, LR_DEFAULTCOLOR, 48, 48));
		#pragma region Title Font
		m_TitleFont = CreateTitleFont();
		CStatic(GetDlgItem(IDC_ABOUT_TITLE)).SetFont(m_TitleFont);
		#pragma endregion 
		#pragma region Disclaimer Font
		{
			m_DisclaimerFont = CreateDisclaimerFont();
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
		#pragma endregion 
		#pragma region Version Text
		CStatic ProductVersionStatic = GetDlgItem(IDC_ABOUT_PRODUCTVERSION), FileVersionStatic = GetDlgItem(IDC_ABOUT_FILEVERSION);
		CString sProductVersionFormat, sFileVersionFormat;
		ProductVersionStatic.GetWindowText(sProductVersionFormat);
		FileVersionStatic.GetWindowText(sFileVersionFormat);
		CPath sModulePath = _VersionInfoHelper::GetModulePath();
		ProductVersionStatic.SetWindowText(_VersionInfoHelper::GetVersionString(_VersionInfoHelper::GetProductVersion(sModulePath), sProductVersionFormat));
		FileVersionStatic.SetWindowText(_VersionInfoHelper::GetVersionString(_VersionInfoHelper::GetFileVersion(sModulePath), sFileVersionFormat));
		#pragma endregion 
		#pragma region Hyperlinks
		_W(m_WebsiteHyperStatic.SubclassWindow(GetDlgItem(IDC_ABOUT_WEBSITE)));
		_W(m_EmailHyperStatic.SubclassWindow(GetDlgItem(IDC_ABOUT_EMAIL)));
		#pragma endregion 
		UpdateCaption(*this);
		#pragma region Window Position and Focus
		_W(CenterWindow(GetParent()));
		GetDlgItem(IDOK).SetFocus();
		#pragma endregion 
		return FALSE;
	}
	LRESULT OnDestroy()
	{
		_W(m_TitleFont.DeleteObject());
		_W(m_DisclaimerFont.DeleteObject());
		return 0;
	}
	LRESULT OnCommand(UINT, INT nIdentifier, HWND)
	{
		_W(EndDialog(nIdentifier));
		return 0;
	}
};
