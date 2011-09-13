////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2011
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#include "stdafx.h"
#include <dshow.h>
//#include <qedit.h>

#pragma comment(lib, "strmiids.lib")

#pragma region Formerly located in qedit.h in Windows SDK, now obsoleted and defined within project

struct __declspec(uuid("0579154a-2b53-4994-b0d0-e773148eff85"))
ISampleGrabberCB : IUnknown
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall SampleCB (
        double SampleTime,
        struct IMediaSample * pSample ) = 0;
      virtual HRESULT __stdcall BufferCB (
        double SampleTime,
        unsigned char * pBuffer,
        long BufferLen ) = 0;
};

struct __declspec(uuid("6b652fff-11fe-4fce-92ad-0266b5d7c78f"))
ISampleGrabber : IUnknown
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall SetOneShot (
        long OneShot ) = 0;
      virtual HRESULT __stdcall SetMediaType (
        struct _AMMediaType * pType ) = 0;
      virtual HRESULT __stdcall GetConnectedMediaType (
        struct _AMMediaType * pType ) = 0;
      virtual HRESULT __stdcall SetBufferSamples (
        long BufferThem ) = 0;
      virtual HRESULT __stdcall GetCurrentBuffer (
        /*[in,out]*/ long * pBufferSize,
        /*[out]*/ long * pBuffer ) = 0;
      virtual HRESULT __stdcall GetCurrentSample (
        /*[out,retval]*/ struct IMediaSample * * ppSample ) = 0;
      virtual HRESULT __stdcall SetCallback (
        struct ISampleGrabberCB * pCallback,
        long WhichMethodToCallback ) = 0;
};

struct __declspec(uuid("c1f400a0-3f08-11d3-9f0b-006008039e37"))
SampleGrabber;
    // [ default ] interface ISampleGrabber

#pragma endregion

#undef ATLENSURE_SUCCEEDED
#define ATLENSURE_SUCCEEDED(x) { HRESULT __a = (x); if(FAILED(__a)) { _tprintf(_T("Error 0x%08x in line %d\n"), __a, __LINE__); AtlThrow(__a); } }

CComPtr<IPin> GetPin(IBaseFilter* pBaseFilter, SIZE_T nIndex = 0)
{
	ATLASSERT(pBaseFilter);
	CComPtr<IEnumPins> pEnumPins;
	ATLENSURE_SUCCEEDED(pBaseFilter->EnumPins(&pEnumPins));
	ATLASSERT(pEnumPins);
	for(; ; nIndex--)
	{
		CComPtr<IPin> pPin;
		ATLENSURE_SUCCEEDED(pEnumPins->Next(1, &pPin, NULL) == S_OK);
		ATLASSERT(pPin);
		if(nIndex == 0)
			return pPin;
	}
	AtlThrow(E_UNEXPECTED);
}

