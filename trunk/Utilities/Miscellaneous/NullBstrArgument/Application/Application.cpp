////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2013
// Created by Roman Ryltsov roman@alax.info

#include "stdafx.h"
#import "libid:376B7D27-4AD3-47F6-AC02-D2DDE9E5A9B6" no_namespace raw_interfaces_only

#define A(x) B(x, __LINE__)
#define B(x, y) if(FAILED(x)) { CString s; s.Format(_T("Failed at line %d: %hs\n"), y, #x); OutputDebugString(s); }

int _tmain(int argc, _TCHAR* argv[])
{
	A(CoInitialize(NULL));
	{
		CComPtr<IFoo> pFoo;
		A(pFoo.CoCreateInstance(__uuidof(Foo), NULL, CLSCTX_LOCAL_SERVER));
		CComBSTR sValue;
		sValue = "Application";
		A(pFoo->Bar1(&sValue));
		ATLTRACE("sValue 0x%p \"%ls\"\n", sValue, CStringW(sValue));
		A(pFoo->Bar1(NULL));
		sValue = "Application";
		A(pFoo->Bar2(&sValue));
		ATLTRACE("sValue 0x%p \"%ls\"\n", sValue, CStringW(sValue));
		A(pFoo->Bar2(NULL));
	}
	CoUninitialize();
	return 0;
}

