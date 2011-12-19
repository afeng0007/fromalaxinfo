////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2011
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#pragma once

#include "rofiles.h"

////////////////////////////////////////////////////////////
// CMainDialog

class CMainDialog : 
	public CAxDialogImpl<CMainDialog>
{
public:
	enum { IDD = IDD_MAIN };

BEGIN_MSG_MAP_EX(CMainDialog)
	CHAIN_MSG_MAP(CAxDialogImpl<CMainDialog>)
	MSG_WM_INITDIALOG(OnInitDialog)
	MSG_WM_DESTROY(OnDestroy)
	COMMAND_ID_HANDLER_EX(IDCANCEL, OnCommand)
	COMMAND_HANDLER_EX(IDC_UPDATE, BN_CLICKED, OnUpdateButtonClicked)
	REFLECT_NOTIFICATIONS()
END_MSG_MAP()

public:

private:
	CFont m_TextFont;
	CButton m_UpdateButton;
	CRoEdit m_TextEdit;

public:
// CMainDialog
	CMainDialog()
	{
	}
	VOID UpdateText(CPath sInputFilePath, CPath sOutputFilePath)
	{
		m_UpdateButton.EnableWindow(FALSE);
		SetThreadLocale(MAKELCID(LANG_RUSSIAN, SORT_DEFAULT));
		#pragma region Read Input File
		CString sInputText;
		{
			CAtlFile File;
			__C(File.Create(sInputFilePath, GENERIC_READ, FILE_SHARE_READ, OPEN_EXISTING));
			ULONGLONG nFileSize;
			__C(File.GetSize(nFileSize));
			CHeapPtr<BYTE> pnData;
			__D(pnData.Allocate((SIZE_T) nFileSize + 1), E_OUTOFMEMORY);
			__C(File.Read(pnData, (DWORD) nFileSize));
			pnData[(SIZE_T) nFileSize] = 0;
			CStringA sInputTextA((LPCSTR) (const BYTE*) pnData);
			sInputText = CString(sInputTextA);
		}
		#pragma endregion 
		sInputText.Replace(_T("\r\n"), _T("\n"));
		if(sInputText[sInputText.GetLength() - 1] != _T('\n'))
			sInputText.AppendChar(_T('\n'));
		CString sOutputText;
		static const INT g_nWrapWidth = 350;
		{
			CClientDC Dc(m_TextEdit);
			CGdiSelector FontSelector(Dc, m_TextFont);
			CString sBreakSeparators = _T(" -:,.");
			for(INT nPosition = 0; nPosition < sInputText.GetLength(); )
			{
				const INT nSeparatorPosition = sInputText.Find(_T('\n'), nPosition);
				if(nSeparatorPosition < 0)
					break;
				CString sLineText = sInputText.Mid(nPosition, nSeparatorPosition - nPosition);
				#pragma region Fancify Line
				{
					INT nPosition = 0;
					while(nPosition < sLineText.GetLength() && sLineText[nPosition] == _T(' '))
						nPosition++;
					if(nPosition + 1 < sLineText.GetLength() && sLineText[nPosition] == _T('-') && sLineText[nPosition] != _T(' '))
					{
						sLineText.Delete(nPosition);
						sLineText.Insert(nPosition, _T("– ")); // En Dash, Space
					}
				}
				#pragma endregion
				for(; ; )
				{
					if(sLineText.IsEmpty())
						break;
					SIZE Extent;
					INT nCharacterCount = 0;
					__D(Dc.GetTextExtentExPoint(sLineText, sLineText.GetLength(), &Extent, g_nWrapWidth, &nCharacterCount), E_UNNAMED);
					const INT nLineTextLength = sLineText.GetLength();
					if(nCharacterCount >= nLineTextLength)
						break;
					#pragma region Fancify Line Break
					for(INT nSpacePosition = 0; nSpacePosition < 30 && nCharacterCount - nSpacePosition > 0; nSpacePosition++)
					{
						if(sBreakSeparators.Find(sLineText[nCharacterCount - nSpacePosition]) >= 0)
						{
							nCharacterCount -= nSpacePosition;
							break;
						}
					}
					sOutputText.Append(sLineText.Mid(0, nCharacterCount));
					sOutputText.Append(_T("\n"));
					sLineText.Delete(0, nCharacterCount);
				}
				sOutputText.Append(sLineText);
				sOutputText.Append(_T("\n"));
				nPosition = nSeparatorPosition + 1;
			}
		}
		if(_tcslen(sOutputFilePath) > 0)
			#pragma region Write Output File
			{
				CAtlFile File;
				__C(File.Create(sOutputFilePath, GENERIC_WRITE, FILE_SHARE_READ, CREATE_ALWAYS));
#if TRUE
				CStringW sOutputTextW = CStringW(sOutputText);
				static const BYTE g_pnByteOrderMark[] = { 0xFF, 0xFE };
				__C(File.Write(g_pnByteOrderMark, DIM(g_pnByteOrderMark)));
				__C(File.Write(sOutputTextW, sOutputTextW.GetLength() * sizeof (WCHAR)));
#else
				CStringA sOutputTextA = CStringA(sOutputText);
				__C(File.Write(sOutputTextA, sOutputTextA.GetLength() * sizeof (CHAR)));
#endif
			}
			#pragma endregion 
		#pragma region Update UI
		sOutputText.Replace(_T("\n"), _T("\r\n"));
		m_TextEdit.SetValue(sOutputText);
		m_UpdateButton.EnableWindow(TRUE);
		#pragma endregion 
		MessageBeep(MB_OK);
	}
	VOID UpdateText()
	{
		static LPCTSTR g_pszInputFilePath = _T("F:\\Torrents\\marinina_[tfile.ru]\\Marinina_Kamenskaya_2_Igra_na_chuzhom_pole.35634.txt\\Marinina_Kamenskaya_2_Igra_na_chuzhom_pole.35634.txt");
		static LPCTSTR g_pszOutputDirectoryPath = _T("F:\\Temp\\62");
		#if defined(_DEBUG)	
		static LPCTSTR g_pszInputDirectoryPath = _T("F:\\Temp\\62\\Input");
		CFindFiles FindFiles;
		for(BOOL bFound = FindFiles.FindFirstFile(g_pszInputDirectoryPath, _T("*.txt")); bFound; bFound = FindFiles.FindNextFile())
		{
			CPath sInputFilePath, sOutputFilePath;
			sInputFilePath.Combine(g_pszInputDirectoryPath, FindFiles.GetFindData().cFileName);
			sOutputFilePath.Combine(g_pszOutputDirectoryPath, FindFileName(sInputFilePath));
			UpdateText(sInputFilePath, sOutputFilePath);
		}
		return;
		#endif // defined(_DEBUG)	
		CPath sOutputFilePath;
		sOutputFilePath.Combine(g_pszOutputDirectoryPath, FindFileName(g_pszInputFilePath));
		UpdateText(g_pszInputFilePath, sOutputFilePath);
	}

// Window message handelrs
	LRESULT OnInitDialog(HWND, LPARAM)
	{
		SetIcon(AtlLoadIconImage(IDI_MODULE, LR_DEFAULTCOLOR, GetSystemMetrics(SM_CXICON), GetSystemMetrics(SM_CYICON)), TRUE);
		SetIcon(AtlLoadIconImage(IDI_MODULE, LR_DEFAULTCOLOR, GetSystemMetrics(SM_CXSMICON), GetSystemMetrics(SM_CYSMICON)), FALSE);
		CLogFont LogFont;
		LogFont.SetMessageBoxFont();
		_tcsncpy_s(LogFont.lfFaceName, DIM(LogFont.lfFaceName), _T("Arial"), _TRUNCATE);
		LogFont.lfCharSet = RUSSIAN_CHARSET;
		m_TextFont = LogFont.CreateFontIndirect();
		m_UpdateButton = GetDlgItem(IDC_UPDATE);
		m_UpdateButton.EnableWindow(FALSE);
		m_TextEdit = GetDlgItem(IDC_STATUS);
		m_TextEdit.SetFont(m_TextFont);
		_W(CenterWindow());
		#if _DEVELOPMENT
		// TODO: ...
		m_UpdateButton.EnableWindow(TRUE);
		m_UpdateButton.Click();
		#endif // _DEVELOPMENT
		return TRUE;
	}
	LRESULT OnDestroy() throw()
	{
		return 0;
	}
	LRESULT OnCommand(UINT, INT nIdentifier, HWND)
	{
		_W(EndDialog(nIdentifier));
		return 0;
	}
	LRESULT OnUpdateButtonClicked(UINT, INT, HWND)
	{
		UpdateText();
		return 0;
	}
};
