// Host.cpp : Implementation of WinMain


#include "stdafx.h"
#include "resource.h"
#include "Host_i.h"


using namespace ATL;


class CHostModule : public ATL::CAtlExeModuleT< CHostModule >
{
public :
	DECLARE_LIBID(LIBID_HostLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_HOST, "{B57E3BE1-9F1D-42F8-A075-CA35ECCF50C6}")
	};

CHostModule _AtlModule;



//
extern "C" int WINAPI _tWinMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/, 
								LPTSTR /*lpCmdLine*/, int nShowCmd)
{
	return _AtlModule.WinMain(nShowCmd);
}

