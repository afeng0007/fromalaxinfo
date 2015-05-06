////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2015
// Created by Roman Ryltsov roman@alax.info
// 
// A permission to use the source code is granted as long as reference to 
// source website http://alax.info is retained.

#include "stdafx.h"
#include "roatlreleasetrace.h"

int _tmain(int argc, _TCHAR* argv[])
{
	ATLTRACE("Line %d\n", __LINE__);
	ATLTRACE(L"Line %d\n", __LINE__);
	ATLTRACE(atlTraceGeneral, 4, "Line %d\n", __LINE__);
	ATLTRACE(atlTraceGeneral, 4, L"Line %d\n", __LINE__);
	return 0;
}

