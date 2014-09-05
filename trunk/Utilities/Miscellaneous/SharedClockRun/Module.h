////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2014
// Created by Roman Ryltsov roman@alax.info

#pragma once

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
		CGenericFilterGraph FilterGraphA, FilterGraphB;
		FilterGraphA.CoCreateInstance();
		FilterGraphB.CoCreateInstance();
		CComPtr<IReferenceClock> pReferenceClock;
		__C(pReferenceClock.CoCreateInstance(CLSID_SystemClock));
		static LPCTSTR g_pszPath = _T("E:\\Media\\Robotica_1080.wmv");
		__C(FilterGraphA.m_pFilterGraph->RenderFile(CStringW(g_pszPath), NULL));
		__C(FilterGraphB.m_pFilterGraph->RenderFile(CStringW(g_pszPath), NULL));
		__C(FilterGraphA.m_pMediaFilter->SetSyncSource(pReferenceClock));
		__C(FilterGraphB.m_pMediaFilter->SetSyncSource(pReferenceClock));
		__C(FilterGraphA.m_pMediaControl->Run());
		Sleep(5000);
		__C(FilterGraphB.m_pMediaControl->Run());
		Sleep(15000);
	}
};

