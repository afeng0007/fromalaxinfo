////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2013
// Created by Roman Ryltsov roman@alax.info

#include "stdafx.h"
#include "resource.h"
#include "Server_i.h"
#include "dllmain.h"

////////////////////////////////////////////////////////////
// Main

CServerModule _AtlModule;

extern "C" BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD nReason, VOID* pvReserved)
{
	hInstance;
	return _AtlModule.DllMain(nReason, pvReserved); 
}
