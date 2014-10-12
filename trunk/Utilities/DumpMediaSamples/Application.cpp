////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2006-2014
// Created by Roman Ryltsov roman@alax.info
// 
// A permission to use the source code is granted as long as reference to 
// source website http://alax.info is retained.

#include "stdafx.h"
//#include <qedit.h>
#include "rodshow.h"
#include "Handler.h"

#pragma region Re-Adding Removed from Windows SDK qedit.h

struct __declspec(uuid("0579154a-2b53-4994-b0d0-e773148eff85"))
ISampleGrabberCB : IUnknown
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall SampleCB (
        double SampleTime,
        struct IMediaSample * pSample ) = 0;
      virtual HRESULT __stdcall BufferCB (
        double SampleTime,
        unsigned char * pBuffer,
        long BufferLen ) = 0;
};

struct __declspec(uuid("6b652fff-11fe-4fce-92ad-0266b5d7c78f"))
ISampleGrabber : IUnknown
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall SetOneShot (
        long OneShot ) = 0;
      virtual HRESULT __stdcall SetMediaType (
        struct _AMMediaType * pType ) = 0;
      virtual HRESULT __stdcall GetConnectedMediaType (
        struct _AMMediaType * pType ) = 0;
      virtual HRESULT __stdcall SetBufferSamples (
        long BufferThem ) = 0;
      virtual HRESULT __stdcall GetCurrentBuffer (
        /*[in,out]*/ long * pBufferSize,
        /*[out]*/ long * pBuffer ) = 0;
      virtual HRESULT __stdcall GetCurrentSample (
        /*[out,retval]*/ struct IMediaSample * * ppSample ) = 0;
      virtual HRESULT __stdcall SetCallback (
        struct ISampleGrabberCB * pCallback,
        long WhichMethodToCallback ) = 0;
};

struct __declspec(uuid("c1f400a0-3f08-11d3-9f0b-006008039e37"))
SampleGrabber;
    // [ default ] interface ISampleGrabber

#pragma endregion

#include "Module.h"

////////////////////////////////////////////////////////////
// Main

int _tmain(int argc, _TCHAR* argv[])
{
	INT nResult = 0;
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
				INT nIntegerArgumentValue = 0;
				const BOOL bIntegerArgumentValueValid = !sArgumentValue.IsEmpty() ? AtlStringToInteger(sArgumentValue, nIntegerArgumentValue) : FALSE;
				#pragma endregion
				if(_tcschr(_T("Cc"), sArgument[0])) // No Reference Clock
				{
					Module.m_bNoReferenceClock = TRUE;
				} else
				if(_tcschr(_T("Ee"), sArgument[0])) // Suppress Load Failure
				{
					Module.m_bSuppressLoadFailure = TRUE;
				}
				continue;
			}
			#pragma endregion 
			if(sArgument.GetLength() >= 2 && sArgument[0] == _T('"') && sArgument[sArgument.GetLength() - 1] == _T('"'))
				sArgument = sArgument.Mid(1, sArgument.GetLength() - 2);
			__D(!_tcslen(Module.m_sPath), E_UNNAMED);
			Module.m_sPath = (LPCTSTR) sArgument;
		}
		#pragma endregion
		__D(_tcslen(Module.m_sPath), E_UNNAMED);
		nResult = Module.WinMain(SW_SHOWNORMAL);
	}
	_ATLCATCH(Exception)
	{
		_tprintf(_T("Fatal: Error 0x%08x\n"), (HRESULT) Exception);
	}
	_ATLCATCHALL()
	{
		_tprintf(_T("Fatal: Fatal error\n"));
	}
	return nResult;
}