int _tmain(int argc, _TCHAR* argv[])
{
	CoInitialize(NULL);
	_ATLTRY
	{
		CComPtr<IFilterGraph2> pFilterGraph;
		ATLENSURE_SUCCEEDED(pFilterGraph.CoCreateInstance(CLSID_FilterGraph));
		#pragma region Camera (Source) Filter
		CComPtr<ICreateDevEnum> pCreateDevEnum;
		ATLENSURE_SUCCEEDED(pCreateDevEnum.CoCreateInstance(CLSID_SystemDeviceEnum));
		CComPtr<IEnumMoniker> pEnumMoniker;
		ATLENSURE_SUCCEEDED(pCreateDevEnum->CreateClassEnumerator(CLSID_VideoInputDeviceCategory, &pEnumMoniker, 0));
		CComPtr<IMoniker> pMoniker;
		for(LONG nSkipCount = 0; ; nSkipCount--) // Adjust to skip certain number of devices until you reach the one you need
		{
			ATLENSURE_THROW(pEnumMoniker->Next(1, &pMoniker, NULL) == S_OK, E_FAIL);
			ATLASSERT(pMoniker);
			if(nSkipCount <= 0)
				break;
			pMoniker.Release();
		}
		ATLASSERT(pMoniker);
		CComPtr<IBindCtx> pBindCtx;
		ATLENSURE_SUCCEEDED(CreateBindCtx(0, &pBindCtx));
		CComPtr<IBaseFilter> pSourceBaseFilter;
		ATLENSURE_SUCCEEDED(pMoniker->BindToObject(pBindCtx, NULL, __uuidof(IBaseFilter), (VOID**) &pSourceBaseFilter));
		ATLASSERT(pSourceBaseFilter);
		ATLENSURE_SUCCEEDED(pFilterGraph->AddFilter(pSourceBaseFilter, L"Source"));
		CComPtr<IPin> pCurrentOutputPin;
		#pragma region Resolution
		{
			const CComPtr<IPin> pPin = GetPin(pSourceBaseFilter);
			const CComQIPtr<IAMStreamConfig> pAmStreamConfig = pPin;
			ATLASSERT(pAmStreamConfig);
			VIDEOINFOHEADER VideoInfoHeader = 
			{
				{ 0, 0, 0, 0 },
				{ 0, 0, 0, 0 },
				0,
				0,
				1000 * 10000i64 / 30, // 30 fps
				{
					sizeof BITMAPINFOHEADER,
					176,
					144,
					1,
					16,
					MEDIASUBTYPE_YUY2.Data1,
					144 * 176 * 16 / 8,
					0,
					0,
					0,
					0,
				}
			};
			AM_MEDIA_TYPE MediaType = 
			{ 
				MEDIATYPE_Video, 
				MEDIASUBTYPE_YUY2, 
				TRUE, 
				FALSE, 
				VideoInfoHeader.bmiHeader.biSizeImage,
				FORMAT_VideoInfo,
				NULL,
				sizeof VideoInfoHeader,
				(BYTE*) &VideoInfoHeader
			};
			ATLENSURE_SUCCEEDED(pAmStreamConfig->SetFormat(&MediaType));
			MessageBox(GetActiveWindow(), _T("After IAMStreamConfig::SetFormat Set"), _T("Debug"), MB_OK);
			pCurrentOutputPin = pPin;
		}
		#pragma endregion 
		#pragma endregion 
		#pragma region Non-RGB Sample Grabber
		{
			CComPtr<IBaseFilter> pBaseFilter;
			ATLENSURE_SUCCEEDED(pBaseFilter.CoCreateInstance(__uuidof(SampleGrabber)));
			ATLENSURE_SUCCEEDED(pFilterGraph->AddFilter(pBaseFilter, L"Non-RGB Sample Grabber")); // This will connect in MJPG format
			const CComQIPtr<ISampleGrabber> pSampleGrabber = pBaseFilter;
			ATLASSERT(pSampleGrabber);
#if TRUE
			// NOTE: IFilterGraph::Connect would do just fine, but with a real capture device, if we prefer having Smart Tee added, we need to use 
			//       Capture Graph Builder (only here)
			CComPtr<ICaptureGraphBuilder2> pCaptureGraphBuilder;
			ATLENSURE_SUCCEEDED(pCaptureGraphBuilder.CoCreateInstance(CLSID_CaptureGraphBuilder2));
			ATLENSURE_SUCCEEDED(pCaptureGraphBuilder->SetFiltergraph(pFilterGraph));
			ATLENSURE_SUCCEEDED(pCaptureGraphBuilder->RenderStream(&PIN_CATEGORY_CAPTURE, NULL, pCurrentOutputPin, NULL, pBaseFilter));
#else
			ATLENSURE_SUCCEEDED(pFilterGraph->Connect(pCurrentOutputPin, GetPin(pBaseFilter, 0)));
#endif
			MessageBox(GetActiveWindow(), _T("After Non-RGB Sample Grabber Connected"), _T("Debug"), MB_OK);
			pCurrentOutputPin = GetPin(pBaseFilter, 1);
		}
		#pragma endregion 
		#pragma region RGB Sample Grabber
		{
			CComPtr<IBaseFilter> pBaseFilter;
			ATLENSURE_SUCCEEDED(pBaseFilter.CoCreateInstance(__uuidof(SampleGrabber)));
			ATLENSURE_SUCCEEDED(pFilterGraph->AddFilter(pBaseFilter, L"RGB Sample Grabber"));
			const CComQIPtr<ISampleGrabber> pSampleGrabber = pBaseFilter;
			ATLASSERT(pSampleGrabber);
			AM_MEDIA_TYPE MediaType;
			ZeroMemory(&MediaType, sizeof MediaType);
			MediaType.majortype = MEDIATYPE_Video;
			MediaType.subtype = MEDIASUBTYPE_RGB24;
			ATLENSURE_SUCCEEDED(pSampleGrabber->SetMediaType(&MediaType));
			ATLENSURE_SUCCEEDED(pFilterGraph->Connect(pCurrentOutputPin, GetPin(pBaseFilter, 0)));
			MessageBox(GetActiveWindow(), _T("After RGB Sample Grabber Connected"), _T("Debug"), MB_OK);
			pCurrentOutputPin = GetPin(pBaseFilter, 1);
		}
		#pragma endregion 
	}
	_ATLCATCH(Exception)
	{
		_tprintf(_T("Error 0x%08x\n"), (HRESULT) Exception);
	}
	_ATLCATCHALL()
	{
		_tprintf(_T("Error\n"));
	}
	CoUninitialize();
	return 0;
}

