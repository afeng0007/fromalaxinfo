////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2014
// Created by Roman Ryltsov roman@alax.info

#pragma once

#import "libid:B9EC374B-834B-4DA9-BFB5-C1872CE736FF" raw_interfaces_only // AlaxInfoDirectShowSpy
#include "rodshow.h"

////////////////////////////////////////////////////////////
// CModule

class CModule :
	public CAtlExeModuleT<CModule>
{
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
		const CComQIPtr<AlaxInfoDirectShowSpy::ISpy> pSpy = FilterGraph.m_pFilterGraph;
		static LPCTSTR g_pszPath = 
			//_T("E:\\Media\\Robotica_1080.wmv");
			_T("E:\\Torrents\\Дискотека 80-х.2012.HDTV.1080i.ts");

		// NOTE:
		//   {0344ec28-5339-4124-a186-2e8eef168785} MFSourceFilter
		//   {14d7a407-396b-44b3-be85-5199a0f0f80a} Media Foundation DShow Source Resolver
		//   {743a6e3b-a5df-43ed-b615-4256add790b8} MFPsiFilter
		//   {eb4d075a-65c0-476b-956c-c605eade03f7} DemuxRender
		//   {f792beee-aeaf-4ebb-ab14-8bc5c8c695a8} Media Foundation MP2demux

		//CInProcessServerLibrary Library;
		CComPtr<IBaseFilter> pSourceBaseFilter;
		{
			class _declspec(uuid("{0344EC28-5339-4124-A186-2E8EEF168785}")) MediaFoundationSource;
			//Library.Initialize(_T("mfds.dll"));
			//__C(Library.CreateInstance(pSourceBaseFilter, __uuidof(MediaFoundationSource)));
			__C(pSourceBaseFilter.CoCreateInstance(__uuidof(MediaFoundationSource)));
			__C(FilterGraph.AddFilter(pSourceBaseFilter, _T("Source")));
			__C(FilterGraph.LoadFileSourceFilter(pSourceBaseFilter, g_pszPath));
		}
		CComPtr<IBaseFilter> pDemultiplexerBaseFilter;
		{
			class _declspec(uuid("{F792BEEE-AEAF-4EBB-AB14-8BC5C8C695A8}")) MediaFoundationMpeg2Demultiplexer;
			__C(pDemultiplexerBaseFilter.CoCreateInstance(__uuidof(MediaFoundationMpeg2Demultiplexer)));
			__C(FilterGraph.AddFilter(pDemultiplexerBaseFilter, _T("MPEG-2 Demultiplexer")));
			__C(FilterGraph.Connect(_FilterGraphHelper::GetFilterPin(pSourceBaseFilter, PINDIR_OUTPUT), _FilterGraphHelper::GetFilterPin(pDemultiplexerBaseFilter, PINDIR_INPUT)));
			//pSpy->DoPropertyFrameModal((LONG) (LONG_PTR) GetActiveWindow());
			_FilterGraphHelper::CPinArray PinArray;
			_FilterGraphHelper::GetFilterPins(pDemultiplexerBaseFilter, PINDIR_OUTPUT, PinArray);
			for(auto&& pPin: PinArray)
			{
				const HRESULT nRenderResult = FilterGraph.m_pFilterGraph->Render(pPin);
				_Z45_DSHRESULT(nRenderResult);
			}
		}
		__C(FilterGraph.m_pMediaControl->Run());
		Sleep(15000);
	}
};

