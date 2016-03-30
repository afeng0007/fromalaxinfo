////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2016
// Created by Roman Ryltsov roman@alax.info
//
// A permission to use the source code is granted as long as reference to 
// source website http://alax.info is retained.

#include "stdafx.h"

////////////////////////////////////////////////////////////
// CModule

class CModule :
	public CAtlExeModuleT<CModule>
{
public:

	////////////////////////////////////////////////////////
	// CCommandLineArguments

	class CCommandLineArguments
	{
	public:

		//////////////////////////////////////////////////////////
		// CArgument

		class CArgument
		{
		public:
			BOOL m_bSwitch;
			CString m_sSwitchName;
			CString m_sSwitchValue;
			BOOL m_bIntegerSwitchValueAvailable;
			INT m_nIntegerSwitchValue;
			CString m_sValue;

		public:
		// CArgument
			CArgument() :
				m_bSwitch(FALSE),
				m_bIntegerSwitchValueAvailable(FALSE)
			{
			}
			VOID Initialize()
			{
				m_bSwitch = FALSE;
				m_sSwitchName.Empty();;
				m_sSwitchValue.Empty();;
				m_bIntegerSwitchValueAvailable = FALSE;
				m_sValue.Empty();
			}
		};

	private:
		SIZE_T m_argc;
		TCHAR** m_argv;
		SIZE_T m_nIndex;

	public:
	// CCommandLineArguments
		CCommandLineArguments(SIZE_T argc, TCHAR* argv[]) :
			m_argc(argc),
			m_argv(argv),
			m_nIndex(1)
		{
		}
		CCommandLineArguments(LPCWSTR pszCommandLine)
		{
			INT nArgumentCount = 0;
			LPWSTR* pszArguments = CommandLineToArgvW(pszCommandLine, &nArgumentCount);
			m_argc = nArgumentCount;
			m_argv = pszArguments;
			m_nIndex = 1;
		}
		BOOL CanNext() const
		{
			if(m_nIndex >= m_argc)
				return FALSE;
			return TRUE;
		}
		BOOL Next(CArgument& Argument)
		{
			if(m_nIndex >= m_argc)
				return FALSE;
			CString sArgument = m_argv[m_nIndex++];
			_A(!sArgument.IsEmpty());
			Argument.Initialize();
			if(_tcschr(_T("-/"), sArgument[0]))
			{
				Argument.m_bSwitch = TRUE;
				sArgument.Delete(0);
				const INT nSeparatorPosition = sArgument.Find(_T(':'));
				if(nSeparatorPosition > 0)
				{
					Argument.m_sSwitchName = sArgument.Left(nSeparatorPosition);
					Argument.m_sSwitchValue = sArgument.Mid(nSeparatorPosition + 1);
					if(!Argument.m_sSwitchValue.IsEmpty())
						Argument.m_bIntegerSwitchValueAvailable =  AtlStringToInteger(Argument.m_sSwitchValue, Argument.m_nIntegerSwitchValue);
				} else
					Argument.m_sSwitchName = sArgument;
				return TRUE;
			}
			if(sArgument.GetLength() >= 2 && sArgument[0] == _T('"') && sArgument[sArgument.GetLength() - 1] == _T('"'))
				sArgument = sArgument.Mid(1, sArgument.GetLength() - 2);
			Argument.m_sValue = sArgument;
			return TRUE;
		}
	};

private:
	UINT m_nPrintCount;

public:
// CModule
	CModule()
	{
		m_nPrintCount = 0;
	}
	static VOID Syntax()
	{
		_tprintf(
			_T("Syntax: PrintTime [commands]") _T("\n")
			_T("\n")
			_T("Commands:") _T("\n")
			_T("\t") _T("help - command line syntax help") _T("\n")
			_T("\t") _T("now - print current time") _T("\n")
			_T("\t") _T("filetime <N> - print FILETIME time N (100 ms units)") _T("\n")
			_T("\t") _T("ole <F> - print DATE time F (day units)") _T("\n")
			);
	}
	static VOID PrintFileTime(ULONGLONG nValue, LPCTSTR pszPrefix = _T(""))
	{
		CString sPrefix = pszPrefix;
		if(!sPrefix.IsEmpty())
			sPrefix.AppendChar(_T(' '));
		{
			CString sValue = AtlFormatString(_T("%I64u"), nValue);
			if(sValue.GetLength() > 7)
				sValue.Insert(sValue.GetLength() - 7, _T(' '));
			if(sValue.GetLength() > 4)
				sValue.Insert(sValue.GetLength() - 4, _T(' '));
			_tprintf(_T("%s") _T("FILETIME: %s (%I64d)\n"), sPrefix, sValue, nValue);
		}
		SYSTEMTIME SystemTime;
		if(FileTimeToSystemTime(&reinterpret_cast<const FILETIME&>(nValue), &SystemTime))
		{
			_tprintf(_T("%s") _T("SYSTEMTIME: %04d-%02d-%02d %02d:%02d:%02d.%03d (%d)\n"), sPrefix, SystemTime.wYear, SystemTime.wMonth, SystemTime.wDay, SystemTime.wHour, SystemTime.wMinute, SystemTime.wSecond, SystemTime.wMilliseconds, SystemTime.wDayOfWeek);
			DATE fTime;
			if(SystemTimeToVariantTime(&SystemTime, &fTime))
				_tprintf(_T("%s") _T("DATE: %.10f\n"), sPrefix, fTime);
		}
	}
	VOID Print(ULONGLONG nValue) 
	{
		PrintFileTime(nValue);
		ULONGLONG nLocalValue;
		FileTimeToLocalFileTime(&reinterpret_cast<const FILETIME&>(nValue), &reinterpret_cast<FILETIME&>(nLocalValue));
		PrintFileTime(nLocalValue, _T("Local"));
		_tprintf(_T("\n"));
		m_nPrintCount++;
	}
	bool ParseCommandLine(LPCTSTR pszCommandLine, HRESULT* pnResult)
	{
		//if(!__super::ParseCommandLine(pszCommandLine, pnResult))
		//	return false;
		_ATLTRY
		{
			CCommandLineArguments Arguments(pszCommandLine);
			if(!Arguments.CanNext())
			{
				Syntax();
				return false;
			}
			for(; ; )
			{
				CCommandLineArguments::CArgument Argument;
				if(!Arguments.Next(Argument))
					break;
				__D(!Argument.m_bSwitch, E_INVALIDARG);
				if(Argument.m_sValue.CompareNoCase(_T("help")) == 0)
				{
					Syntax();
					return false;
				} //else
				if(Argument.m_sValue.CompareNoCase(_T("now")) == 0)
				{
					FILETIME FileTime;
					GetSystemTimeAsFileTime(&FileTime);
					_tprintf(_T("Now:\n\n"));
					Print(reinterpret_cast<const ULONGLONG&>(FileTime));
				} else
				if(Argument.m_sValue.CompareNoCase(_T("filetime")) == 0 || Argument.m_sValue.CompareNoCase(_T("ft")) == 0)
				{
					CCommandLineArguments::CArgument ValueArgument;
					__D(Arguments.Next(ValueArgument), E_INVALIDARG);
					__D(!ValueArgument.m_bSwitch, E_INVALIDARG);
					LONGLONG nValue;
					__D(AtlStringToInteger(ValueArgument.m_sValue, nValue), E_UNNAMED);
					Print((ULONGLONG) nValue);
				} else
				if(Argument.m_sValue.CompareNoCase(_T("ole")) == 0)
				{
					CCommandLineArguments::CArgument ValueArgument;
					__D(Arguments.Next(ValueArgument), E_INVALIDARG);
					__D(!ValueArgument.m_bSwitch, E_INVALIDARG);
					DOUBLE fValue;
					__D(AtlStringToDouble(ValueArgument.m_sValue, fValue), E_UNNAMED);
					SYSTEMTIME SystemTime;
					__D(VariantTimeToSystemTime(fValue, &SystemTime), E_UNNAMED);
					FILETIME FileTime;
					__D(SystemTimeToFileTime(&SystemTime, &FileTime), E_UNNAMED);
					Print(reinterpret_cast<const ULONGLONG&>(FileTime));
				} else
				{
					#if !defined(_DEBUG)
						__C(E_INVALIDARG);
					#endif // !defined(_DEBUG)
				}
			}
		}
		_ATLCATCHALL()
		{
			_Z_EXCEPTION();
			_tprintf(_T("Fatal Error: Failed to parse command line arguments\n"));
			_tprintf(_T("\n"));
			Syntax();
			return false;
		}
		if(!m_nPrintCount)
		{
			Syntax();
			return false;
		}
		return true;
	}
	HRESULT PreMessageLoop(int nShowCommand)
	{
		// NOTE: Suppress S_FALSE
		_C(__super::PreMessageLoop(nShowCommand));
		return S_OK;
	}
	VOID RunMessageLoop()
	{
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	_ATLTRY
	{
		CModule Module;
		Module.WinMain(SW_SHOWNORMAL);
	}
	_ATLCATCH(Exception)
	{
		_tprintf(_T("Fatal Error 0x%08X\n"), (HRESULT) Exception);
	}
	return 0;
}
