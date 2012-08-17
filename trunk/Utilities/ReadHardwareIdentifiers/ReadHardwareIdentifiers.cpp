////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2012
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#include "stdafx.h"

////////////////////////////////////////////////////////////
// CModule

class CModule :
	public CAtlExeModuleT<CModule>
{
public:

public:

public:
// CModule
	CModule() throw()
	{
		AtlTraceSetDefaultSettings();
		_Z4(atlTraceRefcount, 4, _T("this 0x%p"), this);
		_W(CExceptionFilter::Initialize());
	}
	~CModule() throw()
	{
		_Z4(atlTraceRefcount, 4, _T("this 0x%p"), this);
		CExceptionFilter::Terminate();
	}
	HRESULT PreMessageLoop(INT nShowCommand)
	{
		const HRESULT nResult = __super::PreMessageLoop(nShowCommand);
		return SUCCEEDED(nResult) ? S_OK : nResult;
	}
	static BOOL IsFourCharacterCode(DWORD nCode, CStringA* psString = NULL, BOOL bReverse = TRUE)
	{
		const BYTE* pnCodeData = (const BYTE*) &nCode;
		for(SIZE_T nIndex = 0; nIndex < 4; nIndex++)
			if(pnCodeData[nIndex] < 0x20 || pnCodeData[nIndex] >= 0x80)
				return FALSE;
		if(psString)
		{
			if(bReverse)
			{
				CHAR pszCodeString[5] = { pnCodeData[3], pnCodeData[2], pnCodeData[1], pnCodeData[0], 0 };
				*psString = pszCodeString;
			} else
			{
				CHAR pszCodeString[5] = { pnCodeData[0], pnCodeData[1], pnCodeData[2], pnCodeData[3], 0 };
				*psString = pszCodeString;
			}
		}
		return TRUE;
	}
	static CStringA FormatCode(DWORD nCode, BOOL bReverse = TRUE)
	{
		CStringA sCodeString;
		if(IsFourCharacterCode(nCode, &sCodeString, bReverse))
			return sCodeString;
		return AtlFormatStringT<CStringA>("0x%08x", nCode);
	}
	VOID RunMessageLoop()
	{
		// NOTE: http://msdn.microsoft.com/en-us/library/windows/desktop/ms724259%28v=vs.85%29.aspx
		static const DWORD g_pnProviderSignatures[] =
		{
			'ACPI',	// The ACPI firmware table provider.
			'FIRM',	// The raw firmware table provider.
			'RSMB',	// The raw SMBIOS firmware table provider.
		};
		for(SIZE_T nProviderSignatureIndex = 0; nProviderSignatureIndex < DIM(g_pnProviderSignatures); nProviderSignatureIndex++)
		{
			const DWORD nProviderSignature = g_pnProviderSignatures[nProviderSignatureIndex];
			_ATLTRY
			{
				DWORD nDataSize = EnumSystemFirmwareTables(nProviderSignature, NULL, 0);
				CTempBufferT<BYTE> pnData(nDataSize);
				__E(EnumSystemFirmwareTables(nProviderSignature, pnData, nDataSize));
				_tprintf(_T("Obtained %d bytes of firmware identifier table %hs\n"), nDataSize, FormatCode(nProviderSignature));
				const SIZE_T nIdentifierCount = nDataSize / sizeof (DWORD);
				for(SIZE_T nIdentifierIndex = 0; nIdentifierIndex < nIdentifierCount; nIdentifierIndex++)
				{
					const DWORD nIdentifier = ((const DWORD*) (const BYTE*) pnData)[nIdentifierIndex];
					DWORD nDataSize = GetSystemFirmwareTable(nProviderSignature, nIdentifier, NULL, 0);
					CTempBufferT<BYTE> pnData(nDataSize);
					__E(GetSystemFirmwareTable(nProviderSignature, nIdentifier, pnData, nDataSize));
					_tprintf(_T("\t") _T("Obtained %d bytes of firmware table %hs\n"), nDataSize, FormatCode(nIdentifier, FALSE));
					switch(nProviderSignature)
					{
					//case 'APIC':
					//	switch(nIdentifier)
					//	{
					//	case 'PCAF': // ”FACP” Fixed ACPI Description Table
					//		{
					//			typedef struct FACP
					//			{
					//				UINT32 nSignature;
					//				UINT32 nLength;
					//				UINT8 nRevision;
					//				UINT8 nChecksum;
					//				BYTE pnOemIdentifier[6];
					//				BYTE pnOemTableIdentifier[8];
					//				UINT32 nOemRevision;
					//				UINT32 nCreatorIdentifier;
					//				UINT32 nCreatorRevision;
					//				// TODO: ...
					//			};
					//		}
					//		break;
					//	}
					//	break;
					case 'RSMB':
						{
							typedef struct _SMBIOSDATA
							{
								BYTE Used20CallingMethod;
								BYTE SMBIOSMajorVersion;
								BYTE SMBIOSMinorVersion;
								BYTE DmiRevision;
								DWORD Length;
								BYTE SMBIOSTableData[1];
							} SMBIOSDATA;
							const SMBIOSDATA* pSmBiosData = (const SMBIOSDATA*) (const BYTE*) pnData;
							_tprintf(_T("\t") _T("\t") _T("Version: %d.%d\n"), pSmBiosData->SMBIOSMajorVersion, pSmBiosData->SMBIOSMinorVersion);
							const BYTE* pnItemBoundary = pSmBiosData->SMBIOSTableData + pSmBiosData->Length;
							const BYTE* pnItem = pSmBiosData->SMBIOSTableData;
							for(; pnItem < pnItemBoundary; pnItem++)
							{
								const BYTE nType = pnItem[0];
								_tprintf(_T("\t") _T("\t") _T("\t") _T("%d, %d bytes of formatted area\n"), nType, pnItem[1]);
								const CHAR* pszTitle = (const CHAR*) pnItem + pnItem[1];
								if((const BYTE*) pszTitle >= pnItemBoundary)
									break;
								for(; *pszTitle; )
								{
									_tprintf(_T("\t") _T("\t") _T("\t") _T("\t") _T("%hs\n"), pszTitle);
									pszTitle += strlen(pszTitle) + 1;
								}
								pnItem = (const BYTE*) pszTitle;
							}
						}					
						break;
					}
				}
			}
			_ATLCATCHALL()
			{
				_tprintf(_T("Failed to obtain firmware table %hs\n"), FormatCode(nProviderSignature));
			}
		}
	}
};

