////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2009
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#pragma once

////////////////////////////////////////////////////////////
// CBdaHooksModule

class CBdaHooksModule : 
	public CAtlDllModuleT<CBdaHooksModule>
{
public:

DECLARE_LIBID(LIBID_AlaxInfoBdaHooks)

DECLARE_REGISTRY_APPID_RESOURCEID(IDR_MODULE, "{A08DE680-1A34-47F6-9A01-E5AC61F120DD}")

public:
// CBdaHooksModule
	CBdaHooksModule() throw()
	{
#if defined(_DEBUG)
		AtlTraceLoadSettings(NULL);
#endif // defined(_DEBUG)
		_W(CExceptionFilter::Initialize());
		TraceModuleVersion();
		_Z4(atlTraceRefcount, 4, _T("this 0x%08x\n"), this);
	}
	~CBdaHooksModule() throw()
	{
		_Z4(atlTraceRefcount, 4, _T("this 0x%08x\n"), this);
		CExceptionFilter::Terminate();
	}

// CAtlModule
	HRESULT AddCommonRGSReplacements(IRegistrarBase* pRegistrar) throw()
	{
		_A(pRegistrar);
		_ATLTRY
		{
			__C(__super::AddCommonRGSReplacements(pRegistrar));
			_A(!IsEqualGUID(m_libid, GUID_NULL));
			__C(pRegistrar->AddReplacement(L"LIBID", _PersistHelper::StringFromIdentifier(m_libid)));
			TCHAR pszPath[MAX_PATH] = { 0 };
			_W(GetModuleFileName(_AtlBaseModule.GetModuleInstance(), pszPath, DIM(pszPath)));
			__C(pRegistrar->AddReplacement(L"FILENAME", CStringW(PathFindFileName(pszPath))));
			__C(pRegistrar->AddReplacement(L"DESCRIPTION", CStringW(AtlLoadString(IDS_PROJNAME))));
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
	BOOL WINAPI DllMain(DWORD nReason, VOID* pvReserved) throw()
	{
		return __super::DllMain(nReason, pvReserved);
	}
};

extern class CBdaHooksModule _AtlModule;
