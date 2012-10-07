////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2012
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#pragma once

#include <psapi.h>
#include <tlhelp32.h>
#include <atlsecurity.h>
#include "AboutDialog.h"
#include "..\..\..\Repository-Private\Utilities\EmailTools\Message.h"

#if PSAPI_VERSION == 1
#pragma comment(lib, "psapi.lib")
#endif // PSAPI_VERSION == 1

////////////////////////////////////////////////////////////
// CMainWizard

class CMainWizard : 
	public CWizardPropertySheetT<CMainWizard>
{
public:

BEGIN_MSG_MAP_EX(CMainWizard)
	CHAIN_MSG_MAP(CWizardPropertySheet)
	MSG_WM_SYSCOMMAND(OnSysCommand)
END_MSG_MAP()

	////////////////////////////////////////////////////////
	// CIntroductionPropertyPage

	class CIntroductionPropertyPage :
		public CWizardPropertyPageT<CIntroductionPropertyPage>
	{
	public:
		enum { IDD = IDD_MAIN_INTRODUCTION };

	BEGIN_MSG_MAP_EX(CIntroductionPropertyPage)
		CHAIN_MSG_MAP(CWizardPropertyPageT<CIntroductionPropertyPage>)
		MSG_WM_INITDIALOG(OnInitDialog)
		REFLECT_NOTIFICATIONS()
	END_MSG_MAP()

	private:
		CMainWizard& m_Wizard;
		CRoHyperStatic m_DescriptionHyperStatic;
		CButton m_SkipButton;
		BOOL m_bActivated;

	public:
	// CIntroductionPropertyPage
		CIntroductionPropertyPage(CMainWizard* pWizard) throw() :
			m_Wizard(*pWizard),
			m_bActivated(FALSE)
		{
			m_psp.dwFlags |= PSP_HIDEHEADER;
		}

	// Window message handlers
		LRESULT OnInitDialog(HWND, LPARAM) throw()
		{
			//_W(GetPropertySheet().ModifyStyle(0, WS_MINIMIZEBOX));
			GetPropertySheet().SetIcon(AtlLoadIcon(IDI_MODULE), TRUE);
			GetPropertySheet().SetIcon(AtlLoadIconImage(IDI_MODULE, LR_DEFAULTCOLOR, GetSystemMetrics(SM_CXSMICON), GetSystemMetrics(SM_CYSMICON)), FALSE);
			CMenuHandle Menu = GetPropertySheet().GetSystemMenu(FALSE);
			_W(Menu.AppendMenu(MF_SEPARATOR));
			_W(Menu.AppendMenu(MF_STRING, ID_APP_ABOUT, _T("&About...")));
			CStatic(GetDlgItem(IDC_WIZARDINTRODUCTION_TITLE)).SetFont(m_Wizard.GetMessageTitleFont());
			_W(m_DescriptionHyperStatic.SubclassWindow(GetDlgItem(IDC_WIZARDINTRODUCTION_DESCRIPTION)));
			m_SkipButton = GetDlgItem(IDC_WIZARDINTRODUCTION_SKIP);
			return TRUE;
		}
		INT OnSetActive() throw()
		{
			SetWizardButtons(PSWIZB_NEXT);
			BOOL bActivated = m_bActivated;
			m_bActivated = TRUE;
			if(!bActivated && m_Wizard.GetConfirmation(_T("CMainWizard::CIntroductionPropertyPage")) == 1)
			{
				m_SkipButton.SetCheck(BST_CHECKED);
				return -1;
			}
			return 0;
		}
		INT OnWizardNext() throw()
		{
			m_Wizard.SetConfirmation(_T("CMainWizard::CIntroductionPropertyPage"), m_SkipButton.GetCheck());
			return 0;
		}
	};

	////////////////////////////////////////////////////////
	// CProcessPropertyPage

	class CProcessPropertyPage :
		public CWizardPropertyPageT<CProcessPropertyPage>
	{
	public:
		enum { IDD = IDD_MAIN_PROCESS };

	BEGIN_MSG_MAP_EX(CProcessPropertyPage)
		CHAIN_MSG_MAP(CWizardPropertyPageT<CProcessPropertyPage>)
		MSG_WM_INITDIALOG(OnInitDialog)
		MSG_LVN_GETDISPINFO(IDC_MAIN_PROCESSES, OnProcessListViewGetDispInfo)
		MSG_LVN_GETINFOTIP(IDC_MAIN_PROCESSES, OnProcessListViewGetInfoTip)
		MSG_LVN_ITEMCHANGED(IDC_MAIN_PROCESSES, OnProcessListItemChanged)
		MSG_LVN_DBLCLK(IDC_MAIN_PROCESSES, OnProcessListViewDblClk)
		COMMAND_ID_HANDLER_EX(IDC_MAIN_REFRESHPROCESSES, OnRefreshButtonClicked)
		REFLECT_NOTIFICATIONS()
	END_MSG_MAP()

	public:

		////////////////////////////////////////////////////
		// CProcessData

		class CProcessData
		{
		public:
			DWORD m_nIdentifier;
			CHandle m_Handle;
			CPath m_sFilePath;
			CPath m_sImageFilePath;
			BOOL m_bIsWow64;
			CString m_sAccount;
			PROCESS_MEMORY_COUNTERS_EX m_MemoryCounters;
			CString m_sWindowCaption;
			BOOL m_bValid;
			BOOL UpdateMemoryCounters()
			{
				ZeroMemory(&m_MemoryCounters, sizeof m_MemoryCounters);
				m_MemoryCounters.cb = sizeof m_MemoryCounters;
				if(!GetProcessMemoryInfo(m_Handle, (PROCESS_MEMORY_COUNTERS*) &m_MemoryCounters, m_MemoryCounters.cb))
				{
					m_MemoryCounters.cb = sizeof (PROCESS_MEMORY_COUNTERS);
					if(!GetProcessMemoryInfo(m_Handle, (PROCESS_MEMORY_COUNTERS*) &m_MemoryCounters, m_MemoryCounters.cb))
						return FALSE;
				}
				return TRUE;
			}

		public:
		// CProcessData
			static BOOL CompareIdentifier(const CProcessData& ProcessData, DWORD nIdentifier) throw()
			{
				return ProcessData.m_nIdentifier == nIdentifier;
			}
			static BOOL ComparePartialFileName(const CProcessData& ProcessData, LPCTSTR pszFileName) throw()
			{
				_A(pszFileName);
				CString sProcessFileName = ProcessData.GetFileName();
				sProcessFileName.MakeLower();
				CString sPartialFileName = pszFileName;
				sPartialFileName.MakeLower();
				return sProcessFileName.Find(sPartialFileName) >= 0;
			}
			static BOOL ResetValid(CProcessData& ProcessData)
			{
				ProcessData.m_bValid = FALSE;
				return TRUE;
			}
			VOID Initialize(DWORD nProcessIdentifier, CHandle& Process, const CPath& sFilePath)
			{
				m_nIdentifier = nProcessIdentifier;
				m_Handle = Process;
				_A(!Process);
				m_sFilePath = sFilePath;
				TCHAR pszPath[MAX_PATH] = { 0 };
				if(GetProcessImageFileName(m_Handle, pszPath, DIM(pszPath)))
					m_sImageFilePath = pszPath;
				m_bIsWow64 = SafeIsWow64Process(m_Handle);
				#pragma region
				_ATLTRY
				{
					CAccessToken ProcessToken;
					__E(ProcessToken.GetProcessToken(TOKEN_QUERY, m_Handle));
					CSid Sid;
					__E(ProcessToken.GetUser(&Sid));
					m_sAccount = Sid.AccountName();
					LPCTSTR pszDomain = Sid.Domain();
					if(pszDomain && _tcslen(pszDomain))
						m_sAccount = AtlFormatString(_T("%s\\%s"), pszDomain, m_sAccount);
				}
				_ATLCATCHALL()
				{
					_Z_EXCEPTION();
				}
				#pragma endregion
				UpdateMemoryCounters();
				m_bValid = TRUE;
			}
			VOID Update()
			{
				UpdateMemoryCounters();
				m_bValid = TRUE;
			}
			LPCTSTR GetFileName() const throw()
			{
				return (LPCTSTR) m_sFilePath + m_sFilePath.FindFileName();
			}
			const CPath& GetImageFilePath() const throw()
			{
				return m_sImageFilePath;
			}
			const PROCESS_MEMORY_COUNTERS_EX& GetMemoryCounters() const throw()
			{
				return m_MemoryCounters;
			}
		};

		////////////////////////////////////////////////////
		// CProcessDataList

		class CProcessDataList :
			public CRoListT<CProcessData>
		{
		public:
			CRoMapT<DWORD, CWindow> m_ProcessWindowMap;

			BOOL ProcessWindow(CWindow Window) throw()
			{
				const DWORD nProcessIdentifier = Window.GetWindowProcessID();
				if(!m_ProcessWindowMap.Lookup(nProcessIdentifier))
					_W(m_ProcessWindowMap.SetAt(nProcessIdentifier, Window));
				return TRUE;
			}
			static BOOL CALLBACK ProcessWindow(HWND hWindow, LPARAM lParam)
			{
				return ((CProcessDataList*) lParam)->ProcessWindow(hWindow);
			}

		public:
		// CProcessDataList
			VOID ResetValid()
			{
				ForEach(&CProcessData::ResetValid);
			}
			VOID UpdateWindows()
			{
				m_ProcessWindowMap.RemoveAll();
				EnumWindows(&CProcessDataList::ProcessWindow, (LPARAM) this);
				for(POSITION Position = GetHeadPosition(); Position; GetNext(Position))
				{
					CProcessData& ProcessData = GetAt(Position);
					ProcessData.m_sWindowCaption.Empty();
					CWindow Window;
					if(m_ProcessWindowMap.Lookup(ProcessData.m_nIdentifier, Window))
						Window.GetWindowText(ProcessData.m_sWindowCaption);
				}
			}
		};

	private:
		CMainWizard& m_Wizard;
		BOOL m_bActivating;
		CRoHyperStatic m_DbghelpVersionStatic;
		CRoListViewT<POSITION> m_ProcessListView;
		ULONGLONG m_nDbghelpVersion;
		CProcessDataList m_ProcessDataList;
		POSITION m_SelectedPosition;

		VOID UpdateButtons() throw()
		{
			const BOOL bAllowBack = !m_Wizard.m_OperationPropertyPage.IsActive();
			const BOOL bAllowNext = m_ProcessListView.GetSelectedCount() == 1;
			SetWizardButtons((bAllowBack ? PSWIZB_BACK : 0) | (bAllowNext ? PSWIZB_NEXT : 0));
		}
		VOID UpdateProcessListView()
		{
			CWindowRedraw ProcessListViewRedraw(m_ProcessListView);
			m_ProcessDataList.ResetValid();
#if TRUE
			static const SIZE_T g_nDefaultProcessCount = 1 << 10;
			static const SIZE_T g_nMaximalProcessCount = 128 << 10;
			CTempBufferT<DWORD, g_nDefaultProcessCount * sizeof (DWORD)> pnProcessIdentifers(g_nDefaultProcessCount);
			SIZE_T nProcessCount = g_nDefaultProcessCount;
			DWORD nAvailableProcessCount = 0;
			for(; ; )
			{
				__D(nProcessCount <= g_nMaximalProcessCount, E_UNNAMED);
				if(EnumProcesses(pnProcessIdentifers, (DWORD) (nProcessCount * sizeof (DWORD)), &nAvailableProcessCount))
					break;
				_Z4(atlTraceGeneral, 4, _T("GetLastError() 0x%08x\n"), GetLastError());
				pnProcessIdentifers.Free();
				nProcessCount <<= 1;
			}
			nAvailableProcessCount /= sizeof (DWORD);
			for(SIZE_T nProcessIndex = 0; nProcessIndex < nAvailableProcessCount; nProcessIndex++)
				_ATLTRY
				{
					const DWORD nProcessIdentifier = pnProcessIdentifers[nProcessIndex];
					if(nProcessIdentifier == GetCurrentThreadId())
						continue; // We Won't Debug Ourself
					POSITION Position;
					if(m_ProcessDataList.FindFirstThatT<DWORD>(&CProcessData::CompareIdentifier, nProcessIdentifier, &Position))
					{
						m_ProcessDataList.GetAt(Position).Update();
						continue; // Already a Known One
					}
					CHandle Process(OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_VM_READ, FALSE, nProcessIdentifier));
					if(!Process)
					{
						_Z3(atlTraceGeneral, 3, _T("Error 0x%08x (%s) opening process %d\n"), AtlHresultFromLastError(), AtlFormatSystemMessage(GetLastError()).TrimRight(_T("\t\n\r .")), nProcessIdentifier);
						continue; // Access Denied?
					}
					Position = m_ProcessDataList.AddTail();
					_ATLTRY
					{
						TCHAR pszFilePath[MAX_PATH] = { 0 };
						_W(GetProcessImageFileName(Process, pszFilePath, DIM(pszFilePath)));
						CProcessData& ProcessData = m_ProcessDataList.GetAt(Position);
						ProcessData.Initialize(nProcessIdentifier, Process, pszFilePath);
						_A(!Process);
						const INT nItem = m_ProcessListView.InsertItem(m_ProcessListView.GetItemCount(), Position, ProcessData.GetFileName());
						_A(nItem >= 0);
					}
					_ATLCATCHALL()
					{
						m_ProcessDataList.RemoveAt(Position);
						_ATLRETHROW;
					}
				}
				_ATLCATCHALL()
				{
					_Z_EXCEPTION();
				}
#else
			CHandle Snapshot(CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0));
			__E(Snapshot);
			PROCESSENTRY32 ProcessEntry = { sizeof ProcessEntry };
			for(BOOL bHaveProcess = Process32First(Snapshot, &ProcessEntry); bHaveProcess; bHaveProcess = Process32Next(Snapshot, &ProcessEntry))
				_ATLTRY
				{
					const DWORD nProcessIdentifier = ProcessEntry.th32ProcessID;
					if(nProcessIdentifier == GetCurrentThreadId())
						continue; // We Won't Debug Ourself
					POSITION Position;
					if(m_ProcessDataList.FindFirstThatT<DWORD>(&CProcessData::CompareIdentifier, nProcessIdentifier, &Position))
					{
						m_ProcessDataList.GetAt(Position).Update();
						continue; // Already a Known One
					}
					const CPath sFilePath = ProcessEntry.szExeFile;
					CHandle Process(OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_VM_READ, FALSE, nProcessIdentifier));
					if(!Process)
					{
						_Z3(atlTraceGeneral, 3, _T("Error 0x%08x (%s) opening process %d, %s\n"), AtlHresultFromLastError(), AtlFormatSystemMessage(GetLastError()).TrimRight(_T("\t\n\r .")), nProcessIdentifier, sFilePath);
						continue; // Access Denied?
					}
					Position = m_ProcessDataList.AddTail();
					_ATLTRY
					{
						CProcessData& ProcessData = m_ProcessDataList.GetAt(Position);
						ProcessData.Initialize(nProcessIdentifier, Process, sFilePath);
						_A(!Process);
						const INT nItem = m_ProcessListView.InsertItem(m_ProcessListView.GetItemCount(), Position, ProcessData.GetFileName());
						_A(nItem >= 0);
					}
					_ATLCATCHALL()
					{
						m_ProcessDataList.RemoveAt(Position);
						_ATLRETHROW;
					}
				}
				_ATLCATCHALL()
				{
					_Z_EXCEPTION();
				}
			__E(GetLastError() == ERROR_NO_MORE_FILES);
