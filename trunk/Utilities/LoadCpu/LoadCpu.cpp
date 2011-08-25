////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2011
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#include "stdafx.h"

////////////////////////////////////////////////////////////
// CModule

class CModule : 
	public CAtlExeModuleT<CModule>
{
	typedef CThreadT<CModule> CThread;

private:
	DWORD_PTR m_nAffinityMask;
	UINT m_nRate;
	CEvent m_CompletionEvent;
	ULONG m_nActivityTime;
	ULONG m_nInactivityTime;
	CEvent m_ActivityEvent;
	CRoListT<CObjectPtr<CThread>> m_ThreadList;

public:
// CModule
	CModule() throw() :
		m_nAffinityMask((DWORD) -1),
		m_nRate(100),
		m_CompletionEvent(TRUE, FALSE),
		m_ActivityEvent(TRUE, FALSE)
	{
#if defined(_DEBUG)
		AtlTraceLoadSettings(NULL);
#endif // defined(_DEBUG)
		_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
	}
	~CModule() throw()
	{
		_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
	}
	VOID SetAffinityMask(DWORD_PTR nAffinityMask)
	{
		m_nAffinityMask = nAffinityMask;
	}
	VOID SetRate(UINT nRate)
	{
		m_nRate = nRate;
	}
	DWORD ThreadProc(CThread*, CEvent& InitializationEvent, CEvent& TerminationEvent)
	{
		const UINT nRate = m_nRate;
		_W(InitializationEvent.Set());
		const HANDLE phObjects[] = { TerminationEvent, m_ActivityEvent };
		const DWORD nWaitResult = WaitForMultipleObjects(DIM(phObjects), phObjects, FALSE, INFINITE);
		_Z4(atlTraceSync, 4, _T("nWaitResult 0x%x\n"), nWaitResult);
		_A(nWaitResult - WAIT_OBJECT_0 < DIM(phObjects));
		if(nWaitResult == WAIT_OBJECT_0 + 1) // m_ActivityEvent
		{
			for(; ; )
			{
				const DWORD nWaitResult = WaitForSingleObject(TerminationEvent, m_nInactivityTime);
				_Z5(atlTraceSync, 5, _T("nWaitResult 0x%x\n"), nWaitResult);
				_A(nWaitResult == WAIT_OBJECT_0 || nWaitResult == WAIT_TIMEOUT);
				if(nWaitResult != WAIT_TIMEOUT)
					break;
				const ULONG nTime = GetTickCount() + m_nActivityTime;
				INT nX = 17, nY = 19;
				while((LONG) (GetTickCount() - nTime) < 0)
				{
					for(INT nZ = 0; nZ < 1000; nZ++)
					{
						nX = nX * nY;
						nY = (nY << 16) / (nX | 1);
					}
				}
			}
		}
		return 0;
	}
	HRESULT Run(INT nShowCommand = SW_HIDE)
	{
		#pragma region Affinity Mask
		DWORD_PTR nProcessAffinityMask, nSystemAffinityMask;
		__E(GetProcessAffinityMask(GetCurrentProcess(), &nProcessAffinityMask, &nSystemAffinityMask));
		if((nProcessAffinityMask & m_nAffinityMask) != nProcessAffinityMask)
		{
			__E(SetProcessAffinityMask(GetCurrentProcess(), nProcessAffinityMask & m_nAffinityMask));
			__E(GetProcessAffinityMask(GetCurrentProcess(), &nProcessAffinityMask, &nSystemAffinityMask));
		}
		_tprintf(_T("System Affinity Mask: 0x%02x\n"), nSystemAffinityMask);
		_tprintf(_T("Process Affinity Mask: 0x%02x\n"), nProcessAffinityMask);
		#pragma endregion
		_tprintf(_T("Rate: %d%%\n"), m_nRate);
		ULONG nActivityTime = 10 * m_nRate, nInactivityTime = 10 * (100 - m_nRate);
		while(nActivityTime >= 20 && nInactivityTime >= 20)
		{
			nActivityTime >>= 1;
			nInactivityTime >>= 1;
		}
#if defined(_DEBUG)
		_tprintf(_T("Activity/Inactivity Times: %d, %d\n"), nActivityTime, nInactivityTime);
#endif // defined(_DEBUG)
		m_nActivityTime = nActivityTime;
		m_nInactivityTime = nInactivityTime;
		for(DWORD_PTR nIndex = 1; nIndex; nIndex <<= 1)
		{
			if(!(nProcessAffinityMask & nIndex))
				continue;
			CObjectPtr<CThread> pThread;
			__E(pThread.Construct()->Initialize(this, &CModule::ThreadProc));
			SetThreadAffinityMask(pThread->GetHandle(), nIndex);
			_W(m_ThreadList.AddTail(pThread));
		}
		_W(m_ActivityEvent.Set());
		const DWORD nWaitResult = WaitForSingleObject(m_CompletionEvent, INFINITE);
		_Z4(atlTraceSync, 4, _T("nWaitResult 0x%x\n"), nWaitResult);
		_A(nWaitResult == WAIT_OBJECT_0);
		m_ThreadList.RemoveAll();
		return S_OK;
	}
};

