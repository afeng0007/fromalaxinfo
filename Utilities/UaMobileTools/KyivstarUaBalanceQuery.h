////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2013
// Created by Roman Ryltsov roman@alax.info

#pragma once

#include "UaMobileTools_i.h"
#include "rowinhttp.h"

////////////////////////////////////////////////////////////
// CKyivstarUaBalanceQuery

class ATL_NO_VTABLE CKyivstarUaBalanceQuery : 
	public CComObjectRootEx<CComMultiThreadModelNoCS>,
	public CComCoClass<CKyivstarUaBalanceQuery, &__uuidof(KyivstarUaBalanceQuery)>,
	public IDispatchImpl<IKyivstarUaBalanceQuery>
{
public:
	enum { IDR = IDR_KYIVSTARUABALANCEQUERY };

//DECLARE_REGISTRY_RESOURCEID(IDR)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CKyivstarUaBalanceQuery)
	COM_INTERFACE_ENTRY(IKyivstarUaBalanceQuery)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

public:

private:
	mutable CRoCriticalSection m_DataCriticalSection;
	CWinHttpSessionHandle m_Session;
	CWinHttpConnectionHandle m_Connection;
	CStringW m_sNumber;
	BOOL m_fBalanceAvailable;
	DOUBLE m_fBalance;

	VOID ConnectionNeeded()
	{
		if(m_Connection)
			return;
		CWinHttpSessionHandle Session = OpenWinHttpSessionHandle(AtlFormatString(IDS_PROJNAME));
		__E(Session);
		CWinHttpConnectionHandle Connection = Session.Connect(CStringW(_T("my.kyivstar.ua")));
		__E(Connection);
		m_Session = Session.Detach();
		m_Connection = Connection.Detach();
	}
	static SIZE_T ReadResponseContent(CWinHttpRequestHandle& Request, CTempBufferT<CHAR>& pszContentData)
	{
		static const SIZE_T g_nContentDataCapacity = 64 << 10;
		SIZE_T nContentDataCapacity = g_nContentDataCapacity;
		DWORD nContentLength = 0;
		if(Request.QueryNumberHeader(WINHTTP_QUERY_CONTENT_LENGTH | WINHTTP_QUERY_FLAG_NUMBER, nContentLength))
			nContentDataCapacity = nContentLength + 1 + 1; // Zero and Safety 
		pszContentData.Allocate(nContentDataCapacity);
		DWORD nContentDataLength = 0;
		__E(Request.ReadData(pszContentData, (DWORD) nContentDataCapacity - 1, &nContentDataLength));
		_A(nContentDataLength < g_nContentDataCapacity - 1);
		pszContentData[nContentDataLength] = 0;
		_A(strlen(pszContentData) == nContentDataLength);
		return nContentDataLength;
	}
	static VOID WriteResponseContent(LPCSTR pszContentData)
	{
		#if _DEVELOPMENT
			_A(pszContentData);
			_A(_pAtlModule);
			CComCritSecLock<CComCriticalSection> Lock(_pAtlModule->m_csStaticDataInitAndTypeInfo);
			static ULONG g_nIndex = 0;
			const ULONG nIndex = g_nIndex++;
			static CPath g_sDirectory;
			if(!_tcslen(g_sDirectory))
			{
				TCHAR pszPath[MAX_PATH] = { 0 };
				_W(GetModuleFileName(_AtlBaseModule.GetModuleInstance(), pszPath, DIM(pszPath)));
				_W(RemoveFileSpec(pszPath));
				g_sDirectory = pszPath;
			}
			CPath sPath;
			sPath.Combine(g_sDirectory, AtlFormatString(_T("Response-%03d.html"), nIndex));
			CAtlFile File;
			__C(File.Create(sPath, GENERIC_WRITE, FILE_SHARE_READ, CREATE_ALWAYS));
			__C(File.Write(pszContentData, strlen(pszContentData)));
		#else
			pszContentData;
		#endif
	}

public:
// CKyivstarUaBalanceQuery
	static CString GetObjectFriendlyName()
	{
		return _StringHelper::GetLine(IDR, 2);
	}
	static HRESULT WINAPI UpdateRegistry(BOOL bRegister) throw()
	{
		_Z2(atlTraceRegistrar, 2, _T("bRegister %d\n"), bRegister);
		_ATLTRY
		{
			UpdateRegistryFromResource<CKyivstarUaBalanceQuery>(bRegister);
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
	CKyivstarUaBalanceQuery() throw()
	{
		_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
	}
	~CKyivstarUaBalanceQuery() throw()
	{
		_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
	}
	HRESULT FinalConstruct() throw()
	{
		m_fBalanceAvailable = FALSE;
		return S_OK;
	}
	VOID FinalRelease() throw()
	{
	}

// IKyivstarUaBalanceQuery
	STDMETHOD(Initialize)(BSTR sNumber, BSTR sPassword) throw()
	{
		_Z4(atlTraceCOM, 4, _T("sNumber %s, sPassword %s\n"), CString(sNumber), CString(sPassword));
		_ATLTRY
		{
			ObjectLock Lock(this);
			m_fBalanceAvailable = FALSE;
			ConnectionNeeded();
			#pragma region Query Token
			CStringA sToken;
			{
				CWinHttpRequestHandle Request = m_Connection.OpenSecureRequest(CStringW(_T("GET")), CStringW(_T("/tbmb/login/show.do")));
				__E(Request);
				__E(Request.Send());
				__E(Request.ReceiveResponse());
				DWORD nStatusCode = 0;
				__E(Request.QueryNumberHeader(WINHTTP_QUERY_STATUS_CODE | WINHTTP_QUERY_FLAG_NUMBER, nStatusCode));
				__D(nStatusCode == HTTP_STATUS_OK, MAKE_HRESULT(SEVERITY_ERROR, FACILITY_HTTP, nStatusCode));
				CTempBufferT<CHAR> pszContentData;
				ReadResponseContent(Request, pszContentData);
				WriteResponseContent(pszContentData);
				static CRoStaticReA g_TokenExpression(
					"\\<input " 
					"[^\\>]*" 
					"name=\"org.apache.struts.taglib.html.TOKEN\" " 
					"[^\\>]*" 
					"value=\"{[^\"]+}\"", 
					FALSE);
				CRoReMatchContextA MatchContext;
				//__D(g_TokenExpression.Match(pszContentData, &MatchContext), E_UNNAMED);
				//sToken = MatchContext.GetMatchString(0);
			}
			#pragma endregion 
			#pragma region Login and Read Home Page
			CString sBalance;
			{
				CWinHttpPostData PostData;
				//PostData.AddValue("org.apache.struts.taglib.html.TOKEN", sToken);
				PostData.AddValue("isSubmitted", "false");
				PostData.AddValue("user", CStringA(sNumber));
				PostData.AddValue("password", CStringA(sPassword));
				PostData.AddValue("submit", "yes");
				CWinHttpRequestHandle Request = m_Connection.OpenSecureRequest(CStringW(_T("POST")), CStringW(_T("/tbmb/login/perform.do")));
				__E(Request);
				CStringA sPostData(PostData.GetValue());
				__E(Request.Send(PostData.GetHeaders(), -1, const_cast<LPSTR>((LPCSTR) sPostData), sPostData.GetLength(), sPostData.GetLength()));
				__E(Request.ReceiveResponse());
				DWORD nStatusCode = 0;
				__E(Request.QueryNumberHeader(WINHTTP_QUERY_STATUS_CODE | WINHTTP_QUERY_FLAG_NUMBER, nStatusCode));
				__D(nStatusCode == HTTP_STATUS_OK, MAKE_HRESULT(SEVERITY_ERROR, FACILITY_HTTP, nStatusCode));
				CTempBufferT<CHAR> pszContentData;
				ReadResponseContent(Request, pszContentData);
				WriteResponseContent(pszContentData);
				static CRoStaticReW g_BalanceExpression(
					L"\\<nobr\\>((Остаток на счету)|(Залишок на рахунку))\\:\\<\\/nobr\\>" 
					L".+?" 
					L"\\<b\\>{[^\\<]+}\\<\\/b\\>", 
					FALSE);
				CStringW sContentDataW((LPCSTR) pszContentData);
				CRoReMatchContextW MatchContext;
				__D(g_BalanceExpression.Match(sContentDataW, &MatchContext), E_UNNAMED);
				sBalance = CString(MatchContext.GetMatchString(0));
			}
			#pragma endregion 
			__D(AtlStringToDouble(sBalance, m_fBalance), E_UNNAMED);
			m_sNumber = sNumber;
			m_fBalanceAvailable = TRUE;
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
	STDMETHOD(get_Number)(BSTR* psNumber) throw()
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		_ATLTRY
		{
			__D(psNumber, E_POINTER);
			ObjectLock Lock(this);
			CRoCriticalSectionLock DataLock(m_DataCriticalSection);
			*psNumber = CComBSTR(m_sNumber).Detach();
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
	STDMETHOD(get_Balance)(DOUBLE* pfBalance) throw()
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		_ATLTRY
		{
			__D(pfBalance, E_POINTER);
			ObjectLock Lock(this);
			CRoCriticalSectionLock DataLock(m_DataCriticalSection);
			__D(m_fBalanceAvailable, HRESULT_FROM_WIN32(ERROR_NO_DATA));
			*pfBalance = m_fBalance;
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
};

OBJECT_ENTRY_AUTO(__uuidof(KyivstarUaBalanceQuery), CKyivstarUaBalanceQuery)