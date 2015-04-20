////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2015
// Created by Roman Ryltsov roman@alax.info
// 
// A permission to use the source code is granted as long as reference to 
// source website http://alax.info is retained.

#include "stdafx.h"
#include <psapi.h>

#pragma warning(disable: 4192) // warning C4192: automatically excluding 'tagRECT' while importing type library 'D864517A-EDD5-466D-867D-C819F1C052BB'
#import "libid:D864517A-EDD5-466D-867D-C819F1C052BB" raw_interfaces_only named_guids // DeckLinkAPI
#pragma warning(default: 4192)

using namespace DeckLinkAPI;

VOID PrintMemory()
{
	PROCESS_MEMORY_COUNTERS_EX Counters = { sizeof Counters };
	ATLVERIFY(GetProcessMemoryInfo(GetCurrentProcess(), (PROCESS_MEMORY_COUNTERS*) &Counters, sizeof Counters));
	_tprintf(_T("Private Bytes %d MB\n"), Counters.PrivateUsage >> 20);
}

int _tmain(int argc, _TCHAR* argv[])
{
	ATLVERIFY(SUCCEEDED(CoInitialize(NULL)));
	_ATLTRY
	{
		CComPtr<IDeckLinkIterator> pDeckLinkIterator;
		const HRESULT nCoCreateInstanceResult = pDeckLinkIterator.CoCreateInstance(CLSID_CDeckLinkIterator);
		CComPtr<IDeckLink> pDeckLink;
		for(; pDeckLinkIterator->Next(&pDeckLink) == S_OK; )
			break;
		ATLENSURE_THROW(pDeckLink, E_NOINTERFACE);
		for(; ; )
		{
			PrintMemory();
			const CComQIPtr<IDeckLinkInput> pDeckLinkInput = pDeckLink;
			ATLENSURE_THROW(pDeckLinkInput, E_NOINTERFACE);
			// NOTE: EnableVideoInput allocates memory which is never freed
			//       The problem does not happen if/when pDeckLinkInput is reused between loops
			ATLENSURE_SUCCEEDED(pDeckLinkInput->EnableVideoInput(bmdModeNTSC, bmdFormat8BitYUV, bmdVideoInputFlagDefault));
			ATLENSURE_SUCCEEDED(pDeckLinkInput->DisableVideoInput());
		}
		/*
			Private Bytes 1 MB
			Private Bytes 29 MB
			Private Bytes 57 MB
			Private Bytes 84 MB
			Private Bytes 112 MB
			Private Bytes 139 MB
			Private Bytes 167 MB
			Private Bytes 195 MB
			Private Bytes 222 MB
			Private Bytes 250 MB
			Private Bytes 277 MB
			Private Bytes 305 MB
			Private Bytes 333 MB
			Private Bytes 360 MB
			Private Bytes 388 MB
			Private Bytes 415 MB
			Private Bytes 443 MB
			Private Bytes 471 MB
			Private Bytes 498 MB
			Private Bytes 526 MB
			...
		*/
	}
	_ATLCATCH(Exception)
	{
		_tprintf(_T("Fatal Error 0x%08X\n"), (HRESULT) Exception);
	}
	_ATLCATCHALL()
	{
		_tprintf(_T("Fatal Error\n"));
	}
	CoUninitialize();
	return 0;
}