////////////////////////////////////////////////////////////
// Main

int _tmain(int argc, _TCHAR* argv[])
{
	_ATLTRY
	{
		CModule Module;
		#pragma region Parse Command Line
		for(INT nIndex = 1; nIndex < argc; nIndex++)
		{
			CString sArgument = argv[nIndex];
			_A(!sArgument.IsEmpty());
			#pragma region Switches
			if(_tcschr(_T("-/"), sArgument[0]))
			{
				sArgument.Delete(0);
				#pragma region Switch Value/Specification
				CString sArgumentValue;
				if(sArgument.GetLength() > 1)
				{
					SIZE_T nIndex = 1;
					if(sArgument[1] == _T(':'))
						nIndex++;
					sArgumentValue = (LPCTSTR) sArgument + nIndex;
				}
				#pragma endregion
				if(_tcschr(_T("Aa"), sArgument[0]))
				{
					__D(!sArgumentValue.IsEmpty(), E_INVALIDARG);
					INT nAffinityMask = 0;
					__D(StrToIntEx(sArgumentValue, STIF_SUPPORT_HEX, &nAffinityMask), E_INVALIDARG);
					__D(nAffinityMask, E_INVALIDARG);
					//_tprintf(_T("Affinity: 0x%x\n"), nAffinityMask);
					Module.SetAffinityMask(nAffinityMask);
				} else
				if(_tcschr(_T("Rr"), sArgument[0]))
				{
					__D(!sArgumentValue.IsEmpty(), E_INVALIDARG);
					INT nRate = 0;
					__D(StrToIntEx(sArgumentValue, STIF_SUPPORT_HEX, &nRate), E_INVALIDARG);
					__D(nRate > 0 && nRate < 100, E_INVALIDARG);
					//_tprintf(_T("Rate: %d%%\n"), nRate);
					Module.SetRate(nRate);
				}
				continue;
			}
			#pragma endregion 
			//if(sArgument.GetLength() >= 2 && sArgument[0] == _T('"') && sArgument[sArgument.GetLength() - 1] == _T('"'))
			//	sArgument = sArgument.Mid(1, sArgument.GetLength() - 2);
			//Module.SetPath(sArgument);
		}
		#pragma endregion
		Module.Run();
	}
	_ATLCATCH(Exception)
	{
		_tprintf(_T("Error 0x%08x: %s\n"), (HRESULT) Exception, AtlFormatSystemMessage(Exception).TrimRight(_T("\t\n\r .")));
		return (INT) (HRESULT) Exception;
	}
	_ATLCATCHALL()
	{
		_tprintf(_T("Fatal Error\n"));
		return (INT) E_FAIL;
	}
	return 0;
}
