// ColorConvertDmo01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <dshow.h>
#include <dmo.h>
#include <wmcodecdsp.h>

#pragma comment(lib, "strmiids.lib")
#pragma comment(lib, "wmcodecdspuuid.lib")

int _tmain(int argc, _TCHAR* argv[])
{
    ATLVERIFY(SUCCEEDED(CoInitialize(NULL)));
    CComPtr<IMediaObject> pMediaObject;
    ATLVERIFY(SUCCEEDED(pMediaObject.CoCreateInstance(CLSID_CColorConvertDMO)));
    VIDEOINFOHEADER InputVideoInfoHeader;
    ZeroMemory(&InputVideoInfoHeader, sizeof InputVideoInfoHeader);
    InputVideoInfoHeader.bmiHeader.biSize = sizeof InputVideoInfoHeader.bmiHeader;
    InputVideoInfoHeader.bmiHeader.biWidth = 1920;
    InputVideoInfoHeader.bmiHeader.biHeight = 1080;
    InputVideoInfoHeader.bmiHeader.biPlanes = 1;
    InputVideoInfoHeader.bmiHeader.biBitCount = 24;
    InputVideoInfoHeader.bmiHeader.biCompression = BI_RGB;
    InputVideoInfoHeader.bmiHeader.biSizeImage = 1080 * (1920 * 3);
    DMO_MEDIA_TYPE InputMediaType;
    ZeroMemory(&InputMediaType, sizeof InputMediaType);
    InputMediaType.majortype = MEDIATYPE_Video;
    InputMediaType.subtype = MEDIASUBTYPE_RGB24;
    InputMediaType.bFixedSizeSamples = TRUE;
    InputMediaType.bTemporalCompression = FALSE;
    InputMediaType.lSampleSize = InputVideoInfoHeader.bmiHeader.biSizeImage;
    InputMediaType.formattype = FORMAT_VideoInfo;
    InputMediaType.cbFormat = sizeof InputVideoInfoHeader;
    InputMediaType.pbFormat = (BYTE*) &InputVideoInfoHeader;
    const HRESULT nSetInputTypeResult = pMediaObject->SetInputType(0, &InputMediaType, 0);
    _tprintf(_T("nSetInputTypeResult 0x%08x\n"), nSetInputTypeResult);
    VIDEOINFOHEADER OutputVideoInfoHeader = InputVideoInfoHeader;
    OutputVideoInfoHeader.bmiHeader.biBitCount = 12;
    OutputVideoInfoHeader.bmiHeader.biCompression = MAKEFOURCC('Y', 'V', '1', '2');
    OutputVideoInfoHeader.bmiHeader.biSizeImage = 1080 * 1920 * 12 / 8;
    DMO_MEDIA_TYPE OutputMediaType = InputMediaType;
    OutputMediaType.subtype = MEDIASUBTYPE_YV12;
    OutputMediaType.lSampleSize = OutputVideoInfoHeader.bmiHeader.biSizeImage;
    OutputMediaType.cbFormat = sizeof OutputVideoInfoHeader;
    OutputMediaType.pbFormat = (BYTE*) &OutputVideoInfoHeader;
    const HRESULT nSetOutputTypeResult = pMediaObject->SetOutputType(0, &OutputMediaType, 0);
    _tprintf(_T("nSetOutputTypeResult 0x%08x\n"), nSetOutputTypeResult);
    // TODO: ProcessInput, ProcessOutput
    pMediaObject.Release();
    CoUninitialize();
    return 0;
}

