////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2013
// Created by Roman Ryltsov roman@alax.info

#include "stdafx.h"
#include "resource.h"
#include "MainDialog.h"

////////////////////////////////////////////////////////////
// CModule

class CModule :
	public CAtlExeModuleT<CModule>,
	public CWtlExeModuleT<CModule>
{
	typedef CWtlExeModuleT<CModule> CWtlExeModule;

public:
// CModule
	CModule()
	{
		AtlTraceSetDefaultSettings();
	}
	HRESULT PreMessageLoop(INT nShowCommand)
	{
		_ATLTRY
		{
			CExceptionFilter::Initialize();
			__C(__super::PreMessageLoop(nShowCommand));
			__E(AtlInitCommonControls(ICC_WIN95_CLASSES | ICC_DATE_CLASSES | ICC_COOL_CLASSES));
			//__C(CWtlExeModule::Initialize());
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
	VOID RunMessageLoop()
	{
		CMainDialog MainDialog;
		MainDialog.DoModal();
	}
	HRESULT PostMessageLoop()
	{
		_ATLTRY
		{
			//CWtlExeModule::Terminate();
			__C(__super::PostMessageLoop());
			CExceptionFilter::Terminate();
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
};

////////////////////////////////////////////////////////////
// Main

CModule g_Module;

int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR pszCommandLine, int nShowCommand)
{
	return g_Module.WinMain(nShowCommand);
}
