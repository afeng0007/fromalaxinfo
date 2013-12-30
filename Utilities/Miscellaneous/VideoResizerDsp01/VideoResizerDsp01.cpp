////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2013
// Created by Roman Ryltsov roman@alax.info
//
// NOTE: This is to demonstrate the bugs
//
//       Video Resizer DSP's IMediaObject::SetOutputType returns E_POINTER when it is not supposed to
//       http://connect.microsoft.com/VisualStudio/feedback/details/812418/video-resizer-dsps-imediaobject-setoutputtype-returns-e-pointer-when-it-is-not-supposed-to
// 
//       Digital Signal Processors do not honor flags arguments on DMO interface IMediaObject when setting input/output types 
//       https://connect.microsoft.com/VisualStudio/feedback/details/812482/digital-signal-processors-do-not-honor-flags-arguments-on-dmo-interface-imediaobject-when-setting-input-output-types

#include "stdafx.h"
#include <windows.h>
#include <dshow.h>
#include <dmo.h>
#include <wmcodecdsp.h>
#include <atlcom.h>

#pragma comment(lib, "strmiids.lib")
#pragma comment(lib, "wmcodecdspuuid.lib")
#pragma comment(lib, "msdmo.lib")

#define DSP CLSID_CResizerDMO
#define OUTPUTSUBTYPE MEDIASUBTYPE_YV12
#define OUTPUTWIDTH 1280
#define OUTPUTHEIGHT 720
#define OUTPUTBITCOUNT 12

//#define DSP CLSID_CColorConvertDMO
//#define OUTPUTSUBTYPE MEDIASUBTYPE_UYVY
//#define OUTPUTWIDTH 1920
//#define OUTPUTHEIGHT 1080
//#define OUTPUTBITCOUNT 16

VOID PrintInputType(IMediaObject* pMediaObject, HRESULT nExpectedResult = S_OK, LPCTSTR pszComment = _T(""))
{
	ATLASSERT(pMediaObject);
	DMO_MEDIA_TYPE MediaType;
	ZeroMemory(&MediaType, sizeof MediaType);
	const HRESULT nGetInputCurrentTypeResult = pMediaObject->GetInputCurrentType(0, &MediaType);
	if(nGetInputCurrentTypeResult != nExpectedResult && _tcslen(pszComment))
		_tprintf(_T("nGetInputCurrentTypeResult 0x%08x <<--- Incorrect, %s\n"), nGetInputCurrentTypeResult, pszComment);
	else
		_tprintf(_T("nGetInputCurrentTypeResult 0x%08x\n"), nGetInputCurrentTypeResult);
	if(FAILED(nGetInputCurrentTypeResult))
		return;
	ATLASSERT(MediaType.formattype == FORMAT_VideoInfo);
	VIDEOINFOHEADER* pVideoInfoHeader = (VIDEOINFOHEADER*) MediaType.pbFormat;
	ATLASSERT(MediaType.cbFormat >= sizeof *pVideoInfoHeader);
	_tprintf(_T("Input: biWidth %d, biHeight %d\n"), pVideoInfoHeader->bmiHeader.biWidth, pVideoInfoHeader->bmiHeader.biHeight);
	ATLVERIFY(SUCCEEDED(MoFreeMediaType(&MediaType)));
}
VOID PrintOutputType(IMediaObject* pMediaObject, HRESULT nExpectedResult = S_OK, LPCTSTR pszComment = _T(""))
{
	ATLASSERT(pMediaObject);
	DMO_MEDIA_TYPE MediaType;
	ZeroMemory(&MediaType, sizeof MediaType);
	const HRESULT nGetOutputCurrentTypeResult = pMediaObject->GetOutputCurrentType(0, &MediaType);
	if(nGetOutputCurrentTypeResult != nExpectedResult && _tcslen(pszComment))
		_tprintf(_T("nGetOutputCurrentTypeResult 0x%08x <<--- Incorrect, %s\n"), nGetOutputCurrentTypeResult, pszComment);
	else
		_tprintf(_T("nGetOutputCurrentTypeResult 0x%08x\n"), nGetOutputCurrentTypeResult);
	if(FAILED(nGetOutputCurrentTypeResult))
		return;
	ATLASSERT(MediaType.formattype == FORMAT_VideoInfo);
	VIDEOINFOHEADER* pVideoInfoHeader = (VIDEOINFOHEADER*) MediaType.pbFormat;
	ATLASSERT(MediaType.cbFormat >= sizeof *pVideoInfoHeader);
	_tprintf(_T("Output: biWidth %d, biHeight %d\n"), pVideoInfoHeader->bmiHeader.biWidth, pVideoInfoHeader->bmiHeader.biHeight);
	ATLVERIFY(SUCCEEDED(MoFreeMediaType(&MediaType)));
}

