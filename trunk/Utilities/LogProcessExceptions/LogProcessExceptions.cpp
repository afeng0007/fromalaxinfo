////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2011
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#include "stdafx.h"
#include "resource.h"
#include "initguid.h"
#include "MainWizard.h"

////////////////////////////////////////////////////////////
// CLogProcessExceptionsModule

[
	module(
		type = exe,
		name = "LogProcessExceptionsModule",
		uuid = "E6693BA6-48B8-4AC9-BDAC-7D3A9EA8D12D"
		)
]
class CLogProcessExceptionsModule :
	//public CAtlExeModuleT<CLogProcessExceptionsModule>,
	public CWtlExeModuleT<CLogProcessExceptionsModule>
{
	typedef CWtlExeModuleT<CLogProcessExceptionsModule> CWtlExeModule;

public:
// CLogProcessExceptionsModule

// CAtlExeModuleT
	CLogProcessExceptionsModule() throw()
	{
#if _DEVELOPMENT
		AtlTraceLoadSettings(NULL);
#endif // _DEVELOPMENT
		_W(CExceptionFilter::Initialize());
		_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
	}
	~CLogProcessExceptionsModule() throw()
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
		Lock();
		{
			CMainWizard MainWizard;
			MainWizard.DoModal();
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
