////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2014
// Created by Roman Ryltsov roman@alax.info
//
// This source code is published to complement DirectShowSpy developer powertoy 
// and demonstrate the internal use of APIs and tricks powering the tool. It is 
// allowed to freely re-use the portions of the code in other projects, commercial or otherwise 
// (provided that you don’t pretend that you wrote the original tool).
//
// Please keep in mind that DirectShowSpy is a developer tool, it is strongly recommended
// that it is not shipped with release grade software. The advise applies to hooking methods
// used by DirectShowSpy in general as well.

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
		AtlTraceSetDefaultSettings();
		TraceModuleVersion();
		_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
		_W(CExceptionFilter::Initialize());
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