int _tmain(int argc, _TCHAR* argv[])
{
	CoInitialize(NULL);
	{
		CComPtr<IMediaObject> pMediaObject;
		ATLENSURE_SUCCEEDED(pMediaObject.CoCreateInstance(DSP));
		#pragma region Set
		_tprintf(_T("\n*** Set ***\n\n"));
		#pragma region Input
		DMO_MEDIA_TYPE InputMediaType;
		ZeroMemory(&InputMediaType, sizeof InputMediaType);
		InputMediaType.majortype = MEDIATYPE_Video;
		InputMediaType.subtype = MEDIASUBTYPE_YV12;
		InputMediaType.bFixedSizeSamples = TRUE;
		InputMediaType.bTemporalCompression = FALSE;
		VIDEOINFOHEADER InputVideoInfoHeader;
		ZeroMemory(&InputVideoInfoHeader, sizeof InputVideoInfoHeader);
		BITMAPINFOHEADER& InputBitmapInfoHeader = InputVideoInfoHeader.bmiHeader;
        InputBitmapInfoHeader.biSize = sizeof InputBitmapInfoHeader;
        InputBitmapInfoHeader.biWidth = 1920;
        InputBitmapInfoHeader.biHeight = 1080;
        InputBitmapInfoHeader.biPlanes = 1;
        InputBitmapInfoHeader.biBitCount = 12;
		InputBitmapInfoHeader.biCompression = InputMediaType.subtype.Data1;
        InputBitmapInfoHeader.biSizeImage = InputBitmapInfoHeader.biHeight * InputBitmapInfoHeader.biWidth * InputBitmapInfoHeader.biBitCount / 8;
		InputMediaType.lSampleSize = InputBitmapInfoHeader.biSizeImage;
		InputMediaType.formattype = FORMAT_VideoInfo;
		InputMediaType.cbFormat = sizeof InputVideoInfoHeader;
		InputMediaType.pbFormat = (BYTE*) &InputVideoInfoHeader;
		#pragma endregion
		const HRESULT nTrySetInputTypeResult = pMediaObject->SetInputType(0, &InputMediaType, DMO_SET_TYPEF_TEST_ONLY);
		_tprintf(_T("nTrySetInputTypeResult 0x%08x\n"), nTrySetInputTypeResult);
		PrintInputType(pMediaObject, DMO_E_TYPE_NOT_SET, _T("we only tested, we did not set it"));
		const HRESULT nSetInputTypeResult = pMediaObject->SetInputType(0, &InputMediaType, 0);
		_tprintf(_T("nSetInputTypeResult 0x%08x\n"), nSetInputTypeResult);
		PrintInputType(pMediaObject);
		#pragma region Output
		DMO_MEDIA_TYPE OutputMediaType;
		ZeroMemory(&OutputMediaType, sizeof OutputMediaType);
		OutputMediaType.majortype = MEDIATYPE_Video;
		OutputMediaType.subtype = OUTPUTSUBTYPE;
		OutputMediaType.bFixedSizeSamples = TRUE;
		OutputMediaType.bTemporalCompression = FALSE;
		VIDEOINFOHEADER OutputVideoInfoHeader;
		ZeroMemory(&OutputVideoInfoHeader, sizeof OutputVideoInfoHeader);
		BITMAPINFOHEADER& OutputBitmapInfoHeader = OutputVideoInfoHeader.bmiHeader;
        OutputBitmapInfoHeader.biSize = sizeof OutputBitmapInfoHeader;
        OutputBitmapInfoHeader.biWidth = OUTPUTWIDTH;
        OutputBitmapInfoHeader.biHeight = OUTPUTHEIGHT;
        OutputBitmapInfoHeader.biPlanes = 1;
		OutputBitmapInfoHeader.biBitCount = OUTPUTBITCOUNT;
		OutputBitmapInfoHeader.biCompression = OutputMediaType.subtype.Data1;
        OutputBitmapInfoHeader.biSizeImage = OutputBitmapInfoHeader.biHeight * OutputBitmapInfoHeader.biWidth * OutputBitmapInfoHeader.biBitCount / 8;
		OutputMediaType.lSampleSize = OutputBitmapInfoHeader.biSizeImage;
		OutputMediaType.formattype = FORMAT_VideoInfo;
		OutputMediaType.cbFormat = sizeof OutputVideoInfoHeader;
		OutputMediaType.pbFormat = (BYTE*) &OutputVideoInfoHeader;
		#pragma endregion
		const HRESULT nTrySetOutputTypeResult = pMediaObject->SetOutputType(0, &OutputMediaType, DMO_SET_TYPEF_TEST_ONLY);
		_tprintf(_T("nTrySetOutputTypeResult 0x%08x\n"), nTrySetOutputTypeResult);
		PrintOutputType(pMediaObject, DMO_E_TYPE_NOT_SET, _T("we only tested, we did not set it"));
		const HRESULT nSetOutputTypeResult = pMediaObject->SetOutputType(0, &OutputMediaType, 0);
		_tprintf(_T("nSetOutputTypeResult 0x%08x\n"), nSetOutputTypeResult);
		PrintOutputType(pMediaObject);
		#pragma endregion
		ATLASSERT(nSetInputTypeResult == S_OK && nSetOutputTypeResult == S_OK);
		//const HRESULT nFreeStreamingResourcesResult = pMediaObject->FreeStreamingResources();
		//_tprintf(_T("nFreeStreamingResourcesResult 0x%08x\n"), nFreeStreamingResourcesResult);
		#pragma region Clear
		_tprintf(_T("\n*** Clear ***\n\n"));
		const HRESULT nResetInputTypeResult = pMediaObject->SetInputType(0, NULL, DMO_SET_TYPEF_CLEAR);
		_tprintf(_T("nResetInputTypeResult 0x%08x%s\n"), nResetInputTypeResult, FAILED(nResetInputTypeResult) ? _T(" <<--- Incorrect") : _T(""));
		PrintInputType(pMediaObject);
		const HRESULT nResetOutputTypeResult = pMediaObject->SetOutputType(0, NULL, DMO_SET_TYPEF_CLEAR);
		_tprintf(_T("nResetOutputTypeResult 0x%08x%s\n"), nResetOutputTypeResult, FAILED(nResetOutputTypeResult) ? _T(" <<--- Incorrect") : _T(""));
		PrintOutputType(pMediaObject);
		const HRESULT nAnotherResetInputTypeResult = pMediaObject->SetInputType(0, &InputMediaType, DMO_SET_TYPEF_CLEAR);
		_tprintf(_T("nAnotherResetInputTypeResult 0x%08x%s\n"), nAnotherResetInputTypeResult, (nAnotherResetInputTypeResult == S_OK) ? _T(" <<--- Incorrect, clearing expects NULL argument") : _T(""));
		PrintInputType(pMediaObject, DMO_E_TYPE_NOT_SET, _T("we were reported clearing success already"));
		const HRESULT nAnotherResetOutputTypeResult = pMediaObject->SetOutputType(0, &OutputMediaType, DMO_SET_TYPEF_CLEAR);
		_tprintf(_T("nAnotherResetOutputTypeResult 0x%08x%s\n"), nAnotherResetOutputTypeResult, (nAnotherResetOutputTypeResult == S_OK) ? _T(" <<--- Incorrect, clearing expects NULL argument") : _T(""));
		PrintOutputType(pMediaObject, DMO_E_TYPE_NOT_SET, _T("we were reported clearing success already"));
		#pragma endregion
	}
	CoUninitialize();
	return 0;
}

