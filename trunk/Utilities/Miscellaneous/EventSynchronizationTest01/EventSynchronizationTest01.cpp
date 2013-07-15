////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2011
// Created by Roman Ryltsov roman@alax.info
// 
// $Id: EventSynchronizationTest01.cpp 246 2011-03-19 17:24:45Z alax $

#include "stdafx.h"
#if defined(_DEBUG)
#include <conio.h>
#endif // defined(_DEBUG)
#include <winternl.h>
#include <atlsync.h>

static const UINT g_nMethod = 4;
static const SIZE_T g_nSendThreadCount = 3;
static const ULONG g_nDuration = 60 * 1000; // 60 seconds

#pragma region Internals

namespace Internals
{
#if !defined(_WIN64)
#error The undocumented structures below are only valid for 64-bit code
#endif // !defined(_WIN64)

	//typedef struct _IO_COUNTERS 
	//{
	//    ULONG ReadOperationCount;
	//    ULONG WriteOperationCount;
	//    ULONG OtherOperationCount;
	//    ULONGLONG ReadTransferCount;
	//    ULONGLONG WriteTransferCount;
	//    ULONGLONG OtherTransferCount;
	//} IO_COUNTERS;

	typedef struct _VM_COUNTERS 
	{
		ULONGLONG PeakVirtualSize;
		ULONGLONG VirtualSize;
		ULONG PageFaultCount;
		ULONG Reserved1;
		ULONGLONG PeakWorkingSetSize;
		ULONGLONG WorkingSetSize;
		ULONGLONG QuotaPeakPagedPoolUsage;
		ULONGLONG QuotaPagedPoolUsage;
		ULONGLONG QuotaPeakNonPagedPoolUsage;
		ULONGLONG QuotaNonPagedPoolUsage;
		ULONGLONG PagefileUsage;
		ULONGLONG PeakPagefileUsage;
		ULONGLONG Reserved2;
	} VM_COUNTERS;

	typedef struct _CLIENT_ID
	{
		HANDLE ProcessId; 
		HANDLE ThreadId; 
	} CLIENT_ID, *PCLIENT_ID;

	typedef LONG KPRIORITY;
	typedef LONG KWAIT_REASON;

	typedef struct _SYSTEM_THREAD_INFORMATION {
		ULONGLONG KernelTime; 
		ULONGLONG UserTime; 
		ULONGLONG CreateTime; 
		ULONG WaitTime; 
		ULONG Reserved1; 
		PVOID StartAddress; 
		CLIENT_ID ClientId; 
		KPRIORITY Priority; 
		LONG BasePriority; 
		ULONG ContextSwitchCount; 
		ULONG State; 
		KWAIT_REASON WaitReason;
	} SYSTEM_THREAD_INFORMATION, *PSYSTEM_THREAD_INFORMATION;

	typedef struct _SYSTEM_PROCESS_INFORMATION {
		ULONG NextEntryOffset; 
		ULONG NumberOfThreads; 
		ULONGLONG Reserved[3]; 
		ULONGLONG CreateTime; 
		ULONGLONG UserTime; 
		ULONGLONG KernelTime; 
		UNICODE_STRING ImageName; 
		KPRIORITY BasePriority; 
		HANDLE ProcessId; 
		HANDLE InheritedFromProcessId; 
		ULONG HandleCount; 
		ULONG Reserved2[2]; 
		ULONG PrivatePageCount;  // Garbage
		VM_COUNTERS VirtualMemoryCounters; 
		IO_COUNTERS IoCounters; 
		SYSTEM_THREAD_INFORMATION Threads[1];
	} SYSTEM_PROCESS_INFORMATION, *PSYSTEM_PROCESS_INFORMATION;

	class CSystemProcessInformation
	{
	private:
		CHeapPtr<BYTE> m_pnData;
		SIZE_T m_nDataSize;

