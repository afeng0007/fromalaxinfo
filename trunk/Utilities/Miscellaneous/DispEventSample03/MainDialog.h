////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2009
// Created by Roman Ryltsov roman@alax.info
// 
// $Id: MainDlg.h 304 2012-01-10 06:18:54Z alax $

#pragma once

#pragma warning(disable: 4192)
#pragma warning(disable: 4278)
#import "libid:EAB22AC0-30C1-11CF-A7EB-0000C05BAE0B" rename_namespace("IE") raw_interfaces_only raw_dispinterfaces
#pragma warning(default: 4192)
#pragma warning(default: 4278)

#include <atlcrack.h>
#include <atlmisc.h>

////////////////////////////////////////////////////////////
// CMainDialog

class CMainDialog : 
	public CAxDialogImpl<CMainDialog>,
	public CDialogResize<CMainDialog>,
	//public IDispEventImpl<IDC_EXPLORER1, CMainDialog, &__uuidof(IE::DWebBrowserEvents2), &__uuidof(IE::__SHDocVw), 1, 0>,
	//public IDispEventImpl<IDC_EXPLORER2, CMainDialog, &__uuidof(IE::DWebBrowserEvents2), &__uuidof(IE::__SHDocVw), 1, 0>
	public IDispEventImpl<IDC_EXPLORER1, CMainDialog, &DIID_DWebBrowserEvents2, &LIBID_SHDocVw, 1, 1>,
	public IDispEventImpl<IDC_EXPLORER2, CMainDialog, &DIID_DWebBrowserEvents2, &LIBID_SHDocVw, 1, 1>
{
public:
	enum { IDD = IDD_MAIN };

BEGIN_MSG_MAP_EX(CMainDialog)
	CHAIN_MSG_MAP(CAxDialogImpl<CMainDialog>)
	CHAIN_MSG_MAP(CDialogResize<CMainDialog>)
	MSG_WM_INITDIALOG(OnInitDialog)
	MSG_WM_DESTROY(OnDestroy)
	COMMAND_ID_HANDLER_EX(IDCANCEL, OnCancel)
END_MSG_MAP()

BEGIN_DLGRESIZE_MAP(CMainDialog)
	DLGRESIZE_CONTROL(IDC_EXPLORER1, DLSZ_SIZE_X)
	DLGRESIZE_CONTROL(IDC_EXPLORER2, DLSZ_SIZE_X | DLSZ_SIZE_Y)
	DLGRESIZE_CONTROL(IDOK, DLSZ_MOVE_X)
	DLGRESIZE_CONTROL(IDCANCEL, DLSZ_MOVE_X)
	DLGRESIZE_CONTROL(ID_APP_ABOUT, DLSZ_MOVE_X | DLSZ_MOVE_Y)
END_DLGRESIZE_MAP()

BEGIN_SINK_MAP(CMainDialog)
	//SINK_ENTRY_EX(IDC_EXPLORER1, __uuidof(IE::DWebBrowserEvents2), 0x00FA, OnExplorer1BeforeNavigate2)
	//SINK_ENTRY_EX(IDC_EXPLORER1, __uuidof(IE::DWebBrowserEvents2), 0x0103, OnExplorer1DocumentComplete)
	//SINK_ENTRY_EX(IDC_EXPLORER2, __uuidof(IE::DWebBrowserEvents2), 0x00FA, OnExplorer2BeforeNavigate2)
	//SINK_ENTRY_EX(IDC_EXPLORER2, __uuidof(IE::DWebBrowserEvents2), 0x0103, OnExplorer2DocumentComplete)
	SINK_ENTRY_EX(IDC_EXPLORER1, DIID_DWebBrowserEvents2, 0x00FA, OnExplorer1BeforeNavigate2)
	SINK_ENTRY_EX(IDC_EXPLORER1, DIID_DWebBrowserEvents2, 0x0103, OnExplorer1DocumentComplete)
	SINK_ENTRY_EX(IDC_EXPLORER2, DIID_DWebBrowserEvents2, 0x00FA, OnExplorer2BeforeNavigate2)
	SINK_ENTRY_EX(IDC_EXPLORER2, DIID_DWebBrowserEvents2, 0x0103, OnExplorer2DocumentComplete)
END_SINK_MAP() 

public:

	////////////////////////////////////////////////////////
	// CDispatchEventSink

	class ATL_NO_VTABLE CDispatchEventSink :
		public CComObjectRootEx<CComSingleThreadModel>,
		public CComCoClass<CDispatchEventSink>,
		public IDispatch
	{
	public:

	BEGIN_COM_MAP(CDispatchEventSink)
		COM_INTERFACE_ENTRY(IDispatch)
	END_COM_MAP()

	public:
	// CDispatchEventSink

	// IDispatch
		STDMETHOD(GetTypeInfoCount)(UINT* pnCount) throw()
		{
			ATLTRACE(atlTraceCOM, 4, _T("...\n"));
			return E_NOTIMPL;
		}
		STDMETHOD(GetTypeInfo)(UINT nIndex, LCID nLocaleIdentifier, ITypeInfo** ppTypeInfo) throw()
		{
			ATLTRACE(atlTraceCOM, 4, _T("...\n"));
			return E_NOTIMPL;
		}
		STDMETHOD(GetIDsOfNames)(REFIID InterfaceIdentifier, LPOLESTR* ppszNames, UINT nNameCount, LCID nLocaleIdentifier, DISPID* rgDispId) throw()
		{
			ATLTRACE(atlTraceCOM, 4, _T("...\n"));
			return E_NOTIMPL;
		}
		STDMETHOD(Invoke)(DISPID dispIdMember, REFIID InterfaceIdentifier, LCID nLocaleIdentifier, WORD nFlags, DISPPARAMS* pDispParams, VARIANT* pVarResult, EXCEPINFO* pExcepInfo, UINT* puArgErr) throw()
		{
			ATLTRACE(atlTraceCOM, 4, _T("dispIdMember %d, nLocaleIdentifier %d, nFlags 0x%x\n"), dispIdMember, nLocaleIdentifier, nFlags);
			_ATLTRY
			{
				AtlMessageBox(GetActiveWindow(), _T("Hey that's body.onresize here!"), _T(""), MB_ICONINFORMATION | MB_OK);
			}
			_ATLCATCH(Exception)
			{
				return Exception;
			}
			return S_OK;
		}
	};

private:
	CAxWindow m_pExplorers[2];

public:
// CMainDialog
	CMainDialog()
	{
		#if defined(_DEBUG)
			AtlTraceLoadSettings(NULL);
		#endif // defined(_DEBUG)
	}

// Window message handlers
	LRESULT OnInitDialog(HWND, LPARAM)
	{
		_Module.Lock();
		m_pExplorers[0] = GetDlgItem(IDC_EXPLORER1);
		m_pExplorers[1] = GetDlgItem(IDC_EXPLORER2);
		//ATLENSURE_SUCCEEDED(AdviseSinkMap(TRUE));
		//SetIcon(AtlLoadIconImage(IDR_MAINFRAME, LR_DEFAULTCOLOR, GetSystemMetrics(SM_CXICON), GetSystemMetrics(SM_CYICON)), TRUE);
		//SetIcon(AtlLoadIconImage(IDR_MAINFRAME, LR_DEFAULTCOLOR, GetSystemMetrics(SM_CXSMICON), GetSystemMetrics(SM_CYSMICON)), FALSE);
		ATLVERIFY(CenterWindow());
		DlgResize_Init(TRUE);
		for(SIZE_T nIndex = 0; nIndex < _countof(m_pExplorers); nIndex++)
		{
			CComPtr<IWebBrowser> pWebBrowser;
			ATLENSURE_SUCCEEDED(m_pExplorers[nIndex].QueryControl(&pWebBrowser));
			static VARIANT g_vEmpty = { VT_EMPTY };
			ATLENSURE_SUCCEEDED(pWebBrowser->Navigate(CComBSTR(_T("http://alax.info")), &g_vEmpty, &g_vEmpty, &g_vEmpty, &g_vEmpty));
		}
		return TRUE;
	}
	LRESULT OnDestroy()
	{
		//ATLENSURE_SUCCEEDED(AdviseSinkMap(FALSE));
		if(_Module.GetLockCount() == 1)
		{
			_Module.m_dwTimeOut = 0L;
			_Module.m_dwPause = 0L;
		}
		_Module.Unlock();
		return 0;
	}
	LRESULT OnCancel(UINT, INT nIdentifier, HWND)
	{
		ATLVERIFY(EndDialog(nIdentifier));
		return 0;
	}

// Sink handlers
	VOID STDMETHODCALLTYPE OnExplorer1BeforeNavigate2(IDispatch* pDispatch, VARIANT* pvLocation, VARIANT* pvFlags, VARIANT* pvTargetFrameName, VARIANT* pvPostData, VARIANT* pvHeaders, VARIANT_BOOL* pbCancel)
	{
		ATLTRACE2(atlTraceGeneral, 4, _T("(1) ...\n"));
	}
	VOID STDMETHODCALLTYPE OnExplorer1DocumentComplete(IDispatch* pDispatch, VARIANT* pvLocation)
	{
		ATLTRACE2(atlTraceGeneral, 4, _T("(1) *pvLocation \"%s\"\n"), (pvLocation && pvLocation->vt == VT_BSTR) ? (LPCTSTR) CString(pvLocation->bstrVal) : _T("???"));
	}
	VOID STDMETHODCALLTYPE OnExplorer2BeforeNavigate2(IDispatch* pDispatch, VARIANT* pvLocation, VARIANT* pvFlags, VARIANT* pvTargetFrameName, VARIANT* pvPostData, VARIANT* pvHeaders, VARIANT_BOOL* pbCancel)
	{
		ATLTRACE2(atlTraceGeneral, 4, _T("(2) ...\n"));
	}
	VOID STDMETHODCALLTYPE OnExplorer2DocumentComplete(IDispatch* pDispatch, VARIANT* pvLocation)
	{
		ATLTRACE2(atlTraceGeneral, 4, _T("(2) *pvLocation \"%s\"\n"), (pvLocation && pvLocation->vt == VT_BSTR) ? (LPCTSTR) CString(pvLocation->bstrVal) : _T("???"));
		_ATLTRY
		{
			CComPtr<IWebBrowser2> pWebBrowser2;
			ATLENSURE_SUCCEEDED(m_pExplorers[1].QueryControl(__uuidof(IWebBrowser2), (VOID**) &pWebBrowser2));
			CComPtr<IDispatch> pDocumentDispatch;
			ATLENSURE_SUCCEEDED(pWebBrowser2->get_Document(&pDocumentDispatch));
			CComQIPtr<IHTMLDocument2> pDocument = pDocumentDispatch;
			ATLENSURE_THROW(pDocument, E_NOINTERFACE);
			CComPtr<IHTMLElement> pBodyElementA;
			ATLENSURE_SUCCEEDED(pDocument->get_body(&pBodyElementA));
			CComPtr<IDispatch> pSinkDispatch;
			ATLENSURE_SUCCEEDED(CDispatchEventSink::CreateInstance(&pSinkDispatch));
			CComVariant vValue = pSinkDispatch;
			ATLENSURE_SUCCEEDED(reinterpret_cast<CComPtr<IDispatch>&>(pBodyElementA).PutPropertyByName(L"onresize", &vValue));
		}
		_ATLCATCHALL()
		{
		}
	}
};
