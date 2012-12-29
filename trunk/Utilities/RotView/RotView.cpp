////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2012-2013
// Created by Roman Ryltsov roman@alax.info

#include "stdafx.h"
#include "resource.h"
#include "RotView_i.h"
#include "MainDialog.h"

////////////////////////////////////////////////////////////
// CRotViewModule

class CRotViewModule : 
	public CAtlExeModuleT<CRotViewModule>,
	public CWtlExeModuleT<CRotViewModule>
{
public:

//DECLARE_LIBID(LIBID_AlaxInfoRotView)

//DECLARE_REGISTRY_APPID_RESOURCEID(IDR_MODULE, "{0B0FCF8F-E12E-4E97-B683-06E3F93830E3}")

public:
// CRotViewModule
	CRotViewModule() throw()
	{
		AtlTraceSetDefaultSettings();
		_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
		_W(CExceptionFilter::Initialize());
	}
	~CRotViewModule() throw()
	{
		_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
		CExceptionFilter::Terminate();
	}
	HRESULT PreMessageLoop(INT nShowCommand) throw()
	{
		_ATLTRY
		{
			TraceModuleVersion();
			__E(AtlInitCommonControls(ICC_WIN95_CLASSES | ICC_DATE_CLASSES | ICC_COOL_CLASSES));
			//__C(CWtlExeModule::Initialize());
			__C(__super::PreMessageLoop(nShowCommand));
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
	VOID RunMessageLoop() throw()
	{
		Lock();
		{
			CMainDialog MainDialog;
			MainDialog.DoModal();
		}
		if(GetLockCount() == 1)
		{
			m_dwTimeOut = 0L;
			m_dwPause = 0L;
		}
		Unlock();
	}
	HRESULT PostMessageLoop() throw()
	{
		_ATLTRY
		{
			_V(__super::PostMessageLoop());
			//CWtlExeModule::Terminate();
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
};

CRotViewModule _AtlModule;

////////////////////////////////////////////////////////////
// Main

extern "C" int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, INT nShowCommand)
{
    return _AtlModule.WinMain(nShowCommand);
}

