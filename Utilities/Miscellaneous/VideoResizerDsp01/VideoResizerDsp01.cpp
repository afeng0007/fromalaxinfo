////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2013
// Created by Roman Ryltsov roman@alax.info
//
// NOTE: This is to demonstrate the bug 
//       Video Resizer DSP's IMediaObject::SetOutputType returns E_POINTER when it is not supposed to
//       http://connect.microsoft.com/VisualStudio/feedback/details/812418/video-resizer-dsps-imediaobject-setoutputtype-returns-e-pointer-when-it-is-not-supposed-to

#include "stdafx.h"
#include <windows.h>
#include <dshow.h>
#include <dmo.h>
#include <wmcodecdsp.h>
#include <atlcom.h>

#pragma comment(lib, "strmiids.lib")
#pragma comment(lib, "wmcodecdspuuid.lib")

int _tmain(int argc, _TCHAR* argv[])
{
	CoInitialize(NULL);
	{
		CComPtr<IMediaObject> pMediaObject;
		ATLENSURE_SUCCEEDED(pMediaObject.CoCreateInstance(CLSID_CResizerDMO));
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
		const HRESULT nSetInputTypeResult = pMediaObject->SetInputType(0, &InputMediaType, 0);
		_tprintf(_T("nSetInputTypeResult 0x%08x\n"), nSetInputTypeResult);
		#pragma endregion
		#pragma region Output
		DMO_MEDIA_TYPE OutputMediaType;
		ZeroMemory(&OutputMediaType, sizeof OutputMediaType);
		OutputMediaType.majortype = MEDIATYPE_Video;
		OutputMediaType.subtype = InputMediaType.subtype;
		OutputMediaType.bFixedSizeSamples = TRUE;
		OutputMediaType.bTemporalCompression = FALSE;
		VIDEOINFOHEADER OutputVideoInfoHeader;
		ZeroMemory(&OutputVideoInfoHeader, sizeof OutputVideoInfoHeader);
		BITMAPINFOHEADER& OutputBitmapInfoHeader = OutputVideoInfoHeader.bmiHeader;
        OutputBitmapInfoHeader.biSize = sizeof OutputBitmapInfoHeader;
        OutputBitmapInfoHeader.biWidth = 1280;
        OutputBitmapInfoHeader.biHeight = 720;
        OutputBitmapInfoHeader.biPlanes = 1;
        OutputBitmapInfoHeader.biBitCount = InputBitmapInfoHeader.biBitCount;
		OutputBitmapInfoHeader.biCompression = OutputMediaType.subtype.Data1;
        OutputBitmapInfoHeader.biSizeImage = OutputBitmapInfoHeader.biHeight * OutputBitmapInfoHeader.biWidth * OutputBitmapInfoHeader.biBitCount / 8;
		OutputMediaType.lSampleSize = OutputBitmapInfoHeader.biSizeImage;
		OutputMediaType.formattype = FORMAT_VideoInfo;
		OutputMediaType.cbFormat = sizeof OutputVideoInfoHeader;
		OutputMediaType.pbFormat = (BYTE*) &OutputVideoInfoHeader;
		const HRESULT nSetOutputTypeResult = pMediaObject->SetOutputType(0, &OutputMediaType, 0);
		_tprintf(_T("nSetOutputTypeResult 0x%08x\n"), nSetOutputTypeResult);
		#pragma endregion
		const HRESULT nResetInputTypeResult = pMediaObject->SetInputType(0, NULL, DMO_SET_TYPEF_CLEAR);
		const HRESULT nResetOutputTypeResult = pMediaObject->SetOutputType(0, NULL, DMO_SET_TYPEF_CLEAR);
		_tprintf(_T("nResetInputTypeResult 0x%08x, nResetOutputTypeResult 0x%08x\n"), nResetInputTypeResult, nResetOutputTypeResult);
	}
	CoUninitialize();
	return 0;
}

