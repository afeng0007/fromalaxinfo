////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2015
// Created by Roman Ryltsov roman@alax.info

#include "stdafx.h"
#include "resource.h"
#include <dshow.h>
#include "Module_i.h"

#pragma comment(lib, "strmiids.lib")

////////////////////////////////////////////////////////////
// CFilterGraphServiceModule

class CFilterGraphServiceModule : 
	public CAtlServiceModuleT<CFilterGraphServiceModule, IDS_SERVICENAME>
{
public :
	DECLARE_LIBID(LIBID_AlaxInfoFilterGraphService)

	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_MODULE, "{9C4402F4-5831-4593-B788-917609D12169}")

public:
// CFilterGraphServiceModule

// CAtlServiceModuleT
	HRESULT InitializeSecurity()
	{
		// TODO : Call CoInitializeSecurity and provide the appropriate security settings for your service
		// Suggested - PKT Level Authentication, 
		// Impersonation Level of RPC_C_IMP_LEVEL_IDENTIFY 
		// and an appropriate Non NULL Security Descriptor.
		return S_OK;
	}
	HRESULT RegisterClassObjects(DWORD nClassContext, DWORD nFlags)
	{
		const HRESULT nResult = __super::RegisterClassObjects(nClassContext, nFlags);
		ATLASSERT(nResult == S_FALSE);
		return SUCCEEDED(nResult) ? S_OK : nResult;
	}
	HRESULT PreMessageLoop(INT nShowCommand)
	{
		const HRESULT nResult = __super::PreMessageLoop(nShowCommand);
		ATLASSERT(nResult == S_FALSE);
		return SUCCEEDED(nResult) ? S_OK : nResult;
	}
	VOID RunMessageLoop()
	{
		_ATLTRY
		{
			CComPtr<IFilterGraph2> pFilterGraph;
			ATLENSURE_SUCCEEDED(pFilterGraph.CoCreateInstance(CLSID_FilterGraph));
			CComPtr<IBaseFilter> pBaseFilter;
			ATLENSURE_SUCCEEDED(pBaseFilter.CoCreateInstance(CLSID_VideoRenderer));
			ATLENSURE_SUCCEEDED(pFilterGraph->AddFilter(pBaseFilter, CT2CW(_T("Test Video Renderer"))));
			__super::RunMessageLoop();
		}
		_ATLCATCHALL()
		{
			ATLTRACE(_T("An exception has been caught\n"));
		}
	}
};

CFilterGraphServiceModule _AtlModule;

extern "C" int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int nShowCommand)
{
	return _AtlModule.WinMain(nShowCommand);
}

