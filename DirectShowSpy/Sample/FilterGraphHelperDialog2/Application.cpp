////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2016
// Created by Roman Ryltsov roman@alax.info, http://alax.info
//
// This source code is published to complement DirectShowSpy developer powertoy 
// and demonstrate the internal use of APIs and tricks powering the tool. It is 
// allowed to freely re-use the portions of the code in other projects, commercial 
// or otherwise (provided that you don’t pretend that you wrote the original tool).

#include "stdafx.h"
#include <dshow.h>
#import "libid:B9EC374B-834B-4DA9-BFB5-C1872CE736FF" raw_interfaces_only // AlaxInfoDirectShowSpy

#pragma comment(lib, "strmiids.lib")

int main()
{
	_ATLTRY
	{
		ATLENSURE_SUCCEEDED(CoInitialize(NULL));
		_ATLTRY
		{
			CComPtr<IFilterGraph2> pFilterGraph;
			ATLENSURE_SUCCEEDED(pFilterGraph.CoCreateInstance(CLSID_FilterGraph));
			ATLENSURE_SUCCEEDED(pFilterGraph->RenderFile(CT2CW(_T("E:\\Media\\GoPro 2010 Highlights - You in HD - 1920x1080.mp4")), NULL));
			CComPtr<AlaxInfoDirectShowSpy::IFilterGraphHelper> pFilterGraphHelper;
			ATLENSURE_SUCCEEDED(pFilterGraphHelper.CoCreateInstance(__uuidof(AlaxInfoDirectShowSpy::FilterGraphHelper)));
			ATLENSURE_SUCCEEDED(pFilterGraphHelper->put_FilterGraph(pFilterGraph));
			ATLENSURE_SUCCEEDED(pFilterGraphHelper->DoPropertyFrameModal(NULL));
		}
		_ATLCATCHALL()
		{
			CoUninitialize();
			_ATLRETHROW;
		}
		CoUninitialize();
	}
	_ATLCATCHALL()
	{
		_tprintf(_T("Fatal Error\n"));
	}
    return 0;
}

