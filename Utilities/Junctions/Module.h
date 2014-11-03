////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2013
// Created by Roman Ryltsov roman@alax.info

#pragma once

#include "reparse.h"
#include "roinifile.h"

////////////////////////////////////////////////////////////
// CModule

class CModule :
	public CAtlExeModuleT<CModule>
{
public:

	////////////////////////////////////////////////////////
	// CReparsePointData

	class CReparsePointData
	{
	public:
		REPARSE_GUID_DATA_BUFFER m_ReparseGuidDataBufferHeader;
		REPARSE_DATA_BUFFER m_ReparseDataBufferHeader;
		CStringW m_sPrintName;
		CStringW m_sSubstituteName;

		static CStringW StringFromCharacters(const WCHAR* pszCharacters, SIZE_T nLength)
		{
			CStringW sString;
			if(nLength)
			{
				_A(pszCharacters);
				memcpy(sString.GetBufferSetLength((INT) nLength), pszCharacters, nLength * sizeof *pszCharacters);
			}
			return sString;
		}
		VOID Clear()
		{
			ZeroMemory(&m_ReparseGuidDataBufferHeader, sizeof m_ReparseGuidDataBufferHeader);
			ZeroMemory(&m_ReparseDataBufferHeader, sizeof m_ReparseDataBufferHeader);
			m_sPrintName.Empty();
			m_sSubstituteName.Empty();
		}

	public:
	// CReparsePointData
		CReparsePointData()
		{
			Clear();
		}
		CReparsePointData(const CPath& sPath)
		{
			Initialize(sPath);
		}
		VOID Initialize(const CPath& sPath)
		{
			Clear();
			_ATLTRY
			{
				CAtlFile Directory;
				HRESULT nCreateResult = Directory.Create(sPath, 0, FILE_SHARE_READ | FILE_SHARE_WRITE, OPEN_EXISTING, FILE_FLAG_BACKUP_SEMANTICS | FILE_FLAG_OPEN_REPARSE_POINT);
				if(FAILED(nCreateResult))
				{
					_Z4(atlTraceGeneral, 4, _T("nCreateResult 0x%08x\n"), nCreateResult);
					return;
				}
				BYTE pnReparseBuffer[MAX_REPARSE_SIZE];
				REPARSE_GUID_DATA_BUFFER* pReparseGuidDataBuffer = (REPARSE_GUID_DATA_BUFFER*) pnReparseBuffer;
				DWORD nReturnedLength;
				if(!DeviceIoControl(Directory, FSCTL_GET_REPARSE_POINT, NULL, 0, pReparseGuidDataBuffer, sizeof pnReparseBuffer, &nReturnedLength, NULL))
				{
					HRESULT nResult = HRESULT_FROM_WIN32(GetLastError());
					_Z4(atlTraceGeneral, 4, _T("nCreateResult 0x%08x\n"), nResult);
					return;
				}
				m_ReparseGuidDataBufferHeader = *pReparseGuidDataBuffer;
				_Z4(atlTraceGeneral, 4, _T("ReparseTag 0x%08x\n"), pReparseGuidDataBuffer->ReparseTag);
				if(IsReparseTagMicrosoft(pReparseGuidDataBuffer->ReparseTag))
				{
					switch(pReparseGuidDataBuffer->ReparseTag & 0xFFFFFFFF)
					{
					case IO_REPARSE_TAG_SYMBOLIC_LINK:
						{
							REPARSE_DATA_BUFFER* pReparseDataBuffer = (REPARSE_DATA_BUFFER*) pReparseGuidDataBuffer;
							m_ReparseDataBufferHeader = *pReparseDataBuffer;
							CStringW sPrintName = StringFromCharacters((PWCHAR) ((BYTE*) pReparseDataBuffer->SymbolicLinkReparseBuffer.PathBuffer + pReparseDataBuffer->SymbolicLinkReparseBuffer.PrintNameOffset), pReparseDataBuffer->SymbolicLinkReparseBuffer.PrintNameLength);
							CStringW sSubstituteName = StringFromCharacters((PWCHAR) ((BYTE*) pReparseDataBuffer->SymbolicLinkReparseBuffer.PathBuffer + pReparseDataBuffer->SymbolicLinkReparseBuffer.SubstituteNameOffset), pReparseDataBuffer->SymbolicLinkReparseBuffer.SubstituteNameLength);
							_Z4(atlTraceGeneral, 4, _T("sPrintName \"%ls\", sSubstituteName \"%ls\"\n"), sPrintName, sSubstituteName);
							m_sPrintName = sPrintName;
							m_sSubstituteName = sSubstituteName;
						}
						break;
					case IO_REPARSE_TAG_MOUNT_POINT:
						{
							REPARSE_DATA_BUFFER* pReparseDataBuffer = (REPARSE_DATA_BUFFER*) pReparseGuidDataBuffer;
							m_ReparseDataBufferHeader = *pReparseDataBuffer;
							CStringW sPrintName = StringFromCharacters((PWCHAR) ((BYTE*) pReparseDataBuffer->SymbolicLinkReparseBuffer.PathBuffer + pReparseDataBuffer->SymbolicLinkReparseBuffer.PrintNameOffset), pReparseDataBuffer->SymbolicLinkReparseBuffer.PrintNameLength);
							CStringW sSubstituteName = StringFromCharacters((PWCHAR) ((BYTE*) pReparseDataBuffer->SymbolicLinkReparseBuffer.PathBuffer + pReparseDataBuffer->SymbolicLinkReparseBuffer.SubstituteNameOffset), pReparseDataBuffer->SymbolicLinkReparseBuffer.SubstituteNameLength);
							_Z4(atlTraceGeneral, 4, _T("sPrintName \"%ls\", sSubstituteName \"%ls\"\n"), sPrintName, sSubstituteName);
							// NOTE: According to Mark, junctions contain ':' unlike mount points
							m_sPrintName = sPrintName;
							m_sSubstituteName = sSubstituteName;
						}
						break;
					//case IO_REPARSE_TAG_HSM:
					//case IO_REPARSE_TAG_SIS:
					//case IO_REPARSE_TAG_DFS:
					}
				}
			}
			_ATLCATCHALL()
			{
				_Z1(atlTraceGeneral, 1, _T("An exception has been caught\n"));
			}
		}
		CStringW GetFriendlySubstituteName() const
		{
			CStringW sSubstituteName = m_sSubstituteName;
			if(sSubstituteName.Left(4) == L"\\??\\")
				sSubstituteName.Delete(0, 4);
			return sSubstituteName;
		}
	};

public:
	//CPath m_sIniFilePath;
	//CObjectPtr<CIniFile::CSection> m_pSection;
	CPath m_sPath;
	UINT m_nDirectoryCount;
	UINT m_nReparsePointCount;

public:
// CModule
	CModule()
	{
		AtlTraceSetDefaultSettings();
		_Z4_THIS();
		_W(CExceptionFilter::Initialize());
	}
	~CModule()
	{
		_Z4_THIS();
		CExceptionFilter::Terminate();
	}
	HRESULT PreMessageLoop(INT nShowCommand)
	{
		const HRESULT nResult = __super::PreMessageLoop(nShowCommand);
		return SUCCEEDED(nResult) ? S_OK : nResult;
	}
	BOOL Syntax()
	{
		_tprintf(_T("Syntax: Junctions <path>\n"));
		return FALSE;
	}
	BOOL ParseCommandLineEx(SIZE_T argc, TCHAR* argv[])
	{
		for(SIZE_T nIndex = 1; nIndex < argc; nIndex++)
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
/*
				if(sArgument.CompareNoCase(_T("f")) == 0) // Flavor
				{
					__D(bIntegerArgumentValueValid, E_INVALIDARG);
					m_nFlavor = (UINT) nIntegerArgumentValue;
					m_bFlavorAvailable = TRUE;
					continue;
				}
				if(sArgument.CompareNoCase(_T("fl")) == 0) // Flavor List
				{
					m_bListFlavors = TRUE;
					continue;
				}
*/
			}
			#pragma endregion 
			#pragma region Non-switch
			if(sArgument.GetLength() >= 2 && sArgument[0] == _T('"') && sArgument[sArgument.GetLength() - 1] == _T('"'))
				sArgument = sArgument.Mid(1, sArgument.GetLength() - 2);
			if(_tcslen(m_sPath))
				return Syntax();
			m_sPath = (LPCTSTR) sArgument;
			#pragma endregion 
		}
		#pragma region Validation
		if(!_tcslen(m_sPath))
			return Syntax();
		#pragma endregion 
		return TRUE;
	}
	VOID ProcessDirectory(const CPath& sDirectory)
	{
		_Y1(AtlFormatString(_T("sDirectory \"%s\""), sDirectory));
		CFindFiles FindFiles;
		for(BOOL bFound = FindFiles.FindFirstFile(sDirectory, _T("*.*")); bFound; bFound = FindFiles.FindNextFile())
		{
			if(!(FindFiles.GetFindData().dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY))
				continue; // Not a Directory
			if(_tcscmp(FindFiles.GetFindData().cFileName, _T(".")) == 0 || _tcscmp(FindFiles.GetFindData().cFileName, _T("..")) == 0)
				continue; // Not a Real Directory
			m_nDirectoryCount++;
			CPath sPath;
			sPath.Combine(sDirectory, FindFiles.GetFindData().cFileName);
			if(FindFiles.GetFindData().dwFileAttributes & FILE_ATTRIBUTE_REPARSE_POINT)
				_ATLTRY
				{
					CReparsePointData ReparsePointData(sPath);
					_tprintf(_T("%s -> %ls\n"), sPath, ReparsePointData.GetFriendlySubstituteName());
					m_nReparsePointCount++;
				}
				_ATLCATCH(Exception)
				{
					_Z_ATLEXCEPTION(Exception);
				}
			else
				ProcessDirectory(sPath);
		}
	}
	VOID RunMessageLoop()
	{
		#pragma region .INI File
		//CPath sIniFilePath = CIniFile::GetDefaultPath();
		//CIniFile::LookupParentDirectoryPath(sIniFilePath, 2);
		//const CObjectPtr<CIniFile::CSection> pSection = CIniFile::Open(sIniFilePath, CIniFile::GetDefaultSection());
		//m_sIniFilePath = sIniFilePath;
		//m_pSection = pSection;
		#pragma endregion
		_tprintf(_T("Base path: %s\n"), m_sPath);
		m_nDirectoryCount = 0;
		m_nReparsePointCount = 0;
		ProcessDirectory(m_sPath);
		_tprintf(_T("Found directories: %d\n"), m_nDirectoryCount);
		_tprintf(_T("Found reparse points: %d\n"), m_nReparsePointCount);
	}
};

