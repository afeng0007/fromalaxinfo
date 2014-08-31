////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2014
// Created by Roman Ryltsov roman@alax.info

#include "stdafx.h"
#include "resource.h"
//#include "Module_i.h"
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
	CShowHresultModule()
	{
		AtlTraceSetDefaultSettings();
		_W(CExceptionFilter::Initialize());
		_Z4_THIS();
	}
	~CShowHresultModule()
	{
		_Z4_THIS();
		CExceptionFilter::Terminate();
	}
	HRESULT PreMessageLoop(INT nShowCommand)
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
	VOID RunMessageLoop()
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
	HRESULT PostMessageLoop()
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

