////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2012
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#include "stdafx.h"
#include <atlstr.h>
#include <atlpath.h>

using namespace ATL::ATLPath;

int _tmain(int argc, _TCHAR* argv[])
{
	DWORD nProcessIdentifier = 6436;
	TCHAR pszPath[MAX_PATH] = { 0 };
	ATLVERIFY(GetModuleFileName(NULL, pszPath, _countof(pszPath)));
	ATLVERIFY(RemoveFileSpec(pszPath));
	ATLVERIFY(Combine(pszPath, pszPath, _T("Library.dll")));
	CHandle Process;
	Process.Attach(OpenProcess(PROCESS_ALL_ACCESS, FALSE, nProcessIdentifier));
	ATLENSURE_THROW(Process, AtlHresultFromLastError());
	VOID* pvProcessPath = VirtualAllocEx(Process, NULL, sizeof pszPath, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
	ATLENSURE_THROW(pvProcessPath, AtlHresultFromLastError());
	_ATLTRY
	{
	    ATLENSURE_THROW(WriteProcessMemory(Process, pvProcessPath, pszPath, sizeof pszPath, NULL), AtlHresultFromLastError());
		_tprintf(_T("pvProcessPath 0x%p\n"), pvProcessPath);
		#if !defined(_UNICODE)
		#error Assumed is Unicode build
		#endif
		VOID* pvLoadLibraryAddress = GetProcAddress(GetModuleHandle(_T("kernel32.dll")), "LoadLibraryW");
		ATLENSURE_THROW(pvLoadLibraryAddress, AtlHresultFromLastError());
		CHandle Thread;
		DWORD nThreadIdentifier;
		Thread.Attach(CreateRemoteThread(Process, NULL, NULL, (LPTHREAD_START_ROUTINE) pvLoadLibraryAddress, pvProcessPath, 0, &nThreadIdentifier));
		ATLENSURE_THROW(Thread, AtlHresultFromLastError());
		_tprintf(_T("nThreadIdentifier %d\n"), nThreadIdentifier);
		const DWORD nWaitResult = WaitForSingleObject(Thread, INFINITE);
		_tprintf(_T("nWaitResult 0x%x\n"), nWaitResult);
	}
	_ATLCATCHALL()
	{
		ATLVERIFY(VirtualFreeEx(Process, pvProcessPath, 0, MEM_RELEASE));
		_ATLRETHROW;
	}
	ATLVERIFY(VirtualFreeEx(Process, pvProcessPath, 0, MEM_RELEASE));
	return 0;
}

