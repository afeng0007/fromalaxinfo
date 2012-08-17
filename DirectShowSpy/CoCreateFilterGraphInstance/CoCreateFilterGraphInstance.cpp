////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2009
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#include "stdafx.h"
#include <dshow.h>
#include <qedit.h>

#pragma comment (lib, "strmiids.lib")

int _tmain(int argc, _TCHAR* argv[])
{
	_ATLTRY
	{
		ATLENSURE_SUCCEEDED(CoInitialize(NULL));
		_ATLTRY
		{
			MessageBox(NULL, _T("Before CoCreateInstance"), _T("Debug"), MB_OK);
			CComPtr<IFilterGraph> pFilterGraph;
			ATLENSURE_SUCCEEDED(pFilterGraph.CoCreateInstance(CLSID_FilterGraph));
			MessageBox(NULL, _T("After CoCreateInstance, Before AddFilter"), _T("Debug"), MB_OK);
			CComPtr<IBaseFilter> pBaseFilter;
			ATLENSURE_SUCCEEDED(pBaseFilter.CoCreateInstance(CLSID_SampleGrabber));
			ATLENSURE_SUCCEEDED(pFilterGraph->AddFilter(pBaseFilter, NULL));
			MessageBox(NULL, _T("After AddFilter"), _T("Debug"), MB_OK);
		}
		_ATLCATCHALL()
		{
			CoUninitialize();
			_ATLRETHROW;
		}
		CoUninitialize();
	}
	_ATLCATCH(Exception)
	{
		_tprintf(_T("Fatal Error 0x%08x\n"), (HRESULT) Exception);
	}
	_ATLCATCHALL()
	{
		_tprintf(_T("Fatal Error\n"));
	}
	return 0;
}

