////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2015
// Created by Roman Ryltsov roman@alax.info
//
// A permission to use the source code is granted as long as reference to 
// source website http://alax.info is retained.

#include "stdafx.h"
#include <iostream>

CEvent g_TerminationEvent;

BOOL InternalHandlerRoutine(DWORD nType)
{
	_W(g_TerminationEvent.Set());
	return TRUE;
}
BOOL WINAPI HandlerRoutine(DWORD nType)
{
	return InternalHandlerRoutine(nType);
}

int _tmain(int argc, _TCHAR* argv[])
{
	// NOTE: generate 2>nul | logstdoutput filename.ext
	_ATLTRY
	{
		if(argc < 2)
		{
			std::cerr << "Syntax: LogStdOutput <path>" << std::endl;
			return 1;
		}
		__E(g_TerminationEvent.Create(NULL, TRUE, FALSE, NULL));
		__E(SetConsoleCtrlHandler(&HandlerRoutine, TRUE));
		const HANDLE hInput = GetStdHandle(STD_INPUT_HANDLE);
		const HANDLE hOutput = GetStdHandle(STD_OUTPUT_HANDLE);
		__D(hInput && hOutput, E_UNNAMED);
		CAtlFile File;
		__C(File.Create(argv[1], GENERIC_WRITE, FILE_SHARE_READ, CREATE_ALWAYS));
		HANDLE phObjects[] = { g_TerminationEvent, hInput };
		static const SIZE_T g_nDataCapacity = 256 << 10; // 256 KB
		CHeapPtr<BYTE> pnData;
		__D(pnData.Allocate(g_nDataCapacity), E_OUTOFMEMORY);
		for(; ; )
		{
			const DWORD nWaitResult = WaitForMultipleObjects(DIM(phObjects), phObjects, FALSE, INFINITE);
			_Z5_WAITRESULT(nWaitResult);
			if(nWaitResult != WAIT_OBJECT_0 + 1) // hInput
				break; // Termination?
			DWORD nDataSize = 0;
			__E(ReadFile(hInput, pnData, (DWORD) g_nDataCapacity, &nDataSize, NULL));
			if(!nDataSize)
				break;
			// NOTE: nWriteDataSize is mandatory
			//       https://social.msdn.microsoft.com/Forums/vstudio/en-US/e519816e-57c6-4b5d-9269-3ad1494eedbf/writefile-on-a-console-handle-always-fails-why?forum=vcgeneral
			DWORD nWriteDataSize = 0;
			__E(WriteFile(hOutput, pnData, nDataSize, &nWriteDataSize, NULL));
			__C(File.Write(pnData, nDataSize));
		}
	}
	_ATLCATCH(Exception)
	{
		return Exception;
	}
	return 0;
}
