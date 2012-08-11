////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2012
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#include "stdafx.h"
#include "resource.h"
#include "VbsCallback_i.h"
#include "dllmain.h"

STDAPI DllCanUnloadNow(void)
{
	return _AtlModule.DllCanUnloadNow();
}
STDAPI DllGetClassObject(REFCLSID rclsid, REFIID riid, LPVOID* ppv)
{
	return _AtlModule.DllGetClassObject(rclsid, riid, ppv);
}
STDAPI DllRegisterServer(void)
{
	HRESULT hr = _AtlModule.DllRegisterServer();
	return hr;
}
STDAPI DllUnregisterServer(void)
{
	HRESULT hr = _AtlModule.DllUnregisterServer();
	return hr;
}
STDAPI DllInstall(BOOL bInstall, LPCWSTR pszCmdLine)
{
	HRESULT hr = E_FAIL;
	static const wchar_t szUserSwitch[] = L"user";
	if(pszCmdLine != NULL)
		if (_wcsnicmp(pszCmdLine, szUserSwitch, _countof(szUserSwitch)) == 0)
			ATL::AtlSetPerUserRegistration(true);
	if(bInstall)
	{	
		hr = DllRegisterServer();
		if(FAILED(hr))
			DllUnregisterServer();
	}
	else
		hr = DllUnregisterServer();
	return hr;
}
