////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2011
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#pragma once

////////////////////////////////////////////////////////////
// CDirectShowSpyModule

class CDirectShowSpyModule : 
	public CAtlDllModuleT<CDirectShowSpyModule>
{
public:

DECLARE_LIBID(LIBID_AlaxInfoDirectShowSpy)

DECLARE_REGISTRY_APPID_RESOURCEID(IDR_MODULE, "{DC64B11B-10DC-4F58-9485-17655B8A393E}")

public:
// CDirectShowSpyModule
	CDirectShowSpyModule() throw()
	{
#if defined(_DEBUG)
		AtlTraceLoadSettings(NULL);
#endif // defined(_DEBUG)
		_W(CExceptionFilter::Initialize());
		TraceModuleVersion();
		_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
	}
	~CDirectShowSpyModule() throw()
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

extern class CDirectShowSpyModule _AtlModule;

