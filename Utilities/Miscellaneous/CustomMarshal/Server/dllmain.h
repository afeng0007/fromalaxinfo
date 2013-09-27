////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2013
// Created by Roman Ryltsov roman@alax.info

#pragma once

////////////////////////////////////////////////////////////
// CServerModule

class CServerModule : 
	public CAtlDllModuleT<CServerModule>
{
public:

DECLARE_LIBID(LIBID_Server)

DECLARE_REGISTRY_APPID_RESOURCEID(IDR_MODULE, "{7ED43A12-8C8C-41C0-AE70-B2E0A0D0C504}")

public:
// CServerModule
	CServerModule() throw()
	{
		AtlTraceSetDefaultSettings();
		_W(CExceptionFilter::Initialize());
		TraceModuleVersion();
		//TraceModuleTerminationLockCount();
		_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
	}
	~CServerModule() throw()
	{
		_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
		CExceptionFilter::Terminate();
	}

// CAtlModule
	HRESULT AddCommonRGSReplacements(IRegistrarBase* pRegistrar) throw()
	{
		_A(pRegistrar);
		_ATLTRY
		{
			__C(__super::AddCommonRGSReplacements(pRegistrar));
			_A(m_libid != GUID_NULL);
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

extern class CServerModule _AtlModule;
