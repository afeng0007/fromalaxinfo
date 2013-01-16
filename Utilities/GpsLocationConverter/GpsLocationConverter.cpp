////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2011
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#include "stdafx.h"
#include "resource.h"
#include "GpsLocationConverter_i.h"
#include "MainDialog.h"

////////////////////////////////////////////////////////////
// CGpsLocationConverterModule

class CGpsLocationConverterModule : 
	public CAtlExeModuleT<CGpsLocationConverterModule>,
	public CWtlExeModuleT<CGpsLocationConverterModule>
{
public:

//DECLARE_LIBID(LIBID_AlaxInfoGpsLocationConverter)

//DECLARE_REGISTRY_APPID_RESOURCEID(IDR_MODULE, "{0B0FCF8F-E12E-4E97-B683-06E3F93830E3}")

public:
// CGpsLocationConverterModule
	CGpsLocationConverterModule() throw()
	{
#if defined(_DEBUG)
		AtlTraceLoadSettings(NULL);
#endif // defined(_DEBUG)
		_W(CExceptionFilter::Initialize());
		_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
	}
	~CGpsLocationConverterModule() throw()
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

CGpsLocationConverterModule _AtlModule;

////////////////////////////////////////////////////////////
// Main

extern "C" int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, INT nShowCommand)
{
    return _AtlModule.WinMain(nShowCommand);
}
