////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2014
// Created by Roman Ryltsov roman@alax.info
//
// A permission to use the source code is granted as long as reference to 
// source website http://alax.info is retained.

#include "stdafx.h"
//#include "resource.h"
#include "Module.h"

int _tmain(int argc, _TCHAR* argv[])
{
	CModule Module;
	_ATLTRY
	{
		Module.WinMain(SW_SHOWNORMAL);
	}
	_ATLCATCHALL()
	{
		_Z_EXCEPTION();
	}
	return 0;
}
