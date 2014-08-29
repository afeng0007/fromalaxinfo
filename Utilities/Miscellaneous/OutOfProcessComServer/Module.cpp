// OutOfProcessComServer.cpp : Implementation of WinMain


#include "stdafx.h"
#include "resource.h"
#include "Module_i.h"

class CModule : 
	public CAtlExeModuleT<CModule>
{
public:

DECLARE_LIBID(LIBID_OutOfProcessComServerLib)
DECLARE_REGISTRY_APPID_RESOURCEID(IDR_OUTOFPROCESSCOMSERVER, "{E18E6B1E-133A-47B4-9A36-19AB005AC962}")

public:
// CModule
	CModule()
	{
		AtlTraceLoadSettings(NULL);
		ATLTRACE(atlTraceRefcount, 2, _T("%hs\n"), __FUNCTION__);
	}
	~CModule()
	{
		ATLTRACE(atlTraceRefcount, 2, _T("%hs\n"), __FUNCTION__);
	}

// CAtlExeModuleT
	LONG Lock()
	{
		const LONG nResult = __super::Lock();
		ATLTRACE(atlTraceRefcount, 2, _T("%hs: After Lock, nResult %d, m_nLockCnt %d\n"), __FUNCTION__, nResult, m_nLockCnt);
		return nResult;
	}
	LONG Unlock()
	{
		const LONG nResult = __super::Unlock();
		ATLTRACE(atlTraceRefcount, 2, _T("%hs: After Unlock, nResult %d, m_nLockCnt %d\n"), __FUNCTION__, nResult, m_nLockCnt);
		return nResult;
	}
	LONG GetLockCount()
	{
		ATLTRACE(atlTraceRefcount, 2, _T("%hs: m_nLockCnt %d\n"), __FUNCTION__, m_nLockCnt);
		return __super::GetLockCount();
	}
};

CModule _AtlModule;

//
extern "C" int WINAPI _tWinMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/, 
								LPTSTR /*lpCmdLine*/, int nShowCmd)
{
	return _AtlModule.WinMain(nShowCmd);
}