#endif
			for(INT nItem = m_ProcessListView.GetItemCount() - 1; nItem >= 0; nItem--)
			{
				const POSITION Position = m_ProcessListView.GetItemData(nItem);
				CProcessData& ProcessData = m_ProcessDataList.GetAt(Position);
				if(ProcessData.m_bValid)
					continue;
				m_ProcessListView.DeleteItem(nItem);
				m_ProcessDataList.RemoveAt(Position);
			}
			m_ProcessDataList.UpdateWindows();
		}

	public:
	// CProcessPropertyPage
		CProcessPropertyPage(CMainWizard* pWizard) throw() :
			m_Wizard(*pWizard)
		{
			SetHeaderTitles();
		}
		ULONGLONG GetDbghelpVersion() const throw()
		{
			return m_nDbghelpVersion;
		}
		CProcessData& GetSelectedProcessData() throw()
		{
			_A(m_SelectedPosition);
			return m_ProcessDataList.GetAt(m_SelectedPosition);
		}
		BOOL IsSelectedProcessActive() const throw()
		{
			if(!m_SelectedPosition)
				return FALSE;
			const CProcessData& ProcessData = m_ProcessDataList.GetAt(m_SelectedPosition);
			return WaitForSingleObject(ProcessData.m_Handle, 0) != WAIT_TIMEOUT;
		}

	// Window message handlers
		LRESULT OnInitDialog(HWND, LPARAM)
		{
			m_bActivating = TRUE;
			_ATLTRY
			{
				CWaitCursor WaitCursor;
				#pragma region Debug Help Library Availability and Version
				m_nDbghelpVersion = 0;
				CStatic DbghelpVersionStatic = GetDlgItem(IDC_MAIN_DBGHELPVERSION);
				_ATLTRY
				{
					CString sDefaultDbghelpVersionStaticText, sText;
					_W(DbghelpVersionStatic.GetWindowText(sDefaultDbghelpVersionStaticText));
					const HMODULE hModule = LoadLibrary(_T("dbghelp.dll"));
					if(hModule)
					{
						_ATLTRY
						{
							TCHAR pszPath[MAX_PATH] = { 0 };
							_W(GetModuleFileName(hModule, pszPath, DIM(pszPath)));
							const ULONGLONG nVersion = _VersionInfoHelper::GetFileVersion(_VersionInfoHelper::GetModulePath(hModule));
							if(nVersion)
								sText = AtlFormatString(_StringHelper::GetLine(sDefaultDbghelpVersionStaticText, 0), _VersionInfoHelper::GetVersionString(nVersion));
							m_nDbghelpVersion = nVersion;
						}
						_ATLCATCHALL()
						{
							_W(FreeLibrary(hModule));
							_ATLRETHROW;
						}
						_W(FreeLibrary(hModule));
					}
					if(sText.IsEmpty())
						sText = AtlFormatString(_StringHelper::GetLine(sDefaultDbghelpVersionStaticText, 0), _StringHelper::GetLine(sDefaultDbghelpVersionStaticText, 1));
					DbghelpVersionStatic.SetWindowText(sText);
					_W(m_DbghelpVersionStatic.SubclassWindow(DbghelpVersionStatic));
					const CSize IdealExtent = m_DbghelpVersionStatic.GetIdealExtent();
					CRect Position;
					_W(m_DbghelpVersionStatic.GetWindowRect(Position));
					_W(ScreenToClient(Position));
					Position.left = Position.right - IdealExtent.cx - 2;
					_W(m_DbghelpVersionStatic.MoveWindow(Position));
				}
				_ATLCATCHALL()
				{
					_Z_EXCEPTION();
					DbghelpVersionStatic.ShowWindow(SW_HIDE);
				}
				#pragma endregion
				m_ProcessListView.Initialize(GetDlgItem(IDC_MAIN_PROCESSES));
				#if !defined(_WIN64)
				// NOTE: 32-bit Application which is not a WOW64 process is running on 32-bit OS
				if(!SafeIsWow64Process())
					_W(m_ProcessListView.DeleteColumn(2));
				#endif // !defined(_WIN64)
				// NOTE: We need to enable Debug privilege prior to enumerating processes, so that we could see service processes
				EnableTokenDebugPrivilege();
				UpdateProcessListView();
				#pragma region Initial Selection Using Command Line
				CString sCommandLine = GetCommandLine();
				sCommandLine.TrimLeft();
				if(!sCommandLine.IsEmpty())
				{
					#pragma region Delete Application Path
					if(sCommandLine[0] == _T('\"'))
					{
						const INT nPosition = sCommandLine.Find(_T('\"'), 1);
						if(nPosition >= 0)
							sCommandLine.Delete(0, nPosition + 1);
						else
							sCommandLine.Empty();
					} else
					{
						const INT nPosition = sCommandLine.Find(_T(' '), 0);
						if(nPosition >= 0)
							sCommandLine.Delete(0, nPosition + 1);
						else
							sCommandLine.Empty();
					}
					sCommandLine.TrimLeft();
					#pragma endregion
					CString sProcess = sCommandLine;
					sProcess.Trim();
					if(!sProcess.IsEmpty())
					{
						POSITION Position = NULL;
						const INT nProcessIdentifier = _ttoi(sProcess);
						if(nProcessIdentifier)
							m_ProcessDataList.FindFirstThatT<DWORD>(&CProcessData::CompareIdentifier, nProcessIdentifier, &Position);
						if(!Position && !sProcess.IsEmpty())
							m_ProcessDataList.FindFirstThatT<LPCTSTR>(&CProcessData::ComparePartialFileName, sProcess, &Position);
						if(Position)
						{
							const INT nItem = m_ProcessListView.FindItemData(Position);
							if(nItem >= 0)
							{
								_W(m_ProcessListView.SetItemState(nItem, LVIS_FOCUSED | LVIS_SELECTED, LVIS_FOCUSED | LVIS_SELECTED));
								_W(m_ProcessListView.EnsureVisible(nItem, FALSE));
							}
						}
					}
				}
				#pragma endregion
				UpdateButtons();
				m_bActivating = FALSE;
			}
			_ATLCATCHALL()
			{
				_Z_EXCEPTION();
			}
			return TRUE;
		}
		INT OnSetActive() throw()
		{
			_ATLTRY
			{
				const BOOL bActive = m_Wizard.m_OperationPropertyPage.IsActive();
				m_ProcessListView.EnableWindow(!bActive);
				CButton(GetDlgItem(IDC_MAIN_REFRESHPROCESSES)).EnableWindow(!bActive);
				UpdateButtons();
			}
			_ATLCATCHALL()
			{
				MessageBeep(MB_ICONERROR);
				return -1;
			}
			return 0;
		}
		LRESULT OnProcessListViewGetDispInfo(NMLVDISPINFO* pHeader)
		{
			if(pHeader->item.mask & LVIF_TEXT)
			{
				const CProcessData& ProcessData = m_ProcessDataList.GetAt(m_ProcessListView.DataFromParameter(pHeader->item.lParam));
				INT nSubItem = pHeader->item.iSubItem;
#if !defined(_WIN64)
				// NOTE: See OnInitDialog and DeleteColumn(2)
				if(!SafeIsWow64Process())
					if(nSubItem >= 2)
						nSubItem++;
#endif // !defined(_WIN64)
				m_ProcessListView.m_sTextBuffer.Empty();
				switch(nSubItem)
				{
				case 1: // Identifier
					m_ProcessListView.m_sTextBuffer = AtlFormatString(_T("%d"), ProcessData.m_nIdentifier);
					break;
				case 2: // Type
					m_ProcessListView.m_sTextBuffer = ProcessData.m_bIsWow64 ? _T("32-bit") : _T("64-bit");
					break;
				case 3: // Window Caption
					m_ProcessListView.m_sTextBuffer = ProcessData.m_sWindowCaption;
					break;
				case 4: // Account
					m_ProcessListView.m_sTextBuffer = ProcessData.m_sAccount;
					break;
				//case 5: // Image File Path
				//	m_ProcessListView.m_sTextBuffer = (LPCTSTR) ProcessData.GetImageFilePath();
				//	break;
				default: // File Name
					m_ProcessListView.m_sTextBuffer = ProcessData.GetFileName();
				}
				m_ProcessListView.m_sTextBuffer.TrimRight(_T("\t\n\r ."));
				pHeader->item.pszText = m_ProcessListView.GetTextBuffer();
			}
			//if(pHeader->item.mask & LVIF_IMAGE)
			//	pHeader->item.iImage = 0;
			return 0;
		}
		LRESULT OnProcessListViewGetInfoTip(NMLVGETINFOTIP* pHeader)
		{
			const CProcessData& ProcessData = m_ProcessDataList.GetAt(m_ProcessListView.GetItemData(pHeader->iItem));
			CString& sTextBuffer = m_ProcessListView.GetTextBufferString(TRUE);
			sTextBuffer.AppendFormat(_T("File Name: %s\r\n"), ProcessData.GetFileName());
			sTextBuffer.AppendFormat(_T("Identifier: %d (0x%x)\r\n"), ProcessData.m_nIdentifier, ProcessData.m_nIdentifier);
			BOOL bIs64Bit = FALSE;
#if !defined(_WIN64)
			if(SafeIsWow64Process())
#endif // !defined(_WIN64)
				bIs64Bit = !ProcessData.m_bIsWow64;
			sTextBuffer.AppendFormat(_T("Type: %s\r\n"), !bIs64Bit ? _T("32-bit") : _T("64-bit"));
			if(!ProcessData.m_sAccount.IsEmpty())
				sTextBuffer.AppendFormat(_T("Account: %s\r\n"), ProcessData.m_sAccount);
			sTextBuffer.AppendFormat(_T("Window Caption: %s\r\n"), ProcessData.m_sWindowCaption);
			//sTextBuffer.AppendFormat(_T("Image File Path: %s\r\n"), ProcessData.GetImageFilePath());
			sTextBuffer.AppendFormat(_T("Working Set Size: %s MB\r\n"), _StringHelper::FormatNumber((LONG) ProcessData.GetMemoryCounters().WorkingSetSize >> 20));
			sTextBuffer.AppendFormat(_T("Private Memory: %s MB\r\n"), _StringHelper::FormatNumber((LONG) ProcessData.GetMemoryCounters().PrivateUsage >> 20));
			sTextBuffer.TrimRight(_T("\t\n\r ."));
			_tcsncpy_s(pHeader->pszText, pHeader->cchTextMax, m_ProcessListView.GetTextBuffer(), _TRUNCATE);
			return 0;
		}
		LRESULT OnProcessListItemChanged(NMLISTVIEW*)
		{
			if(m_bActivating)
				return 0;
			UpdateButtons();
			return 0;
		}
		LRESULT OnProcessListViewDblClk(NMITEMACTIVATE*)
		{
			if(m_ProcessListView.GetSelectedCount() == 1)
				m_Wizard.PressButton(PSBTN_NEXT);
			return 0;
		}
		LRESULT OnRefreshButtonClicked(UINT, INT, HWND)
		{
			UpdateProcessListView();
			UpdateButtons();
			return 0;
		}
		BOOL OnQueryCancel()
		{
			return m_Wizard.m_OperationPropertyPage.OnQueryCancel();
		}
		INT OnWizardNext() throw()
		{
			_ATLTRY
			{
				__D(m_ProcessListView.GetSelectedCount() == 1, E_UNNAMED);
				m_SelectedPosition = m_ProcessListView.GetItemData(m_ProcessListView.GetNextItem(-1, LVNI_SELECTED));
				_A(m_SelectedPosition);
			}
			_ATLCATCHALL()
			{
				MessageBeep(MB_ICONERROR);
				return -1;
			}
			return 0;
		}
	};

	////////////////////////////////////////////////////////
	// CMinidumpTypePropertyPage

	class CMinidumpTypePropertyPage :
		public CWizardPropertyPageT<CMinidumpTypePropertyPage>
	{
	public:
		enum { IDD = IDD_MAIN_MINIDUMPTYPE };

	BEGIN_MSG_MAP_EX(CMinidumpTypePropertyPage)
		CHAIN_MSG_MAP(CWizardPropertyPageT<CMinidumpTypePropertyPage>)
		MSG_WM_INITDIALOG(OnInitDialog)
		REFLECT_NOTIFICATIONS()
	END_MSG_MAP()

	public:

		////////////////////////////////////////////////////
		// TYPEITEM

		typedef struct _TYPEITEM
		{
			INT nIdentifier;
			MINIDUMP_TYPE Type;
			ULONGLONG nOsVersion;
			ULONGLONG nApiVersion;
		} TYPEITEM;

	private:
		CMainWizard& m_Wizard;
		BOOL m_bActivating;
		CRoHyperStatic m_MinidumpTypeStatic;
		mutable CRoCriticalSection m_DataCriticalSection;
		MINIDUMP_TYPE m_MinidumpType;

		static const TYPEITEM* GetTypeItemMap() throw()
		{
			static const TYPEITEM g_pMap[] = 
			{
				{ IDC_MAIN_MINIDUMPTYPE_DATASEGMENTS,               MiniDumpWithDataSegs },
				{ IDC_MAIN_MINIDUMPTYPE_FULLMEMORY,                 MiniDumpWithFullMemory },
				{ IDC_MAIN_MINIDUMPTYPE_HANDLEDATA,                 MiniDumpWithHandleData },
				{ IDC_MAIN_MINIDUMPTYPE_FILTERMEMORY,               MiniDumpFilterMemory },
				{ IDC_MAIN_MINIDUMPTYPE_SCANMEMORY,                 MiniDumpScanMemory},
				{ IDC_MAIN_MINIDUMPTYPE_UNLOADEDMODULES,            MiniDumpWithUnloadedModules,            0, 0x0005000200000000 }, // Windows Server 2003 and Windows XP: See MSDN, DbgHelp 5.1: This value is not supported
				{ IDC_MAIN_MINIDUMPTYPE_INDIRECTLYREFERENCEDMEMORY, MiniDumpWithIndirectlyReferencedMemory, 0, 0x0005000200000000 }, // DbgHelp 5.1: This value is not supported
				{ IDC_MAIN_MINIDUMPTYPE_FILTERMODULEPATHS,          MiniDumpFilterModulePaths,              0, 0x0005000200000000 }, // DbgHelp 5.1: This value is not supported
				{ IDC_MAIN_MINIDUMPTYPE_PROCESSTHREADDATA,          MiniDumpWithProcessThreadData,          0, 0x0005000200000000 }, // DbgHelp 5.1: This value is not supported
				{ IDC_MAIN_MINIDUMPTYPE_PRIVATEREADWRITEMEMORY,     MiniDumpWithPrivateReadWriteMemory,     0, 0x0005000200000000 }, // DbgHelp 5.1: This value is not supported
				{ IDC_MAIN_MINIDUMPTYPE_WITHOUTOPTIONALDATA,        MiniDumpWithoutOptionalData,            0, 0x0006000200000000 }, // DbgHelp 6.1 and earlier: This value is not supported
				{ IDC_MAIN_MINIDUMPTYPE_FULLMEMORYINFO,             MiniDumpWithFullMemoryInfo,             0, 0x0006000200000000 }, // DbgHelp 6.1 and earlier: This value is not supported
				{ IDC_MAIN_MINIDUMPTYPE_THREADINFO,                 MiniDumpWithThreadInfo,                 0, 0x0006000200000000 }, // DbgHelp 6.1 and earlier: This value is not supported
				{ IDC_MAIN_MINIDUMPTYPE_CODESEGS,                   MiniDumpWithCodeSegs,                   0, 0x0006000200000000 }, // DbgHelp 6.1 and earlier: This value is not supported
				{ IDC_MAIN_MINIDUMPTYPE_WITHOUTAUXILIARYSTATE,      MiniDumpWithoutAuxiliaryState },
				{ IDC_MAIN_MINIDUMPTYPE_FULLAUXILIARYSTATE,         MiniDumpWithFullAuxiliaryState },
				{ IDC_MAIN_MINIDUMPTYPE_PRIVATEWRITECOPYMEMORY,     MiniDumpWithPrivateWriteCopyMemory,     0, 0x0006000100000000 }, // Prior to DbgHelp 6.1: This value is not supported
				{ IDC_MAIN_MINIDUMPTYPE_IGNOREINACCESSIBLEMEMORY,   MiniDumpIgnoreInaccessibleMemory,       0, 0x0006000100000000 }, // Prior to DbgHelp 6.1: This value is not supported
				{ IDC_MAIN_MINIDUMPTYPE_TOKENINFORMATION,           MiniDumpWithTokenInformation,           0, 0x0006000100000000 }, // Prior to DbgHelp 6.1: This value is not supported
				{ 0 }
			};
			return g_pMap;
		}
		VOID UpdateButtons() throw()
		{
			const BOOL bAllowNext = m_Wizard.m_ProcessPropertyPage.IsSelectedProcessActive();
			SetWizardButtons(PSWIZB_BACK | (bAllowNext ? PSWIZB_NEXT : 0));
		}

	public:
	// CMinidumpTypePropertyPage
		CMinidumpTypePropertyPage(CMainWizard* pWizard) throw() :
			m_Wizard(*pWizard)
		{
			SetHeaderTitles();
		}
		MINIDUMP_TYPE GetMinidumpType() const throw()
		{
			CRoCriticalSectionLock DataLock(m_DataCriticalSection);
			return m_MinidumpType;
		}

	// Window message handlers
		LRESULT OnInitDialog(HWND, LPARAM)
		{
			m_bActivating = TRUE;
			_ATLTRY
			{
				CWaitCursor WaitCursor;
				_W(m_MinidumpTypeStatic.SubclassWindow(GetDlgItem(IDC_MAIN_MINIDUMPTYPE)));
				#pragma region Enable OS and API Dependent Items
				const ULONGLONG nOsVersion = GetOsVersion();
				const ULONGLONG nApiVersion = m_Wizard.m_ProcessPropertyPage.GetDbghelpVersion();
				static const MINIDUMP_TYPE g_DefaultType = (MINIDUMP_TYPE) (
					MiniDumpWithDataSegs |
					//MiniDumpWithFullMemory |
					MiniDumpWithThreadInfo |
					MiniDumpIgnoreInaccessibleMemory |
					0);
				for(const TYPEITEM* pTypeItem = GetTypeItemMap(); pTypeItem->nIdentifier; pTypeItem++)
				{
					CButton Button = GetDlgItem(pTypeItem->nIdentifier);
					if(g_DefaultType & pTypeItem->Type)
						Button.SetCheck(TRUE);
					if(pTypeItem->nOsVersion && nOsVersion < pTypeItem->nOsVersion ||pTypeItem->nApiVersion && nApiVersion < pTypeItem->nApiVersion)
					{
						Button.SetCheck(FALSE);
						Button.EnableWindow(FALSE);
					}
				}
				#pragma endregion
				CButton(GetDlgItem(IDC_MAIN_MINIDUMPTYPE_DATASEGMENTS)).SetCheck(TRUE);
				#pragma region Initialize from Registry
				DWORD nIntegerType;
				if(_RegKeyHelper::QueryIntegerValueEx(HKEY_CURRENT_USER, REGISTRY_ROOT, _T("Minidump Type"), nIntegerType))
				{
					MINIDUMP_TYPE Type = (MINIDUMP_TYPE) nIntegerType;
					for(const TYPEITEM* pTypeItem = GetTypeItemMap(); pTypeItem->nIdentifier; pTypeItem++)
					{
						CButton Button = GetDlgItem(pTypeItem->nIdentifier);
						if(Button.IsWindowEnabled())
							Button.SetCheck(Type & pTypeItem->Type);
					}
				}
				#pragma endregion
				UpdateButtons();
				m_bActivating = FALSE;
			}
			_ATLCATCHALL()
			{
				_Z_EXCEPTION();
			}
			return TRUE;
		}
		INT OnSetActive() throw()
		{
			#if defined(_DEBUG) && FALSE
				return -1;
			#endif // defined(_DEBUG)
			_ATLTRY
			{
				UpdateButtons();
			}
			_ATLCATCHALL()
			{
				MessageBeep(MB_ICONERROR);
				return -1;
			}
			return 0;
		}
		BOOL OnQueryCancel()
		{
			return m_Wizard.m_OperationPropertyPage.OnQueryCancel();
		}
		INT OnWizardNext() throw()
		{
			_ATLTRY
			{
				MINIDUMP_TYPE Type = MiniDumpNormal;
				_A(!Type);
				for(const TYPEITEM* pTypeItem = GetTypeItemMap(); pTypeItem->nIdentifier; pTypeItem++)
				{
					CButton Button = GetDlgItem(pTypeItem->nIdentifier);
					if(Button.IsWindowVisible() && Button.IsWindowEnabled())
						if(Button.GetCheck())
							Type = (MINIDUMP_TYPE) ((UINT) Type | pTypeItem->Type);
				}
				_RegKeyHelper::SetIntegerValue(HKEY_CURRENT_USER, REGISTRY_ROOT, _T("Minidump Type"), (DWORD) Type);
				{
					CRoCriticalSectionLock DataLock(m_DataCriticalSection);
					m_MinidumpType = Type;
				}
				if(!m_Wizard.m_ProcessPropertyPage.IsSelectedProcessActive())
					return CProcessPropertyPage::IDD;
			}
			_ATLCATCHALL()
			{
				MessageBeep(MB_ICONERROR);
				return -1;
			}
			return 0;
		}
	};

	////////////////////////////////////////////////////////
	// CFilterPropertyPage

	class CFilterPropertyPage :
		public CWizardPropertyPageT<CFilterPropertyPage>
	{
	public:
		enum { IDD = IDD_MAIN_FILTER };

	BEGIN_MSG_MAP_EX(CFilterPropertyPage)
		CHAIN_MSG_MAP(CWizardPropertyPageT<CFilterPropertyPage>)
		MSG_WM_INITDIALOG(OnInitDialog)
		NOTIFY_HANDLER_EX(IDC_MAIN_FILTER_RESET, CRoHyperStatic::NC_ANCHORCLICKED, OnResetStaticAnchorClicked)
		//NOTIFY_HANDLER_EX(IDC_MAIN_FILTER_HELP, CRoHyperStatic::NC_ANCHORCLICKED, OnHelpStaticAnchorClicked)
		REFLECT_NOTIFICATIONS()
	END_MSG_MAP()

	public:

		////////////////////////////////////////////////////
		// CFilter

		class CFilter
		{
		public:

			////////////////////////////////////////////////
			// CValueRange

			class CValueRange
			{
			public:
				LONG m_nMinimalValue;
				LONG m_nMaximalValue;
			
			public:
			// CValueRange
				VOID Initialize(CString sValue)
				{
					CRoArrayT<CString> Array;
					_StringHelper::Split(sValue, _T('-'), Array);
					__D(!Array.IsEmpty(), E_INVALIDARG);
					INT nMinimalValue, nMaximalValue;
					__D(StrToIntEx(Array[0], STIF_SUPPORT_HEX, &nMinimalValue), E_INVALIDARG);
					if(Array.GetCount() >= 2)
					{
						__D(StrToIntEx(Array[1], STIF_SUPPORT_HEX, &nMaximalValue), E_INVALIDARG);
						if(nMaximalValue < nMinimalValue)
							SwapMemory(&nMinimalValue, &nMaximalValue);
					} else
						nMaximalValue = nMinimalValue;
					m_nMinimalValue = nMinimalValue;
					m_nMaximalValue = nMaximalValue;
				}
				BOOL Compare(LONG nValue) const throw()
				{
					return nValue >= m_nMinimalValue && nValue <= m_nMinimalValue;
				}
			};

		public:
			INT m_nAction;
			BOOL m_bExceptionCodeAvailable;
			CValueRange m_ExceptionCode;
			BOOL m_bNativeExceptionCodeAvailable;
			CValueRange m_NativeExceptionCode;

		public:
		// CFilter
			CFilter() throw() :
				m_nAction(0),
				m_bExceptionCodeAvailable(FALSE),
				m_bNativeExceptionCodeAvailable(FALSE)
			{
			}
			static VOID PreprocessExceptionCode(CString& sValue)
			{
				if(sValue.CompareNoCase(_T("*")) == 0)
					sValue = _T("0x80000000-0x7FFFFFFF");
				else if(sValue.CompareNoCase(_T("C++")) == 0)
					sValue = _T("0xE06D7363");
			}
			static VOID PreprocessNativeExceptionCode(CString& sValue)
			{
				if(sValue.CompareNoCase(_T("*")) == 0)
					sValue = _T("0x80000000-0x7FFFFFFF");
			}
			VOID Initialize(CString sValue)
			{
				for(; sValue.Replace(_T("  "), _T(" ")); )
					;
				CRoArrayT<CString> Array;
				_StringHelper::Split(sValue, _T(' '), Array);
				__D(!Array.IsEmpty(), E_UNNAMED);
				#pragma region Action
				__D(!Array[0].IsEmpty(), E_UNNAMED);
				static LPCTSTR g_ppszActions = _T("-+");
				LPCTSTR pszAction = _tcschr(g_ppszActions, Array[0][0]);
				__D(pszAction, E_UNNAMED);
				m_nAction = (pszAction - g_ppszActions) * 2 - 1;
				_A(m_nAction == -1 || m_nAction == +1);
				#pragma endregion 
				m_bExceptionCodeAvailable = FALSE;
				m_bNativeExceptionCodeAvailable = FALSE;
				if(Array.GetCount() >= 2)
				{
					CString sExceptionCode = Array[1];
					PreprocessExceptionCode(sExceptionCode);
					m_ExceptionCode.Initialize(sExceptionCode);
					m_bExceptionCodeAvailable = TRUE;
					if(Array.GetCount() >= 3)
					{
						CString sNativeExceptionCode = Array[2];
						PreprocessNativeExceptionCode(sNativeExceptionCode);
						m_NativeExceptionCode.Initialize(sNativeExceptionCode);
						m_bNativeExceptionCodeAvailable = TRUE;
					}
				}
			}
			BOOL Apply(LONG nExceptionCode, const LONG* pnNativeExceptionCode, INT& nAction) const throw()
			{
				if(m_bExceptionCodeAvailable)
				{
					if(!m_ExceptionCode.Compare(nExceptionCode))
						return FALSE; // Exception Code Mismatch
					if(m_bNativeExceptionCodeAvailable)
					{
						if(!pnNativeExceptionCode)
							return FALSE; // No Native Exception Code
						if(!m_NativeExceptionCode.Compare(*pnNativeExceptionCode))
							return FALSE; // Native Exception Code Mismatch
					}
				}
				nAction = m_nAction;
				return TRUE;
			}
			VOID Trace() const
			{
				#if defined(_DEBUG)
					CString sText;
					if(m_bExceptionCodeAvailable)
					{
						if(m_ExceptionCode.m_nMinimalValue < m_ExceptionCode.m_nMaximalValue)
							sText += AtlFormatString(_T("0x%08X-0x%08X "), m_ExceptionCode.m_nMinimalValue, m_ExceptionCode.m_nMaximalValue);
						else if(m_ExceptionCode.m_nMinimalValue == 0xE06D7363)
							sText += _T("C++ ");
						else
							sText += AtlFormatString(_T("0x%08X "), m_ExceptionCode.m_nMinimalValue);
						if(m_bNativeExceptionCodeAvailable)
						{
							if(m_NativeExceptionCode.m_nMinimalValue < m_NativeExceptionCode.m_nMaximalValue)
								sText += AtlFormatString(_T("0x%08X-0x%08X "), m_NativeExceptionCode.m_nMinimalValue, m_NativeExceptionCode.m_nMaximalValue);
							else
								sText += AtlFormatString(_T("0x%08X "), m_NativeExceptionCode.m_nMinimalValue);
						}
					}
					_Z4(atlTraceGeneral, 4, _T("m_nAction %d, %s\n"), m_nAction, sText);
				#endif // defined(_DEBUG)
			}
		};

		////////////////////////////////////////////////////
		// CFilterArray

		class CFilterArray :
			public CRoAssignableArrayT<CRoArrayT<CFilter> >
		{
		public:
		// CFilterArray
			CFilterArray()
			{
			}
			CFilterArray(const CString& sValue)
			{
				Initialize(sValue);
			}
			VOID Initialize(CString sValue)
			{
				RemoveAll();
				sValue.Replace(_T("\r\n"), _T("\n"));
				sValue.Replace(_T("\t"), _T(" "));
				CRoArrayT<CString> Array;
				_StringHelper::Split(sValue, _T('\n'), Array);
				for(SIZE_T nIndex = 0; nIndex < Array.GetCount(); nIndex++)
				{
					CString sLine = Array[nIndex];
					const INT nPosition = sLine.Find(_T("//"));
					if(nPosition >= 0)
						sLine = sLine.Left(nPosition);
					sLine.Trim();
					if(sLine.IsEmpty())
						continue;
					GetAt(Add()).Initialize(sLine);
				}
			}
			BOOL Apply(LONG nExceptionCode, const LONG* pnNativeExceptionCode, INT& nAction) const throw()
			{
				for(SIZE_T nIndex = 0; nIndex < GetCount(); nIndex++)
					if(GetAt(nIndex).Apply(nExceptionCode, pnNativeExceptionCode, nAction))
						return TRUE;
				return FALSE;
			}
			VOID Trace() const
			{
				#if defined(_DEBUG)
					_Z4(atlTraceGeneral, 4, _T("GetCount() %d\n"), GetCount());
					for(SIZE_T nIndex = 0; nIndex < GetCount(); nIndex++)
						GetAt(nIndex).Trace();

				#endif // defined(_DEBUG)
			}
		};

	private:
		CMainWizard& m_Wizard;
		BOOL m_bActivating;
		CRoEdit m_TextEdit;
		CFont m_TextEditFont;
		CRoHyperStatic m_ResetStatic;
		CRoHyperStatic m_HelpStatic;
		mutable CRoCriticalSection m_DataCriticalSection;
		CFilterArray m_FilterArray;

		static LPCTSTR GetDefaultText() throw()
		{
			return 
				_T("// Filters are processed top to bottom until a match is found.") _T("\r\n")
				_T("// One filter per line, syntax: ") _T("\r\n")
				_T("//   (+ or -) [(Exception Code) [(C++ ATL Exception HRESULT)]]") _T("\r\n")
				_T("") _T("\r\n")
				_T("+")
				_T("");
		}
		VOID UpdateButtons() throw()
		{
			const BOOL bAllowNext = m_Wizard.m_ProcessPropertyPage.IsSelectedProcessActive();
			SetWizardButtons(PSWIZB_BACK | (bAllowNext ? PSWIZB_NEXT : 0));
		}

	public:
	// CFilterPropertyPage
		CFilterPropertyPage(CMainWizard* pWizard) throw() :
			m_Wizard(*pWizard)
		{
			SetHeaderTitles();
		}
		BOOL ApplyFilters(LONG nExceptionCode, const LONG* pnNativeExceptionCode, INT& nAction) const
		{
			CRoCriticalSectionLock DataLock(m_DataCriticalSection);
			return m_FilterArray.Apply(nExceptionCode, pnNativeExceptionCode, nAction);
		}

	// Window message handlers
		LRESULT OnInitDialog(HWND, LPARAM)
		{
			m_bActivating = TRUE;
			_ATLTRY
			{
				CWaitCursor WaitCursor;
				m_TextEdit = GetDlgItem(IDC_MAIN_FILTER_TEXT);
				CLogFont LogFont;
				LogFont.SetMessageBoxFont();
				_tcsncpy_s(LogFont.lfFaceName, DIM(LogFont.lfFaceName), _T("Courier New"), _TRUNCATE);
				m_TextEditFont = LogFont.CreateFontIndirect();
				m_TextEdit.SetFont(m_TextEditFont);
				_W(m_ResetStatic.SubclassWindow(GetDlgItem(IDC_MAIN_FILTER_RESET)));
				_W(m_HelpStatic.SubclassWindow(GetDlgItem(IDC_MAIN_FILTER_HELP)));
				CRoHyperStatic::SetIdealExtentHorizontally(2, &m_ResetStatic, &m_HelpStatic);
				#pragma region Initialize from Registry
				CString sText = GetDefaultText();
				_RegKeyHelper::QueryStringValue(HKEY_CURRENT_USER, REGISTRY_ROOT, _T("Filter"), sText);
				m_TextEdit.SetValue(sText);
				#pragma endregion
				UpdateButtons();
				m_bActivating = FALSE;
			}
			_ATLCATCHALL()
			{
				_Z_EXCEPTION();
			}
			return TRUE;
		}
		LRESULT OnResetStaticAnchorClicked(NMHDR*)
		{
			m_TextEdit.SetValue(GetDefaultText());
			UpdateButtons();
			return 0;
		}
		INT OnSetActive() throw()
		{
			#if defined(_DEBUG) && FALSE
				return -1;
			#endif // defined(_DEBUG)
			_ATLTRY
			{
				UpdateButtons();
			}
			_ATLCATCHALL()
			{
				MessageBeep(MB_ICONERROR);
				return -1;
			}
			return 0;
		}
		BOOL OnQueryCancel()
		{
			return m_Wizard.m_OperationPropertyPage.OnQueryCancel();
		}
		INT OnWizardNext() throw()
		{
			_ATLTRY
			{
				CString sText = m_TextEdit.GetValue();
				CFilterArray FilterArray;
				_ATLTRY
				{
					FilterArray.Initialize(sText);
				}
				_ATLCATCH(Exception)
				{
					_Z_ATLEXCEPTION(Exception);
					AtlExceptionMessageBox(m_hWnd, Exception);
					m_TextEdit.SetFocus();
					return -1;
				}
				_RegKeyHelper::SetStringValue(HKEY_CURRENT_USER, REGISTRY_ROOT, _T("Filter"), sText);
				{
					CRoCriticalSectionLock DataLock(m_DataCriticalSection);
					m_FilterArray = FilterArray;
					m_FilterArray.Trace();
				}
				if(!m_Wizard.m_ProcessPropertyPage.IsSelectedProcessActive())
					return CProcessPropertyPage::IDD;
			}
			_ATLCATCHALL()
			{
				MessageBeep(MB_ICONERROR);
				return -1;
			}
			return 0;
		}
	};

	////////////////////////////////////////////////////////
	// CEmailPropertyPage

	class CEmailPropertyPage :
		public CWizardPropertyPageT<CEmailPropertyPage>
	{
	public:
		enum { IDD = IDD_MAIN_EMAIL };

	BEGIN_MSG_MAP_EX(CEmailPropertyPage)
		CHAIN_MSG_MAP(CWizardPropertyPageT<CEmailPropertyPage>)
		MSG_WM_INITDIALOG(OnInitDialog)
		COMMAND_HANDLER_EX(IDC_MAIN_EMAIL_ENABLED, BN_CLICKED, OnEnabledButtonClicked)
		COMMAND_HANDLER_EX(IDC_MAIN_EMAIL_FROM, EN_CHANGE, OnChanged)
		COMMAND_HANDLER_EX(IDC_MAIN_EMAIL_TO, EN_CHANGE, OnChanged)
		COMMAND_HANDLER_EX(IDC_MAIN_EMAIL_METHOD, CBN_SELENDOK, OnChanged)
		COMMAND_HANDLER_EX(IDC_MAIN_EMAIL_HOST, EN_CHANGE, OnChanged)
		COMMAND_HANDLER_EX(IDC_MAIN_EMAIL_USERNAME, EN_CHANGE, OnChanged)
		COMMAND_HANDLER_EX(IDC_MAIN_EMAIL_PASSWORD, EN_CHANGE, OnChanged)
		NOTIFY_HANDLER_EX(IDC_MAIN_EMAIL_MAXIMALATTACHMENTSIZE, CRoLongEdit::NC_VALUECHANGED, OnChanged)
		REFLECT_NOTIFICATIONS()
	END_MSG_MAP()

	public:

	private:
		CMainWizard& m_Wizard;
		BOOL m_bActivating;
		CButton m_EnabledButton;
		CFont m_BolderFont;
		CRoEdit m_FromEdit;
		CRoEdit m_ToEdit;
		CRoComboBoxT<> m_MethodComboBox;
		CRoEdit m_HostEdit;
		CRoEdit m_UsernameEdit;
		CRoEdit m_PasswordEdit;
		CRoLongEdit m_MaximalAttachmentSizeEdit;
		BOOL m_bEnabled;
		CStringA m_sMessageString;
		ULONG m_nMaximalAttachmentSize;

		VOID UpdateButtons() throw()
		{
			BOOL bAllowNext = m_Wizard.m_ProcessPropertyPage.IsSelectedProcessActive();
			if(m_EnabledButton.GetCheck())
			{
				if(m_ToEdit.GetValue().Trim().IsEmpty())
					bAllowNext = FALSE;
				const INT nMethod = m_MethodComboBox.GetCurSel();
				if(nMethod != 0) // Google Mail
					if(m_HostEdit.GetValue().Trim().IsEmpty())
						bAllowNext = FALSE;
				if(nMethod != 5) // No Authentication
				{
					if(m_UsernameEdit.GetValue().Trim().IsEmpty())
						bAllowNext = FALSE;
					if(m_PasswordEdit.GetValue().Trim().IsEmpty())
						bAllowNext = FALSE;
				}
			}
			SetWizardButtons(PSWIZB_BACK | (bAllowNext ? PSWIZB_NEXT : 0));
		}
		VOID UpdateControls()
		{
			if(m_EnabledButton.GetCheck())
			{
				for(CWindow Window = m_EnabledButton.GetWindow(GW_HWNDNEXT); Window; Window = Window.GetWindow(GW_HWNDNEXT))
					Window.ShowWindow(SW_SHOW);
				const INT nMethod = m_MethodComboBox.GetCurSel();
				m_HostEdit.GetWindow(GW_HWNDPREV).EnableWindow(nMethod != 0); // Google Mail
				m_HostEdit.EnableWindow(nMethod != 0); // Google Mail
				m_UsernameEdit.GetWindow(GW_HWNDPREV).EnableWindow(nMethod != 5); // No Authentication
				m_UsernameEdit.EnableWindow(nMethod != 5); // No Authentication
				m_PasswordEdit.GetWindow(GW_HWNDPREV).EnableWindow(nMethod != 5); // No Authentication
				m_PasswordEdit.EnableWindow(nMethod != 5); // No Authentication
			} else
			{
				for(CWindow Window = m_EnabledButton.GetWindow(GW_HWNDNEXT); Window; Window = Window.GetWindow(GW_HWNDNEXT))
					Window.ShowWindow(SW_HIDE);
			}
			UpdateButtons();
		}

	public:
	// CEmailPropertyPage
		CEmailPropertyPage(CMainWizard* pWizard) throw() :
			m_Wizard(*pWizard)
		{
			SetHeaderTitles();
		}
		CObjectPtr<CMessage> CreateMessage() const
		{
			if(!m_bEnabled)
				return NULL;
			CObjectPtr<CMessage> pMessage;
			pMessage.Construct();
			pMessage->LoadTypeInfo(IDR_EMAILTOOLS);
			pMessage->SetAsString(m_sMessageString);
			return pMessage;
		}
		ULONG GetMaximalAttachmentSize() const throw()
		{
			return m_nMaximalAttachmentSize;
		}

	// Window message handlers
		LRESULT OnInitDialog(HWND, LPARAM)
		{
			m_bActivating = TRUE;
			_ATLTRY
			{
				CWaitCursor WaitCursor;
				m_EnabledButton = GetDlgItem(IDC_MAIN_EMAIL_ENABLED);
				CFontHandle Font(GetFont());
				if(!m_BolderFont)
				{
					CLogFont LogFont;
					_W(Font.GetLogFont(LogFont));
					LogFont.SetBold();
					m_BolderFont = LogFont.CreateFontIndirect();
				}
				m_EnabledButton.SetFont(m_BolderFont);
				m_FromEdit = GetDlgItem(IDC_MAIN_EMAIL_FROM);
				m_ToEdit = GetDlgItem(IDC_MAIN_EMAIL_TO);
				m_MethodComboBox.Initialize(GetDlgItem(IDC_MAIN_EMAIL_METHOD));
				m_MethodComboBox.SetCurSel(0);
				m_HostEdit = GetDlgItem(IDC_MAIN_EMAIL_HOST);
				m_UsernameEdit = GetDlgItem(IDC_MAIN_EMAIL_USERNAME);
				m_PasswordEdit = GetDlgItem(IDC_MAIN_EMAIL_PASSWORD);
				_W(m_MaximalAttachmentSizeEdit.SubclassWindow(GetDlgItem(IDC_MAIN_EMAIL_MAXIMALATTACHMENTSIZE)));
				#pragma region Initialize from Registry
				CRegKey Key;
				Key.Open(HKEY_CURRENT_USER, REGISTRY_ROOT, KEY_READ);
				if(Key)
				{
					m_EnabledButton.SetCheck(_RegKeyHelper::QueryIntegerValue(Key, _T("Email Enabled")));
					CString sMessageString = _RegKeyHelper::QueryStringValue(Key, _T("Email Message Template"));
					if(!sMessageString.IsEmpty())
						_ATLTRY
						{
							CObjectPtr<CMessage> pMessage;
							pMessage.Construct();
							pMessage->LoadTypeInfo(IDR_EMAILTOOLS);
							pMessage->SetAsString(CStringA(sMessageString));
							#pragma region Sender and Recipients
							CComBSTR sSender, sToRecipients;
							__C(pMessage->get_Sender(&sSender));
							__C(pMessage->get_ToRecipients(&sToRecipients));
							m_FromEdit.SetValue(CString(sSender));
							m_ToEdit.SetValue(CString(sToRecipients));
							#pragma endregion 
							CComBSTR sAuthMethods;
							__C(pMessage->get_AuthMethods(&sAuthMethods));
							VARIANT_BOOL bSecureSocketsLayer, bTransportLayerSecurity;
							__C(pMessage->get_SecureSocketsLayer(&bSecureSocketsLayer));
							__C(pMessage->get_TransportLayerSecurity(&bTransportLayerSecurity));
							#pragma region Host and Port
							CComBSTR sHost;
							__C(pMessage->get_ServerHost(&sHost));
							LONG nPort = 0;
							__C(pMessage->get_ServerPort(&nPort));
							CString sHostT(sHost);
							if(nPort)
								sHostT += AtlFormatString(_T(":%d"), nPort);
							m_HostEdit.SetValue(sHostT);
							#pragma endregion 
							#pragma region User Name and Password
							CComBSTR sAuthName, sAuthPassword;
							__C(pMessage->get_AuthName(&sAuthName));
							__C(pMessage->get_AuthPassword(&sAuthPassword));
							m_UsernameEdit.SetValue(CString(sAuthName));
							m_PasswordEdit.SetValue(CString(sAuthPassword));
							#pragma endregion 
							m_MethodComboBox.SetCurSel(0);
							if(bTransportLayerSecurity != ATL_VARIANT_FALSE && sHostT.CompareNoCase(_T("smtp.gmail.com")) == 0)
							{
								//m_MethodComboBox.SetCurSel(0);
							} else
							{
								if(bTransportLayerSecurity != ATL_VARIANT_FALSE)
									m_MethodComboBox.SetCurSel(1);
								else if(bSecureSocketsLayer != ATL_VARIANT_FALSE)
									m_MethodComboBox.SetCurSel(2);
								else if(CString(sAuthMethods).CompareNoCase(_T("cram-md5")) == 0)
									m_MethodComboBox.SetCurSel(3);
								else if(!CString(sAuthName).IsEmpty())
									m_MethodComboBox.SetCurSel(4);
								else
									m_MethodComboBox.SetCurSel(5);
							}
						}
						_ATLCATCHALL()
						{
							_Z_EXCEPTION();
						}
					const DWORD nMaximalAttachmentSize = _RegKeyHelper::QueryIntegerValue(Key, _T("Email Maximal Attachment Minidump File Size"));
					if(nMaximalAttachmentSize)
						m_MaximalAttachmentSizeEdit.SetValue(nMaximalAttachmentSize);
				}
				#pragma endregion
				UpdateControls();
				UpdateButtons();
				m_bActivating = FALSE;
			}
			_ATLCATCHALL()
			{
				_Z_EXCEPTION();
			}
			return TRUE;
		}
		LRESULT OnEnabledButtonClicked(UINT, INT, HWND)
		{
			UpdateControls();
			return 0;
		}
		LRESULT OnChanged(UINT, INT, HWND)
		{
			if(!m_bActivating)
				UpdateControls();
			return 0;
		}
		LRESULT OnChanged(NMHDR*)
		{
			if(!m_bActivating)
				UpdateControls();
			return 0;
		}
		INT OnSetActive() throw()
		{
			_ATLTRY
			{
				UpdateButtons();
			}
			_ATLCATCHALL()
			{
				MessageBeep(MB_ICONERROR);
				return -1;
			}
			return 0;
		}
		BOOL OnQueryCancel()
		{
			return m_Wizard.m_OperationPropertyPage.OnQueryCancel();
		}
		INT OnWizardNext() throw()
		{
			_ATLTRY
			{
				m_bEnabled = m_EnabledButton.GetCheck();
				_RegKeyHelper::SetIntegerValue(HKEY_CURRENT_USER, REGISTRY_ROOT, _T("Email Enabled"), m_bEnabled);
				if(m_bEnabled)
				{
					CObjectPtr<CMessage> pMessage;
					pMessage.Construct();
					pMessage->LoadTypeInfo(IDR_EMAILTOOLS);
					__C(pMessage->put_Sender(CComBSTR(m_FromEdit.GetValue())));
					__C(pMessage->put_ToRecipients(CComBSTR(m_ToEdit.GetValue())));
					// NOTE: 
					// 0 Google Mail (SMTP, TLS Connection)
					// 1 SMTP, TLS Connection, Plain Text Authentication (TLS, PLAIN)
					// 2 SMTP, SSL Connection, Plain Text Authentication (SSL, PLAIN)
					// 3 SMTP, Digest Authentication (CRAM-MD5)
					// 4 SMTP, Plain Text Authentication (PLAIN)
					// 5 SMTP, No Authentication
					const INT nMethod = m_MethodComboBox.GetCurSel();
					__C(pMessage->put_SecureSocketsLayer((nMethod == 2) ? ATL_VARIANT_TRUE : ATL_VARIANT_FALSE));
					__C(pMessage->put_TransportLayerSecurity((nMethod < 2) ? ATL_VARIANT_TRUE : ATL_VARIANT_FALSE));
					if(nMethod != 5)
					{
						__C(pMessage->put_AuthMethods(CComBSTR(_T("plain"))));
						__C(pMessage->put_AuthName(CComBSTR(m_UsernameEdit.GetValue())));
						__C(pMessage->put_AuthPassword(CComBSTR(m_PasswordEdit.GetValue())));
					}
					switch(nMethod)
					{
					case 0:
						__C(pMessage->put_ServerHost(CComBSTR(_T("smtp.gmail.com"))));
						break;
					default:
						CString sHost = m_HostEdit.GetValue();
						sHost.Trim();
						const INT nPortPosition = sHost.Find(_T(":"));
						if(nPortPosition >= 0)
						{
							INT nPort;
							__D(AtlStringToInteger(sHost.Mid(nPortPosition + 1), nPort), E_UNNAMED);
							__C(pMessage->put_ServerPort(nPort));
							sHost = sHost.Left(nPortPosition);
						}
						__C(pMessage->put_ServerHost(CComBSTR(sHost)));
						break;
					}
					switch(nMethod)
					{
					case 3:
						__C(pMessage->put_AuthMethods(CComBSTR(_T("cram-md5"))));
						break;
					}
					m_sMessageString = pMessage->GetAsString();
					m_nMaximalAttachmentSize = (ULONG) m_MaximalAttachmentSizeEdit.GetValue();
					_RegKeyHelper::SetStringValue(HKEY_CURRENT_USER, REGISTRY_ROOT, _T("Email Message Template"), CString(m_sMessageString));
					_RegKeyHelper::SetIntegerValue(HKEY_CURRENT_USER, REGISTRY_ROOT, _T("Email Maximal Attachment Minidump File Size"), (DWORD) m_nMaximalAttachmentSize);
				}
				if(!m_Wizard.m_ProcessPropertyPage.IsSelectedProcessActive())
					return CProcessPropertyPage::IDD;
			}
			_ATLCATCHALL()
			{
				MessageBeep(MB_ICONERROR);
				return -1;
			}
			return 0;
		}
	};

	////////////////////////////////////////////////////////
	// COperationPropertyPage

	class COperationPropertyPage :
		public CWizardPropertyPageT<COperationPropertyPage>,
		public CWindowWithPrivateMessagesT<COperationPropertyPage>
	{
		typedef CThreadT<COperationPropertyPage> CThread;

	public:
		enum { IDD = IDD_MAIN_OPERATION };

	BEGIN_MSG_MAP_EX(COperationPropertyPage)
		CHAIN_MSG_MAP(CWizardPropertyPageT<COperationPropertyPage>)
		CHAIN_MSG_MAP(CWindowWithPrivateMessagesT<COperationPropertyPage>)
		MSG_WM_INITDIALOG(OnInitDialog)
		MSG_WM_DESTROY(OnDestroy)
		MESSAGE_HANDLER_EX(WM_UPDATELOGTEXT, OnUpdateLogText)
		MESSAGE_HANDLER_EX(WM_DEBUGTHREADENDED, OnDebugThreadEnded)
		NOTIFY_HANDLER_EX(IDC_MAIN_OPERATION_WRITEMINIDUMPNOW, CRoHyperStatic::NC_ANCHORCLICKED, OnWriteMinidumpNowStaticAnchorClicked)
		NOTIFY_HANDLER_EX(IDC_MAIN_OPERATION_OPENMINIDUMPFILEDIRECTORY, CRoHyperStatic::NC_ANCHORCLICKED, OnOpenMinidumpFileDirectoryStaticAnchorClicked)
		REFLECT_NOTIFICATIONS()
	END_MSG_MAP()

	public:

		////////////////////////////////////////////////////
		// Message Identifiers

		enum
		{
			WM_FIRST = WM_APP,
			WM_UPDATELOGTEXT,
			WM_DEBUGTHREADENDED,
		};

	private:
		CMainWizard& m_Wizard;
		BOOL m_bActivating;
		CPath m_sDataDirectory;
		CRoEdit m_LogEdit;
		CRoHyperStatic m_WriteMinidumpNowStatic;
		CRoHyperStatic m_OpenMinidumpFileDirectoryStatic;
		mutable CRoCriticalSection m_LogTextCriticalSection;
		CString m_sLogText;
		HRESULT m_nResult;
		CObjectPtr<CThread> m_pDebugThread;
		UINT m_nExceptionIndex;
		BOOL m_bSkipInitialException;
		UINT m_nUserIndex;
		CObjectPtr<CMessageQueue> m_pMessageQueue;

		VOID UpdateButtons() throw()
		{
			SetWizardButtons(PSWIZB_BACK | PSWIZB_NEXT);
		}
		VOID AppendLog(const CString& sText)
		{
			if(sText.IsEmpty())
				return;
			CRoCriticalSectionLock LogTextLock(m_LogTextCriticalSection);
			const BOOL bLogTextEmpty = m_sLogText.IsEmpty();
			m_sLogText += sText;
			if(bLogTextEmpty)
				PostPrivateMessage(WM_UPDATELOGTEXT);
		}
		DWORD DebugThreadProc(CThread* pThread, CEvent& InitializationEvent, CEvent& TerminationEvent)
		{
			// ASSU: Windows XP+
			const CProcessPropertyPage::CProcessData& ProcessData = m_Wizard.m_ProcessPropertyPage.GetSelectedProcessData();
			const DWORD nProcessIdentifier = ProcessData.m_nIdentifier;
			__E(DebugActiveProcess(nProcessIdentifier));
			_ATLTRY
			{
				CErrorMode LocalErrorMode(~SEM_FAILCRITICALERRORS, SEM_FAILCRITICALERRORS);
				_W(DebugSetProcessKillOnExit(FALSE));
				CHandle Process(OpenProcess(PROCESS_ALL_ACCESS, FALSE, nProcessIdentifier));
				__E(Process);
				TCHAR pszProcessFilePath[MAX_PATH] = { 0 };
				_W(GetModuleFileNameEx(Process, NULL, pszProcessFilePath, DIM(pszProcessFilePath)));
				LPCTSTR pszProcessFileName = FindFileName(pszProcessFilePath);
				_W(InitializationEvent.Set());
				CStackPointer StackPointer;
				for(; ; )
				{
					_A(StackPointer.Check()); StackPointer;
					{
						const DWORD nWaitResult = WaitForSingleObject(TerminationEvent, 0);
						_Z5(atlTraceSync, 5, _T("nWaitResult 0x%x\n"), nWaitResult);
						_A(nWaitResult == WAIT_OBJECT_0 || nWaitResult == WAIT_TIMEOUT);
						if(nWaitResult != WAIT_TIMEOUT)
							break;
					}
					DEBUG_EVENT DebugEvent;
					ZeroMemory(&DebugEvent, sizeof DebugEvent);
					static const ULONG g_nTimeout = 1000; // 1 second
					const BOOL bWaitResult = WaitForDebugEvent(&DebugEvent, g_nTimeout);
					if(!bWaitResult)
						continue;
					_Z4(atlTraceGeneral, 4, _T("Debug event, DebugEvent.dwDebugEventCode %d, .dwProcessId %d, .dwThreadId %d\n"), DebugEvent.dwDebugEventCode, DebugEvent.dwProcessId, DebugEvent.dwThreadId);
					// TODO: Handle load/unload DLL, output debug strings (configurable)
					CObjectPtr<CMessage> pMessage;
					CPath sMessageAttachmentPath;
					BOOL bExitProcess = FALSE;
					switch(DebugEvent.dwDebugEventCode)
					{
					#pragma region CREATE_PROCESS_DEBUG_EVENT
					case CREATE_PROCESS_DEBUG_EVENT:
						{
							const CREATE_PROCESS_DEBUG_INFO& DebugInformation = DebugEvent.u.CreateProcessInfo;
						}
						break;
					#pragma endregion 
					#pragma region EXIT_PROCESS_DEBUG_EVENT
					case EXIT_PROCESS_DEBUG_EVENT:
						{
							const EXIT_PROCESS_DEBUG_INFO& DebugInformation = DebugEvent.u.ExitProcess;
							bExitProcess = TRUE;
							break;
						}
						break;
					#pragma endregion 
					#pragma region EXCEPTION_DEBUG_EVENT
					case EXCEPTION_DEBUG_EVENT:
						{
							const EXCEPTION_DEBUG_INFO& DebugInformation = DebugEvent.u.Exception;
							_Z4(atlTraceGeneral, 4, _T(".ExceptionCode %d, .ExceptionFlags %d, .dwFirstChance %d\n"), DebugInformation.ExceptionRecord.ExceptionCode, DebugInformation.ExceptionRecord.ExceptionFlags, DebugInformation.dwFirstChance);
							#pragma region Skip Initial Debugger Attachment Exception
							if(DebugInformation.ExceptionRecord.ExceptionCode == 0x80000003 && m_bSkipInitialException)
							{
								AppendLog(AtlFormatString(_T("Skipping initial debugger attachment exception (0x%08X)\r\n"), DebugInformation.ExceptionRecord.ExceptionCode));
								m_bSkipInitialException = FALSE;
								break;
							}
							#pragma endregion
							#pragma region Skip "SetThreadName" Exception
							// NOTE: See http://msdn.microsoft.com/en-us/library/xcb2z8hs.aspx, not a true exception, but an awful patch to set thread name
							if(DebugInformation.ExceptionRecord.ExceptionCode == 0x406D1388)
							{
								AppendLog(AtlFormatString(_T("Skipping thread name setting exception (0x%08X)\r\n"), DebugInformation.ExceptionRecord.ExceptionCode));
								break;
							}
							#pragma endregion
							#pragma region Apply Exception Filter
							const LONG nExceptionCode = DebugInformation.ExceptionRecord.ExceptionCode;
							const LONG* pnNativeExceptionCode = NULL;
							LONG nNativeExceptionCode;
							if(nExceptionCode == 0xE06D7363 && DebugInformation.ExceptionRecord.NumberParameters >= 2)
							{
								SIZE_T nReadDataSize = 0;
								if(ReadProcessMemory(Process, (const VOID*) DebugInformation.ExceptionRecord.ExceptionInformation[1], &nNativeExceptionCode, sizeof nNativeExceptionCode, &nReadDataSize))
									if(nReadDataSize == sizeof nNativeExceptionCode)
										pnNativeExceptionCode = &nNativeExceptionCode;
							}
							INT nAction = 1;
							m_Wizard.m_FilterPropertyPage.ApplyFilters(nExceptionCode, pnNativeExceptionCode, nAction);
							if(nAction < 1)
							{
								if(pnNativeExceptionCode)
									AppendLog(AtlFormatString(_T("Skipping C++ exception (0x%08X, 0x%08X)\r\n"), nExceptionCode, nNativeExceptionCode));
								else
									AppendLog(AtlFormatString(_T("Skipping exception (0x%08X)\r\n"), nExceptionCode));
								break;
							}
							#pragma endregion
							_ATLTRY
							{
								MINIDUMP_EXCEPTION_INFORMATION ExceptionInformation;
								ZeroMemory(&ExceptionInformation, sizeof ExceptionInformation);
								ExceptionInformation.ThreadId = DebugEvent.dwThreadId;
								EXCEPTION_POINTERS ExceptionPointers;
								ZeroMemory(&ExceptionPointers, sizeof ExceptionPointers);
								ExceptionPointers.ExceptionRecord = const_cast<EXCEPTION_RECORD*>(&DebugInformation.ExceptionRecord);
								CONTEXT Context = { CONTEXT_ALL };
								CHandle Thread(OpenThread(THREAD_ALL_ACCESS, FALSE, DebugEvent.dwThreadId));
								if(Thread)
									if(GetThreadContext(Thread, &Context))
										ExceptionPointers.ContextRecord = &Context;
								ExceptionInformation.ExceptionPointers = &ExceptionPointers;
								ExceptionInformation.ClientPointers = FALSE;
								#pragma region File Name
								CString sName;
								sName.AppendFormat(_T("%s-%d-%03d"), pszProcessFileName, nProcessIdentifier, m_nExceptionIndex++);
								sName.AppendFormat(_T("-%08x"), DebugInformation.ExceptionRecord.ExceptionCode);
								HRESULT nNativeExceptionCode = S_OK;
								if(DebugInformation.ExceptionRecord.ExceptionCode == 0xE06D7363 && DebugInformation.ExceptionRecord.NumberParameters >= 2)
								{
									SIZE_T nReadDataSize = 0;
									if(ReadProcessMemory(Process, (const VOID*) DebugInformation.ExceptionRecord.ExceptionInformation[1], &nNativeExceptionCode, sizeof nNativeExceptionCode, &nReadDataSize))
										if(nReadDataSize == sizeof nNativeExceptionCode)
											sName.AppendFormat(_T("-%08x"), nNativeExceptionCode);
								}
								sName.Append(_T(".dmp"));
								CPath sPath;
								sPath.Combine(m_sDataDirectory, sName);
								#pragma endregion
								CAtlFile File;
								__C(File.Create(sPath, GENERIC_WRITE, CREATE_ALWAYS, FILE_SHARE_READ));
								const MINIDUMP_TYPE Type = m_Wizard.m_MinidumpTypePropertyPage.GetMinidumpType();
								__E(MiniDumpWriteDump(Process, nProcessIdentifier, File, Type, ExceptionPointers.ContextRecord ? &ExceptionInformation : NULL, NULL, NULL));
								AppendLog(AtlFormatString(_T("Written exception minidump into file %s\r\n"), sName));
								#pragma region Message Notification
								_ATLTRY
								{
									pMessage = m_Wizard.m_EmailPropertyPage.CreateMessage();
									if(pMessage)
									{
										TCHAR pszComputerName[MAX_COMPUTERNAME_LENGTH] = { 0 };
										DWORD nComputerNameLength = DIM(pszComputerName);
										_W(GetComputerName(pszComputerName, &nComputerNameLength));
										CString sSubject = AtlFormatString(_T("Exception 0x%08X in %s on %s"), DebugInformation.ExceptionRecord.ExceptionCode, pszProcessFileName, pszComputerName);
										CString sBody;
										sBody += _T("Hi,") _T("\r\n")
											_T("\r\n");
										sBody += AtlFormatString(_T("This is Log Process Exceptions notifying on exception occurred:") _T("\r\n")
											_T("\r\n"), 
											pszComputerName);
										sBody += AtlFormatString(_T(" * ") _T("Code: 0x%08X") _T("\r\n"), DebugInformation.ExceptionRecord.ExceptionCode);
										if(nNativeExceptionCode != S_OK)
											sBody += AtlFormatString(_T(" * ") _T("Native ATL Code: 0x%08X") _T("\r\n"), nNativeExceptionCode);
										sBody += AtlFormatString(_T(" * ") _T("Local Time: %s") _T("\r\n"), _StringHelper::FormatDateTime());
										sBody += AtlFormatString(_T(" * ") _T("Computer Name: %s") _T("\r\n"), pszComputerName);
										__C(pMessage->put_Subject(CComBSTR(sSubject)));
										__C(pMessage->put_Body(CComBSTR(sBody)));
										sMessageAttachmentPath = sPath;
									}
								}
								_ATLCATCHALL()
								{
									_Z_EXCEPTION();
									pMessage.Release();
								}
								#pragma endregion 
							}
							_ATLCATCHALL()
							{
								_Z_EXCEPTION();
							}
						}
						break;
					#pragma endregion
					}
					__E(ContinueDebugEvent(DebugEvent.dwProcessId, DebugEvent.dwThreadId, DBG_EXCEPTION_NOT_HANDLED));
					#pragma region Message Notification (Delivery)
					if(pMessage)
						_ATLTRY
						{
							// WARN: Attaching a minidump file requires it being closed by API (should we do ContinueDebugEvent and/or wait?)
							if(_tcslen(sMessageAttachmentPath))
								_ATLTRY
								{
									ULONGLONG nFileSize;
									{
										CAtlFile File;
										__C(File.Create(sMessageAttachmentPath, GENERIC_READ, FILE_SHARE_READ, OPEN_EXISTING));
										__C(File.GetSize(nFileSize));
									}
									if((ULONG) (nFileSize >> 20) < m_Wizard.m_EmailPropertyPage.GetMaximalAttachmentSize())
									{
										CComBSTR sBody;
										__C(pMessage->get_Body(&sBody));
										CString sBodyT(sBody);
										sBodyT += _T("\r\n")
											_T("Minidump attached.") _T("\r\n");
										__C(pMessage->put_Body(CComBSTR(sBodyT)));
										CObjectPtr<CMessage::CComAttachment> pAttachment = pMessage->GetAttachments()->Add();
										__C(pAttachment->put_Name(CComBSTR((LPCTSTR) sMessageAttachmentPath + sMessageAttachmentPath.FindFileName())));
										__C(pAttachment->put_Type(CComBSTR(_T("application/x-mdmp"))));
										__C(pAttachment->LoadFromFile(CComBSTR(sMessageAttachmentPath)));
									}
								}
								_ATLCATCHALL()
								{
									_Z_EXCEPTION();
								}
							if(!m_pMessageQueue)
								m_pMessageQueue.Construct();
							m_pMessageQueue->Add(pMessage);
						}
						_ATLCATCHALL()
						{
							_Z_EXCEPTION();
						}
					#pragma endregion 
					if(bExitProcess)
						break;
					#pragma endregion 
				}
			}
			_ATLCATCHALL()
			{
				_W(DebugActiveProcessStop(nProcessIdentifier));
				_ATLRETHROW;
			}
			_W(DebugActiveProcessStop(nProcessIdentifier));
			PostPrivateMessage(WM_DEBUGTHREADENDED);
			return 0;
		}
		VOID AttachDebug()
		{
			_A(!m_pDebugThread);
			m_nUserIndex = 0;
			const CProcessPropertyPage::CProcessData& ProcessData = m_Wizard.m_ProcessPropertyPage.GetSelectedProcessData();
			const DWORD nProcessIdentifier = ProcessData.m_nIdentifier;
			CObjectPtr<CThread> pDebugThread;
			__E(pDebugThread.Construct()->Initialize(this, &CMainWizard::COperationPropertyPage::DebugThreadProc));
			m_pDebugThread = pDebugThread;
			AppendLog(AtlFormatString(_T("Attached to process %d\r\n"), nProcessIdentifier));
		}
		VOID DetachDebug() throw()
		{
			if(m_pDebugThread)
			{
				AppendLog(AtlFormatString(_T("Detached from process\r\n")));
				m_pDebugThread = NULL;
			}
		}

	public:
	// COperationPropertyPage
		COperationPropertyPage(CMainWizard* pWizard) throw() :
			m_Wizard(*pWizard),
			m_nResult(S_FALSE),
			m_nExceptionIndex(0)
		{
			SetHeaderTitles();
		}
		HRESULT GetResult() const throw()
		{
			return m_nResult;
		}
		BOOL IsActive() const throw()
		{
			return m_pDebugThread != NULL;
		}

	// Window message handlers
		LRESULT OnInitDialog(HWND, LPARAM)
		{
			m_bActivating = TRUE;
			_ATLTRY
			{
				//CWaitCursor WaitCursor;
				TCHAR pszModuleDirectory[MAX_PATH] = { 0 };
				_W(GetModuleFileName(_AtlBaseModule.GetModuleInstance(), pszModuleDirectory, DIM(pszModuleDirectory)));
				_W(RemoveFileSpec(pszModuleDirectory));
				m_sDataDirectory = pszModuleDirectory;
				m_LogEdit = GetDlgItem(IDC_MAIN_OPERATION_LOG);
				_W(m_WriteMinidumpNowStatic.SubclassWindow(GetDlgItem(IDC_MAIN_OPERATION_WRITEMINIDUMPNOW)));
				_W(m_OpenMinidumpFileDirectoryStatic.SubclassWindow(GetDlgItem(IDC_MAIN_OPERATION_OPENMINIDUMPFILEDIRECTORY)));
				CRoHyperStatic::SetIdealExtentHorizontally(2, &m_WriteMinidumpNowStatic, &m_OpenMinidumpFileDirectoryStatic);
				UpdateButtons();
				m_bActivating = FALSE;
			}
			_ATLCATCHALL()
			{
				_Z_EXCEPTION();
			}
			return TRUE;
		}
		LRESULT OnDestroy()
		{
			DetachDebug();
			return 0;
		}
		INT OnSetActive() throw()
		{
			_ATLTRY
			{
				if(!m_pDebugThread)
					_ATLTRY
					{
						CWaitCursor WaitCursor;
						const CProcessPropertyPage::CProcessData& ProcessData = m_Wizard.m_ProcessPropertyPage.GetSelectedProcessData();
						AppendLog(AtlFormatString(_T("Using directory \"%s\" for minidump files...\r\n"), m_sDataDirectory));
						AppendLog(AtlFormatString(_T("Attaching to process %d (%s)...\r\n"), ProcessData.m_nIdentifier, ProcessData.GetFileName()));
						EnableTokenDebugPrivilege();
						m_bSkipInitialException = TRUE;
						AttachDebug();
					}
					_ATLCATCH(Exception)
					{
						_Z_ATLEXCEPTION(Exception);
						m_nResult = Exception;
						_ATLRETHROW;
					}
				UpdateButtons();
			}
			_ATLCATCHALL()
			{
				MessageBeep(MB_ICONERROR);
				return -1;
			}
			return 0;
		}
		LRESULT OnUpdateLogText(UINT, WPARAM, LPARAM)
		{
			CString sLogText;
			{
				CRoCriticalSectionLock LogTextLock(m_LogTextCriticalSection);
				if(m_sLogText.IsEmpty())
					return 0;
				sLogText = m_LogEdit.GetValue() + m_sLogText;
				m_sLogText.Empty();
			}
			m_LogEdit.SetValue(sLogText);
			m_LogEdit.SetSel(sLogText.GetLength(), -1, FALSE);
			return 0;
		}
		LRESULT OnDebugThreadEnded(UINT, WPARAM, LPARAM)
		{
			DetachDebug();
			return 0;
		}
		LRESULT OnWriteMinidumpNowStaticAnchorClicked(NMHDR*)
		{
			CWaitCursor WaitCursor;
			CString sName;
			const CProcessPropertyPage::CProcessData& ProcessData = m_Wizard.m_ProcessPropertyPage.GetSelectedProcessData();
			LPCTSTR pszProcessFileName = (LPCTSTR) ProcessData.m_sFilePath + ProcessData.m_sFilePath.FindFileName();
			const DWORD nProcessIdentifier = ProcessData.m_nIdentifier;
			sName.AppendFormat(_T("%s-%d-User-%03d"), pszProcessFileName, nProcessIdentifier, m_nUserIndex++);
			sName.Append(_T(".dmp"));
			CPath sPath;
			sPath.Combine(m_sDataDirectory, sName);
			CAtlFile File;
			__C(File.Create(sPath, GENERIC_WRITE, CREATE_ALWAYS, FILE_SHARE_READ));
			const MINIDUMP_TYPE Type = m_Wizard.m_MinidumpTypePropertyPage.GetMinidumpType();
			__E(MiniDumpWriteDump(ProcessData.m_Handle, nProcessIdentifier, File, Type, NULL, NULL, NULL));
			AppendLog(AtlFormatString(_T("Written exception minidump into file %s per user request\r\n"), sName));
			return 0;
		}
		LRESULT OnOpenMinidumpFileDirectoryStaticAnchorClicked(NMHDR*)
		{
			CWaitCursor WaitCursor;
			__E(ShellExecute(GetPropertySheet(), NULL, m_sDataDirectory, NULL, NULL, SW_SHOWNORMAL) > (HINSTANCE) HINSTANCE_ERROR);
			return 0;
		}
		BOOL OnQueryCancel()
		{
			if(IsActive())
				if(AtlMessageBoxEx(m_Wizard, _T("Debug session is active, would you like to stop debugging and exit from the wizard?"), IDS_CONFIRMATION, MB_ICONQUESTION | MB_YESNO | MB_DEFBUTTON2) != IDYES)
					return TRUE;
			return FALSE;
		}
		INT OnWizardBack() throw()
		{
			_ATLTRY
			{
				if(!IsActive())
				{
					// NOTE: If we are to go back after debugging session is complete, start with new process selection
					_W(m_Wizard.m_ProcessPropertyPage.PostMessage(WM_COMMAND, MAKEWPARAM(IDC_MAIN_REFRESHPROCESSES, BN_CLICKED)));
					return IDD_MAIN_PROCESS;
				}
			}
			_ATLCATCHALL()
			{
				MessageBeep(MB_ICONERROR);
				return -1;
			}
			return 0;
		}
		INT OnWizardNext() throw()
		{
			_ATLTRY
			{
				if(IsActive())
					if(AtlMessageBoxEx(m_Wizard, _T("Debug session is still active, would you like to finish?"), IDS_CONFIRMATION, MB_ICONQUESTION | MB_YESNO) != IDYES)
						return -1;
			}
			_ATLCATCHALL()
			{
				MessageBeep(MB_ICONERROR);
				return -1;
			}
			return 0;
		}
	};

	////////////////////////////////////////////////////////
	// CCompletionPropertyPage

	class CCompletionPropertyPage :
		public CWizardPropertyPageT<CCompletionPropertyPage>
	{
	public:
		enum { IDD = IDD_MAIN_COMPLETION };

	BEGIN_MSG_MAP_EX(CCompletionPropertyPage)
		CHAIN_MSG_MAP(CWizardPropertyPageT<CCompletionPropertyPage>)
		MSG_WM_INITDIALOG(OnInitDialog)
		NOTIFY_HANDLER_EX(IDC_MAIN_OPERATION_OPENMINIDUMPFILEDIRECTORY, CRoHyperStatic::NC_ANCHORCLICKED, OnOpenMinidumpFileDirectoryStaticAnchorClicked)
		REFLECT_NOTIFICATIONS()
	END_MSG_MAP()

	private:
		CMainWizard& m_Wizard;
		CRoHyperStatic m_OpenMinidumpFileDirectoryStatic;

	public:
	// CCompletionPropertyPage
		CCompletionPropertyPage(CMainWizard* pWizard) throw() :
			m_Wizard(*pWizard)
		{
			m_psp.dwFlags |= PSP_HIDEHEADER;
		}

	// Window message handlers
		LRESULT OnInitDialog(HWND, LPARAM) throw()
		{
			CStatic(GetDlgItem(IDC_WIZARDCOMPLETION_ICON)).SetIcon(AtlLoadSysIcon(IDI_INFORMATION));
			CStatic(GetDlgItem(IDC_WIZARDCOMPLETION_TITLE)).SetFont(m_Wizard.GetMessageTitleFont());
			_W(m_OpenMinidumpFileDirectoryStatic.SubclassWindow(GetDlgItem(IDC_MAIN_OPERATION_OPENMINIDUMPFILEDIRECTORY)));
			_W(m_OpenMinidumpFileDirectoryStatic.SetWindowPos(NULL, CRect(CPoint(0, 0), m_OpenMinidumpFileDirectoryStatic.GetIdealExtent()), SWP_NOMOVE | SWP_NOZORDER | SWP_NOACTIVATE));
			return TRUE;
		}
		INT OnSetActive() throw()
		{
			SetWizardButtons(PSWIZB_FINISH);
			m_Wizard.GetDlgItem(IDCANCEL).EnableWindow(FALSE);
			const HRESULT nResult = m_Wizard.m_OperationPropertyPage.GetResult();
			if(FAILED(nResult))
			{
				CStatic(GetDlgItem(IDC_WIZARDCOMPLETION_ICON)).SetIcon(AtlLoadSysIcon(IDI_ERROR));
				GetDlgItem(IDC_WIZARDCOMPLETION_RESULT).SetWindowText(AtlFormatString(_T("Error: %s (0x%08x)"), AtlFormatSystemMessage(nResult), nResult));
			}
			return 0;
		}
		LRESULT OnOpenMinidumpFileDirectoryStaticAnchorClicked(NMHDR* pHeader)
		{
			return m_Wizard.m_OperationPropertyPage.OnOpenMinidumpFileDirectoryStaticAnchorClicked(pHeader);
		}
	};

