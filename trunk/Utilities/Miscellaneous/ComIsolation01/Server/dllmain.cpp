////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2015
// Created by Roman Ryltsov roman@alax.info
// 
// A permission to use the source code is granted as long as reference to 
// source website http://alax.info is retained.

#include "stdafx.h"
#include "resource.h"
#include "Server_i.h"
#include "dllmain.h"

CServerModule _AtlModule;

// DLL Entry Point
extern "C" BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
	hInstance;
	return _AtlModule.DllMain(dwReason, lpReserved); 
}
