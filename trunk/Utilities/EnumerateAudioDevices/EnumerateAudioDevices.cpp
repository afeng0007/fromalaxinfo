////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2011
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#include "stdafx.h"
#include "resource.h"
#include "initguid.h"
#include "MainDialog.h"

////////////////////////////////////////////////////////////
// CEnumerateAudioDevicesModule

class CEnumerateAudioDevicesModule :
	public CAtlExeModuleT<CEnumerateAudioDevicesModule>,
	public CWtlExeModuleT<CEnumerateAudioDevicesModule>
{
public:
// CEnumerateAudioDevicesModule

// CAtlExeModuleT
	CEnumerateAudioDevicesModule() throw()
	{
#if _DEVELOPMENT
		AtlTraceLoadSettings(NULL);
#endif // _DEVELOPMENT
		_W(CExceptionFilter::Initialize());
		_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
	}
	~CEnumerateAudioDevicesModule() throw()
	{
		_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
		CExceptionFilter::Terminate();
	}
	HRESULT RegisterServer(BOOL bRegisterTypeLibrary = FALSE, const CLSID* pClassIdentifier = NULL) throw()
	{
		bRegisterTypeLibrary;
		return __super::RegisterServer(FALSE, pClassIdentifier);
	}
	HRESULT UnregisterServer(BOOL bUnregisterTypeLibrary, const CLSID* pClassIdentifier = NULL) throw()
	{
		bUnregisterTypeLibrary;
		return __super::UnregisterServer(FALSE, pClassIdentifier);
	}
	HRESULT PreMessageLoop(INT nShowCommand) throw()
	{
		_ATLTRY
		{
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

////////////////////////////////////////////////////////////
// Main

CEnumerateAudioDevicesModule g_Module;

int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR pszCommandLine, int nShowCommand)
{
	return g_Module.WinMain(nShowCommand);
}
