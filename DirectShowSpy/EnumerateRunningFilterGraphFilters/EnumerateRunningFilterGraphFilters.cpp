////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2009
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#include "stdafx.h"
#include <dshow.h>

inline VOID ATLENSURE_THROW3(BOOL bResult, HRESULT nCode, LPCSTR pszFile, INT nLine)
{
	if(!bResult)
		_tprintf(_T("Warning, %hs(%d): Error 0x%08x\n"), strrchr(pszFile, '\\') + 1, nLine, nCode);
	ATLENSURE_THROW(bResult, nCode);
}

inline VOID ATLENSURE_THROW3(const VOID* pvResult, HRESULT nCode, LPCSTR pszFile, INT nLine)
{
	return ATLENSURE_THROW3(pvResult != NULL, nCode, pszFile, nLine);
}

#define ATLENSURE_THROW2(bResult, nCode) ATLENSURE_THROW3(bResult, nCode, __FILE__, __LINE__)

inline VOID ATLENSURE_SUCCEEDED3(HRESULT nResult, LPCSTR pszFile, INT nLine)
{
	if(FAILED(nResult))
		_tprintf(_T("Warning, %hs(%d): Error 0x%08x\n"), strrchr(pszFile, '\\') + 1, nLine, nResult);
	ATLENSURE_SUCCEEDED(nResult);
}

#define ATLENSURE_SUCCEEDED2(nResult) ATLENSURE_SUCCEEDED3(nResult, __FILE__, __LINE__)

int _tmain(int argc, _TCHAR* argv[])
{
	_ATLTRY
	{
		ATLENSURE_SUCCEEDED2(CoInitialize(NULL));
		_ATLTRY
		{
#if !defined(_DEBUG)
			MessageBox(NULL, _T("Before GetRunningObjectTable"), _T("Debug"), MB_OK);
#endif // !defined(_DEBUG);
			CComPtr<IRunningObjectTable> pRunningObjectTable;
			ATLENSURE_SUCCEEDED2(GetRunningObjectTable(0, &pRunningObjectTable));
			CComPtr<IEnumMoniker> pEnumMoniker;
			ATLENSURE_SUCCEEDED2(pRunningObjectTable->EnumRunning(&pEnumMoniker));
			CComPtr<IMalloc> pMalloc;
			ATLENSURE_SUCCEEDED2(CoGetMalloc(1, &pMalloc));
			CComPtr<IMoniker> pMoniker;
			for(; ; )
			{
				const HRESULT nNextResult = pEnumMoniker->Next(1, &pMoniker, NULL);
				ATLENSURE_SUCCEEDED2(nNextResult);
				if(nNextResult != S_OK)
					break;
				_ATLTRY
				{
					CComPtr<IBindCtx> pBindCtx;
					ATLENSURE_SUCCEEDED2(CreateBindCtx(0, &pBindCtx));
					LPOLESTR pszDisplayName = NULL;
					ATLENSURE_SUCCEEDED2(pMoniker->GetDisplayName(pBindCtx, NULL, &pszDisplayName));
					_tprintf(_T("ROT Moniker Display Name: %ls\n"), pszDisplayName);
					const BOOL bFilterGraph = _wcsnicmp(pszDisplayName, L"!FilterGraph", 12) == 0;
					pMalloc->Free(pszDisplayName);
					if(bFilterGraph)
					{
#define IMyFilterGraph IFilterGraph //IGraphBuilder
						CComQIPtr<IMyFilterGraph> pFilterGraph;
						//ATLENSURE_SUCCEEDED2(pMoniker->BindToObject(pBindCtx, NULL, __uuidof(IMyFilterGraph), (VOID**) &pFilterGraph));
						CComPtr<IUnknown> pFilterGraphUnknown;
						ATLENSURE_SUCCEEDED2(pRunningObjectTable->GetObject(pMoniker, &pFilterGraphUnknown));
#if !defined(_DEBUG)
						MessageBox(NULL, _T("Before QueryInterface(IFilterGraph)"), _T("Debug"), MB_OK);
#endif // !defined(_DEBUG);
						pFilterGraph = pFilterGraphUnknown;
#if !defined(_DEBUG)
						MessageBox(NULL, _T("After QueryInterface(IFilterGraph)"), _T("Debug"), MB_OK);
#endif // !defined(_DEBUG);
						ATLENSURE_THROW2(pFilterGraph, E_NOINTERFACE);
						CComPtr<IEnumFilters> pEnumFilters;
						ATLENSURE_SUCCEEDED2(pFilterGraph->EnumFilters(&pEnumFilters));
						CComPtr<IBaseFilter> pBaseFilter;
						for(; ; )
						{
							ULONG nFetchedCount = 0;
							const HRESULT nNextResult = pEnumFilters->Next(1, &pBaseFilter, &nFetchedCount);
							ATLENSURE_SUCCEEDED2(nNextResult);
							if(nNextResult != S_OK)
								break;
							ATLASSERT(nFetchedCount == 1);
							_ATLTRY
							{
								FILTER_INFO FilterInformation;
								ZeroMemory(&FilterInformation, sizeof FilterInformation);
								ATLENSURE_SUCCEEDED2(pBaseFilter->QueryFilterInfo(&FilterInformation));
								CComPtr<IFilterGraph> pFilterGraph;
								pFilterGraph.Attach(FilterInformation.pGraph);
								_tprintf(_T("ROT Filter Graph Filter Name: %ls\n"), FilterInformation.achName);
							}
							_ATLCATCH(Exception)
							{
								_tprintf(_T("Error 0x%08x\n"), (HRESULT) Exception);
							}
							pBaseFilter.Release();
						}
					}
				}
				_ATLCATCH(Exception)
				{
					_tprintf(_T("Error 0x%08x\n"), (HRESULT) Exception);
				}
				pMoniker.Release();
			}
			MessageBox(NULL, _T("After Everything"), _T("Debug"), MB_OK);
		}
		_ATLCATCHALL()
		{
			CoUninitialize();
			_ATLRETHROW;
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

