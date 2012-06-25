////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2012
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#include "stdafx.h"
#include "resource.h"
#include <atlwin.h>
#include "AtlDialogSample_i.h"

using namespace ATL;

////////////////////////////////////////////////////////////
// CMainDialog

class CMainDialog :
	public CDialogImpl<CMainDialog>
{
public:
	enum { IDD = IDD_MAIN };

BEGIN_MSG_MAP(CMainDialog)
	MESSAGE_HANDLER(WM_INITDIALOG, OnInitDialog)
	COMMAND_ID_HANDLER(IDCANCEL, OnCommand)
	COMMAND_ID_HANDLER(IDOK, OnCommand)
END_MSG_MAP()

public:
// CMainDialog

// Window Message Handlers
	LRESULT OnInitDialog(UINT nMessage, WPARAM wParam, LPARAM lParam, BOOL& bHandled)
	{
		ATLVERIFY(CenterWindow());
		return 0;
	}
	LRESULT OnCommand(UINT, INT nIdentifier, HWND, BOOL& bHandled)
	{
		ATLVERIFY(EndDialog(nIdentifier));
		return 0;
	}
};

////////////////////////////////////////////////////////////
// CAtlDialogSampleModule

class CAtlDialogSampleModule : 
	public CAtlExeModuleT<CAtlDialogSampleModule>
{
public:

DECLARE_LIBID(LIBID_AtlDialogSampleLib)

DECLARE_REGISTRY_APPID_RESOURCEID(IDR_ATLDIALOGSAMPLE, "{418A34EE-6628-4C68-B75F-71C52A156648}")

public:
// CAtlDialogSampleModule
	HRESULT PreMessageLoop(INT nShowCommand)
	{
		_ATLTRY
		{
			ATLENSURE_SUCCEEDED(__super::PreMessageLoop(nShowCommand));
		}
		_ATLCATCH(Exception)
		{
			return Exception;
		}
		return S_OK;
	}
	VOID RunMessageLoop()
	{
		CMainDialog Dialog;
		Dialog.DoModal();
	}
};

CAtlDialogSampleModule _AtlModule;

////////////////////////////////////////////////////////////
// Main

extern "C" int WINAPI _tWinMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/, LPTSTR /*lpCmdLine*/, int nShowCmd)
{
	return _AtlModule.WinMain(nShowCmd);
}

