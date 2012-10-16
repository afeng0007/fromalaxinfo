////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2012
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#include "stdafx.h"
#include <dshow.h>
#include <dshowasf.h>
#include <atlcom.h>

#pragma comment(lib, "strmiids.lib")

#define V(x) ATLVERIFY(SUCCEEDED(x))

int _tmain(int argc, _TCHAR* argv[])
{
	static LPCTSTR g_pszPath = _T("F:\\Music\\Cher - Walking In Memphis.mp3");
	V(CoInitialize(NULL));
	{
		CComPtr<IGraphBuilder> pGraphBuilder;
		V(pGraphBuilder.CoCreateInstance(CLSID_FilterGraph));
		// NOTE: A simpler version is good for the files you are sure of that they don't have too much of ID3 tags on the header:
		//       with a large headers the files might be rejected; the longer versions takes all .MP3 files
		#if TRUE
			CComPtr<IBaseFilter> pBaseFilter;
			V(pBaseFilter.CoCreateInstance(CLSID_WMAsfReader));
			CComQIPtr<IFileSourceFilter> pFileSourceFilter = pBaseFilter;
			ATLASSERT(pFileSourceFilter);
			V(pFileSourceFilter->Load(CT2COLE(g_pszPath), NULL));
			V(pGraphBuilder->AddFilter(pBaseFilter, NULL));
			CComPtr<IEnumPins> pEnumPins;
			V(pBaseFilter->EnumPins(&pEnumPins));
			CComPtr<IPin> pPin;
			ATLVERIFY(pEnumPins->Next(1, &pPin, NULL) == S_OK);
			V(pGraphBuilder->Render(pPin));
		#else
			V(pGraphBuilder->RenderFile(CT2CW(g_pszPath), NULL)));
		#endif
		CComQIPtr<IMediaControl> pMediaControl = pGraphBuilder;
		CComQIPtr<IMediaEvent> pMediaEvent = pGraphBuilder;
		ATLASSERT(pMediaControl && pMediaEvent);
		V(pMediaControl->Run());
		LONG nEventCode = 0;
		V(pMediaEvent->WaitForCompletion(INFINITE, &nEventCode));
	}
	CoUninitialize();
	return 0;
}

