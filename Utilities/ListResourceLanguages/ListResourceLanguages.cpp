////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2012
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#include "stdafx.h"

///////////////////////////////////////////////////////////
// CModule

class CModule
{
public:

	////////////////////////////////////////////////////////
	// CLanguageData

	class CLanguageData
	{
	public:
		SIZE_T m_nCount;

	public:
	// CLanguageData
		CLanguageData() throw() :
			m_nCount(0)
		{
		}
	};

private:
	CAtlMap<WORD, CLanguageData> m_LanguageDataMap;

	static CString GetLanguageName(LANGID nLanguage)
	{
		const UINT nPrimaryLanguage = PRIMARYLANGID(nLanguage);
		// TODO: Use sublang
		switch(nPrimaryLanguage)
		{
		case LANG_NEUTRAL:		return _T("Neutral");
		case LANG_INVARIANT:	return _T("Invariant");
		case LANG_AFRIKAANS:	return _T("Afrikaans");
		case LANG_ALBANIAN:		return _T("Albanian");
		case LANG_ARABIC:		return _T("Arabic");
		case LANG_ARMENIAN:		return _T("Armenian");
		case LANG_ASSAMESE:		return _T("Assamese");
		case LANG_AZERI:		return _T("Azeri");
		case LANG_BASQUE:		return _T("Basque");
		case LANG_BELARUSIAN:	return _T("Belarusian");
		case LANG_BENGALI:		return _T("Bengali");
		case LANG_BULGARIAN:	return _T("Bulgarian");
		case LANG_CATALAN:		return _T("Catalan");
		case LANG_CHINESE:		return _T("Chinese");
		case LANG_CROATIAN:		return _T("Croatian/Serbian");
		case LANG_CZECH:		return _T("Czech");
		case LANG_DANISH:		return _T("Danish");
		case LANG_DIVEHI:		return _T("Divehi");
		case LANG_DUTCH:		return _T("Dutch");
		case LANG_ENGLISH:		return _T("English");
		case LANG_ESTONIAN:		return _T("Estonian");
		case LANG_FAEROESE:		return _T("Faeroese");
		case LANG_FARSI:		return _T("Farsi");
		case LANG_FINNISH:		return _T("Finnish");
		case LANG_FRENCH:		return _T("French");
		case LANG_GALICIAN:		return _T("Galician");
		case LANG_GEORGIAN:		return _T("Georgian");
		case LANG_GERMAN:		return _T("German");
		case LANG_GREEK:		return _T("Greek");
		case LANG_GUJARATI:		return _T("Gujarati");
		case LANG_HEBREW:		return _T("Hebrew");
		case LANG_HINDI:		return _T("Hindi");
		case LANG_HUNGARIAN:	return _T("Hungarian");
		case LANG_ICELANDIC:	return _T("Icelandic");
		case LANG_INDONESIAN:	return _T("Indonesian");
		case LANG_ITALIAN:		return _T("Italian");
		case LANG_JAPANESE:		return _T("Japanese");
		case LANG_KANNADA:		return _T("Kannada");
		case LANG_KASHMIRI:		return _T("Kashmiri");
		case LANG_KAZAK:		return _T("Kazak");
		case LANG_KONKANI:		return _T("Konkani");
		case LANG_KOREAN:		return _T("Korean");
		case LANG_KYRGYZ:		return _T("Kyrgyz");
		case LANG_LATVIAN:		return _T("Latvian");
		case LANG_LITHUANIAN:	return _T("Lithuanian");
		case LANG_MACEDONIAN:	return _T("Macedonian");
		case LANG_MALAY:		return _T("Malay");
		case LANG_MALAYALAM:	return _T("Malayalam");
		case LANG_MANIPURI:		return _T("Manipuri");
		case LANG_MARATHI:		return _T("Marathi");
		case LANG_MONGOLIAN:	return _T("Mongolian");
		case LANG_NEPALI:		return _T("Nepali");
		case LANG_NORWEGIAN:	return _T("Norwegian");
		case LANG_ORIYA:		return _T("Oriya");
		case LANG_POLISH:		return _T("Polish");
		case LANG_PORTUGUESE:	return _T("Portuguese");
		case LANG_PUNJABI:		return _T("Punjabi");
		case LANG_ROMANIAN:		return _T("Romanian");
		case LANG_RUSSIAN:		return _T("Russian");
		case LANG_SANSKRIT:		return _T("Sanskrit");
	//	case LANG_SERBIAN:		return _T("Serbian"); == LANG_CROATIAN
		case LANG_SINDHI:		return _T("Sindhi");
		case LANG_SLOVAK:		return _T("Slovak");
		case LANG_SLOVENIAN:	return _T("Slovenian");
		case LANG_SPANISH:		return _T("Spanish");
		case LANG_SWAHILI:		return _T("Swahili");
		case LANG_SWEDISH:		return _T("Swedish");
		case LANG_SYRIAC:		return _T("Syriac");
		case LANG_TAMIL:		return _T("Tamil");
		case LANG_TATAR:		return _T("Tatar");
		case LANG_TELUGU:		return _T("Telugu");
		case LANG_THAI:			return _T("Thai");
		case LANG_TURKISH:		return _T("Turkish");
		case LANG_UKRAINIAN:	return _T("Ukrainian");
		case LANG_URDU:			return _T("Urdu");
		case LANG_UZBEK:		return _T("Uzbek");
		case LANG_VIETNAMESE:	return _T("Vietnamese");
		}
		return _T("???");
	}
	BOOL EnumResourceLanguageProc(HMODULE hModule, LPCTSTR pszType, LPCTSTR pszName, WORD nLanguage)
	{ 
		hModule; pszType; pszName; 
		m_LanguageDataMap[nLanguage].m_nCount++;
		return TRUE; 
	}
	static BOOL WINAPI EnumResourceLanguageProc(HMODULE hModule, LPCTSTR pszType, LPCTSTR pszName, WORD nLanguage, LONG_PTR nParameter)
	{ 
		return ((CModule*) nParameter)->EnumResourceLanguageProc(hModule, pszType, pszName, nLanguage);
	}
	BOOL EnumResourceNameProc(HMODULE hModule, LPCTSTR pszType, LPTSTR pszName)
	{ 
		EnumResourceLanguages(hModule, pszType, pszName, EnumResourceLanguageProc, (LONG_PTR) this); 
		return TRUE; 
	} 
	static BOOL WINAPI EnumResourceNameProc(HMODULE hModule, LPCTSTR pszType, LPTSTR pszName, LONG_PTR nParameter)
	{ 
		return ((CModule*) nParameter)->EnumResourceNameProc(hModule, pszType, pszName);
	}
	BOOL EnumResourceTypeProc(HMODULE hModule, LPTSTR pszType)
	{ 
		EnumResourceNames(hModule, pszType, EnumResourceNameProc, (LONG_PTR) this);
		return TRUE;
	}
	static BOOL WINAPI EnumResourceTypeProc(HMODULE hModule, LPTSTR pszType, LONG_PTR nParameter)
	{ 
		return ((CModule*) nParameter)->EnumResourceTypeProc(hModule, pszType);
	}

public:
// CModule
	SIZE_T ProcessFile(const CPath& sFilePath)
	{
		ATLASSERT(m_LanguageDataMap.IsEmpty());
		const HMODULE hModule = LoadLibraryEx(sFilePath, NULL, LOAD_LIBRARY_AS_DATAFILE);
		ATLENSURE_THROW(hModule >= (HMODULE) HINSTANCE_ERROR, AtlHresultFromLastError());
		_ATLTRY
		{
			EnumResourceTypes(hModule, (ENUMRESTYPEPROC) EnumResourceTypeProc, (LONG_PTR) this);
		}
		_ATLCATCHALL()
		{
			FreeLibrary(hModule);
			_ATLRETHROW;
		}
		FreeLibrary(hModule);
		#pragma region Output
		for(POSITION Position = m_LanguageDataMap.GetStartPosition(); Position; m_LanguageDataMap.GetNext(Position))
		{
			const WORD nLanguage = m_LanguageDataMap.GetKeyAt(Position);
			const CLanguageData& LanguageData = m_LanguageDataMap.GetValueAt(Position);
			_tprintf(_T("%d\t%s\t%d\n"), nLanguage, GetLanguageName(nLanguage), LanguageData.m_nCount);
		}
		#pragma endregion 
		return m_LanguageDataMap.GetCount();
	}
};

////////////////////////////////////////////////////////////
// Main

int _tmain(int argc, _TCHAR* argv[])
{
	INT nResult;
	CModule Module;
	_ATLTRY
	{
		if(argc < 2)
		{
			_tprintf(_T("Syntax: ListResourceLanguages <path>\n"));
			return 0;
		}
		CPath sPath = argv[1];
		nResult = (INT) Module.ProcessFile(sPath);
	}
	_ATLCATCH(Exception)
	{
		_tprintf(_T("Fatal: Error 0x%08x\n"), (HRESULT) Exception);
		return (HRESULT) Exception;
	}
	_ATLCATCHALL()
	{
		_tprintf(_T("Fatal: Fatal error\n"));
		return E_FAIL; //E_UNNAMED;
	}
	return nResult;
}

