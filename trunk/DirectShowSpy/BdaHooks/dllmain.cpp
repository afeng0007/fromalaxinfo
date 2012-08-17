////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2009
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#include "stdafx.h"
#include "resource.h"
#include "BdaHooks_i.h"
#include "dllmain.h"

////////////////////////////////////////////////////////////
// Main

CBdaHooksModule _AtlModule;

extern "C" BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD nReason, VOID* pvReserved)
{
	hInstance;
	return _AtlModule.DllMain(nReason, pvReserved); 
}