	public:
	// CSystemProcessInformation
		CSystemProcessInformation() :
			m_nDataSize(0)
		{
		}
		VOID Initialize()
		{
			static const SIZE_T g_nDataCapacity = 1 << 20; // 1MB
			ATLENSURE_THROW(m_pnData.Reallocate(g_nDataCapacity), E_OUTOFMEMORY);
			ULONG nDataSize = 0;
			typedef NTSTATUS (WINAPI *NTQUERYSYSTEMINFORMATION)(__in SYSTEM_INFORMATION_CLASS SystemInformationClass,  __inout PVOID SystemInformation, __in ULONG SystemInformationLength, __out_opt PULONG ReturnLength);
			NTQUERYSYSTEMINFORMATION NtQuerySystemInformation = (NTQUERYSYSTEMINFORMATION) GetProcAddress(GetModuleHandle(_T("ntdll.dll")), "NtQuerySystemInformation");
			ATLASSERT(NtQuerySystemInformation);
			ATLVERIFY(NtQuerySystemInformation(SystemProcessInformation, m_pnData, (ULONG) g_nDataCapacity, &nDataSize) == 0);
			m_nDataSize = nDataSize;
		}
		const SYSTEM_PROCESS_INFORMATION* LookupProcess(DWORD nProcessIdentifier = GetCurrentProcessId()) throw()
		{
			if(m_nDataSize)
				for(const SYSTEM_PROCESS_INFORMATION* pProcessInformation = (const SYSTEM_PROCESS_INFORMATION*) (const BYTE*) m_pnData; pProcessInformation; pProcessInformation = pProcessInformation->NextEntryOffset ? (const SYSTEM_PROCESS_INFORMATION*) ((const BYTE*) pProcessInformation + pProcessInformation->NextEntryOffset) : NULL)
					if(pProcessInformation->ProcessId == (HANDLE) nProcessIdentifier)
						return pProcessInformation;
			return NULL;
		}
		static const SYSTEM_THREAD_INFORMATION* LookupThread(const SYSTEM_PROCESS_INFORMATION* pProcessInformation, DWORD nThreadIdentifier = GetCurrentThreadId()) throw()
		{
			if(pProcessInformation)
				for(ULONG nThreadIndex = 0; nThreadIndex < pProcessInformation->NumberOfThreads; nThreadIndex++)
				{
					const SYSTEM_THREAD_INFORMATION* pThreadInformation = &pProcessInformation->Threads[nThreadIndex];
					ATLASSERT(pThreadInformation->ClientId.ProcessId == pProcessInformation->ProcessId);
					if(pThreadInformation->ClientId.ThreadId == (HANDLE) nThreadIdentifier)
						return pThreadInformation;
				}
			return NULL;
		}
	};
}

#pragma endregion

class CModule
{
private:
	CEvent m_StartEvent;
	CEvent m_StopEvent;
	CComAutoCriticalSection m_CriticalSection;
	CEvent m_AvailabilityEvent;
	UINT m_nSendCount;
	UINT m_nReceiveCount;

