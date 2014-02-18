////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2014
// Created by Roman Ryltsov roman@alax.info, http://alax.info
//
// This source code is published to complement DirectShowSpy developer powertoy 
// and demonstrate the internal use of APIs and tricks powering the tool. It is 
// allowed to freely re-use the portions of the code in other projects, commercial 
// or otherwise (provided that you don’t pretend that you wrote the original tool).
//
// Please keep in mind that DirectShowSpy is a developer tool, it is strongly recommended
// that it is not shipped with release grade software. It is allowed to distribute
// DirectShowSpy if only it is not registered with Windows by default and either
// used privately, or registered on specific throubleshooting request. The advice applies 
// to hooking methods used by DirectShowSpy in general as well.

#include "stdafx.h"
#include "resource.h"
#include "FilterGraphHelper.h"

////////////////////////////////////////////////////////////
// Test

#if _DEVELOPMENT

COMPILER_MESSAGE("Development: CFilterGraphHelper::DoPropertyFrameModal as Test")

#if defined(_WIN64)
	extern "C" __declspec(dllexport) 
#else
	#pragma comment(linker, "/EXPORT:Test=_Test@0,PRIVATE")
	extern "C" // __declspec(dllexport) 
#endif // defined(_WIN64)

HRESULT STDMETHODCALLTYPE Test() throw()
{
	_ATLTRY
	{
		CSingleThreadedApartment SingleThreadedApartment;
		CGenericFilterGraph FilterGraph;
		FilterGraph.CoCreateInstance();
		__C(FilterGraph.m_pFilterGraph->RenderFile(_T("E:\\Media\\Robotica_1080.wmv"), NULL));
		_ATLTRY
		{
			const CComQIPtr<ISpy> pSpy = FilterGraph.m_pFilterGraph;
			if(pSpy)
				__C(pSpy->put_FriendlyName(CComBSTR(_T("Test"))));
		}
		_ATLCATCHALL()
		{
			_Z_EXCEPTION();
		}
		CLocalObjectPtr<CFilterGraphHelper> pHelper;
		pHelper->SetFilterGraph(FilterGraph.m_pFilterGraph);
		pHelper->DoPropertyFrameModal(0);
	}
	_ATLCATCH(Exception)
	{
		_C(Exception);
	}
	return S_OK;
}

#endif // _DEVELOPMENT