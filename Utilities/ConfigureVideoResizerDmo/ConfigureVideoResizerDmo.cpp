////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2012
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#include "stdafx.h"
#include <dshow.h>
#include <dmo.h>
#include <dmodshow.h>
#include <wmcodecdsp.h>
#include <atlstr.h>
#include <atlcoll.h>

#pragma comment(lib, "strmiids.lib")
#pragma comment(lib, "dmoguids.lib")
#pragma comment(lib, "msdmo.lib")
#pragma comment(lib, "wmcodecdspuuid.lib")

#pragma region Re-Adding Removed from Windows SDK qedit.h

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

typedef CAtlArray<CComPtr<IPin>> CPinArray;

SIZE_T GetPins(IBaseFilter* pBaseFilter, CPinArray& PinArray)
{
	ATLASSERT(pBaseFilter);
	ATLASSERT(PinArray.IsEmpty());
	CComPtr<IEnumPins> pEnumPins;
	ATLENSURE_SUCCEEDED(pBaseFilter->EnumPins(&pEnumPins));
	CComPtr<IPin> pPin;
	while(pEnumPins->Next(1, &pPin, NULL) == S_OK)
	{
		ATLVERIFY(PinArray.Add(pPin) >= 0);
		pPin.Release();
	}
	return PinArray.GetCount();
}

