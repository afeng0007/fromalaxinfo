////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2011
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#pragma once

#include <atlctrlx.h>
#include <atlsplit.h>
#include "rofiles.h"
#include "AboutDialog.h"

////////////////////////////////////////////////////////////
// CRegistrationPropertySheet

class CRegistrationPropertySheet :
	public CPropertySheetT<CRegistrationPropertySheet>
{
public:

BEGIN_MSG_MAP_EX(CRegistrationPropertySheet)
	CHAIN_MSG_MAP(CPropertySheet)
	MSG_WM_SYSCOMMAND(OnSysCommand)
END_MSG_MAP()

public:

	////////////////////////////////////////////////////////
	// CRegistrationPropertyPage

	class CRegistrationPropertyPage :
		public CPropertyPageT<CRegistrationPropertyPage>,
		//public CDialogResize<CRegistrationPropertyPage>,
		public CWindowWithPrivateMessagesT<CRegistrationPropertyPage>
	{
	public:
		enum { IDD = IDD_REGISTRATION_REGISTRATION_PROPERTYPAGE };

	BEGIN_MSG_MAP_EX(CRegistrationPropertyPage)
		CHAIN_MSG_MAP(CPropertyPage)
		//CHAIN_MSG_MAP(CDialogResize<CRegistrationPropertyPage>)
		CHAIN_MSG_MAP(CWindowWithPrivateMessages)
		MSG_WM_INITDIALOG(OnInitDialog)
		COMMAND_ID_HANDLER_EX(IDC_REGISTRATION_REGISTRATION_REGISTER, OnRegister)
		COMMAND_ID_HANDLER_EX(IDC_REGISTRATION_REGISTRATION_UNREGISTER, OnUnregister)
		COMMAND_ID_HANDLER_EX(IDC_REGISTRATION_REGISTRATION_USERREGISTER, OnUserRegister)
		COMMAND_ID_HANDLER_EX(IDC_REGISTRATION_REGISTRATION_USERUNREGISTER, OnUserUnregister)
		REFLECT_NOTIFICATIONS()
	END_MSG_MAP()

	private:
		CRegistrationPropertySheet& m_PropertySheet;
		CRoEdit m_StatusEdit;
		CRoEdit m_PathEdit;
		CButton m_RegisterButton;
		CButton m_UnregisterButton;
		CRoEdit m_UserStatusEdit;
		CRoEdit m_UserPathEdit;
		CButton m_UserRegisterButton;
		CButton m_UserUnregisterButton;
		//CRoIconStatic m_UserNoteStatic;
		CRoArrayT<CString> m_StatusArray;
		CPath m_sPath;
		CPath m_sUserPath;

	public:
	// CRegistrationPropertyPage
		CRegistrationPropertyPage(CRegistrationPropertySheet* pPropertySheet) throw() :
			m_PropertySheet(*pPropertySheet)
		{
		}
		VOID UpdateControls()
		{
			_A(_pAtlModule);
			const CPath& sLocalPath = GetPath();
			#pragma region System
			CPath sPath = FindTypeLibraryPath(HKEY_LOCAL_MACHINE);
			const BOOL bPathEmpty = _tcslen(sPath) == 0;
			m_StatusEdit.SetValue(m_StatusArray[bPathEmpty ? 0 : 1]);
			m_PathEdit.SetValue(sPath);
			m_PathEdit.GetWindow(GW_HWNDPREV).EnableWindow(!bPathEmpty);
			m_PathEdit.EnableWindow(!bPathEmpty);
			m_RegisterButton.EnableWindow(bPathEmpty || _tcsicmp(sPath, sLocalPath));
			m_UnregisterButton.EnableWindow(!bPathEmpty);
			m_sPath = sPath;
			#pragma endregion 
			#pragma region Per-User
			CPath sUserPath = FindTypeLibraryPath(HKEY_CURRENT_USER);
			const BOOL bUserPathEmpty = _tcslen(sUserPath) == 0;
			m_UserStatusEdit.SetValue(m_StatusArray[bUserPathEmpty ? 0 : 1]);
			m_UserPathEdit.SetValue(sUserPath);
			m_UserPathEdit.GetWindow(GW_HWNDPREV).EnableWindow(!bUserPathEmpty);
			m_UserPathEdit.EnableWindow(!bUserPathEmpty);
			m_UserRegisterButton.EnableWindow(bUserPathEmpty || _tcsicmp(sUserPath, sLocalPath));
			m_UserUnregisterButton.EnableWindow(!bUserPathEmpty);
			m_sUserPath = sUserPath;
			#pragma endregion 
		}

	// CDialogResize				
			
	// Window message handlers
		LRESULT OnInitDialog(HWND, LPARAM)
		{
			_ATLTRY
			{
				CWaitCursor WaitCursor;
				m_StatusEdit = GetDlgItem(IDC_REGISTRATION_REGISTRATION_STATUS);
				m_PathEdit = GetDlgItem(IDC_REGISTRATION_REGISTRATION_PATH);
				m_RegisterButton = GetDlgItem(IDC_REGISTRATION_REGISTRATION_REGISTER);
				m_UnregisterButton = GetDlgItem(IDC_REGISTRATION_REGISTRATION_UNREGISTER);
				m_UserStatusEdit = GetDlgItem(IDC_REGISTRATION_REGISTRATION_USERSTATUS);
				m_UserPathEdit = GetDlgItem(IDC_REGISTRATION_REGISTRATION_USERPATH);
				m_UserRegisterButton = GetDlgItem(IDC_REGISTRATION_REGISTRATION_USERREGISTER);
				m_UserUnregisterButton = GetDlgItem(IDC_REGISTRATION_REGISTRATION_USERUNREGISTER);
				//_W(m_UserNoteStatic.SubclassWindow(GetDlgItem(IDC_REGISTRATION_REGISTRATION_USERNOTE)));
				//m_UserNoteStatic.SetIdealHeight();
				if(GetOsVersion() >= 0x00060000) // Windows Vista or Windows Server 2008
				{
					if(!IsAdministrator())
					{
						m_RegisterButton.SetElevationRequiredState(TRUE);
						m_UnregisterButton.SetElevationRequiredState(TRUE);
						// NOTE: Even per-user registration needs elevation, since we are hooking COM classes
						m_UserRegisterButton.SetElevationRequiredState(TRUE);
						m_UserUnregisterButton.SetElevationRequiredState(TRUE);
					}
				}
				_StringHelper::GetCommaSeparatedItems(AtlLoadString(IDC_REGISTRATION_REGISTRATION_STATUS), m_StatusArray);
				_A(m_StatusArray.GetCount() == 2);
				UpdateControls();
			}
			_ATLCATCHALL()
			{
				for(CWindow Window = GetWindow(GW_CHILD); Window.IsWindow(); Window = Window.GetWindow(GW_HWNDNEXT))
					Window.EnableWindow(FALSE);
				_ATLRETHROW;
			}
			return TRUE;
		}
		LRESULT OnDestroy()
		{
			return 0;
		}
		INT OnSetActive() throw()
		{
			_ATLTRY
			{
				CWaitCursor WaitCursor;
				UpdateControls();
			}
			_ATLCATCHALL()
			{
				_Z_EXCEPTION();
				return -1;
			}
			return 0;
		}
		LRESULT OnRegister(UINT, INT, HWND)
		{
			_ATLTRY
			{
				CWaitCursor WaitCursor;
				const BOOL bSilent = !(GetKeyState(VK_SCROLL) & 1);
				const DWORD nExitCode = ExecuteWait(AtlFormatString(_T("%s \"%s\""), bSilent ? _T("/s") : _T(""), GetPath()), TRUE);
				if(bSilent)
					MessageBeep(nExitCode ? MB_ICONERROR : MB_OK);
				CancelToClose();
			}
			_ATLCATCH(Exception)
			{
				AtlExceptionMessageBox(m_hWnd, Exception);
			}
			UpdateControls();
			return 0;
		}
		LRESULT OnUnregister(UINT, INT, HWND)
		{
			_ATLTRY
			{
				CWaitCursor WaitCursor;
				const BOOL bSilent = !(GetKeyState(VK_SCROLL) & 1);
				const CPath& sPath = m_sPath; //GetPath();
				const DWORD nExitCode = ExecuteWait(AtlFormatString(_T("%s /u \"%s\""), bSilent ? _T("/s") : _T(""), sPath), TRUE);
				if(bSilent)
					MessageBeep(nExitCode ? MB_ICONERROR : MB_OK);
				CancelToClose();
			}
			_ATLCATCH(Exception)
			{
				AtlExceptionMessageBox(m_hWnd, Exception);
			}
			UpdateControls();
			return 0;
		}
		LRESULT OnUserRegister(UINT, INT, HWND)
		{
			_ATLTRY
			{
				CWaitCursor WaitCursor;
				const BOOL bSilent = !(GetKeyState(VK_SCROLL) & 1);
				// NOTE: Even per-user registration needs elevation, since we are hooking COM classes
				const DWORD nExitCode = ExecuteWait(AtlFormatString(_T("%s /i:user /n \"%s\""), bSilent ? _T("/s") : _T(""), GetPath()), TRUE);
				if(bSilent)
					MessageBeep(nExitCode ? MB_ICONERROR : MB_OK);
				CancelToClose();
			}
			_ATLCATCH(Exception)
			{
				AtlExceptionMessageBox(m_hWnd, Exception);
			}
			UpdateControls();
			return 0;
		}
		LRESULT OnUserUnregister(UINT, INT, HWND)
		{
			_ATLTRY
			{
				CWaitCursor WaitCursor;
				const BOOL bSilent = !(GetKeyState(VK_SCROLL) & 1);
				const CPath& sPath = m_sUserPath; //GetPath();
				// NOTE: Even per-user registration needs elevation, since we are hooking COM classes
				const DWORD nExitCode = ExecuteWait(AtlFormatString(_T("%s /i:user /n /u \"%s\""), bSilent ? _T("/s") : _T(""), sPath), TRUE);
				if(bSilent)
					MessageBeep(nExitCode ? MB_ICONERROR : MB_OK);
				CancelToClose();
			}
			_ATLCATCH(Exception)
			{
				AtlExceptionMessageBox(m_hWnd, Exception);
			}
			UpdateControls();
			return 0;
		}
	};

	////////////////////////////////////////////////////////
	// CModuleRegisrtationPropertyPageT

	template <typename T>
	class CModuleRegisrtationPropertyPageT :
		public CPropertyPageT<T>,
		//public CDialogResize<T>,
		public CWindowWithPrivateMessagesT<T>
	{
	protected:
		typedef CModuleRegisrtationPropertyPageT<T> CModuleRegisrtationPropertyPage;

	public:

	BEGIN_MSG_MAP_EX(CProppageRegistrationPropertyPagCModuleRegisrtationPropertyPage)
		CHAIN_MSG_MAP(CPropertyPage)
		//CHAIN_MSG_MAP(CDialogResize<T>)
		CHAIN_MSG_MAP(CWindowWithPrivateMessages)
		MSG_WM_INITDIALOG(OnInitDialog)
		COMMAND_ID_HANDLER_EX(T::IDD + IDC_REGISTER, OnRegister)
		COMMAND_ID_HANDLER_EX(T::IDD + IDC_UNREGISTER, OnUnregister)
		COMMAND_ID_HANDLER_EX(T::IDD + IDC_USERREGISTER, OnUserRegister)
		COMMAND_ID_HANDLER_EX(T::IDD + IDC_USERUNREGISTER, OnUserUnregister)
		REFLECT_NOTIFICATIONS()
	END_MSG_MAP()

	public:

		////////////////////////////////////////////////////
		// Resource Identifiers

		enum
		{
			//IDD_PROPERTYPAGE,
			IDC_STATUS = 10,
			IDC_PATH = 11,
			IDC_REGISTER = 12,
			IDC_UNREGISTER = 13,
			IDC_USERSTATUS = 14,
			IDC_USERPATH = 21,
			IDC_USERREGISTER = 22,
			IDC_USERUNREGISTER = 23,
			IDC_USERNOTE = 24,
		};

	private:
		CPath m_sLocalPath;
		CRegistrationPropertySheet& m_PropertySheet;
		CRoEdit m_StatusEdit;
		CRoEdit m_PathEdit;
		CButton m_RegisterButton;
		CButton m_UnregisterButton;
		CRoEdit m_UserStatusEdit;
		CRoEdit m_UserPathEdit;
		CButton m_UserRegisterButton;
		CButton m_UserUnregisterButton;
		//CRoIconStatic m_UserNoteStatic;
		CRoArrayT<CString> m_StatusArray;
		CPath m_sPath;
		CPath m_sUserPath;

	public:
	// CModuleRegisrtationPropertyPageT
		CModuleRegisrtationPropertyPageT(CRegistrationPropertySheet* pPropertySheet) throw() :
			m_PropertySheet(*pPropertySheet)
		{
		}
		VOID SetLocalPath(const CPath& sLocalPath)
		{
			_A(!_tcslen(m_sLocalPath) && _tcslen(sLocalPath));
			m_sLocalPath = sLocalPath;
		}
		VOID UpdateControls()
		{
			_A(_pAtlModule);
			const CPath& sLocalPath = m_sLocalPath;
			_A(_tcslen(m_sLocalPath));
			_A(m_sLocalPath.FileExists());
			#pragma region System
			//CPath sPath = FindTypeLibraryPath(HKEY_LOCAL_MACHINE);
			CPath sPath = FindClassPath(HKEY_LOCAL_MACHINE, T::GetSampleClassIdentifier());
			const BOOL bPathEmpty = _tcslen(sPath) == 0;
			m_StatusEdit.SetValue(m_StatusArray[bPathEmpty ? 0 : 1]);
			m_PathEdit.SetValue(sPath);
			m_PathEdit.GetWindow(GW_HWNDPREV).EnableWindow(!bPathEmpty);
			m_PathEdit.EnableWindow(!bPathEmpty);
			m_RegisterButton.EnableWindow(bPathEmpty || _tcsicmp(sPath, sLocalPath));
			m_UnregisterButton.EnableWindow(!bPathEmpty);
			m_sPath = sPath;
			#pragma endregion 
			#pragma region Per-User
			//CPath sUserPath = FindTypeLibraryPath(HKEY_CURRENT_USER);
			//const BOOL bUserPathEmpty = _tcslen(sUserPath) == 0;
			//m_UserStatusEdit.SetValue(m_StatusArray[bUserPathEmpty ? 0 : 1]);
			//m_UserPathEdit.SetValue(sUserPath);
			//m_UserPathEdit.GetWindow(GW_HWNDPREV).EnableWindow(!bUserPathEmpty);
			//m_UserPathEdit.EnableWindow(!bUserPathEmpty);
			//m_UserRegisterButton.EnableWindow(bUserPathEmpty);
			//m_UserUnregisterButton.EnableWindow(!bUserPathEmpty);
			//m_sUserPath = sUserPath;
			#pragma endregion 
		}

	// CDialogResize				
			
	// Window message handlers
		LRESULT OnInitDialog(HWND, LPARAM)
		{
			_ATLTRY
			{
				CWaitCursor WaitCursor;
				m_StatusEdit = GetDlgItem(T::IDD + IDC_STATUS);
				m_PathEdit = GetDlgItem(T::IDD + IDC_PATH);
				m_RegisterButton = GetDlgItem(T::IDD + IDC_REGISTER);
				m_UnregisterButton = GetDlgItem(T::IDD + IDC_UNREGISTER);
				m_UserStatusEdit = GetDlgItem(T::IDD + IDC_USERSTATUS);
				m_UserPathEdit = GetDlgItem(T::IDD + IDC_USERPATH);
				m_UserRegisterButton = GetDlgItem(T::IDD + IDC_USERREGISTER);
				m_UserUnregisterButton = GetDlgItem(T::IDD + IDC_USERUNREGISTER);
				//_W(m_UserNoteStatic.SubclassWindow(GetDlgItem(T::IDD + IDC_USERNOTE)));
				//m_UserNoteStatic.SetIdealHeight();
				if(GetOsVersion() >= 0x00060000) // Windows Vista or Windows Server 2008
				{
					if(!IsAdministrator())
					{
						m_RegisterButton.SetElevationRequiredState(TRUE);
						m_UnregisterButton.SetElevationRequiredState(TRUE);
					}
				}
				_StringHelper::GetCommaSeparatedItems(AtlLoadString(T::IDD + IDC_STATUS), m_StatusArray);
				_A(m_StatusArray.GetCount() == 2);
				UpdateControls();
			}
			_ATLCATCHALL()
			{
				for(CWindow Window = GetWindow(GW_CHILD); Window.IsWindow(); Window = Window.GetWindow(GW_HWNDNEXT))
					Window.EnableWindow(FALSE);
				_ATLRETHROW;
			}
			return TRUE;
		}
		LRESULT OnDestroy()
		{
			return 0;
		}
		INT OnSetActive() throw()
		{
			_ATLTRY
			{
				CWaitCursor WaitCursor;
				UpdateControls();
			}
			_ATLCATCHALL()
			{
				_Z_EXCEPTION();
				return -1;
			}
			return 0;
		}
		LRESULT OnRegister(UINT, INT, HWND)
		{
			_ATLTRY
			{
				CWaitCursor WaitCursor;
				const BOOL bSilent = !(GetKeyState(VK_SCROLL) & 1);
				const DWORD nExitCode = ExecuteWait(AtlFormatString(_T("%s \"%s\""), bSilent ? _T("/s") : _T(""), m_sLocalPath), TRUE);
				if(bSilent)
					MessageBeep(nExitCode ? MB_ICONERROR : MB_OK);
				CancelToClose();
			}
			_ATLCATCH(Exception)
			{
				AtlExceptionMessageBox(m_hWnd, Exception);
			}
			UpdateControls();
			return 0;
		}
		LRESULT OnUnregister(UINT, INT, HWND)
		{
			_ATLTRY
			{
				CWaitCursor WaitCursor;
				const BOOL bSilent = !(GetKeyState(VK_SCROLL) & 1);
				const CPath& sPath = m_sPath; //m_sLocalPath
				const DWORD nExitCode = ExecuteWait(AtlFormatString(_T("%s /u \"%s\""), bSilent ? _T("/s") : _T(""), sPath), TRUE);
				if(bSilent)
					MessageBeep(nExitCode ? MB_ICONERROR : MB_OK);
				CancelToClose();
			}
			_ATLCATCH(Exception)
			{
				AtlExceptionMessageBox(m_hWnd, Exception);
			}
			UpdateControls();
			return 0;
		}
		LRESULT OnUserRegister(UINT, INT, HWND)
		{
			_ATLTRY
			{
				CWaitCursor WaitCursor;
				const BOOL bSilent = !(GetKeyState(VK_SCROLL) & 1);
				const DWORD nExitCode = ExecuteWait(AtlFormatString(_T("%s /i:user /n \"%s\""), bSilent ? _T("/s") : _T(""), m_sLocalPath));
				if(bSilent)
					MessageBeep(nExitCode ? MB_ICONERROR : MB_OK);
				CancelToClose();
			}
			_ATLCATCH(Exception)
			{
				AtlExceptionMessageBox(m_hWnd, Exception);
			}
			UpdateControls();
			return 0;
		}
		LRESULT OnUserUnregister(UINT, INT, HWND)
		{
			_ATLTRY
			{
				CWaitCursor WaitCursor;
				const BOOL bSilent = !(GetKeyState(VK_SCROLL) & 1);
				const DWORD nExitCode = ExecuteWait(AtlFormatString(_T("%s /i:user /n /u \"%s\""), bSilent ? _T("/s") : _T(""), m_sLocalPath));
				if(bSilent)
					MessageBeep(nExitCode ? MB_ICONERROR : MB_OK);
				CancelToClose();
			}
			_ATLCATCH(Exception)
			{
				AtlExceptionMessageBox(m_hWnd, Exception);
			}
			UpdateControls();
			return 0;
		}
	};

	////////////////////////////////////////////////////////
	// CProppageRegistrationPropertyPage

	class CProppageRegistrationPropertyPage :
		public CModuleRegisrtationPropertyPageT<CProppageRegistrationPropertyPage>
	{
	public:
		enum { IDD = IDD_REGISTRATION_PROPPAGEREGISTRATION_PROPERTYPAGE };

	BEGIN_MSG_MAP_EX(CProppageRegistrationPropertyPage)
		CHAIN_MSG_MAP(CModuleRegisrtationPropertyPage)
	END_MSG_MAP()

	public:
	// CProppageRegistrationPropertyPage
		CProppageRegistrationPropertyPage(CRegistrationPropertySheet* pPropertySheet) throw() :
			CModuleRegisrtationPropertyPageT<CProppageRegistrationPropertyPage>(pPropertySheet)
		{
		}
		static CLSID GetSampleClassIdentifier() throw()
		{
			class __declspec(uuid("92A3A302-DA7C-4A1F-BA7E-1802BB5D2D02")) PSFactoryBuffer;
			return __uuidof(PSFactoryBuffer);
		}

	// Window message handlers
	};

	////////////////////////////////////////////////////////
	// CEvrpropRegistrationPropertyPage

	class CEvrpropRegistrationPropertyPage :
		public CModuleRegisrtationPropertyPageT<CEvrpropRegistrationPropertyPage>
	{
	public:
		enum { IDD = IDD_REGISTRATION_EVRPROPREGISTRATION_PROPERTYPAGE };

	BEGIN_MSG_MAP_EX(CEvrpropRegistrationPropertyPage)
		CHAIN_MSG_MAP(CModuleRegisrtationPropertyPage)
	END_MSG_MAP()

	public:
	// CEvrpropRegistrationPropertyPage
		CEvrpropRegistrationPropertyPage(CRegistrationPropertySheet* pPropertySheet) throw() :
			CModuleRegisrtationPropertyPageT<CEvrpropRegistrationPropertyPage>(pPropertySheet)
		{
		}
		static CLSID GetSampleClassIdentifier() throw()
		{
			class __declspec(uuid("7C737B87-2760-4183-B5B4-ACA7C64DD720")) EvrMixerControl;
			return __uuidof(EvrMixerControl);
		}

	// Window message handlers
	};

private:
	CRegistrationPropertyPage m_RegistrationPropertyPage;
	CProppageRegistrationPropertyPage m_ProppageRegistrationPropertyPage;
	CEvrpropRegistrationPropertyPage m_EvrpropRegistrationPropertyPage;
	CPath m_sProppagePath;
	CPath m_sEvrpropPath;

public:
// CRegistrationPropertySheet
	CRegistrationPropertySheet() :
		CPropertySheetT<CRegistrationPropertySheet>(IDS_REGISTRATION_PROPERTYSHEETCAPTION),
		m_RegistrationPropertyPage(this),
		m_ProppageRegistrationPropertyPage(this),
		m_EvrpropRegistrationPropertyPage(this)
	{
		AddPage(m_RegistrationPropertyPage);
		CPath sDirectory = GetPath();
		sDirectory.RemoveFileSpec();
		m_sProppagePath.Combine(sDirectory, _T("proppage.dll"));
		if(m_sProppagePath.FileExists())
		{
			m_ProppageRegistrationPropertyPage.SetLocalPath(m_sProppagePath);
			AddPage(m_ProppageRegistrationPropertyPage);
		}
		m_sEvrpropPath.Combine(sDirectory, _T("evrprop.dll"));
		if(m_sEvrpropPath.FileExists())
		{
			m_EvrpropRegistrationPropertyPage.SetLocalPath(m_sEvrpropPath);
			AddPage(m_EvrpropRegistrationPropertyPage);
		}
	}
	BOOL SetInitialPosition()
	{
		if(!__super::SetInitialPosition())
			return FALSE;
		SetIcon(AtlLoadIconImage(IDI_MODULE, LR_DEFAULTCOLOR, GetSystemMetrics(SM_CXICON), GetSystemMetrics(SM_CYICON)), TRUE);
		SetIcon(AtlLoadIconImage(IDI_MODULE, LR_DEFAULTCOLOR, GetSystemMetrics(SM_CXSMICON), GetSystemMetrics(SM_CYSMICON)), FALSE);
		#pragma region Indication of Bitness
		CString sCaption;
		_W(GetWindowText(sCaption));
		#if defined(_WIN64)
			sCaption.Append(_T(" (64-bit)"));
		#else
			if(SafeIsWow64Process())
				sCaption.Append(_T(" (32-bit)"));
		#endif // defined(_WIN64)
		_W(SetWindowText(sCaption));
		#pragma endregion
		#pragma region System Menu
		CMenuHandle Menu = GetSystemMenu(FALSE);
		_W(Menu.AppendMenu(MF_SEPARATOR));
		_W(Menu.AppendMenu(MF_STRING, ID_APP_ABOUT, _T("&About...")));
		#pragma endregion
		return TRUE;
	}
	static LPCTSTR GetTypeLibraryType() throw()
	{
		#if defined(_WIN64)
			static LPCTSTR g_pszTypeLibraryType = _T("win64");
		#else
			static LPCTSTR g_pszTypeLibraryType = _T("win32");
		#endif // defined(_WIN64)
		return g_pszTypeLibraryType;
	}
	static CPath FindTypeLibraryPath(const GUID& Identifier = _pAtlModule->m_libid)
	{
		CPath sPath;
		CRegKey Key;
		if(SUCCEEDED(HRESULT_FROM_WIN32(Key.Open(HKEY_CLASSES_ROOT, AtlFormatString(_T("TypeLib\\%ls\\1.0\\0\\%s"), _PersistHelper::StringFromIdentifier(Identifier), GetTypeLibraryType()), KEY_READ))))
			sPath = (LPCTSTR) _RegKeyHelper::QueryStringValue(Key);
		return sPath;
	}
	static CPath FindTypeLibraryPath(HKEY hRootKey, const GUID& Identifier = _pAtlModule->m_libid)
	{
		CPath sPath;
		CRegKey Key;
		if(SUCCEEDED(HRESULT_FROM_WIN32(Key.Open(hRootKey, AtlFormatString(_T("Software\\Classes\\TypeLib\\%ls\\1.0\\0\\%s"), _PersistHelper::StringFromIdentifier(Identifier), GetTypeLibraryType()), KEY_READ))))
			sPath = (LPCTSTR) _RegKeyHelper::QueryStringValue(Key);
		return sPath;
	}
	static CPath FindClassPath(HKEY hRootKey, const GUID& Identifier)
	{
		CPath sPath;
		CRegKey Key;
		if(SUCCEEDED(HRESULT_FROM_WIN32(Key.Open(hRootKey, AtlFormatString(_T("Software\\Classes\\CLSID\\%ls\\InProcServer32"), _PersistHelper::StringFromIdentifier(Identifier)), KEY_READ))))
			sPath = (LPCTSTR) _RegKeyHelper::QueryStringValue(Key);
		return sPath;
	}
	static BOOL IsAdministrator()
	{
		bool bIsMember = FALSE;
		return CAccessToken().CheckTokenMembership(Sids::Admins(), &bIsMember) && bIsMember;
	}
	static HANDLE Execute(const CString& sParameters, BOOL bAsAdministrator = FALSE)
	{
		SHELLEXECUTEINFO Information;
		ZeroMemory(&Information, sizeof Information);
		Information.cbSize = sizeof Information;
		Information.fMask = SEE_MASK_NOCLOSEPROCESS;  
		if(bAsAdministrator && GetOsVersion() >= 0x00060000) // Windows Vista or Windows Server 2008
			Information.lpVerb = _T("runas");
		Information.lpFile = _T("regsvr32.exe");
		Information.nShow = SW_SHOWNORMAL;  
		Information.lpParameters = sParameters;  
		__E(ShellExecuteEx(&Information));
		_Z4(atlTraceSync, 4, _T("Information.hInstApp 0x%p, .hProcess 0x%p\n"), Information.hInstApp, Information.hProcess);
		return Information.hProcess;
	}
	static DWORD ExecuteWait(const CString& sParameters, BOOL bAsAdministrator = FALSE)
	{
		CHandle Process;
		Process.Attach(Execute(sParameters, bAsAdministrator));
		const DWORD nWaitResult = WaitForSingleObject(Process, INFINITE);
		_Z4(atlTraceSync, 4, _T("nWaitResult 0x%x\n"), nWaitResult);
		_A(nWaitResult == WAIT_OBJECT_0);
		DWORD nExitCode = 0;
		_W(GetExitCodeProcess(Process, &nExitCode));
		_Z4(atlTraceGeneral, 4, _T("nExitCode %d (0x%x)\n"), nExitCode, nExitCode);
		return nExitCode;
	}
	static CPath GetPath()
	{
		TCHAR pszPath[MAX_PATH] = { 0 };
		_W(GetModuleFileName(_AtlBaseModule.GetModuleInstance(), pszPath, DIM(pszPath)));
		return pszPath;
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

