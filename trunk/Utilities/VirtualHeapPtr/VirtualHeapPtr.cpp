////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2011
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#include "stdafx.h"
#include "VirtualHeapPtr.h"

////////////////////////////////////////////////////////////
// Main

int _tmain(int argc, _TCHAR* argv[])
{
	_tprintf(_T("g_GlobalVirtualAllocator.GetPageSize() %d\n\n"), g_GlobalVirtualAllocator.GetPageSize());
	CDebugHeapPtr<BYTE> p;
	p.Allocate(1);
	p[0] = 0x01;
	_tprintf(_T("p[0] 0x%02X\n"), p[0]);
	ATLVERIFY(p.Reallocate(2));
	p[1] = 0x02;
	_tprintf(_T("p[0] 0x%02X, p[1] 0x%02X\n"), p[0], p[1]);
	p[0] = 0x03;
	_tprintf(_T("p[0] 0x%02X, p[1] 0x%02X\n"), p[0], p[1]);
	#pragma region PAGE_READONLY
	//if(FALSE)
	{
		p.SetProtection(PAGE_READONLY);
		_ATLTRY
		{
			p[1] = 0x04;
			_tprintf(_T("p[0] 0x%02X, p[1] 0x%02X\n"), p[0], p[1]);
		}
		_ATLCATCHALL()
		{
			_tprintf(_T("Oopsie in line %d (Failed to write to PAGE_READONLY memory)\n"), __LINE__);
		}
		p.SetProtection(PAGE_READWRITE);
		p[1] = 0x05;
		_tprintf(_T("p[0] 0x%02X, p[1] 0x%02X\n"), p[0], p[1]);
	}
	#pragma endregion 
	volatile BYTE n;
	p.SetProtection(PAGE_READWRITE | PAGE_GUARD);
	#pragma region PAGE_GUARD
	_ATLTRY
	{
		n = p[0];
	}
	_ATLCATCHALL()
	{
		_tprintf(_T("Oopsie in line %d (First PAGE_GUARD access)\n"), __LINE__);
	}
	_ATLTRY
	{
		n = p[1];
	}
	_ATLCATCHALL()
	{
		_tprintf(_T("Oopsie in line %d (Second PAGE_GUARD access)\n"), __LINE__);
	}
	#pragma endregion 
	#pragma region Invalid Index
	_ATLTRY
	{
		n = p[-1];
	}
	_ATLCATCHALL()
	{
		_tprintf(_T("Oopsie in line %d (Reading with a too small index)\n"), __LINE__);
	}
	_ATLTRY
	{
		p[-1] = n;
	}
	_ATLCATCHALL()
	{
		_tprintf(_T("Oopsie in line %d (Writing with a too small index)\n"), __LINE__);
	}
	_ATLTRY
	{
		n = p[2];
	}
	_ATLCATCHALL()
	{
		_tprintf(_T("Oopsie in line %d (Reading with a too large index)\n"), __LINE__);
	}
	_ATLTRY
	{
		p[2] = n;
	}
	_ATLCATCHALL()
	{
		_tprintf(_T("Oopsie in line %d (Writing with a too large index)\n"), __LINE__);
	}
	#pragma endregion 
	return 0;
}