int _tmain(int argc, _TCHAR* argv[])
{
	_ATLTRY
	{
		ATLENSURE_THROW(argc > 1, E_INVALIDARG);
		CString sPath = argv[1];
		ATLENSURE_SUCCEEDED(CoInitialize(NULL));
		{
			#pragma region Prepare Graph
			CComPtr<IGraphBuilder> pGraphBuilder;
			ATLENSURE_SUCCEEDED(pGraphBuilder.CoCreateInstance(CLSID_FilterGraph));
			CComPtr<IBaseFilter> pSourceBaseFilter;
			ATLENSURE_SUCCEEDED(pGraphBuilder->AddSourceFilter(CT2CW(sPath), NULL, &pSourceBaseFilter));
			CPinArray SourcePinArray;
			ATLVERIFY(GetPins(pSourceBaseFilter, SourcePinArray) >= 1);
			CComPtr<IBaseFilter> pRendererBaseFilter;
			ATLENSURE_SUCCEEDED(pRendererBaseFilter.CoCreateInstance(CLSID_VideoMixingRenderer));
			ATLENSURE_SUCCEEDED(pGraphBuilder->AddFilter(pRendererBaseFilter, CT2CW(_T("Renderer"))));
			CPinArray RendererPinArray;
			ATLVERIFY(GetPins(pRendererBaseFilter, RendererPinArray) >= 1);
			HRESULT nRenderExResult = E_FAIL;
			for(SIZE_T nIndex = 0; nIndex < SourcePinArray.GetCount(); nIndex++)
			{
				nRenderExResult = pGraphBuilder->Connect(SourcePinArray[nIndex], RendererPinArray[0]);
				if(SUCCEEDED(nRenderExResult))
					break;
			}
			ATLENSURE_SUCCEEDED(nRenderExResult);
			#pragma endregion
			#pragma region Insert Resizer
			#pragma region Insertion Point, Automatic Media Type, Pins
			const CComPtr<IPin> pRendererInputPin = RendererPinArray[0];
			CComPtr<IPin> pRendererInputPeerPin;
			ATLENSURE_SUCCEEDED(pRendererInputPin->ConnectedTo(&pRendererInputPeerPin));
			AM_MEDIA_TYPE OriginalMediaType;
			ZeroMemory(&OriginalMediaType, sizeof OriginalMediaType);
			ATLENSURE_SUCCEEDED(pRendererInputPin->ConnectionMediaType(&OriginalMediaType));
			CComHeapPtr<BYTE> pnOriginalMediaTypeFormat;
			pnOriginalMediaTypeFormat.Attach(OriginalMediaType.pbFormat); // To be automatically released later on
			// NOTE: Sover videos are decoded into other formats, these cases are not covered by this sample
			ATLASSERT(OriginalMediaType.formattype == FORMAT_VideoInfo);
			const VIDEOINFOHEADER* pOriginalVideoInfoHeader = (const VIDEOINFOHEADER*) OriginalMediaType.pbFormat;
			ATLENSURE_SUCCEEDED(pRendererInputPin->Disconnect());
			ATLENSURE_SUCCEEDED(pRendererInputPeerPin->Disconnect());
			#pragma endregion
			#pragma region Insert Sample Grabber
			// NOTE: In this sample we force video resize in 32-bit RGB domain
			CComPtr<IBaseFilter> pSgBaseFilter;
			ATLENSURE_SUCCEEDED(pSgBaseFilter.CoCreateInstance(__uuidof(SampleGrabber)));
			ATLENSURE_SUCCEEDED(pGraphBuilder->AddFilter(pSgBaseFilter, CT2CW(_T("32-Bit RGB Sample Grabber"))));
			const CComQIPtr<ISampleGrabber> pSampleGrabber = pSgBaseFilter;
			ATLENSURE_THROW(pSampleGrabber, E_NOINTERFACE);
			AM_MEDIA_TYPE Rgb32MediaType;
			ZeroMemory(&Rgb32MediaType, sizeof Rgb32MediaType);
			Rgb32MediaType.majortype = MEDIATYPE_Video;
			Rgb32MediaType.subtype = MEDIASUBTYPE_RGB32;
			ATLENSURE_SUCCEEDED(pSampleGrabber->SetMediaType(&Rgb32MediaType));
			CPinArray SgPinArray;
			ATLVERIFY(GetPins(pSgBaseFilter, SgPinArray) >= 2);
			// ASSU: First pin is input, Second pin is output
			ATLENSURE_SUCCEEDED(pGraphBuilder->Connect(pRendererInputPeerPin, SgPinArray[0]));
			pRendererInputPeerPin = SgPinArray[1];
			#pragma endregion
			#pragma region Insert Resizer Filter
			CComPtr<IBaseFilter> pBaseFilter;
			ATLENSURE_SUCCEEDED(pBaseFilter.CoCreateInstance(CLSID_DMOWrapperFilter));
			const CComQIPtr<IDMOWrapperFilter> pDmoWrapperFilter = pBaseFilter;
			ATLENSURE_THROW(pDmoWrapperFilter, E_NOINTERFACE);
			ATLENSURE_SUCCEEDED(pDmoWrapperFilter->Init(CLSID_CResizerDMO, DMOCATEGORY_VIDEO_EFFECT));
			ATLENSURE_SUCCEEDED(pGraphBuilder->AddFilter(pBaseFilter, CT2CW(_T("Resizer"))));
			CPinArray PinArray;
			ATLVERIFY(GetPins(pBaseFilter, PinArray) >= 2);
			// ASSU: First pin is input, Second pin is output
			#pragma endregion
			const CComPtr<IPin>& pInputPin = PinArray[0];
			const CComPtr<IPin>& pOutputPin = PinArray[1];
			#pragma endregion
			const CComQIPtr<IWMResizerProps> pWmResizerProps = pBaseFilter;
			ATLENSURE_THROW(pWmResizerProps, E_NOINTERFACE);
			ATLENSURE_SUCCEEDED(pWmResizerProps->SetFullCropRegion(
				0, 0, pOriginalVideoInfoHeader->bmiHeader.biWidth, pOriginalVideoInfoHeader->bmiHeader.biHeight,
				0, 0, pOriginalVideoInfoHeader->bmiHeader.biWidth, 2 * pOriginalVideoInfoHeader->bmiHeader.biHeight
				));
			ATLENSURE_SUCCEEDED(pGraphBuilder->Connect(pRendererInputPeerPin, pInputPin));
			#pragma region Input Pin Format
			AM_MEDIA_TYPE InputMediaType;
			ZeroMemory(&InputMediaType, sizeof InputMediaType);
			ATLENSURE_SUCCEEDED(pInputPin->ConnectionMediaType(&InputMediaType));
			CComHeapPtr<BYTE> pnInputMediaTypeFormat;
			pnInputMediaTypeFormat.Attach(InputMediaType.pbFormat); // To be automatically released later on
			ATLASSERT(InputMediaType.formattype == FORMAT_VideoInfo);
			const VIDEOINFOHEADER* pInputVideoInfoHeader = (const VIDEOINFOHEADER*) InputMediaType.pbFormat;
			#pragma endregion
			#pragma region Prepare Output Media Type
			VIDEOINFOHEADER OutputVideoInfoHeader = *pInputVideoInfoHeader;
			SetRect(&OutputVideoInfoHeader.rcSource, 0, 0, pInputVideoInfoHeader->bmiHeader.biWidth, pInputVideoInfoHeader->bmiHeader.biHeight);
			OutputVideoInfoHeader.rcTarget = OutputVideoInfoHeader.rcSource;
			OutputVideoInfoHeader.dwBitRate = 0;
			OutputVideoInfoHeader.dwBitErrorRate = 0;
			ATLASSERT(OutputVideoInfoHeader.bmiHeader.biSize == sizeof OutputVideoInfoHeader.bmiHeader);
			// NOTE: Twice as high
			OutputVideoInfoHeader.bmiHeader.biHeight <<= 1;
			OutputVideoInfoHeader.bmiHeader.biSizeImage <<= 1;
			AM_MEDIA_TYPE OutputMediaType = InputMediaType;
			OutputMediaType.lSampleSize = OutputVideoInfoHeader.bmiHeader.biSizeImage;
			ATLASSERT(!OutputMediaType.pUnk);
			OutputMediaType.cbFormat = sizeof OutputVideoInfoHeader;
			OutputMediaType.pbFormat = (BYTE*) &OutputVideoInfoHeader;
			#pragma endregion 
			const CComQIPtr<IMediaObject> pMediaObject = pBaseFilter;
			ATLENSURE_THROW(pMediaObject, E_NOINTERFACE);
			ATLENSURE_SUCCEEDED(pMediaObject->SetOutputType(0, (DMO_MEDIA_TYPE*) &OutputMediaType, 0));
			#if !TRUE
				CComPtr<IBaseFilter> pCscBaseFilter;
				ATLENSURE_SUCCEEDED(pCscBaseFilter.CoCreateInstance(CLSID_Colour));
				ATLENSURE_SUCCEEDED(pGraphBuilder->AddFilter(pCscBaseFilter, CT2CW(_T("Color Space Converter"))));
				CPinArray CscPinArray;
				ATLVERIFY(GetPins(pCscBaseFilter, CscPinArray) >= 2);
				// ASSU: First pin is input, Second pin is output
				ATLENSURE_SUCCEEDED(pGraphBuilder->ConnectDirect(pOutputPin, CscPinArray[0], &OutputMediaType));
				ATLENSURE_SUCCEEDED(pGraphBuilder->Connect(CscPinArray[1], pRendererInputPin));
			#else
				ATLENSURE_SUCCEEDED(pGraphBuilder->ConnectDirect(pOutputPin, pRendererInputPin, &OutputMediaType));
			#endif
			#pragma region Run Graph
			const CComQIPtr<IMediaControl> pMediaControl = pGraphBuilder;
			ATLENSURE_THROW(pMediaControl, E_NOINTERFACE);
			ATLENSURE_SUCCEEDED(pMediaControl->Run());
			//MessageBox(GetActiveWindow(), _T("Connect Remotely to the Graph"), _T("Debug"), MB_ICONINFORMATION | MB_OK);
			const CComQIPtr<IMediaEvent> pMediaEvent = pGraphBuilder;
			ATLENSURE_THROW(pMediaEvent, E_NOINTERFACE);
			LONG nEventCode;
			ATLENSURE_SUCCEEDED(pMediaEvent->WaitForCompletion(INFINITE, &nEventCode));
			#pragma endregion
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

