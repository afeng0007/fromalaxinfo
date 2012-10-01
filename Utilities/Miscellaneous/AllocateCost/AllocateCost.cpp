////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2012
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#include "stdafx.h"
#include <atlsync.h>

////////////////////////////////////////////////////////////
// CTraitsA

class CTraitsA
{
public:

	////////////////////////////////////////////////////////
	// CBlock

	class CBlock
	{
	public:
		CHeapPtr<BYTE> m_pnData;

	public:
	// CBlock
		CBlock() throw()
		{
		}
		VOID Reallocate(SIZE_T nDataSize)
		{
			ATLVERIFY(m_pnData.Reallocate(nDataSize));
		}
		BYTE* GetData() throw()
		{
			return m_pnData;
		}
	};

public:
// CTraitsA
};

////////////////////////////////////////////////////////////
// CTraitsB

class CTraitsB
{
public:

	////////////////////////////////////////////////////////
	// CBlock

	class CBlock
	{
	public:
		CHeapPtr<BYTE> m_pnData;

	public:
	// CBlock
		CBlock() throw()
		{
		}
		VOID Reallocate(SIZE_T nDataSize)
		{
			m_pnData.Free();
			ATLVERIFY(m_pnData.Allocate(nDataSize));
		}
		BYTE* GetData() throw()
		{
			return m_pnData;
		}
	};

public:
// CTraitsB
};

////////////////////////////////////////////////////////////
// CTraitsC

class CTraitsC
{
public:

	////////////////////////////////////////////////////////
	// CBlock

	class CBlock
	{
	public:
		CHeapPtr<BYTE> m_pnData;
		SIZE_T m_nDataCapacity;
		SIZE_T m_nDataSize;

	public:
	// CBlock
		CBlock() throw() :
			m_nDataCapacity(0)
		{
		}
		VOID Reallocate(SIZE_T nDataSize)
		{
			static const SIZE_T g_nAlignment = 32 << 10; // 32 KB
			ATLASSERT(!(g_nAlignment & (g_nAlignment - 1)));
			const SIZE_T nDataCapacity = (nDataSize + g_nAlignment - 1) & ~(g_nAlignment - 1);
			if(nDataCapacity > m_nDataCapacity || nDataCapacity < (m_nDataCapacity >> 4))
			{
				ATLVERIFY(m_pnData.Reallocate(nDataCapacity));
				m_nDataCapacity = nDataCapacity;
			}
			ATLASSERT(nDataSize <= m_nDataCapacity);
			m_nDataSize = nDataSize;
		}
		BYTE* GetData() throw()
		{
			return m_pnData;
		}
	};

public:
// CTraitsC
};

////////////////////////////////////////////////////////////
// CTestT

template <typename CTraits>
class CTestT
{
	typedef CTestT<CTraits> CModule;

private:
	volatile LONG m_nCount;
	CEvent m_StartEvent;
	CEvent m_StopEvent;
	SIZE_T m_nDataSize;
	CHeapPtr<BYTE> m_pnData;

public:
// CTestT
	CTestT()
	{
	}
	DWORD Rally()
	{
		const DWORD nWaitResult = WaitForSingleObject(m_StartEvent, INFINITE);
		ATLASSERT(nWaitResult == WAIT_OBJECT_0);
		typename CTraits::CBlock Block;
		for(UINT nIndex = 0; ; nIndex++)
		{
			if(!(nIndex % 1024))
				if(WaitForSingleObject(m_StopEvent, 0) == WAIT_OBJECT_0)
					break;
			SIZE_T nDataSize = (1 << 10) +  rand() * (m_nDataSize - (1 << 10)) / RAND_MAX;
			Block.Reallocate(nDataSize);
			memcpy(Block.GetData(), m_pnData, nDataSize);
			InterlockedIncrement(&m_nCount);
		}
		return 0;
	}
	static DWORD __stdcall Rally(CModule* pModule)
	{
		return pModule->Rally();
	}
	VOID Run()
	{
		m_nDataSize = 1 << 20; // 1 MB
		ATLVERIFY(m_pnData.Allocate(m_nDataSize));
		for(SIZE_T nIndex = 0; nIndex < m_nDataSize; nIndex++)
			m_pnData[nIndex] = (BYTE) rand();
		m_nCount = 0;
		ATLVERIFY(m_StartEvent.Create(NULL, TRUE, FALSE, NULL));
		ATLVERIFY(m_StopEvent.Create(NULL, TRUE, FALSE, NULL));
		static const SIZE_T g_nThreadCount = 8;
		CHandle pThreads[g_nThreadCount];
		for(SIZE_T nThreadIndex = 0; nThreadIndex < g_nThreadCount; nThreadIndex++)
		{
			pThreads[nThreadIndex].Attach(AtlCreateThread<CModule>(&CModule::Rally, this));
			ATLASSERT(pThreads[nThreadIndex]);
		}
		Sleep(100); // 0.1 second
		ATLVERIFY(m_StartEvent.Set());
		Sleep(10 * 1000); // 10 seconds
		const LONG nCount = InterlockedIncrement(&m_nCount) - 1;
		ATLVERIFY(m_StopEvent.Set());
		const DWORD nWaitResult = WaitForMultipleObjects(g_nThreadCount, reinterpret_cast<HANDLE*>(pThreads), TRUE, INFINITE);
		ATLASSERT(nWaitResult == WAIT_OBJECT_0);
		_tprintf(_T("%d\n"), nCount);
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	srand(1);
	SetPriorityClass(GetCurrentProcess(), HIGH_PRIORITY_CLASS);
	for(SIZE_T nIndex = 0; nIndex < 5; nIndex++)
	{
		CTestT<CTraitsA>().Run();
		CTestT<CTraitsB>().Run();
		CTestT<CTraitsC>().Run();
		_tprintf(_T("%\n"));
	}
	return 0;
}

