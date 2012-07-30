////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2012
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#include "stdafx.h"

extern "C" 
{
	#include "dev\include\libavcodec\avcodec.h"
}

#pragma comment(lib, "dev\\lib\\avcodec.lib")

int _tmain(int argc, _TCHAR* argv[])
{
	_tprintf(_T("Trying avcodec_register_all... "));
	avcodec_register_all();
	_tprintf(_T("Done.\n"));
	return 0;
}

