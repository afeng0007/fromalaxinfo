////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2011
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#include "stdafx.h"
#include <psapi.h>

#pragma comment(lib, "psapi.lib")

////////////////////////////////////////////////////////////
// CGlobalVirtualAllocator

class CGlobalVirtualAllocator
{
private:
	SIZE_T m_nGranularity;

public:
// CGlobalVirtualAllocator
	CGlobalVirtualAllocator() throw() :
		m_nGranularity(4 << 10) // 4L
	{
		PERFORMANCE_INFORMATION Information;
		ZeroMemory(&Information, sizeof Information);
		ATLVERIFY(GetPerformanceInfo(&Information, sizeof Information));
		m_nGranularity = Information.PageSize;
		ATLASSERT(m_nGranularity);
		ATLASSERT(!(m_nGranularity & (m_nGranularity - 1)));
	}
	SIZE_T GetGranularity() const throw()
	{
		return m_nGranularity;
	}
};

CGlobalVirtualAllocator g_GlobalVirtualAllocator;

////////////////////////////////////////////////////////////
// CVirtualAllocator

class CVirtualAllocator
{
public:
// CVirtualAllocator
	static SIZE_T Align(SIZE_T nDataSize) throw()
	{
		const SIZE_T nGranularity = g_GlobalVirtualAllocator.GetGranularity();
		ATLASSERT(nGranularity);
		ATLASSERT(!(nGranularity & (nGranularity - 1)));
		return (nDataSize + nGranularity - 1) & ~(nGranularity - 1);
	}
	static VOID* Reallocate(_In_opt_ VOID* pvData, _In_ SIZE_T nDataSize)
	{
		MEMORY_BASIC_INFORMATION DataInformation;
		if(pvData)
		{
			ATLVERIFY(VirtualQuery(pvData, &DataInformation, sizeof DataInformation));
			if(nDataSize <= DataInformation.RegionSize)
				return pvData;
		}
		VOID* pvNewData = NULL;
		if(nDataSize)
		{
			pvNewData = VirtualAlloc(NULL, Align(nDataSize), MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
			ATLENSURE_THROW(pvNewData, AtlHresultFromLastError());
			_ATLTRY
			{
				ATLENSURE_THROW(VirtualLock(pvNewData, nDataSize), AtlHresultFromLastError());
				if(pvNewData && pvData)
				{
					ATLASSERT(DataInformation.AllocationProtect == PAGE_READWRITE);
					SIZE_T nCopyDataSize = nDataSize;
					if(nCopyDataSize > DataInformation.RegionSize)
						nCopyDataSize = DataInformation.RegionSize;
					Checked::memcpy_s(pvNewData, nDataSize, pvData, nCopyDataSize);
				}
			}
			_ATLCATCHALL()
			{
				Free(pvData);
				_ATLRETHROW;
			}
		}
		if(pvData)
			Free(pvData);
		return pvNewData;
	}
	static VOID* Allocate(_In_ SIZE_T nDataSize)
	{
		if(!nDataSize)
			return NULL;
		VOID* pvData = VirtualAlloc(NULL, Align(nDataSize), MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
		ATLENSURE_THROW(pvData, AtlHresultFromLastError());
		_ATLTRY
		{
			ATLENSURE_THROW(VirtualLock(pvData, nDataSize), AtlHresultFromLastError());
		}
		_ATLCATCHALL()
		{
			Free(pvData);
			_ATLRETHROW;
		}
		return pvData;
	}
	static VOID Free(_In_opt_ VOID* pvData) throw()
	{
		if(!pvData)
			return;
		//VirtualUnlock(pvData, 
		ATLVERIFY(VirtualFree(pvData, 0, MEM_RELEASE));
	}
};

////////////////////////////////////////////////////////////
// CVirtualHeapPtr

template <typename T>
class CVirtualHeapPtr :
	public CHeapPtr<T, CVirtualAllocator>
{
public:
// CVirtualHeapPtr
	CVirtualHeapPtr() throw()
	{
	}
	explicit CVirtualHeapPtr(_In_ T* pData) throw() :
		CHeapPtr<T, CVirtualAllocator>(pData)
	{
	}
	VOID SetProtection(DWORD nProtection)
	{
		if(!m_pData)
			return;
		MEMORY_BASIC_INFORMATION DataInformation;
		ATLENSURE_THROW(VirtualQuery(m_pData, &DataInformation, sizeof DataInformation), AtlHresultFromLastError());
		DWORD nCurrentProtection;
		ATLENSURE_THROW(VirtualProtect(m_pData, DataInformation.RegionSize, nProtection, &nCurrentProtection), AtlHresultFromLastError());
	}
};

////////////////////////////////////////////////////////////
// Main

int _tmain(int argc, _TCHAR* argv[])
{
	CVirtualHeapPtr<BYTE> p;
	p.Allocate(1);
	p[0] = 0x01;
	_tprintf(_T("p[0] 0x%02X\n"), p[0]);
	ATLVERIFY(p.Reallocate(2));
	p[1] = 0x02;
	_tprintf(_T("p[0] 0x%02X, p[1] 0x%02X\n"), p[0], p[1]);
	p[0] = 0x03;
	_tprintf(_T("p[0] 0x%02X, p[1] 0x%02X\n"), p[0], p[1]);
	if(FALSE)
	{
		p.SetProtection(PAGE_READONLY);
		_ATLTRY
		{
			p[1] = 0x04;
			_tprintf(_T("p[0] 0x%02X, p[1] 0x%02X\n"), p[0], p[1]);
		}
		_ATLCATCHALL()
		{
			_tprintf(_T("Oopsie in line %d\n"), __LINE__);
		}
		p.SetProtection(PAGE_READWRITE);
		p[1] = 0x05;
		_tprintf(_T("p[0] 0x%02X, p[1] 0x%02X\n"), p[0], p[1]);
	}
	p.SetProtection(PAGE_READWRITE | PAGE_GUARD);
	volatile BYTE n;
	_ATLTRY
	{
		n = p[0];
	}
	_ATLCATCHALL()
	{
		_tprintf(_T("Oopsie in line %d\n"), __LINE__);
	}
	_ATLTRY
	{
		n = p[1];
	}
	_ATLCATCHALL()
	{
		_tprintf(_T("Oopsie in line %d\n"), __LINE__);
	}
	return 0;
}

