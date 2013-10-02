////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2013
// Created by Roman Ryltsov roman@alax.info

#include "stdafx.h"
#include <atlbase.h>
#include <atlcom.h>

class CFoo
{
public:
	INT m_nValue;

public:
// CFoo
	CFoo()
	{
		m_nValue++;
		Sleep(100);
		m_nValue++;
	}
};

CRITICAL_SECTION g_Section;

DWORD WINAPI ThreadProc(INT_PTR*)
{
	#if TRUE
		static BYTE g_pnFooData[sizeof (CFoo)];
		static BOOL g_bFooInitialized = FALSE;
		CFoo& g_Foo = reinterpret_cast<CFoo&>(g_pnFooData);
		EnterCriticalSection(&g_Section);
		if(!g_bFooInitialized)
		{
			new (g_pnFooData) CFoo();
			g_bFooInitialized = TRUE;
		}
		LeaveCriticalSection(&g_Section);
	#else
		static CFoo g_Foo;
	#endif
	_tprintf(_T("Thread %05d, Value %02d\n"), GetCurrentThreadId(), g_Foo.m_nValue);
	return 0;
}

int _tmain(int argc, _TCHAR* argv[])
{
	InitializeCriticalSection(&g_Section);
	HANDLE phObjects[32];
	for(SIZE_T nIndex = 0; nIndex < _countof(phObjects); nIndex++)
		phObjects[nIndex] = AtlCreateThread<INT_PTR>(&ThreadProc, 0);
	WaitForMultipleObjects(_countof(phObjects), phObjects, TRUE, INFINITE);
	return 0;
}

