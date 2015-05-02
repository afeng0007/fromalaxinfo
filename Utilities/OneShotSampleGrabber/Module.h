////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2015
// Created by Roman Ryltsov roman@alax.info

#pragma once

//#import "libid:B9EC374B-834B-4DA9-BFB5-C1872CE736FF" raw_interfaces_only // AlaxInfoDirectShowSpy
//#import "libid:C8D585EA-23F9-4D3E-9727-23CD02ED96C7" raw_interfaces_only // AlaxInfoDirectShowTools
#include "rodshow.h"
#include "rodmo.h"

#pragma region Windows SDK (qedit.h)

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

struct __declspec(uuid("c1f400a4-3f08-11d3-9f0b-006008039e37"))
NullRenderer;

#pragma endregion

////////////////////////////////////////////////////////////
// CModule

class CModule :
	public CAtlExeModuleT<CModule>
{
public:

public:
// CModule
	CModule()
	{
		AtlTraceSetDefaultSettings();
		_Z4_THIS();
		_W(CExceptionFilter::Initialize());
	}
	~CModule()
	{
		_Z4_THIS();
		CExceptionFilter::Terminate();
	}
	HRESULT PreMessageLoop(INT nShowCommand)
	{
		const HRESULT nResult = __super::PreMessageLoop(nShowCommand);
		return SUCCEEDED(nResult) ? S_OK : nResult;
	}
	VOID RunMessageLoop()
	{
		CGenericFilterGraph FilterGraph;
		FilterGraph.CoCreateInstance();
		CComPtr<ICaptureGraphBuilder2> pCaptureGraphBuilder2;
		__C(pCaptureGraphBuilder2.CoCreateInstance(CLSID_CaptureGraphBuilder2));
		__C(pCaptureGraphBuilder2->SetFiltergraph(FilterGraph.m_pFilterGraph));
		#pragma region Source
		static const LPCTSTR g_pszDisplayName = 
			//_T("@device:sw:{860BB310-5D01-11D0-BD3B-00A0C911CE86}\\{44A8B5C7-13B6-4211-BD40-35B629D9E6DF}");
			_T("@device:sw:{860BB310-5D01-11D0-BD3B-00A0C911CE86}\\{A8DA2ECB-DEF6-414D-8CE2-E651640DBA4F}-001");
		CComPtr<IBaseFilter> pSourceBaseFilter;
		{
			CComPtr<IBindCtx> pBindCtx;
			__C(CreateBindCtx(0, &pBindCtx));
			ULONG nCount;
			CComPtr<IMoniker> pMoniker;
			__C(MkParseDisplayName(pBindCtx, CStringW(g_pszDisplayName), &nCount, &pMoniker));
			_A(pMoniker);
			__C(pMoniker->BindToObject(pBindCtx, NULL, __uuidof(IBaseFilter), (VOID**) &pSourceBaseFilter));
			_A(pSourceBaseFilter);
		}
		__C(FilterGraph.AddFilter(pSourceBaseFilter, _T("Source")));
		#pragma endregion
		#pragma region Sample Grabber
		CComPtr<IBaseFilter> pSampleGrabberBaseFilter;
		__C(pSampleGrabberBaseFilter.CoCreateInstance(__uuidof(SampleGrabber)));
		const CComQIPtr<ISampleGrabber> pSampleGrabber = pSampleGrabberBaseFilter;
		__D(pSampleGrabber, E_NOINTERFACE);
		AM_MEDIA_TYPE MediaType;
		ZeroMemory(&MediaType, sizeof MediaType);
		MediaType.majortype = MEDIATYPE_Video;
		MediaType.subtype = MEDIASUBTYPE_RGB24;
		__C(pSampleGrabber->SetMediaType(&MediaType));
		__C(pSampleGrabber->SetOneShot(TRUE));
		__C(pSampleGrabber->SetBufferSamples(TRUE));
		__C(FilterGraph.AddFilter(pSampleGrabberBaseFilter, _T("Sample Grabber")));
		#pragma endregion
		#pragma region Null Renderer
		CComPtr<IBaseFilter> pNullRendererBaseFilter;
		__C(pNullRendererBaseFilter.CoCreateInstance(__uuidof(NullRenderer)));
		__C(FilterGraph.AddFilter(pNullRendererBaseFilter, _T("Renderer")));
		#pragma endregion
		__C(pCaptureGraphBuilder2->RenderStream(&PIN_CATEGORY_CAPTURE, &MEDIATYPE_Video, pSourceBaseFilter, pSampleGrabberBaseFilter, pNullRendererBaseFilter));
		//AtlMessageBoxEx(GetActiveWindow(), _T("Break In"), _T("Debug"), MB_ICONINFORMATION | MB_OK);
		__C(FilterGraph.m_pMediaControl->Run());
		LONG nEventCode;
		__C(FilterGraph.m_pMediaEventEx->WaitForCompletion(INFINITE, &nEventCode));
		LONG nDataSize = 0;
		pSampleGrabber->GetCurrentBuffer(&nDataSize, NULL);
		_A(nDataSize);
		CHeapPtr<BYTE> pnData;
		__D(pnData.Allocate(nDataSize), E_OUTOFMEMORY);
		__C(pSampleGrabber->GetCurrentBuffer(&nDataSize, (LONG*) (BYTE*) pnData));
		__C(pSampleGrabber->GetConnectedMediaType(&MediaType));
		#pragma region Bitmap
		_A(MediaType.formattype == FORMAT_VideoInfo);
		VIDEOINFOHEADER& VideoInfoHeader = *((VIDEOINFOHEADER*) MediaType.pbFormat);
		_A((SIZE_T) nDataSize == (SIZE_T) VideoInfoHeader.bmiHeader.biSizeImage);
		CAtlFile File;
		__C(File.Create(Combine(GetPathDirectory(GetModulePath()), _T("Output.bmp")), GENERIC_WRITE, FILE_SHARE_READ, CREATE_ALWAYS));
		BITMAPFILEHEADER BitmapFileHeader;
		ZeroMemory(&BitmapFileHeader, sizeof BitmapFileHeader);
		BitmapFileHeader.bfType = 'MB';
		BitmapFileHeader.bfOffBits = sizeof BitmapFileHeader + sizeof VideoInfoHeader.bmiHeader;
		BitmapFileHeader.bfSize = BitmapFileHeader.bfOffBits + nDataSize;
		__C(File.Write(&BitmapFileHeader, sizeof BitmapFileHeader));
		__C(File.Write(&VideoInfoHeader.bmiHeader, sizeof VideoInfoHeader.bmiHeader));
		__C(File.Write(pnData, nDataSize));
		#pragma endregion
		_A(!MediaType.pUnk);
		CoTaskMemFree(MediaType.pbFormat);
	}
};

