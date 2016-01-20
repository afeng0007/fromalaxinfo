////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2016
// Created by Roman Ryltsov roman@alax.info

#include "stdafx.h"

extern "C" 
{
	// NOTE: Additional directory ..\zeranoe.com\dev\include gets to the files
	#include "libavcodec\avcodec.h"
}

// NOTE: Additional directory ..\zeranoe.com\dev\lib gets to the files
#pragma comment(lib, "avcodec.lib")

// NOTE: Be sure to copy DLL files from ..\zeranoe.com\shared\bin to the directory of the FFmpegApp.exe binary
int _tmain(int argc, _TCHAR* argv[])
{
	_tprintf(_T("Trying avcodec_register_all... "));
	avcodec_register_all();
	_tprintf(_T("Done.\n"));
	return 0;
}

