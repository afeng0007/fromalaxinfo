////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2012
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#include "stdafx.h"
#include <windows.h>
#include <psapi.h>

#pragma comment(lib, "psapi.lib")

VOID PrintPrivateUsage()
{
	PROCESS_MEMORY_COUNTERS_EX Counters = { sizeof Counters };
	ATLVERIFY(GetProcessMemoryInfo(GetCurrentProcess(), (PROCESS_MEMORY_COUNTERS*) &Counters, sizeof Counters));
	_tprintf(_T("PrivateUsage: %d MB\n"), Counters.PrivateUsage >> 20);
}

int _tmain(int argc, _TCHAR* argv[])
{
	PrintPrivateUsage();
	VOID* ppvItemsA[256];
	static const SIZE_T g_nSizeA1 = 1 << 20; // 1 MB
	_tprintf(_T("Allocating %d MB\n"), (_countof(ppvItemsA) * g_nSizeA1) >> 20);
	for(SIZE_T nIndex = 0; nIndex < _countof(ppvItemsA); nIndex++)
		ppvItemsA[nIndex] = malloc(g_nSizeA1);
	PrintPrivateUsage();
	static const SIZE_T g_nSizeA2 = 4 << 10; // 4 KB
	_tprintf(_T("Reallocating to %d MB\n"), (_countof(ppvItemsA) * g_nSizeA2) >> 20);
	for(SIZE_T nIndex = 0; nIndex < _countof(ppvItemsA); nIndex++)
		ppvItemsA[nIndex] = realloc(ppvItemsA[nIndex], g_nSizeA2);
	PrintPrivateUsage();
	VOID* ppvItemsB[256];
	static const SIZE_T g_nSizeB1 = 16 << 10; // 16 MB
	_tprintf(_T("Allocating %d MB more\n"), (_countof(ppvItemsB) * g_nSizeB1) >> 20);
	for(SIZE_T nIndex = 0; nIndex < _countof(ppvItemsB); nIndex++)
		ppvItemsB[nIndex] = malloc(g_nSizeB1);
	PrintPrivateUsage();
	return 0;
}

