////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2011
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#include "stdafx.h"
#include <eh.h>

int _tmain(int argc, _TCHAR* argv[])
{
	//for(; ; )
	//{
	//	if(GetKeyState(VK_CONTROL) < 0)
	//		abort();
	//	Sleep(1000);
	//}
	for(UINT nIndex = 0; ; nIndex++)
	{
		_ATLTRY
		{
			if(nIndex & 3)
				AtlThrow(MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, nIndex & 0xFFF)); // C++ Exception
			GetSystemTime(NULL); // Win32 Exception
		}
		_ATLCATCHALL()
		{
		}
		Sleep(5000);
	}
	return 0;
}

