////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2011
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#include "stdafx.h"
#include "resource.h"
#include "ShowHresult_i.h"
#include "NotifyIconWindow.h"

////////////////////////////////////////////////////////////
// CShowHresultModule

class CShowHresultModule : 
	public CAtlExeModuleT<CShowHresultModule>,
	public CWtlExeModuleT<CShowHresultModule>
{
public:

//DECLARE_LIBID(LIBID_AlaxInfoShowHresult)

//DECLARE_REGISTRY_APPID_RESOURCEID(IDR_MODULE, "{...}")

public:
// CShowHresultModule
	CShowHresultModule() throw()
	{
		AtlTraceSetDefaultSettings();
		_W(CExceptionFilter::Initialize());
		_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
	}
	~CShowHresultModule() throw()
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
			CNotifyIconWindow Window;
			__E(Window.Create());
			__super::RunMessageLoop();
			if(Window.IsWindow())
				_W(Window.DestroyWindow());
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

CShowHresultModule _AtlModule;

////////////////////////////////////////////////////////////
// Main

extern "C" int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, INT nShowCommand)
{
    return _AtlModule.WinMain(nShowCommand);
}