	DWORD SendThreadProc()
	{
		UINT nRandomValue = (UINT) rand();
		const HANDLE phObjects[] = { m_StopEvent };
		ATLVERIFY(WaitForSingleObject(m_StartEvent, INFINITE) == WAIT_OBJECT_0);
		for(UINT nIteration = 0; ; nIteration++)
		{
			const INT nDelay = (INT) (nRandomValue % 1000) - 998;
			nRandomValue = (nRandomValue * 13) ^ ((nRandomValue * 17) << 2) ^ ((nRandomValue * 19) << 4);
			if(nDelay > 0)
			{
				const DWORD nWaitResult = WaitForMultipleObjects(DIM(phObjects), phObjects, FALSE, nDelay);
				ATLASSERT(nWaitResult - WAIT_OBJECT_0 < DIM(phObjects) || nWaitResult == WAIT_TIMEOUT);
				if(nWaitResult == WAIT_OBJECT_0)
					break;
			}
			#pragma endregion
			switch(g_nMethod)
			{
			case 1:
				{
					CComCritSecLock<CComAutoCriticalSection> DataLock(m_CriticalSection);
					m_nSendCount++;
					ATLVERIFY(m_AvailabilityEvent.Set());
				}
				break;
			case 2:
				{
					{
						CComCritSecLock<CComAutoCriticalSection> DataLock(m_CriticalSection);
						m_nSendCount++;
					}
					ATLVERIFY(m_AvailabilityEvent.Set());
				}
				break;
			case 3:
			case 4:
				{
					//CComCritSecLock<CComAutoCriticalSection> DataLock(m_CriticalSection);
					m_nSendCount++;
					ATLVERIFY(m_AvailabilityEvent.Set());
				}
				break;
			default:
				ATLASSUME(FALSE);
			}
		}
		// NOTE: Master thread will want to query thread performance
		Sleep(10000);
		return 0;
	}
	DWORD ReceiveThreadProc()
	{
		const HANDLE phObjects[] = { m_StopEvent, m_AvailabilityEvent };
		ATLVERIFY(WaitForSingleObject(m_StartEvent, INFINITE) == WAIT_OBJECT_0);
		for(UINT nIteration = 0; ; nIteration++)
		{
			const DWORD nWaitResult = WaitForMultipleObjects(DIM(phObjects), phObjects, FALSE, INFINITE);
			ATLASSERT(nWaitResult - WAIT_OBJECT_0 < DIM(phObjects) || nWaitResult == WAIT_TIMEOUT);
			if(nWaitResult == WAIT_OBJECT_0)
				break;
			switch(g_nMethod)
			{
			case 1:
			case 2:
			case 4:
				{
					CComCritSecLock<CComAutoCriticalSection> DataLock(m_CriticalSection);
					m_nReceiveCount++;
					ATLVERIFY(m_AvailabilityEvent.Reset());
				}
				break;
			case 3:
				{
					//CComCritSecLock<CComAutoCriticalSection> DataLock(m_CriticalSection);
					m_nReceiveCount++;
					ATLVERIFY(m_AvailabilityEvent.Reset());
				}
				break;
			default:
				ATLASSUME(FALSE);
			}
		}
		// NOTE: Master thread will want to query thread performance
		Sleep(10000);
		return 0;
	}
	static DWORD STDMETHODCALLTYPE SendThreadProc(CModule* pModule)
	{
		return pModule->SendThreadProc();
	}
	static DWORD STDMETHODCALLTYPE ReceiveThreadProc(CModule* pModule)
	{
		return pModule->ReceiveThreadProc();
	}
	static ULONG FileTimesToMilliseconds(const FILETIME& AnchorFileTime, const FILETIME& FileTime) throw()
	{
		return (ULONG) ((reinterpret_cast<const ULONGLONG&>(FileTime) - reinterpret_cast<const ULONGLONG&>(AnchorFileTime)) / 10000);
	}
	static ULONG FileTimesToMicroseconds(const FILETIME& AnchorFileTime, const FILETIME& FileTime) throw()
	{
		return (ULONG) ((reinterpret_cast<const ULONGLONG&>(FileTime) - reinterpret_cast<const ULONGLONG&>(AnchorFileTime)) / 10);
	}
	template <typename _Integer>
	CString FormatIntegerNumber(_Integer nValue)
	{
		CString sValue;
		sValue.Format(_T("%d"), nValue);
		TCHAR pszValue[32] = { 0 };
		NUMBERFMT Format = { 0, 1, 3, _T("."), _T(","), 1 };
		ATLVERIFY(GetNumberFormat(LOCALE_USER_DEFAULT, 0, sValue, &Format, pszValue, DIM(pszValue)));
		return pszValue;
	}

public:
// CModule
	VOID Run()
	{
		srand(1);
		ATLVERIFY(SetPriorityClass(GetCurrentProcess(), REALTIME_PRIORITY_CLASS));
		ATLVERIFY(SetThreadPriority(GetCurrentThread(), THREAD_PRIORITY_HIGHEST));
		_tprintf(_T("Method: %d\n"), g_nMethod);
		_tprintf(_T("Send Thread Count: %d\n"), g_nSendThreadCount);
		_tprintf(_T("Duration: %s ms\n"), FormatIntegerNumber(g_nDuration));
		_tprintf(_T("* * *\n"));
		m_nSendCount = 0;
		m_nReceiveCount = 0;
		ATLENSURE_THROW(m_StartEvent.Create(NULL, TRUE, FALSE, NULL), AtlHresultFromLastError());
		ATLENSURE_THROW(m_AvailabilityEvent.Create(NULL, TRUE, FALSE, NULL), AtlHresultFromLastError());
		ATLENSURE_THROW(m_StopEvent.Create(NULL, TRUE, FALSE, NULL), AtlHresultFromLastError());
		CAtlList<CHandle> SendThreadList;
		for(SIZE_T nIndex = 0; nIndex < g_nSendThreadCount; nIndex++)
		{
			CHandle& SendThread = SendThreadList.GetAt(SendThreadList.AddTail());
			SendThread.Attach(AtlCreateThread(&CModule::SendThreadProc, this));
			ATLVERIFY(SetThreadPriority(SendThread, THREAD_PRIORITY_ABOVE_NORMAL));
		}
		CHandle& SendThread = SendThreadList.GetHead();
		CHandle ReceiveThread;
		ReceiveThread.Attach(AtlCreateThread(&CModule::ReceiveThreadProc, this));
		ATLVERIFY(SetThreadPriority(ReceiveThread, THREAD_PRIORITY_ABOVE_NORMAL));
		Sleep(1000);
		FILETIME SendThreadCreationTime, SendThreadExitTime, AnchorSendThreadKernelTime, AnchorSendThreadUserTime;
		ATLVERIFY(GetThreadTimes(SendThread, &SendThreadCreationTime, &SendThreadExitTime, &AnchorSendThreadKernelTime, &AnchorSendThreadUserTime));
		FILETIME ReceiveThreadCreationTime, ReceiveThreadExitTime, AnchorReceiveThreadKernelTime, AnchorReceiveThreadUserTime;
		ATLVERIFY(GetThreadTimes(ReceiveThread, &ReceiveThreadCreationTime, &ReceiveThreadExitTime, &AnchorReceiveThreadKernelTime, &AnchorReceiveThreadUserTime));
		FILETIME ProcessCreationTime, ProcessExitTime, AnchorProcessKernelTime, AnchorProcessUserTime;
		ATLVERIFY(GetProcessTimes(GetCurrentProcess(), &ProcessCreationTime, &ProcessExitTime, &AnchorProcessKernelTime, &AnchorProcessUserTime));
		ATLVERIFY(m_StartEvent.Set());
		Sleep(g_nDuration);
		ATLVERIFY(m_StopEvent.Set());
		Sleep(1000);
		#pragma region Performance Statistics
		FILETIME ProcessKernelTime, ProcessUserTime;
		ATLVERIFY(GetProcessTimes(GetCurrentProcess(), &ProcessCreationTime, &ProcessExitTime, &ProcessKernelTime, &ProcessUserTime));
		FILETIME SendThreadKernelTime, SendThreadUserTime;
		ATLVERIFY(GetThreadTimes(SendThread, &SendThreadCreationTime, &SendThreadExitTime, &SendThreadKernelTime, &SendThreadUserTime));
		FILETIME ReceiveThreadKernelTime, ReceiveThreadUserTime;
		ATLVERIFY(GetThreadTimes(ReceiveThread, &ReceiveThreadCreationTime, &ReceiveThreadExitTime, &ReceiveThreadKernelTime, &ReceiveThreadUserTime));
		_tprintf(_T("Send Count:    %15s\n"), FormatIntegerNumber(m_nSendCount));
		_tprintf(_T("Receive Count: %15s\n"), FormatIntegerNumber(m_nReceiveCount));
		_tprintf(_T("\n"));
		Internals::CSystemProcessInformation SystemProcessInformation;
		SystemProcessInformation.Initialize();
		const Internals::SYSTEM_PROCESS_INFORMATION* pProcessInformation = SystemProcessInformation.LookupProcess();
		const Internals::SYSTEM_THREAD_INFORMATION* pSendThreadInformation = NULL;
		const Internals::SYSTEM_THREAD_INFORMATION* pReceiveThreadInformation = NULL;
		if(pProcessInformation)
		{
			//const ::SYSTEM_PROCESS_INFORMATION* pAnotherProcessInformation = (const ::SYSTEM_PROCESS_INFORMATION*) pProcessInformation;
			pSendThreadInformation = Internals::CSystemProcessInformation::LookupThread(pProcessInformation, GetThreadId(SendThread));
			pReceiveThreadInformation = Internals::CSystemProcessInformation::LookupThread(pProcessInformation, GetThreadId(ReceiveThread));
		}
		_tprintf(_T("Process Time:        User %10s ms, Kernel %10s ms\n"), 
			FormatIntegerNumber(FileTimesToMilliseconds(AnchorProcessUserTime, ProcessUserTime)),
			FormatIntegerNumber(FileTimesToMilliseconds(AnchorProcessKernelTime, ProcessKernelTime)), 
			0);
		_tprintf(_T("Send Thread 0 Time:  User %10s ms, Kernel %10s ms, Context Switches %15s\n"), 
			FormatIntegerNumber(FileTimesToMilliseconds(AnchorSendThreadUserTime, SendThreadUserTime)),
			FormatIntegerNumber(FileTimesToMilliseconds(AnchorSendThreadKernelTime, SendThreadKernelTime)), 
			FormatIntegerNumber(pSendThreadInformation ? pSendThreadInformation->ContextSwitchCount : 0),
			0);
		_tprintf(_T("Receive Thread Time: User %10s ms, Kernel %10s ms, Context Switches %15s\n"), 
			FormatIntegerNumber(FileTimesToMilliseconds(AnchorReceiveThreadUserTime, ReceiveThreadUserTime)),
			FormatIntegerNumber(FileTimesToMilliseconds(AnchorReceiveThreadKernelTime, ReceiveThreadKernelTime)), 
			FormatIntegerNumber(pReceiveThreadInformation ? pReceiveThreadInformation->ContextSwitchCount : 0),
			0);
		#pragma endregion 
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	_ATLTRY
	{
		CModule Module;
		Module.Run();
	}
	_ATLCATCHALL()
	{
		_tprintf(_T("Fatal Error\n"));
	}
	return 0;
}

