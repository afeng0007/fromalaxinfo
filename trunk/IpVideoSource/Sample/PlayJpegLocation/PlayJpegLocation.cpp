////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2011
// Created by Roman Ryltsov roman@alax.info
// 
// $Id: PlayJpegLocation.cpp 92 2011-07-18 11:37:57Z roman $

#include "stdafx.h"
#include <dshow.h>
#import "libid:BDCE8B49-8895-4605-8278-E9A1FBC889AC" no_namespace raw_interfaces_only raw_dispinterfaces named_guids // IpVideoSource

#pragma comment(lib, "strmiids.lib")

int _tmain(int argc, _TCHAR* argv[])
{
	_ATLTRY
	{
		ATLENSURE_SUCCEEDED(CoInitialize(NULL));
		_ATLTRY
		{
			CComPtr<IFilterGraph2> pFilterGraph;
			ATLENSURE_SUCCEEDED(pFilterGraph.CoCreateInstance(CLSID_FilterGraph));
			CComPtr<IBaseFilter> pBaseFilter;
			ATLENSURE_SUCCEEDED(pBaseFilter.CoCreateInstance(CLSID_JpegVideoSourceFilter));
			CComQIPtr<IJpegVideoSourceFilter> pJpegVideoSourceFilter = pBaseFilter;
			ATLENSURE_THROW(pJpegVideoSourceFilter, E_NOINTERFACE);
			ATLENSURE_SUCCEEDED(pFilterGraph->AddFilter(pBaseFilter, L"Source"));
			#pragma region Parse Command Line
#if _DEVELOPMENT
			if(argc != 0)
#endif // _DEVELOPMENT
			{
				ATLENSURE_THROW(argc >= 4, E_INVALIDARG);
				ATLENSURE_SUCCEEDED(pJpegVideoSourceFilter->put_Location(CComBSTR(argv[1])));
				ATLENSURE_SUCCEEDED(pJpegVideoSourceFilter->put_Width(_ttoi(argv[2])));
				ATLENSURE_SUCCEEDED(pJpegVideoSourceFilter->put_Height(_ttoi(argv[3])));
			}
			#pragma endregion
#if _DEVELOPMENT
			ATLENSURE_SUCCEEDED(pJpegVideoSourceFilter->put_Location(CComBSTR(_T("http://p.viewnetcam.com:60001/nphMotionJpeg?Resolution=640x480&Quality=Standard"))));
			ATLENSURE_SUCCEEDED(pJpegVideoSourceFilter->put_Width(640));
			ATLENSURE_SUCCEEDED(pJpegVideoSourceFilter->put_Height(480));
#endif // _DEVELOPMENT
			#pragma region Render Output Pin
			CComPtr<IEnumPins> pEnumPins;
			ATLENSURE_SUCCEEDED(pBaseFilter->EnumPins(&pEnumPins));
			CComPtr<IPin> pPin;
			ATLENSURE_THROW(pEnumPins->Next(1, &pPin, NULL) == S_OK, E_FAIL);
			ATLASSERT(pPin);
			ATLENSURE_SUCCEEDED(pFilterGraph->Render(pPin));
			#pragma endregion
			#pragma region Run Filter Graph
			CComQIPtr<IMediaControl> pMediaControl = pFilterGraph;
			ATLASSERT(pMediaControl);
			ATLENSURE_SUCCEEDED(pMediaControl->Run());
			CComQIPtr<IMediaEvent> pMediaEvent = pFilterGraph;
			ATLASSERT(pMediaEvent);
			LONG nEventCode;
			ATLENSURE_SUCCEEDED(pMediaEvent->WaitForCompletion(INFINITE, &nEventCode));
			_tprintf(_T("Completion Event Code: 0x%x\n"), nEventCode);
			#pragma endregion
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
		_tprintf(_T("Error 0x%08x\n"), (HRESULT) Exception);
	}
	_ATLCATCHALL()
	{
		_tprintf(_T("Fatal Error\n"));
	}
	return 0;
}

