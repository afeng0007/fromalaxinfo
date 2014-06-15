////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2014
// Created by Roman Ryltsov roman@alax.info

#include "stdafx.h"
#include "resource.h"
#include "RenderInterlacedVideo_i.h"
#include "MainPropertySheet.h"

////////////////////////////////////////////////////////////
// CRenderInterlacedVideoModule

class CRenderInterlacedVideoModule : 
	public CAtlExeModuleT<CRenderInterlacedVideoModule>,
	public CWtlExeModuleT<CRenderInterlacedVideoModule>
{
public:

//DECLARE_LIBID(LIBID_AlaxInfoRenderInterlacedVideo)

//DECLARE_REGISTRY_APPID_RESOURCEID(IDR_MODULE, "{07B79191-7939-462E-8F28-4F02BC0AF1D4}")

public:
// CRenderInterlacedVideoModule
	CRenderInterlacedVideoModule()
	{
		AtlTraceSetDefaultSettings();
		_W(CExceptionFilter::Initialize());
		_Z4_THIS();
	}
	~CRenderInterlacedVideoModule()
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
			CMainPropertySheet MainPropertySheet;
			MainPropertySheet.DoModal();
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

CRenderInterlacedVideoModule _AtlModule;

////////////////////////////////////////////////////////////
// Main

extern "C" int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, INT nShowCommand)
{
    return _AtlModule.WinMain(nShowCommand);
}

