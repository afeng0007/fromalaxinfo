////////////////////////////////////////////////////////////
// Copyright (C) Alax.Info, 2006-2015
// http://alax.info
//
// A permission to use the source code is granted as long as reference to 
// source website http://alax.info is retained.
// 
// Created by Roman Ryltsov roman@alax.info

#pragma once

#include <atlsecurity.h>
#include <atlcoll.h>
#include <atlcrack.h>
#include <atlmisc.h>

////////////////////////////////////////////////////////////
// CMainDialog

class CMainDialog : 
	public CDialogImpl<CMainDialog>,
	public CDialogResize<CMainDialog>
{
public:

	enum { IDD = IDD_MAIN };

BEGIN_MSG_MAP_EX(CMainDialog)
	CHAIN_MSG_MAP(CDialogResize<CMainDialog>)
	MSG_WM_INITDIALOG(OnInitDialog)
	COMMAND_ID_HANDLER_EX(IDOK, OnCommand)
	COMMAND_ID_HANDLER_EX(IDCANCEL, OnCommand)
END_MSG_MAP()

BEGIN_DLGRESIZE_MAP(CMainDialog)
	DLGRESIZE_CONTROL(IDC_TEXT, DLSZ_SIZE_X | DLSZ_SIZE_Y)
	DLGRESIZE_CONTROL(IDOK, DLSZ_MOVE_X | DLSZ_MOVE_Y)
END_DLGRESIZE_MAP()

public:

	////////////////////////////////////////////////////////
	// VALUENAME

	typedef struct _VALUENAME
	{
		INT_PTR nValue;
		LPCTSTR pszName;
	} VALUENAME;

private:
	CString m_sText;
	CEdit m_TextEdit;

public:
// CMainDialog
	static CString AtlFormatString(LPCTSTR pszFormat, ...)
	{
		CString sValue;
		va_list Arguments;
		va_start(Arguments, pszFormat);
		sValue.FormatV(pszFormat, Arguments);
		va_end(Arguments);
		return sValue;
	}
	static CString NameFromValue(INT_PTR nValue, const VALUENAME* pValueNames)
	{
		ATLASSERT(pValueNames);
		CString sName;
		for(const VALUENAME* pValueName = pValueNames; pValueName->pszName; pValueName++)
			if(pValueName->nValue == nValue)
			{
				sName.Format(_T("%s (0x%x)"), pValueName->pszName, nValue);
				break;
			}
		if(sName.IsEmpty())
			sName.Format(_T("0x%x"), nValue);
		return sName;
	}
	VOID Initialize()
	{
		m_sText.Empty();
		#pragma region System
		{
			m_sText += _T("## System") _T("\r\n") _T("\r\n");
			#pragma region Version
			if(IsWindowsServer())
			{
			} else
			{
				static const struct
				{
					bool (*pIsOrGreater)();
					LPCTSTR pszTitle;
				} g_pMap[] = 
				{
					{ &IsWindows8Point1OrGreater,   _T("Windows 8.1") },
					{ &IsWindows8OrGreater,			_T("Windows 8") },
					{ &IsWindows7SP1OrGreater,		_T("Windows 7 Service Pack 1") },
					{ &IsWindows7OrGreater,			_T("Windows 7") },
					{ &IsWindowsVistaSP2OrGreater,	_T("Windows Vista Service Pack 2") },
					{ &IsWindowsVistaSP1OrGreater,	_T("Windows Vista Service Pack 1") },
					{ &IsWindowsVistaOrGreater,		_T("Windows Vista") },
					{ &IsWindowsXPSP3OrGreater,		_T("Windows XP Service Pack 3") },
					{ &IsWindowsXPSP2OrGreater,		_T("Windows XP Service Pack 2") },
					{ &IsWindowsXPSP1OrGreater,		_T("Windows XP Service Pack 1") },
					{ &IsWindowsXPOrGreater,		_T("Windows XP") },
				};
				for(auto&& Item: g_pMap)
					if((Item.pIsOrGreater)())
					{
						m_sText += AtlFormatString(_T(" * ") _T("Version: %s") _T("\r\n"), Item.pszTitle);
						break;
					}
			}
			#pragma endregion 
			TCHAR pszComputerName[256] = { 0 };
			DWORD nComputerNameLength = _countof(pszComputerName);
			GetComputerName(pszComputerName, &nComputerNameLength);
			m_sText += AtlFormatString(_T(" * ") _T("Computer Name: `%s`") _T("\r\n"), pszComputerName);
			TCHAR pszUserName[256] = { 0 };
			DWORD nUserNameLength = _countof(pszUserName);
			GetUserName(pszUserName, &nUserNameLength);
			CString sUserName(pszUserName);
			BOOL bAdministrator = FALSE;
			bool bIsMember = FALSE;
			if(CAccessToken().CheckTokenMembership(Sids::Admins(), &bIsMember) && bIsMember)
				bAdministrator = TRUE;
			m_sText += AtlFormatString(_T(" * ") _T("User Name: `%s` %s") _T("\r\n"), sUserName, bAdministrator ? _T("(Administrator)") : _T(""));
			//SYSTEMTIME LocalTime;
			//GetLocalTime(&LocalTime);
			//m_sText += AtlFormatString(_T(" * ") _T("Local Time: `%s`") _T("\r\n"), _StringHelper::FormatDateTime(&LocalTime));
			SYSTEM_INFO SystemInformation;
			GetSystemInfo(&SystemInformation);
			#pragma region Architecture
			CString sArchitecture;
			switch(SystemInformation.wProcessorArchitecture)
			{
			case PROCESSOR_ARCHITECTURE_INTEL:
				sArchitecture = _T("x86");
				break;
			case PROCESSOR_ARCHITECTURE_AMD64:
				sArchitecture = _T("AMD/Intel x64");
				break;
			case PROCESSOR_ARCHITECTURE_IA64:
				sArchitecture = _T("Intel Itanium");
				break;
			default:
				sArchitecture = AtlFormatString(_T("`0x%04X`"), SystemInformation.wProcessorArchitecture);
			}
			#if defined(_WIN64)
				m_sText += AtlFormatString(_T(" * ") _T("Architecture: %s (x64 Application)") _T("\r\n"), sArchitecture);
			#else
				m_sText += AtlFormatString(_T(" * ") _T("Architecture: %s") _T("\r\n"), sArchitecture);
			#endif // defined(_WIN64)
			#pragma endregion 
			m_sText += AtlFormatString(_T(" * ") _T("Processors: `%d`, Active Mask `0x%X`") _T("\r\n"), SystemInformation.dwNumberOfProcessors, SystemInformation.dwActiveProcessorMask);
			m_sText += AtlFormatString(_T(" * ") _T("Page Size: `0x%X`") _T("\r\n"), SystemInformation.dwPageSize);
			m_sText += AtlFormatString(_T(" * ") _T("Application Address Space: `0x%p`..`0x%p`") _T("\r\n"), SystemInformation.lpMinimumApplicationAddress, SystemInformation.lpMaximumApplicationAddress);
			#pragma region CPU Identification and Features
			_ATLTRY
			{
//				CRoArrayT<CString> Array;
				// NOTE: __cpuid, __cpuidex https://msdn.microsoft.com/en-us/library/hskdteyh.aspx
				//       http://stackoverflow.com/questions/6121792/how-to-check-if-a-cpu-supports-the-sse3-instruction-set
				INT pnInformation[4] = { -1 };
				__cpuid(pnInformation, 0);
				const INT nIdentifierCount = pnInformation[0];
				CTempBuffer<INT> pnData((nIdentifierCount + 1) * _countof(pnInformation));
				for(INT nIdentifierIndex = 0; nIdentifierIndex <= nIdentifierCount; nIdentifierIndex++)
					__cpuidex(pnData + 4 * nIdentifierIndex, nIdentifierIndex, 0);
				#pragma region Vendor
				CHAR pszVendor[0x20];
				ZeroMemory(pszVendor, sizeof pszVendor);
				*reinterpret_cast<INT*>(pszVendor + 0) = pnData[1];
				*reinterpret_cast<INT*>(pszVendor + 4) = pnData[3];
				*reinterpret_cast<INT*>(pszVendor + 8) = pnData[2];
//				Array.Add(AtlFormatString(_T("`%hs`"), pszVendor));
				#pragma endregion 
/*
				INT n1Ecx = 0, n1Edx = 0;
				if(nIdentifierCount >= 1)
				{
					n1Ecx = pnData[1 * 4 + 2];
					n1Edx = pnData[1 * 4 + 3];
					if(n1Edx)
					{
						CRoArrayT<CString> SubArray;
						if(n1Edx & (1 << 23))
							SubArray.Add(_T("MMX"));
						if(n1Edx & (1 << 25))
							SubArray.Add(_T("SSE"));
						if(n1Edx & (1 << 26))
							SubArray.Add(_T("SSE2"));
						Array.Add(AtlFormatString(_T("0x1 EDX `0x%08X` (%s)"), n1Edx, _StringHelper::Join(SubArray, _T(", "))));
					}
					if(n1Ecx)
					{
						CRoArrayT<CString> SubArray;
						if(n1Ecx & (1 << 0))
							SubArray.Add(_T("SSE3"));
						if(n1Ecx & (1 << 9))
							SubArray.Add(_T("SSSE3"));
						if(n1Ecx & (1 << 19))
							SubArray.Add(_T("SSE41"));
						if(n1Ecx & (1 << 20))
							SubArray.Add(_T("SSE42"));
						if(n1Ecx & (1 << 28))
							SubArray.Add(_T("AVX"));
						Array.Add(AtlFormatString(_T("0x1 ECX `0x%08X` (%s)"), n1Ecx, _StringHelper::Join(SubArray, _T(", "))));
					}
				}
				INT n7Ebx = 0, n7Ecx = 0;
				if(nIdentifierCount >= 7)
				{
					n7Ebx = pnData[7 * 4 + 1];
					n7Ecx = pnData[7 * 4 + 2];
					if(n7Ebx)
					{
						CRoArrayT<CString> SubArray;
						if(n7Ebx & (1 << 5))
							SubArray.Add(_T("AVX2"));
						Array.Add(AtlFormatString(_T("0x7 EBX `0x%08X` (%s)"), n7Ebx, _StringHelper::Join(SubArray, _T(", "))));
					}
					if(n7Ecx)
					{
						//CRoArrayT<CString> SubArray;
						//if(n7Ecx & (1 << 5))
						//	SubArray.Add(_T("AVX2"));
						Array.Add(AtlFormatString(_T("0x7 ECX `0x%08X`"), n7Ebx));
					}
				}
*/
				__cpuid(pnInformation, 0x80000000);
				const UINT nExtendedIdentifierCount = (UINT) pnInformation[0];
				CTempBuffer<INT> pnExtendedData((nExtendedIdentifierCount - 0x80000000 + 1) * _countof(pnInformation));
				for(UINT nExtendedIdentifierIndex = 0x80000000; nExtendedIdentifierIndex <= nExtendedIdentifierCount; nExtendedIdentifierIndex++)
					__cpuidex(pnExtendedData + 4 * (nExtendedIdentifierIndex - 0x80000000), nExtendedIdentifierIndex, 0);
				INT nEx1Ecx = 0, nEx1Edx = 0;
				if(nExtendedIdentifierCount >= 0x80000001)
				{
					nEx1Ecx = pnExtendedData[1 * 4 + 2];
					nEx1Edx = pnExtendedData[1 * 4 + 3];
				}
				#pragma region Vendor
				CHAR pszBrand[0x40];
				ZeroMemory(pszBrand, sizeof pszBrand);
				if(nExtendedIdentifierCount >= 0x80000004)
				{
					memcpy(pszBrand, pnExtendedData + 2 * 4, 3 * 4 * sizeof (INT));
//					Array.Add(AtlFormatString(_T("Brand `%hs`"), pszBrand));
					m_sText += AtlFormatString(_T(" * ") _T("CPU Brand: %hs") _T("\r\n"), pszBrand);
				}
				#pragma endregion 
//				m_sText += AtlFormatString(_T(" * ") _T("CPU: %s") _T("\r\n"), _StringHelper::Join(Array, _T(", ")));
			}
			_ATLCATCHALL()
			{
				//_Z_EXCEPTION();
			}
			#pragma endregion
		}
		m_sText += _T("\r\n");
		#pragma endregion
		DWORD nSize = 0;
		GetLogicalProcessorInformation(NULL, &nSize);
		CTempBuffer<SYSTEM_LOGICAL_PROCESSOR_INFORMATION> pLogicalProcessorInformation;
		ATLVERIFY(pLogicalProcessorInformation.AllocateBytes(nSize));
		ATLENSURE_THROW(GetLogicalProcessorInformation(pLogicalProcessorInformation, &nSize), AtlHresultFromLastError());
		static const VALUENAME g_pLogicalProcessorRelationshipNames[] = 
		{
			{ RelationProcessorCore, _T("RelationProcessorCore") },
			{ RelationNumaNode, _T("RelationNumaNode") },
			{ RelationCache, _T("RelationCache") },
			{ RelationProcessorPackage, _T("RelationProcessorPackage") },
			{ RelationGroup, _T("RelationGroup") },
			//{ RelationAll, 
			{ 0, NULL }
		};
		static const VALUENAME g_pProcessorCacheTypeNames[] = 
		{
			{ CacheUnified, _T("CacheUnified") },
			{ CacheInstruction, _T("CacheInstruction") },
			{ CacheData, _T("CacheData") },
			{ CacheTrace, _T("CacheTrace") },
			{ 0, NULL }
		};
		m_sText.Append(_T("## Logical Processors") _T("\r\n"));
		m_sText.Append(_T("\r\n"));
		ATLTRACE2(atlTraceGeneral, 4, _T("nSize %d, sizeof (SYSTEM_LOGICAL_PROCESSOR_INFORMATION) %d\n"), nSize, sizeof (SYSTEM_LOGICAL_PROCESSOR_INFORMATION));
		CAtlMap<LOGICAL_PROCESSOR_RELATIONSHIP, UINT> RelationshipMap;
		RelationshipMap[RelationProcessorCore] = 0;
		RelationshipMap[RelationNumaNode] = 0;
		RelationshipMap[RelationCache] = 0;
		RelationshipMap[RelationProcessorPackage] = 0;
		RelationshipMap[RelationGroup] = 0;
		for(const SYSTEM_LOGICAL_PROCESSOR_INFORMATION* pCurrentLogicalProcessorInformation = pLogicalProcessorInformation; (const BYTE*) (pCurrentLogicalProcessorInformation + 1) <= (const BYTE*) ((const SYSTEM_LOGICAL_PROCESSOR_INFORMATION*) pLogicalProcessorInformation) + nSize; pCurrentLogicalProcessorInformation++)
		{
			ATLTRACE2(atlTraceGeneral, 4, _T("pCurrentLogicalProcessorInformation 0x%p\n"), pCurrentLogicalProcessorInformation);
			m_sText.AppendFormat(_T("Mask: 0x%08x\r\n"), pCurrentLogicalProcessorInformation->ProcessorMask);
			m_sText.AppendFormat(_T("Relationship: %s\r\n"), NameFromValue(pCurrentLogicalProcessorInformation->Relationship, g_pLogicalProcessorRelationshipNames));
			if(pCurrentLogicalProcessorInformation->Relationship == RelationProcessorCore)
			{
				m_sText.AppendFormat(_T("ProcessorCore.Flags: 0x%02x\r\n"), pCurrentLogicalProcessorInformation->ProcessorCore.Flags);
				RelationshipMap[RelationProcessorCore]++;
			}
			if(pCurrentLogicalProcessorInformation->Relationship == RelationNumaNode)
			{
				m_sText.AppendFormat(_T("NumaNode.NodeNumber: 0x%x\r\n"), pCurrentLogicalProcessorInformation->NumaNode.NodeNumber);
				RelationshipMap[RelationNumaNode]++;
			}
			if(pCurrentLogicalProcessorInformation->Relationship == RelationCache)
			{
				m_sText.AppendFormat(_T("Cache.Level: %d\r\n"), pCurrentLogicalProcessorInformation->Cache.Level);
				m_sText.AppendFormat(_T("Cache.Associativity: %d\r\n"), pCurrentLogicalProcessorInformation->Cache.Associativity);
				m_sText.AppendFormat(_T("Cache.LineSize: %d (0x%x)\r\n"), pCurrentLogicalProcessorInformation->Cache.LineSize, pCurrentLogicalProcessorInformation->Cache.LineSize);
				m_sText.AppendFormat(_T("Cache.Size: %d (0x%x)\r\n"), pCurrentLogicalProcessorInformation->Cache.Size, pCurrentLogicalProcessorInformation->Cache.Size);
				m_sText.AppendFormat(_T("Cache.Type: %s\r\n"), NameFromValue(pCurrentLogicalProcessorInformation->Cache.Type, g_pProcessorCacheTypeNames));
				RelationshipMap[RelationCache]++;
			}
			if(pCurrentLogicalProcessorInformation->Relationship == RelationProcessorPackage)
				RelationshipMap[RelationProcessorPackage]++;
			if(pCurrentLogicalProcessorInformation->Relationship == RelationGroup)
				RelationshipMap[RelationGroup]++;
			m_sText.Append(_T("\r\n"));
		}
		m_sText.Append(_T("### Record Count per Relationship") _T("\r\n") _T("\r\n"));
		m_sText.AppendFormat(_T(" *  %s: `%d`\r\n"), NameFromValue(RelationProcessorCore, g_pLogicalProcessorRelationshipNames), RelationshipMap[RelationProcessorCore]);
		m_sText.AppendFormat(_T(" *  %s: `%d`\r\n"), NameFromValue(RelationNumaNode, g_pLogicalProcessorRelationshipNames), RelationshipMap[RelationNumaNode]);
		m_sText.AppendFormat(_T(" *  %s: `%d`\r\n"), NameFromValue(RelationCache, g_pLogicalProcessorRelationshipNames), RelationshipMap[RelationCache]);
		m_sText.AppendFormat(_T(" *  %s: `%d`\r\n"), NameFromValue(RelationProcessorPackage, g_pLogicalProcessorRelationshipNames), RelationshipMap[RelationProcessorPackage]);
		m_sText.AppendFormat(_T(" *  %s: `%d`\r\n"), NameFromValue(RelationGroup, g_pLogicalProcessorRelationshipNames), RelationshipMap[RelationGroup]);
		m_sText += _T("\r\n");
	}

// Window message handlers
	LRESULT OnInitDialog(HWND, LPARAM)
	{
		Initialize();
		DlgResize_Init(FALSE);
		m_TextEdit = GetDlgItem(IDC_TEXT);
		m_TextEdit.SetWindowText(m_sText);
		SetIcon(AtlLoadIconImage(IDR_MAINFRAME, GetSystemMetrics(SM_CXICON), GetSystemMetrics(SM_CYICON), LR_DEFAULTCOLOR), TRUE);
		//SetIcon(AtlLoadIconImage(IDR_MAINFRAME, GetSystemMetrics(SM_CXSMICON), GetSystemMetrics(SM_CYSMICON), LR_DEFAULTCOLOR), FALSE);
		ATLVERIFY(CenterWindow());
		return TRUE;
	}
	LRESULT OnCommand(UINT, INT nIdentifier, HWND)
	{
		ATLVERIFY(EndDialog(nIdentifier));
		return 0;
	}
};
