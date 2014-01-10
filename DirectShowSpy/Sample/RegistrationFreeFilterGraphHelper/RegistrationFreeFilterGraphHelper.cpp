////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2014
// Created by Roman Ryltsov roman@alax.info

#include "stdafx.h"
#include <dshow.h>
#import "libid:B9EC374B-834B-4DA9-BFB5-C1872CE736FF" no_namespace raw_interfaces_only

#pragma comment(lib, "strmiids.lib")

int _tmain(int argc, _TCHAR* argv[])
{
	ATLENSURE_SUCCEEDED(CoInitialize(NULL));
	_ATLTRY
	{
		CComPtr<IFilterGraph2> pFilterGraph;
		ATLENSURE_SUCCEEDED(pFilterGraph.CoCreateInstance(CLSID_FilterGraph));
		ATLENSURE_SUCCEEDED(pFilterGraph->RenderFile(_T("E:\\Media\\Robotica_1080.wmv"), NULL));
		CComPtr<IFilterGraphHelper> pFilterGraphHelper;
		#if TRUE
			const HMODULE hModule = LoadLibrary(_T("DirectShowSpy.dll"));
			ATLENSURE_THROW(hModule, AtlHresultFromLastError());
			typedef HRESULT (STDMETHODCALLTYPE *DLLGETCLASSOBJECT)(REFCLSID ClassIdentifier, REFIID InterfaceIdentifier, VOID** ppvObject);
			const DLLGETCLASSOBJECT pDllGetClassObject = (DLLGETCLASSOBJECT) GetProcAddress(hModule, "DllGetClassObject");
			ATLENSURE_THROW(pDllGetClassObject, AtlHresultFromLastError());
			CComPtr<IClassFactory> pClassFactory;
			ATLENSURE_SUCCEEDED((pDllGetClassObject)(__uuidof(FilterGraphHelper), __uuidof(IClassFactory), (VOID**) &pClassFactory));
			ATLASSERT(pClassFactory);
			ATLENSURE_SUCCEEDED(pClassFactory->CreateInstance(NULL, __uuidof(IFilterGraphHelper), (VOID**) &pFilterGraphHelper));
			// TODO: FreeLibrary against hModule
		#else
			ATLENSURE_SUCCEEDED(pFilterGraphHelper.CoCreateInstance(__uuidof(FilterGraphHelper)));
		#endif
		ATLENSURE_SUCCEEDED(pFilterGraphHelper->put_FilterGraph(pFilterGraph));
		ATLENSURE_SUCCEEDED(pFilterGraphHelper->DoPropertyFrameModal(0));
	}
	_ATLCATCHALL()
	{
		CoUninitialize();
		_ATLRETHROW;
	}
	CoUninitialize();
	return 0;
}

