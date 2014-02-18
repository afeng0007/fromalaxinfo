////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2014
// Created by Roman Ryltsov roman@alax.info, http://alax.info

#include "stdafx.h"
#include "resource.h"
#include "PlayService_i.h"

#include <stdio.h>

class CPlayServiceModule : public ATL::CAtlServiceModuleT< CPlayServiceModule, IDS_SERVICENAME >
	{
public :
	DECLARE_LIBID(LIBID_PlayServiceLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_PLAYSERVICE, "{DAD2227D-BFB1-4FF7-A5F8-7A4494A157CC}")
		HRESULT InitializeSecurity() throw()
	{
		// TODO : Call CoInitializeSecurity and provide the appropriate security settings for your service
		// Suggested - PKT Level Authentication, 
		// Impersonation Level of RPC_C_IMP_LEVEL_IDENTIFY 
		// and an appropiate Non NULL Security Descriptor.

		return S_OK;
	}
	};

CPlayServiceModule _AtlModule;



//
extern "C" int WINAPI _tWinMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/, 
								LPTSTR /*lpCmdLine*/, int nShowCmd)
{
	return _AtlModule.WinMain(nShowCmd);
}

