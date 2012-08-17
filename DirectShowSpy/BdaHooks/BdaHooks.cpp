////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2009
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#include "stdafx.h"
#include "resource.h"
#include "BdaHooks_i.h"
#include "dllmain.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

////////////////////////////////////////////////////////////
// DLL Exports

STDAPI DllCanUnloadNow() throw()
{
    return _AtlModule.DllCanUnloadNow();
}

STDAPI DllGetClassObject(REFCLSID ClassIdentifier, REFIID InterfaceIdentifier, LPVOID* ppvObject) throw()
{
    return _AtlModule.DllGetClassObject(ClassIdentifier, InterfaceIdentifier, ppvObject);
}

STDAPI DllRegisterServer() throw()
{
	HRESULT nResult;
	_ATLTRY
	{
		nResult = _AtlModule.DllRegisterServer();
		__C(nResult);
	}
	_ATLCATCH(Exception)
	{
		_C(Exception);
	}
	return nResult;
}

STDAPI DllUnregisterServer() throw()
{
	HRESULT nResult;
	_ATLTRY
	{
		nResult = _AtlModule.DllUnregisterServer();
		__C(nResult);
	}
	_ATLCATCH(Exception)
	{
		_C(Exception);
	}
	return nResult;
}

STDAPI DllInstall(BOOL bInstall, LPCWSTR pszCommandLine) throw()
{
	HRESULT nResult;
	_ATLTRY
	{
		static const WCHAR g_pszUser[] = _T("user");
		if(pszCommandLine)
		{
    		if(_wcsnicmp(pszCommandLine, g_pszUser, DIM(g_pszUser)) == 0)
    			AtlSetPerUserRegistration(TRUE);
		}
		if(bInstall)
		{	
    		nResult = DllRegisterServer();
    		if(FAILED(nResult))
    			DllUnregisterServer();
		} else
    		nResult = DllUnregisterServer();
	}
	_ATLCATCH(Exception)
	{
		_C(Exception);
	}
	return nResult;
}
