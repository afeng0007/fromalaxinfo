////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2013
// Created by Roman Ryltsov roman@alax.info

#include "stdafx.h"
#include <atlbase.h>
#include <atlcom.h>

class CModule :
	public CAtlExeModuleT<CModule>
{
};

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
	CFoo(INT nValue)
	{
		m_nValue = nValue;
		Sleep(100);
		m_nValue++;
	}
	CFoo(INT nValue1, INT nValue2)
	{
		m_nValue = nValue1 + nValue2;
		Sleep(100);
		m_nValue++;
	}
};

#define STATICLOCAL_PART1(type, name) \
	static BYTE g_pn##name##Data[sizeof (type)]; \
	static BOOL g_b##name##Initialized = FALSE; \
	type& g_##name = reinterpret_cast<type&>(g_pn##name##Data); \
	{ \
		ATLASSERT(_pAtlModule); \
		CComCritSecLock<CComCriticalSection> Lock(_pAtlModule->m_csStaticDataInitAndTypeInfo); \
		if(!g_b##name##Initialized) \
		{ \
			new (g_pn##name##Data) type(

#define STATICLOCAL_PART2(type, name) \
			); \
			g_b##name##Initialized = TRUE; \
		} \
	}

#define STATICLOCAL0(type, name) \
	STATICLOCAL_PART1(type, name) STATICLOCAL_PART2(type, name)
#define STATICLOCAL1(type, name, parameter1) \
	STATICLOCAL_PART1(type, name) parameter1 STATICLOCAL_PART2(type, name)
#define STATICLOCAL2(type, name, parameter1, parameter2) \
	STATICLOCAL_PART1(type, name) parameter1, parameter2 STATICLOCAL_PART2(type, name)

DWORD WINAPI ThreadProc(INT_PTR*)
{
	#if TRUE
		//STATICLOCAL0(CFoo, Foo);
		//STATICLOCAL1(CFoo, Foo, 10);
		STATICLOCAL2(CFoo, Foo, 20, 30);
	#else
		static CFoo g_Foo;
	#endif
	_tprintf(_T("Thread %05d, Value %02d\n"), GetCurrentThreadId(), g_Foo.m_nValue);
	return 0;
}

int _tmain(int argc, _TCHAR* argv[])
{
	CModule Module;
	HANDLE phObjects[32];
	for(SIZE_T nIndex = 0; nIndex < _countof(phObjects); nIndex++)
		phObjects[nIndex] = AtlCreateThread<INT_PTR>(&ThreadProc, 0);
	WaitForMultipleObjects(_countof(phObjects), phObjects, TRUE, INFINITE);
	return 0;
}

