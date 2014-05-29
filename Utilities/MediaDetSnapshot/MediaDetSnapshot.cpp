////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2006-2014
// Created by Roman Ryltsov roman@alax.info
//
// A permission to use the source code is granted as long as reference to 
// source website http://alax.info is retained.

#include "stdafx.h"
#include "Module.h"

INT Syntax()
{
	_tprintf(_T("Syntax: MediaDetSnapshot [options]") _T("\n"));
	//_tprintf(_T("Options:") _T("\n"));
	//_tprintf(_T("  ") _T("-vd:device-name        Use specific video source device") _T("\n"));
	//_tprintf(_T("  ") _T("-vf:format-name        Use specific video format") _T("\n"));
	//_tprintf(_T("  ") _T("-ad:device-name        Use specific audio source device") _T("\n"));
	//_tprintf(_T("  ") _T("-af:format-name        Use specific audio format") _T("\n"));
	//_tprintf(_T("  ") _T("-ot:output-file-type   Output Windows Media file type: av (default), a or v") _T("\n"));
	//_tprintf(_T("  ") _T("-o:output-file-name    Write output into Windows Media file") _T("\n"));
	return 1;
}

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
				const INT nSeparatorPosition = sArgument.Find(_T(':'));
				CString sArgumentValue;
				BOOL bIntegerArgumentValueValid = FALSE;
				INT nIntegerArgumentValue = 0;
				if(nSeparatorPosition > 0)
				{
					sArgumentValue = sArgument.Mid(nSeparatorPosition + 1);
					sArgument = sArgument.Left(nSeparatorPosition);
					if(!sArgumentValue.IsEmpty())
						bIntegerArgumentValueValid =  AtlStringToInteger(sArgumentValue, nIntegerArgumentValue);
				}
				#pragma endregion
				//if(sArgument.CompareNoCase(_T("o")) == 0) // Output File Name
				//{
				//	Module.m_sOutputName = sArgumentValue;
				//	continue;
				//}
			}
			#pragma endregion 
			if(sArgument.GetLength() >= 2 && sArgument[0] == _T('"') && sArgument[sArgument.GetLength() - 1] == _T('"'))
				sArgument = sArgument.Mid(1, sArgument.GetLength() - 2);
			if(_tcslen(Module.m_sPath))
				return Syntax();
			Module.m_sPath = (LPCTSTR) sArgument;
		}
		#pragma endregion
		if(!_tcslen(Module.m_sPath))
			return Syntax();
		Module.WinMain(SW_SHOWNORMAL);
	}
	_ATLCATCH(Exception)
	{
		if(FAILED((HRESULT) Exception))
			_tprintf(_T("Error 0x%08X: %s\n"), (HRESULT) Exception, Ds::FormatResult(Exception).TrimRight(_T("\t\n\r ."))); //AtlFormatSystemMessage(Exception).TrimRight(_T("\t\n\r .")));
		return (INT) (HRESULT) Exception;
	}
	_ATLCATCHALL()
	{
		_tprintf(_T("Fatal Error\n"));
		return (INT) E_FAIL;
	}
	return 0;
}

