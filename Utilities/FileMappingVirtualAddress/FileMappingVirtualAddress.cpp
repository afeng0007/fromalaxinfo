////////////////////////////////////////////////////////////
// FileMappingVirtualAddress.cpp
//
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#include "stdafx.h"
#include "resource.h"
#include "initguid.h"
#include "MainDialog.h"

////////////////////////////////////////////////////////////
// CFileMappingVirtualAddressModule

[
	module(
		type = exe,
		name = "FileMappingVirtualAddres",
		uuid = "D03F9EC8-7A19-45F9-BB0F-73A25A04B311"
		)
]
class CFileMappingVirtualAddressModule :
	//public CAtlExeModuleT<CFileMappingVirtualAddressModule>,
	public CWtlExeModuleT<CFileMappingVirtualAddressModule>
{
	typedef CWtlExeModuleT<CFileMappingVirtualAddressModule> CWtlExeModule;

public:
// CFileMappingVirtualAddressModule

// CAtlExeModuleT
	CFileMappingVirtualAddressModule() throw()
	{
#if _DEVELOPMENT
		AtlTraceLoadSettings(NULL);
#endif // _DEVELOPMENT
		_W(CExceptionFilter::Initialize());
		_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
	}
	~CFileMappingVirtualAddressModule() throw()
	{
		_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
		CExceptionFilter::Terminate();
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
		_W(AtlInitCommonControls(ICC_WIN95_CLASSES));
		Lock();
		{
			CMainDialog MainDialog;
			MainDialog.DoModal();
		}
		if(GetLockCount() == 1)
		{
			m_dwTimeOut = 0;
			m_dwPause = 0;
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
