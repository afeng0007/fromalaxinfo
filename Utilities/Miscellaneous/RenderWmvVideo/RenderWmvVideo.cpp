////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2013
// Created by Roman Ryltsov roman@alax.info

#include "stdafx.h"
#include <dshow.h>

#pragma comment(lib, "strmiids.lib")

#pragma region Windows SDK Tribute, qedit.h

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

#define __C ATLENSURE_SUCCEEDED

CComPtr<IPin> GetFilterPin(const CComPtr<IBaseFilter>& pBaseFilter, PIN_DIRECTION Direction, SIZE_T nIndex = 0)
{
	if(pBaseFilter)
	{
		CComPtr<IEnumPins> pEnumPins;
		pBaseFilter->EnumPins(&pEnumPins);
		for(; ; )
		{
			CComPtr<IPin> pPin;
			if(pEnumPins->Next(1, &pPin, NULL) != S_OK)
				break;
			PIN_DIRECTION PinDirection;
			__C(pPin->QueryDirection(&PinDirection));
			if(PinDirection == Direction)
				if(!nIndex--)
					return pPin;
			pPin.Release();
		}
	}
	return NULL;
}
VOID Do(LPCTSTR pszPath, SIZE_T nOutputPinIndex = 0)
{
	CComPtr<IFilterGraph2> pFilterGraph2;
	__C(pFilterGraph2.CoCreateInstance(CLSID_FilterGraph));
	CComPtr<IPin> pCurrentPin;
	#pragma region WM Reader
	{
		CComPtr<IBaseFilter> pBaseFilter;
		__C(pBaseFilter.CoCreateInstance(CLSID_WMAsfReader));
		const CComQIPtr<IFileSourceFilter> pFileSourceFilter = pBaseFilter;
		__C(pFileSourceFilter->Load(CT2COLE(pszPath), NULL));
		__C(pFilterGraph2->AddFilter(pBaseFilter, NULL));
		pCurrentPin = GetFilterPin(pBaseFilter, PINDIR_OUTPUT, nOutputPinIndex);
	}
	#pragma endregion 
	#pragma region Sample Grabber (Force 32-bit RGB)
	{
		CComPtr<IBaseFilter> pBaseFilter;
		__C(pBaseFilter.CoCreateInstance(__uuidof(SampleGrabber)));
		__C(pFilterGraph2->AddFilter(pBaseFilter, CT2CW(_T("Sample Grabber"))));
		const CComQIPtr<ISampleGrabber> pSampleGrabber = pBaseFilter;
		AM_MEDIA_TYPE MediaType;
		ZeroMemory(&MediaType, sizeof MediaType);
		MediaType.majortype = MEDIATYPE_Video;
		MediaType.subtype = MEDIASUBTYPE_RGB32;
		__C(pSampleGrabber->SetMediaType(&MediaType));
		__C(pFilterGraph2->Connect(pCurrentPin, GetFilterPin(pBaseFilter, PINDIR_INPUT)));
		pCurrentPin = GetFilterPin(pBaseFilter, PINDIR_OUTPUT);
	}
	#pragma endregion 
	__C(pFilterGraph2->Render(pCurrentPin));
	//MessageBox(GetActiveWindow(), _T("Grab the Topology!"), _T("Debug"), MB_ICONINFORMATION | MB_OK);
	const CComQIPtr<IMediaControl> pMediaControl = pFilterGraph2;
	__C(pMediaControl->Run());
	const CComQIPtr<IMediaEvent> pMediaEvent = pFilterGraph2;
	LONG nCode;
	__C(pMediaEvent->WaitForCompletion(INFINITE, &nCode));
}
int _tmain(int argc, _TCHAR* argv[])
{
	__C(CoInitialize(NULL));
	Do(_T("E:\\Media\\Robotica_1080.wmv"), 1);
	CoUninitialize();
	return 0;
}