////////////////////////////////////////////////////////////
// CArgumentException

class CArgumentException :
	public CAtlException
{
public:
	CString m_sMessage;

public:
// CArgumentException
	CArgumentException(const CString& sMessage, HRESULT nCode = E_FAIL) throw() :
		CAtlException(nCode),
		m_sMessage(sMessage)
	{
	}
};

////////////////////////////////////////////////////////////
// Main

int _tmain(int argc, _TCHAR* argv[])
{
	CModule Module;
	_ATLTRY
	{
		#pragma region Syntax
		//if(argc <= 1)
		//{
		//	CPath sName = FindFileName(argv[0]);
		//	sName.RemoveExtension();
		//	_tprintf(_T("Syntax:  %s [options] <media-file-path>\n"), sName);
		//	_tprintf(_T("\n"));
		//	_tprintf(_T("Options: ") _T("/x") _T(" - ") _T("show message box before running the graph\n"));
		//	_tprintf(_T("Options: ") _T("/p") _T(" - ") _T("use default audio renderer\n"));
		//	_tprintf(_T("\n"));
		//	return 2;
		//}
		#pragma endregion 
		//for(INT nArgumentIndex = 1; nArgumentIndex < argc; nArgumentIndex++)
		//{
		//	CString sArgument = argv[nArgumentIndex];
		//	_A(!sArgument.IsEmpty());
		//	if(_tcschr(_T("-/"), sArgument[0]))
		//	{
		//		sArgument.Delete(0, 1);
		//		if(sArgument.IsEmpty())
		//			throw CArgumentException(_T("Unexpected argument"));
		//		switch(sArgument[0])
		//		{
		//		case 'X':
		//		case 'x':
		//			Module.m_bShowMessageBox = TRUE;
		//			break;
		//		case 'P':
		//		case 'p':
		//			Module.m_bUseAudioRenderer = TRUE;
		//			break;
		//		case 'A':
		//		case 'a':
		//			Module.m_bUseParallelProcessing = TRUE;
		//			break;
		//		default:
		//			throw CArgumentException(AtlFormatString(_T("Unexpected argument (%s)"), sArgument));
		//		}
		//		continue;
		//	}
		//	if(_tcslen(Module.m_sPath))
		//		throw CArgumentException(_T("Unexpected argument: Input file name already specified"));
		//	Module.m_sPath = (LPCTSTR) sArgument;
		//	//throw CArgumentException(AtlFormatString(_T("Unexpected argument (%s)"), sArgument));
		//}
		//if(!_tcslen(Module.m_sPath))
		//	throw CArgumentException(_T("Missing argument: No input file name specified"));
		Module.WinMain(SW_SHOWNORMAL);
	}
	catch(CArgumentException Exception)
	{
		_tprintf(_T("Fatal Error: %s\n"), Exception.m_sMessage);
		return 1;
	}
	_ATLCATCH(Exception)
	{
		_tprintf(_T("Fatal Error: 0x%08x %s\n"), (HRESULT) Exception, AtlFormatSystemMessage(Exception).TrimRight(_T("\t\n\r .")));
		return 1;
	}
	_ATLCATCHALL()
	{
		_tprintf(_T("Fatal Error\n"));
		return 1;
	}
	return 0;
}
