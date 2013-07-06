////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2013
// Created by Roman Ryltsov roman@alax.info
// 
// $Id: EnumerateFilters.cpp 95 2012-08-17 17:21:13Z roman $

#include "stdafx.h"
#include <dshow.h>
//#include <qedit.h>

#pragma comment (lib, "strmiids.lib")

int _tmain(int argc, _TCHAR* argv[])
{
	_ATLTRY
	{
		ATLENSURE_SUCCEEDED(CoInitialize(NULL));
		_ATLTRY
		{
			CComPtr<IFilterMapper2> pFilterMapper2;
			ATLENSURE_SUCCEEDED(pFilterMapper2.CoCreateInstance(CLSID_FilterMapper2));
			CComPtr<IEnumMoniker> pEnumMoniker;
			const HRESULT nEnumMatchingFiltersResult = pFilterMapper2->EnumMatchingFilters(&pEnumMoniker, 0, FALSE, 0, FALSE, 0, NULL, NULL, NULL, FALSE, NULL, 0, NULL, NULL, NULL);
			_tprintf(_T("nEnumMatchingFiltersResult 0x%08x, pEnumMoniker 0x%p\n"), nEnumMatchingFiltersResult, pEnumMoniker);
			CComPtr<IMalloc> pMalloc;
			ATLVERIFY(SUCCEEDED(CoGetMalloc(1, &pMalloc)));
			CComPtr<IMoniker> pMoniker;
			for(; pEnumMoniker->Next(1, &pMoniker, NULL) == S_OK; )
			{
				LPOLESTR pszDisplayName = NULL;
				ATLVERIFY(SUCCEEDED(pMoniker->GetDisplayName(NULL, NULL, &pszDisplayName)));
				_tprintf(_T("%ls\n"), pszDisplayName);
				pMalloc->Free(pszDisplayName);
				pMoniker.Release();
			}
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

