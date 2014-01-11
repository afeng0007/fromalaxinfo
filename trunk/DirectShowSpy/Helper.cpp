////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2014
// Created by Roman Ryltsov roman@alax.info

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