private:
	CFont m_LargerBoldFont;
	CIntroductionPropertyPage m_IntroductionPropertyPage;
	CProcessPropertyPage m_ProcessPropertyPage;
	CMinidumpTypePropertyPage m_MinidumpTypePropertyPage;
	CFilterPropertyPage m_FilterPropertyPage;
	CEmailPropertyPage m_EmailPropertyPage;
	COperationPropertyPage m_OperationPropertyPage;
	CCompletionPropertyPage m_CompletionPropertyPage;

	const CFont& CreateLargerBoldFont()
	{
		CFontHandle BaseFont = AtlGetDefaultGuiFont();
		CLogFont LogFont;
		_W(BaseFont.GetLogFont(LogFont));
		LogFont.SetBold();
		LogFont.MakeLarger(2);
		m_LargerBoldFont = LogFont.CreateFontIndirect();
		return m_LargerBoldFont;
	}

public:
// CMainWizard
	static BOOL EnableTokenDebugPrivilege()
	{
		_ATLTRY
		{
			CAccessToken Token;
	        if(!Token.GetThreadToken(TOKEN_QUERY | TOKEN_ADJUST_PRIVILEGES))
			{
				const HRESULT nResult = AtlHresultFromLastError();
				__D(nResult == HRESULT_FROM_WIN32(ERROR_NO_TOKEN), nResult);
				__E(Token.GetProcessToken(TOKEN_QUERY | TOKEN_ADJUST_PRIVILEGES));
			}
			__E(Token.EnablePrivilege(SE_DEBUG_NAME));
		}
		_ATLCATCHALL()
		{
			_Z_EXCEPTION();
			return FALSE;
		}
		return TRUE;
	}
	CMainWizard() :
		CWizardPropertySheetT<CMainWizard>(),
		m_IntroductionPropertyPage(this),
		m_ProcessPropertyPage(this),
		m_MinidumpTypePropertyPage(this),
		m_FilterPropertyPage(this),
		m_EmailPropertyPage(this),
		m_OperationPropertyPage(this),
		m_CompletionPropertyPage(this)
	{
		SetCaption(AtlLoadString(IDS_MAINWIZARD_CAPTION));
		SetHeader(MAKEINTRESOURCE(IDB_WIZARDHEADER));
		SetWatermark(MAKEINTRESOURCE(IDB_WIZARDWATERMARK));
		CreateLargerBoldFont();
		AddPage(m_IntroductionPropertyPage);
		AddPage(m_ProcessPropertyPage);
		AddPage(m_MinidumpTypePropertyPage);
		AddPage(m_FilterPropertyPage);
		AddPage(m_EmailPropertyPage);
		AddPage(m_OperationPropertyPage);
		AddPage(m_CompletionPropertyPage);
	}
	const CFont& GetLargerBoldFont() const throw()
	{
		return m_LargerBoldFont;
	}

// Window message handelrs
	LRESULT OnSysCommand(UINT nCommand, CPoint)
	{
		switch(nCommand)
		{
		case ID_APP_ABOUT:
			{
				CAboutDialog Dialog;
				Dialog.DoModal(m_hWnd);
			}
			break;
		default:
			SetMsgHandled(FALSE);
		}
		return 0;
	}
};
