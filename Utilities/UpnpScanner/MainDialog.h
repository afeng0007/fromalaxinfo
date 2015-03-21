////////////////////////////////////////////////////////////
// Copyright (C) Alax.Info, 2006-2013
// http://alax.info
//
// A permission to use the source code is granted as long as reference to 
// source website http://alax.info is retained.

#pragma once

#include <upnp.h>
#include "rocrypt.h"

////////////////////////////////////////////////////////////
// CMainDialog

class CMainDialog : 
	public CDialogImpl<CMainDialog>,
	public CDialogResize<CMainDialog>,
	public CWindowWithPrivateMessagesT<CMainDialog>
{
public:
	enum { IDD = IDD_MAIN };

BEGIN_MSG_MAP_EX(CMainDialog)
	CHAIN_MSG_MAP(CDialogResize<CMainDialog>)
	CHAIN_MSG_MAP(CWindowWithPrivateMessages)
	MSG_WM_INITDIALOG(OnInitDialog)
	MSG_WM_DESTROY(OnDestroy)
	MESSAGE_HANDLER_EX(WM_SEARCHCOMPLETE, OnSearchComplete)
	COMMAND_ID_HANDLER_EX(IDOK, OnCommand)
	COMMAND_ID_HANDLER_EX(IDCANCEL, OnCommand)
	COMMAND_HANDLER_EX(IDC_SCAN, BN_CLICKED, OnScanClicked)
	COMMAND_HANDLER_EX(IDC_SUBMIT, BN_CLICKED, OnSubmitClicked)
	REFLECT_NOTIFICATIONS()
END_MSG_MAP()

BEGIN_DLGRESIZE_MAP(CMainDialog)
	DLGRESIZE_CONTROL(IDC_TEXT, DLSZ_SIZE_X | DLSZ_SIZE_Y)
	DLGRESIZE_CONTROL(IDC_SCAN, DLSZ_MOVE_X | DLSZ_MOVE_Y)
	DLGRESIZE_CONTROL(IDC_SUBMIT, DLSZ_MOVE_X | DLSZ_MOVE_Y)
	DLGRESIZE_CONTROL(IDCANCEL, DLSZ_MOVE_X | DLSZ_MOVE_Y)
END_DLGRESIZE_MAP()

public:

	////////////////////////////////////////////////////////
	// CService

	class CService
	{
	public:
		CComPtr<IUPnPService> m_pService;
		CString m_sServiceTypeIdentifier;
		CString m_sIdentifier;
		LONG m_nLastTransportStatus;

	public:
	// CService
		CService() throw()
		{
		}
		CService(IUPnPService* pService)
		{
			Initialize(pService);
		}
		VOID Initialize(IUPnPService* pService)
		{
			_A(pService);
			m_pService = m_pService;
			CComBSTR sServiceTypeIdentifier;
			__C(pService->get_ServiceTypeIdentifier(&sServiceTypeIdentifier));
			m_sServiceTypeIdentifier = CString(sServiceTypeIdentifier);
			CComBSTR sIdentifier;
			__C(pService->get_Id(&sIdentifier));
			m_sIdentifier = CString(sIdentifier);
			LONG nLastTransportStatus = 0;
			__C(pService->get_LastTransportStatus(&nLastTransportStatus));
			m_nLastTransportStatus = nLastTransportStatus;
		}
	};

	////////////////////////////////////////////////////////
	// CServiceList

	class CServiceList :
		public CAtlList<CService>
	{
	public:
		CComPtr<IUPnPServices> m_pServices;

	public:
	// CServiceList
		CServiceList() throw()
		{
		}
		CServiceList(IUPnPServices* pServices)
		{
			_A(pServices);
			Initialize(pServices);
		}
		VOID Initialize(IUPnPServices* pServices)
		{
			_A(pServices);
			m_pServices = pServices;
			RemoveAll();
			CComPtr<IUnknown> pEnumUnknownUnknown;
			__C(pServices->get__NewEnum(&pEnumUnknownUnknown));
			CAtlList<CComPtr<IUPnPService> > ServiceList;
			EnumerateInterfaceList(pEnumUnknownUnknown, ServiceList);
			for(POSITION ServicePosition = ServiceList.GetHeadPosition(); ServicePosition; ServiceList.GetNext(ServicePosition))
			{
				const CComPtr<IUPnPService>& pService = ServiceList.GetAt(ServicePosition);
				_A(pService);
				POSITION Position = AddTail();
				_ATLTRY
				{
					GetAt(Position).Initialize(pService);
				}
				_ATLCATCHALL()
				{
					RemoveAt(Position);
					_ATLRETHROW;
				}
			}
		}
	};

	////////////////////////////////////////////////////////
	// CDevice

	class CDevice
	{
	public:
		CComPtr<IUPnPDevice> m_pDevice;
		BOOL m_bIsRootDevice;
		BOOL m_bHasChildren;
		CAtlList<CDevice> m_ChildDeviceList;
		CString m_sUniqueDeviceName;
		CString m_sFriendlyName;
		CString m_sType;
		CString m_sPresentationURL;
		CString m_sManufacturerName;
		CString m_sManufacturerURL;
		CString m_sModelName;
		CString m_sModelNumber;
		CString m_sDescription;
		CString m_sModelURL;
		CString m_sUPC;
		CString m_sSerialNumber;
		CServiceList m_ServiceList;

	public:
	// CDevice
		CDevice() throw()
		{
		}
		CDevice(IUPnPDevice* pDevice)
		{
			_A(pDevice);
			Initialize(pDevice);
		}
		VOID Initialize(IUPnPDevice* pDevice)
		{
			_A(pDevice);
			m_pDevice = pDevice;
			VARIANT_BOOL bIsRootDevice = ATL_VARIANT_FALSE;
			__C(pDevice->get_IsRootDevice(&bIsRootDevice));
			m_bIsRootDevice = m_bIsRootDevice != ATL_VARIANT_FALSE;
			//__C(pDevice->get_RootDevice( 
			//__C(pDevice->get_ParentDevice( 
			VARIANT_BOOL bHasChildren = ATL_VARIANT_FALSE;
			__C(pDevice->get_HasChildren(&bHasChildren));
			m_bHasChildren = bHasChildren;
			m_ChildDeviceList.RemoveAll();
			if(bHasChildren)
			{
				CComPtr<IUPnPDevices> pDevices;
				__C(pDevice->get_Children(&pDevices));
				__D(pDevices, E_NOINTERFACE);
				CComPtr<IUnknown> pEnumUnknownUnknown;
				__C(pDevices->get__NewEnum(&pEnumUnknownUnknown));
				CAtlList<CComPtr<IUPnPDevice> > DeviceList;
				EnumerateInterfaceList(pEnumUnknownUnknown, DeviceList);
				for(POSITION Position = DeviceList.GetHeadPosition(); Position; DeviceList.GetNext(Position))
				{
					const CComPtr<IUPnPDevice>& pDevice = DeviceList.GetAt(Position);
					_A(pDevice);
					POSITION ChildDevicePosition = m_ChildDeviceList.AddTail();
					_ATLTRY
					{
						m_ChildDeviceList.GetAt(ChildDevicePosition).Initialize(pDevice);
					}
					_ATLCATCHALL()
					{
						m_ChildDeviceList.RemoveAt(ChildDevicePosition);
						_ATLRETHROW;
					}
				}
			}
			CComBSTR sUniqueDeviceName;
			__C(pDevice->get_UniqueDeviceName(&sUniqueDeviceName));
			m_sUniqueDeviceName = CString(sUniqueDeviceName);
			CComBSTR sFriendlyName;
			__C(pDevice->get_FriendlyName(&sFriendlyName));
			m_sFriendlyName = CString(sFriendlyName);
			CComBSTR sType;
			__C(pDevice->get_Type(&sType));
			m_sType = CString(sType);
			CComBSTR sPresentationURL;
			__C(pDevice->get_PresentationURL(&sPresentationURL));
			m_sPresentationURL = CString(sPresentationURL);
			CComBSTR sManufacturerName;
			__C(pDevice->get_ManufacturerName(&sManufacturerName));
			m_sManufacturerName = CString(sManufacturerName);
			CComBSTR sManufacturerURL;
			__C(pDevice->get_ManufacturerURL(&sManufacturerURL));
			m_sManufacturerURL = CString(sManufacturerURL);
			CComBSTR sModelName;
			__C(pDevice->get_ModelName(&sModelName));
			m_sModelName = CString(sModelName);
			CComBSTR sModelNumber;
			__C(pDevice->get_ModelNumber(&sModelNumber));
			m_sModelNumber = CString(sModelNumber);
			CComBSTR sDescription;
			__C(pDevice->get_Description(&sDescription));
			m_sDescription = CString(sDescription);
			CComBSTR sModelURL;
			__C(pDevice->get_ModelURL(&sModelURL));
			m_sModelURL = CString(sModelURL);
			CComBSTR sUPC;
			__C(pDevice->get_UPC(&sUPC));
			m_sUPC = CString(sUPC);
			CComBSTR sSerialNumber;
			__C(pDevice->get_SerialNumber(&sSerialNumber));
			m_sSerialNumber = CString(sSerialNumber);
			CComPtr<IUPnPServices> pServices;
			__C(pDevice->get_Services(&pServices));
			m_ServiceList.Initialize(pServices);
		}
	};

	////////////////////////////////////////////////////////
	// CDeviceList

	class CDeviceList :
		public CAtlList<CDevice>
	{
	public:
		CComPtr<IUPnPDevices> m_pDevices;

	public:
	// CDeviceList
		CDeviceList() throw()
		{
		}
		CDeviceList(IUPnPDevices* pDevices)
		{
			_A(pDevices);
			Initialize(pDevices);
		}
		VOID Initialize(IUPnPDevices* pDevices)
		{
			_A(pDevices);
			m_pDevices = pDevices;
			RemoveAll();
			CComPtr<IUnknown> pEnumUnknownUnknown;
			__C(pDevices->get__NewEnum(&pEnumUnknownUnknown));
			CAtlList<CComPtr<IUPnPDevice> > DeviceList;
			EnumerateInterfaceList(pEnumUnknownUnknown, DeviceList);
			for(POSITION DevicePosition = DeviceList.GetHeadPosition(); DevicePosition; DeviceList.GetNext(DevicePosition))
			{
				const CComPtr<IUPnPDevice>& pDevice = DeviceList.GetAt(DevicePosition);
				_A(pDevice);
				POSITION Position = AddTail();
				_ATLTRY
				{
					GetAt(Position).Initialize(pDevice);
				}
				_ATLCATCHALL()
				{
					RemoveAt(Position);
					_ATLRETHROW;
				}
			}
		}
	};

	////////////////////////////////////////////////////////
	// Window message identifiers

	enum
	{
		WM_FIRST = WM_APP,
		WM_SEARCHCOMPLETE,
	};

	////////////////////////////////////////////////////////
	// CDeviceFinderCallback

	class ATL_NO_VTABLE CDeviceFinderCallback :
		public CComObjectRootEx<CComMultiThreadModelNoCS>,
		public IUPnPDeviceFinderCallback//,
		//public IUPnPDeviceFinderAddCallbackWithInterface
	{
	public:

	BEGIN_COM_MAP(CDeviceFinderCallback)
		COM_INTERFACE_ENTRY(IUPnPDeviceFinderCallback)
		//COM_INTERFACE_ENTRY(IUPnPDeviceFinderAddCallbackWithInterface)
	END_COM_MAP()

	private:
		mutable CRoCriticalSection m_DataCriticalSection;
		CMainDialog* m_pOwner;
		CDeviceList m_DeviceList;

	public:
	// CDeviceFinderCallback
		CDeviceFinderCallback() throw() :
			m_pOwner(NULL)
		{
			_Z4(atlTraceRefcount, 4, _T("this 0x%08x\n"), this);
		}
		~CDeviceFinderCallback() throw()
		{
			_Z4(atlTraceRefcount, 4, _T("this 0x%08x\n"), this);
			_A(!m_pOwner);
		}
		VOID Initialize(CMainDialog* pOwner)
		{
			_A(pOwner);
			CRoCriticalSectionLock DataLock(m_DataCriticalSection);
			_A(!m_pOwner);
			m_pOwner = pOwner;
			_A(m_DeviceList.IsEmpty());
		}
		VOID Terminate()
		{
			CRoCriticalSectionLock DataLock(m_DataCriticalSection);
			m_pOwner = NULL;
		}
		CMainDialog* GetOwner() const throw()
		{
			CRoCriticalSectionLock DataLock(m_DataCriticalSection);
			return m_pOwner;
		}
		const CDeviceList& GetDeviceList() const throw()
		{
			_A(!GetOwner());
			return m_DeviceList;
		}

	// IUPnPDeviceFinderCallback
        STDMETHOD(DeviceAdded)(LONG nCookie, IUPnPDevice* pDevice) throw()
		{
			_Z4(atlTraceCOM, 4, _T("nCookie 0x%08x\n"), nCookie);
			_ATLTRY
			{
				__D(pDevice, E_INVALIDARG);
				CRoCriticalSectionLock DataLock(m_DataCriticalSection);
				if(!m_pOwner)
					return S_FALSE;
				_A(nCookie == m_pOwner->m_nAsynchronousDeviceFinderCookie);
				VARIANT_BOOL bIsRootDevice = ATL_VARIANT_FALSE;
				__C(pDevice->get_IsRootDevice(&bIsRootDevice));
				if(bIsRootDevice == ATL_VARIANT_FALSE)
					return S_FALSE;
				#if _DEVELOPMENT
					CComBSTR sUniqueDeviceName;
					__C(pDevice->get_UniqueDeviceName(&sUniqueDeviceName));
					_Z4(atlTraceGeneral, 4, _T("sUniqueDeviceName %s\n"), CString(sUniqueDeviceName));
				#endif // _DEVELOPMENT
				POSITION Position = m_DeviceList.AddTail();
				_A(Position);
				_ATLTRY
				{
					m_DeviceList.GetAt(Position).Initialize(pDevice);
				}
				_ATLCATCHALL()
				{
					m_DeviceList.RemoveAt(Position);
					_ATLRETHROW;
				}
			}
			_ATLCATCH(Exception)
			{
				_Z_ATLEXCEPTION(Exception);
			}
			return S_OK;
		}
		STDMETHOD(DeviceRemoved)(LONG nCookie, BSTR sUniqueDeviceName) throw()
		{
			_Z4(atlTraceCOM, 4, _T("nCookie 0x%08x, sUniqueDeviceName %s\n"), nCookie, CString(sUniqueDeviceName));
			_ATLTRY
			{
				CRoCriticalSectionLock DataLock(m_DataCriticalSection);
				if(!m_pOwner)
					return S_FALSE;
				_A(nCookie == m_pOwner->m_nAsynchronousDeviceFinderCookie);
				// TODO: IUPnPDeviceFinderCallback::DeviceRemoved
			}
			_ATLCATCH(Exception)
			{
				_Z_ATLEXCEPTION(Exception);
			}
			return S_OK;
		}
        STDMETHOD(SearchComplete)(LONG nCookie) throw()
		{
			_Z4(atlTraceCOM, 4, _T("nCookie 0x%08x\n"), nCookie);
			_ATLTRY
			{
				CRoCriticalSectionLock DataLock(m_DataCriticalSection);
				if(!m_pOwner)
					return S_FALSE;
				_A(nCookie == m_pOwner->m_nAsynchronousDeviceFinderCookie);
				m_pOwner->PostPrivateMessage(WM_SEARCHCOMPLETE);
			}
			_ATLCATCH(Exception)
			{
				_Z_ATLEXCEPTION(Exception);
			}
			return S_OK;
		}

	// IUPnPDeviceFinderAddCallbackWithInterface
	};

private:
	CButton m_ScanButton;
	CButton m_SubmitButton;
	CRoEdit m_TextEdit;
	CComPtr<IUPnPDeviceFinder> m_pDeviceFinder;
	LONG m_nAsynchronousDeviceFinderCookie;
	CObjectPtr<CDeviceFinderCallback> m_pDeviceFinderCallback;

	VOID UpdateControls()
	{
		m_ScanButton.EnableWindow(m_pDeviceFinder == NULL);
	}
	VOID AddDeviceToText(CString& sText, const CString& sIndent, const CDevice& Device)
	{
		sText.Append(AtlFormatString(
			_T("%s  Unique Device Name: %s\r\n")
			_T("%s  Friendly Name: %s\r\n")
			_T("%s  Type: %s\r\n")
			_T("%s  Presentation URL: %s\r\n")
			_T("%s  Manufacturer Name: %s\r\n")
			_T("%s  Manufacturer URL: %s\r\n")
			_T("%s  Model Name: %s\r\n")
			_T("%s  Model Number: %s\r\n")
			_T("%s  Description: %s\r\n")
			_T("%s  Model URL: %s\r\n")
			_T("%s  UPC: %s\r\n")
			_T("%s  Serial Number: %s\r\n")
			_T(""), 
			sIndent, Device.m_sUniqueDeviceName,
			sIndent, Device.m_sFriendlyName,
			sIndent, Device.m_sType,
			sIndent, Device.m_sPresentationURL,
			sIndent, Device.m_sManufacturerName,
			sIndent, Device.m_sManufacturerURL,
			sIndent, Device.m_sModelName,
			sIndent, Device.m_sModelNumber,
			sIndent, Device.m_sDescription,
			sIndent, Device.m_sModelURL,
			sIndent, Device.m_sUPC,
			sIndent, Device.m_sSerialNumber,
			0));
		const CServiceList& ServiceList = Device.m_ServiceList;
		UINT nServiceIndex = 0;
		for(POSITION Position = ServiceList.GetHeadPosition(); Position; ServiceList.GetNext(Position), nServiceIndex++)
		{
			const CService& Service = ServiceList.GetAt(Position);
			sText.Append(AtlFormatString(
				_T("%s  Service %d:\r\n")
				_T("%s    Service Type Identifier: %s\r\n")
				_T("%s    Identifier: %s\r\n")
				_T("%s    Last Transport Status: %d\r\n")
				_T(""),
				sIndent, nServiceIndex + 1,
				sIndent, Service.m_sServiceTypeIdentifier,
				sIndent, Service.m_sIdentifier,
				sIndent, Service.m_nLastTransportStatus,
				0));
		}
		const CAtlList<CDevice>& DeviceList = Device.m_ChildDeviceList;
		UINT nDeviceIndex = 0;
		for(POSITION Position = DeviceList.GetHeadPosition(); Position; DeviceList.GetNext(Position), nDeviceIndex++)
		{
			const CDevice& Device = DeviceList.GetAt(Position);
			sText.Append(AtlFormatString(
				_T("%s  Subdevice %d:\r\n")
				_T(""),
				sIndent, nDeviceIndex + 1,
				0));
			AddDeviceToText(sText, sIndent + _T("  "), Device);
			sText.Append(_T("\r\n"));
		}
	}

public:
// CMainDialog
	template <typename _Interface>
	static SIZE_T EnumerateInterfaceList(IEnumUnknown* pEnumUnknown, CAtlList<CComPtr<_Interface> >& InterfaceList)
	{
		InterfaceList.RemoveAll();
		if(pEnumUnknown)
		{
			CComPtr<IUnknown> pUnknown;
			for(; pEnumUnknown->Next(1, &pUnknown, NULL) == S_OK; )
			{
				CComQIPtr<_Interface> pInterface = pUnknown;
				__D(pInterface, E_NOINTERFACE);
				_W(InterfaceList.AddTail(pInterface));
				pUnknown.Release();
			}
		}
		return InterfaceList.GetCount();
	}
	template <typename _Interface>
	static SIZE_T EnumerateInterfaceList(IUnknown* pEnumUnknownUnknown, CAtlList<CComPtr<_Interface> >& InterfaceList)
	{
		return EnumerateInterfaceList<_Interface>(CComQIPtr<IEnumUnknown>(pEnumUnknownUnknown), InterfaceList);
	}

// Window message handlers
	LRESULT OnInitDialog(HWND, LPARAM)
	{
		DlgResize_Init();
		m_ScanButton = GetDlgItem(IDC_SCAN);
		m_SubmitButton = GetDlgItem(IDC_SUBMIT);
		m_TextEdit = GetDlgItem(IDC_TEXT);
		m_TextEdit.SetLimitText(0);
		SetIcon(AtlLoadIconImage(IDR_MAINFRAME, LR_DEFAULTCOLOR, GetSystemMetrics(SM_CXICON), GetSystemMetrics(SM_CYICON)), TRUE);
		SetIcon(AtlLoadIconImage(IDR_MAINFRAME, LR_DEFAULTCOLOR, GetSystemMetrics(SM_CXSMICON), GetSystemMetrics(SM_CYSMICON)), FALSE);
		_W(CenterWindow());
		#if _DEVELOPMENT && FALSE
			m_TextEdit.SetValue(_T("Test"));
		#endif // _DEVELOPMENT
		UpdateControls();
		return TRUE;
	}
	LRESULT OnDestroy()
	{
		if(m_pDeviceFinderCallback)
			m_pDeviceFinderCallback->Terminate();
		if(m_pDeviceFinder)
			_V(m_pDeviceFinder->CancelAsyncFind(m_nAsynchronousDeviceFinderCookie));
		return 0;
	}
	LRESULT OnSearchComplete(UINT, WPARAM, LPARAM)
	{
		m_pDeviceFinder.Release();
		m_pDeviceFinderCallback->Terminate();
		UpdateControls();
		CString sText;
		const CDeviceList& DeviceList = m_pDeviceFinderCallback->GetDeviceList();
		sText.Append(AtlFormatString(_T("Devices Found: %d\r\n"), DeviceList.GetCount()));
		sText.Append(_T("\r\n"));
		UINT nDeviceIndex = 0; 
		for(POSITION Position = DeviceList.GetHeadPosition(); Position; DeviceList.GetNext(Position), nDeviceIndex++)
		{
			const CDevice& Device = DeviceList.GetAt(Position);
			sText.Append(AtlFormatString(_T("Device %d:\r\n"), nDeviceIndex + 1));
			AddDeviceToText(sText, _T(""), Device);
			sText.Append(_T("\r\n"));
		}
		sText.Append(_T("* * *") _T("\r\n") _T("\r\n"));
		OSVERSIONINFOEX VersionInformation = { sizeof VersionInformation };
		_W(GetVersionEx((OSVERSIONINFO*) &VersionInformation));
		CString sVersion = AtlFormatString(_T("%d.%d Build %d"), VersionInformation.dwMajorVersion, VersionInformation.dwMinorVersion, VersionInformation.dwBuildNumber);
		if(VersionInformation.wServicePackMajor)
			sVersion += AtlFormatString(_T(", Service Pack %d.%d"), VersionInformation.wServicePackMajor, VersionInformation.wServicePackMinor);
		sText.Append(AtlFormatString(_T("Operating System: %s\r\n"), sVersion));
		sText.Append(_T("\r\n"));
		sText.Append(_T("* * *") _T("\r\n") _T("\r\n"));
		sText.Append(_T("Please submit scan results to http://alax.info/ using Submit button.\r\n"));
		sText.Append(_T("No personal information is transmitted.\r\n"));
		m_TextEdit.SetValue(sText);
		m_TextEdit.ScrollCaret();
		m_SubmitButton.EnableWindow(TRUE);
		return 0;
	}
	LRESULT OnCommand(UINT, INT nIdentifier, HWND)
	{
		_W(EndDialog(nIdentifier));
		return 0;
	}
	LRESULT OnScanClicked(UINT, INT, HWND)
	{
		m_TextEdit.SetValue(_T(""));
		m_SubmitButton.EnableWindow(FALSE);
		if(m_pDeviceFinder)
			return 0;
		__C(m_pDeviceFinder.CoCreateInstance(CLSID_UPnPDeviceFinder));
		_ATLTRY
		{
			m_pDeviceFinderCallback = NULL;
			m_pDeviceFinderCallback.Construct()->Initialize(this);
			__C(m_pDeviceFinder->CreateAsyncFind(CComBSTR(_T("upnp:rootdevice")), 0, m_pDeviceFinderCallback, &m_nAsynchronousDeviceFinderCookie));
			__C(m_pDeviceFinder->StartAsyncFind(m_nAsynchronousDeviceFinderCookie));
			m_TextEdit.SetValue(_T("Scanning, the process may take a few minutes, please wait..."));
		}
		_ATLCATCHALL()
		{
			m_pDeviceFinder.Release();
			_ATLRETHROW;
		}
		UpdateControls();
		return 0;
	}
	LRESULT OnSubmitClicked(UINT, INT, HWND)
	{
		CWaitCursor WaitCursor;
		CWinHttpPostData PostData;
		PostData.AddValue(_T("subj"), _T("Alax.Info UPnP Scan"));
		{
			CStringA sTextA = Utf8StringFromString(m_TextEdit.GetValue());
			static const UINT g_nFlags = _Base64Helper::FLAG_NOPAD | _Base64Helper::FLAG_NOCRLF;
			SIZE_T nEncodedTextSize = _Base64Helper::GetEncodeOutputSize(sTextA.GetLength(), g_nFlags);
			CStringA sEncodedTextA;
			nEncodedTextSize = _Base64Helper::Encode<CHAR>((const BYTE*) (LPCSTR) sTextA, sTextA.GetLength(), sEncodedTextA.GetBufferSetLength((INT) nEncodedTextSize), nEncodedTextSize, g_nFlags);
			sEncodedTextA.GetBufferSetLength((INT) nEncodedTextSize);
			PostData.AddValue(_T("body"), CString(sEncodedTextA));
		}
		CWinHttpSessionHandle Session = OpenWinHttpSessionHandle(AtlFormatString(IDS_PROJNAME));
		__E(Session);
		CWinHttpConnectionHandle Connection = Session.Connect(CStringW(_T("alax.info")));
		__E(Connection);
		CWinHttpRequestHandle Request = Connection.OpenRequest(CStringW(_T("POST")), CStringW(_T("/post.php")));
		__E(Request);
		CStringW sPostHeaders = PostData.GetHeaders();
		CStringA sPostData(PostData.GetValue());
		__E(Request.Send(sPostHeaders, -1, const_cast<LPSTR>((LPCSTR) sPostData), sPostData.GetLength(), sPostData.GetLength()));
		__E(Request.ReceiveResponse());
		DWORD nStatusCode = 0;
		__E(Request.QueryNumberHeader(WINHTTP_QUERY_STATUS_CODE | WINHTTP_QUERY_FLAG_NUMBER, nStatusCode));
		__D(nStatusCode / 100 == 2, E_UNNAMED);
		AtlMessageBoxEx(m_hWnd, _T("Submission complete, thank you!"), IDS_INFORMATION, MB_ICONINFORMATION | MB_OK);
		UpdateControls();
		return 0;
	}
};
