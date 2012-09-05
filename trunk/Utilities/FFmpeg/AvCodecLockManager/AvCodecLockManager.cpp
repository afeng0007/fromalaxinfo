////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2012
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#include "stdafx.h"
#include <atlbase.h>
#include <atlsync.h>
#include <atlcoll.h>

extern "C" 
{
	#include "libavcodec\avcodec.h"
}

#pragma comment(lib, "avcodec.lib")

class CModule
{
public:
	INT m_nMode;

private:
	CEvent m_StartEvent;
	CComAutoCriticalSection m_CriticalSection;

public:
// CModule
	static int LockOperation(void** ppvLock, enum AVLockOp Operation) 
	{
		ATLTRACE(atlTraceGeneral, 4, _T("ppvLock 0x%p, Operation %d\n"), ppvLock, Operation);
		ATLASSERT(ppvLock);
		CComCriticalSection* pCriticalSection = static_cast<CComCriticalSection*>(*ppvLock);
		switch(Operation) 
		{
		case AV_LOCK_CREATE:
			{
				*ppvLock = new CComCriticalSection;
				if(!*ppvLock)
					return 1; // Failure
				CComCriticalSection* pCriticalSection = static_cast<CComCriticalSection*>(*ppvLock);
				ATLVERIFY(SUCCEEDED(pCriticalSection->Init()));
			}
			return 0;
		case AV_LOCK_OBTAIN:
			ATLVERIFY(SUCCEEDED(pCriticalSection->Lock()));
			return 0;
		case AV_LOCK_RELEASE:
			ATLVERIFY(SUCCEEDED(pCriticalSection->Unlock()));
			return 0;
		case AV_LOCK_DESTROY:
			ATLVERIFY(SUCCEEDED(pCriticalSection->Term()));
			delete pCriticalSection;
			*ppvLock = NULL;
			return 0;
		}
		return 1; // Failure
	}
	DWORD ThreadProc()
	{
		AVCodecContext* pContext = avcodec_alloc_context();
		AVCodec* pCodec = avcodec_find_decoder_by_name("h264");
		ATLASSERT(pContext);
		ATLVERIFY(WaitForSingleObject(m_StartEvent, INFINITE) == WAIT_OBJECT_0);
		for(; ; )
		{
			if(m_nMode == 1)
				m_CriticalSection.Lock();
			const INT nOpenResult = avcodec_open(pContext, pCodec);
			if(m_nMode == 1)
				m_CriticalSection.Unlock();
			if(nOpenResult)
				_tprintf(_T("GetCurrentThreadId() %d, nOpenResult %d\n"), GetCurrentThreadId(), nOpenResult);
			if(m_nMode == 1)
				m_CriticalSection.Lock();
			const INT nCloseResult = avcodec_close(pContext);
			if(m_nMode == 1)
				m_CriticalSection.Unlock();
			if(nCloseResult)
				_tprintf(_T("GetCurrentThreadId() %d, nCloseResult %d\n"), GetCurrentThreadId(), nCloseResult);
		}
		return 0;
	}
	static DWORD __stdcall ThreadProc(CModule* pModule)
	{
		return pModule->ThreadProc();
	}
	VOID Run()
	{
		if(m_nMode == 2)
			av_lockmgr_register(&CModule::LockOperation);
		ATLVERIFY(m_StartEvent.Create(NULL, TRUE, FALSE, NULL));
		CAtlArray<CHandle> ThreadArray;
		static const SIZE_T g_nThreadCount = 8;
		for(SIZE_T nIndex = 0; nIndex < g_nThreadCount; nIndex++)
		{
			CHandle Thread;
			Thread.Attach(AtlCreateThread<CModule>(&CModule::ThreadProc, this));
			ATLASSERT(Thread);
			ThreadArray.Add(Thread);
			Thread.Detach();
		}
		avcodec_register_all();
		m_StartEvent.Set();
		_tprintf(_T("Started"));
		Sleep(60 * 1000);
		_tprintf(_T("Lucky"));
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	#if defined(_DEBUG)
		AtlTraceLoadSettings(NULL);
	#endif // defined(_DEBUG)
	CModule Module;
	Module.m_nMode = 0;
	if(argc > 1)
	{
		if(_tcschr(argv[1], _T('1')))
			Module.m_nMode = 1;
		else if(_tcschr(argv[1], _T('2')))
			Module.m_nMode = 2;
	}
	_tprintf(_T("Mode %d\n"), Module.m_nMode);
	Module.Run();
	return 0;
}

