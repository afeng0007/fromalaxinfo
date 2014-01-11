////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2014
// Created by Roman Ryltsov roman@alax.info

#pragma once

#include <atlctrlx.h>
#include <atlsplit.h>
#include "rofiles.h"
#include "FilterGraphSpy.h"
#include "AboutDialog.h"

////////////////////////////////////////////////////////////
// CGraphBuilderCallbackPropertySheet

class CGraphBuilderCallbackPropertySheet :
	public CSizablePropertySheetT<CGraphBuilderCallbackPropertySheet>
{
public:

BEGIN_MSG_MAP_EX(CGraphBuilderCallbackPropertySheet)
	CHAIN_MSG_MAP(CSizablePropertySheet)
	MSG_WM_SYSCOMMAND(OnSysCommand)
END_MSG_MAP()

public:

	////////////////////////////////////////////////////////
	// CGraphPropertyPage

	class CGraphPropertyPage :
		public CPropertyPageT<CGraphPropertyPage>,
		public CDialogResize<CGraphPropertyPage>,
		public CWindowWithPrivateMessagesT<CGraphPropertyPage>
	{
		typedef CThreadT<CGraphPropertyPage> CThread;

	public:

		enum { IDD = IDD_GRAPHBUILDERCALLBACK_GRAPH_PROPERTYPAGE };

	BEGIN_MSG_MAP_EX(CGraphPropertyPage)
		CHAIN_MSG_MAP(CPropertyPage)
		CHAIN_MSG_MAP(CDialogResize<CGraphPropertyPage>)
		CHAIN_MSG_MAP(CWindowWithPrivateMessages)
		MSG_WM_INITDIALOG(OnInitDialog)
		MSG_WM_DESTROY(OnDestroy)
		MESSAGE_HANDLER_EX(WM_THREADPROGRESS, OnThreadProgress)
		MESSAGE_HANDLER_EX(WM_THREADCOMPLETED, OnThreadCompleted)
		MSG_LVN_GETDISPINFO(IDC_GRAPHBUILDERCALLBACK_GRAPH_GRAPH, OnGraphListViewGetDispInfo)
		MSG_LVN_GETINFOTIP(IDC_GRAPHBUILDERCALLBACK_GRAPH_GRAPH, OnGraphListViewGetInfoTip)
		MSG_LVN_ITEMCHANGED(IDC_GRAPHBUILDERCALLBACK_GRAPH_GRAPH, OnGraphListViewItemChanged)
		MSG_LVN_GETDISPINFO(IDC_GRAPHBUILDERCALLBACK_GRAPH_LOG, OnLogListViewGetDispInfo)
		MSG_LVN_GETINFOTIP(IDC_GRAPHBUILDERCALLBACK_GRAPH_LOG, OnLogListViewGetInfoTip)
		NOTIFY_HANDLER_EX(IDC_GRAPHBUILDERCALLBACK_GRAPH_COPYTOCLIPBOARD, CRoHyperStatic::NC_ANCHORCLICKED, OnCopyToClipboardStaticAnchorClicked)
		REFLECT_NOTIFICATIONS()
	END_MSG_MAP()

	BEGIN_DLGRESIZE_MAP(CGraphPropertyPage)
		DLGRESIZE_CONTROL(IDC_GRAPHBUILDERCALLBACK_GRAPH_INTRODUCTION, DLSZ_SIZE_X)
		DLGRESIZE_CONTROL(IDC_GRAPHBUILDERCALLBACK_GRAPH_SPLITTER, DLSZ_SIZE_X | DLSZ_SIZE_Y)
		DLGRESIZE_CONTROL(IDC_GRAPHBUILDERCALLBACK_GRAPH_COPYTOCLIPBOARD, DLSZ_MOVE_Y)
		//DLGRESIZE_CONTROL(IDC_GRAPHBUILDERCALLBACK_GRAPH_PROGRESS, ...
	END_DLGRESIZE_MAP()

	public:

		////////////////////////////////////////////////////
		// Window message identifiers

		enum 
		{
			WM_FIRST = WM_APP,
			WM_THREADPROGRESS,
			WM_THREADCOMPLETED,
		};

		////////////////////////////////////////////////////
		// CLogData

		class CLogData
		{
		public:

			////////////////////////////////////////////////
			// TYPE

			typedef enum _TYPE
			{
				TYPE_SELECTEDFILTER,
				TYPE_CREATEDFILTER,
				TYPE_ADDFILTER,
				TYPE_REMOVEFILTER,
			} TYPE;

		public:
			ULONGLONG m_nTime;
			TYPE m_Type;
			CStringA m_sMonikerDisplayName;
			SIZE_T m_nFilterPointer;
			CLSID m_FilterClassIdentifier;
			CStringA m_sFilterName;
			HRESULT m_nSiteResult;
			BOOL m_bSiteResultValid;

		public:
		// CLogData
			CLogData() throw() :
				m_nTime(0),
				m_bSiteResultValid(FALSE)
			{
			}
			CLogData(ULONGLONG nTime, const CStringA& sMonikerDisplayName) throw() :
				m_nTime(nTime),
				m_Type(TYPE_SELECTEDFILTER),
				m_sMonikerDisplayName(sMonikerDisplayName),
				m_FilterClassIdentifier(CLSID_NULL),
				m_bSiteResultValid(FALSE)
			{
			}
			CLogData(ULONGLONG nTime, TYPE Type, SIZE_T nFilterPointer, const CLSID& FilterClassIdentifier, const CStringA& sFilterName) throw() :
				m_nTime(nTime),
				m_Type(Type),
				m_nFilterPointer(nFilterPointer), 
				m_FilterClassIdentifier(FilterClassIdentifier), 
				m_sFilterName(sFilterName),
				m_bSiteResultValid(FALSE)
			{
				_A(Type == TYPE_CREATEDFILTER || Type == TYPE_ADDFILTER);
			}
			CLogData(ULONGLONG nTime, SIZE_T nFilterPointer) throw() :
				m_nTime(nTime),
				m_Type(TYPE_REMOVEFILTER),
				m_nFilterPointer(nFilterPointer),
				m_FilterClassIdentifier(CLSID_NULL),
				m_bSiteResultValid(FALSE)
			{
			}
			BOOL GetSiteResult(HRESULT& nResult) const throw()
			{
				if(!m_bSiteResultValid)
					return FALSE;
				nResult = m_nSiteResult;
				return TRUE;
			}
			VOID SetSiteResult(HRESULT nResult) throw()
			{
				_A(!m_bSiteResultValid);
				m_nSiteResult = nResult;
				m_bSiteResultValid = TRUE;
			}
			CString GetFriendlyEventName() const
			{
				switch(m_Type)
				{
				case TYPE_SELECTEDFILTER:
					_A(!m_sMonikerDisplayName.IsEmpty());
					return _T("Selected Filter");
				case TYPE_CREATEDFILTER:
					_A(m_nFilterPointer);
					return _T("Created Filter");
				case TYPE_ADDFILTER:
					_A(m_nFilterPointer);
					return _T("Add Filter");
				case TYPE_REMOVEFILTER:
					_A(m_nFilterPointer);
					return _T("Remove Filter");
				}
				_A(FALSE);
				return _T("");
			}
			CComPtr<IPropertyBag> GetMonikerPropertyBag() const throw()
			{
				if(!m_sMonikerDisplayName.IsEmpty())
					_ATLTRY
					{
						USES_CONVERSION;
						CComPtr<IBindCtx> pBindCtx;
						__C(CreateBindCtx(0, &pBindCtx));
						ULONG nConsumedCount;
						CComPtr<IMoniker> pMoniker;
						const HRESULT nMkParseDisplayNameResult = MkParseDisplayName(pBindCtx, CA2W(m_sMonikerDisplayName), &nConsumedCount, &pMoniker);
						if(SUCCEEDED(nMkParseDisplayNameResult))
						{
							CComPtr<IPropertyBag> pPropertyBag;
							const HRESULT nBindToStorageResult = pMoniker->BindToStorage(pBindCtx, NULL, __uuidof(IPropertyBag), (VOID**) &pPropertyBag);
							if(SUCCEEDED(nBindToStorageResult))
							{
								_A(pPropertyBag);
								return pPropertyBag;
							} else
								_Z4(atlTraceGeneral, 4, _T("nBindToStorageResult 0x%08x\n"), nBindToStorageResult);
								
						} else
							_Z4(atlTraceGeneral, 4, _T("nMkParseDisplayNameResult 0x%08x\n"), nMkParseDisplayNameResult);
					}
					_ATLCATCHALL()
					{
						_Z_EXCEPTION();
					}
				return NULL;
			}
			CString GetFriendlyMonikerName() const
			{
				_ATLTRY
				{
					const CComPtr<IPropertyBag> pPropertyBag = GetMonikerPropertyBag();
					if(pPropertyBag)
						return _FilterGraphHelper::ReadPropertyBagString(pPropertyBag, L"FriendlyName");
				}
				_ATLCATCHALL()
				{
					_Z_EXCEPTION();
				}
				return _T("");
			}
			CString GetFriendlyApplicationResult() const
			{
				if(m_bSiteResultValid)
					return AtlFormatString(_T("0x%08x"), m_nSiteResult);
				return _T("");
			}
		};

		////////////////////////////////////////////////////
		// CLogDataList

		class CLogDataList :
			public CRoListT<CLogData>
		{
		public:
		// CLogDataList
		};

		////////////////////////////////////////////////////
		// CFilterData

		class CFilterData
		{
		public:
			SIZE_T m_nPointer;
			CLSID m_ClassIdentifier;
			CStringA m_sName;

		public:
		// CFilterData
			CFilterData() throw()
			{
			}
			CFilterData(SIZE_T nPointer, const CLSID& ClassIdentifier, const CStringA& sName) throw() :
				m_nPointer(nPointer),
				m_ClassIdentifier(ClassIdentifier),
				m_sName(sName)
			{
			}
		};

		////////////////////////////////////////////////////
		// CFilterDataMap

		class CFilterDataMap :
			public CRoMapT<SIZE_T, CFilterData>
		{
		};

		////////////////////////////////////////////////////
		// CGraphData

		class CGraphData
		{
		public:
			INT m_nProcessIdentifier;
			CStringA m_sProcessPath;
			ULONGLONG m_nTime;
			SIZE_T m_nPointer;
			SIZE_T m_nCallbackPointer;
			CLogDataList m_LogDataList;
			CFilterDataMap m_FilterDataMap;
			INT m_nImageIndex;

		public:
		// CGraphData
			//static BOOL ComparePointer(const CGraphData& GraphData, SIZE_T nPointer) throw()
			//{
			//	return GraphData.m_nPointer == nPointer;
			//}
			//static BOOL CompareCallbackPointer(const CGraphData& GraphData, SIZE_T nCallbackPointer) throw()
			//{
			//	return GraphData.m_nCallbackPointer == nCallbackPointer;
			//}
			CString GetProcessName() const
			{
				if(m_sProcessPath.IsEmpty())
					return _T("");
				CPath sPath = CA2CT(m_sProcessPath);
				return (LPCTSTR) sPath + sPath.FindFileName();
			}
			CString GetProcessDirectory() const
			{
				if(m_sProcessPath.IsEmpty())
					return _T("");
				CPath sPath = CA2CT(m_sProcessPath);
				_W(sPath.RemoveFileSpec());
				return (LPCTSTR) sPath;
			}
		};

		////////////////////////////////////////////////////
		// CGraphDataList

		class CGraphDataList :
			public CRoListT<CGraphData>
		{
		public:
		// CGraphDataList
			//BOOL FindFirstPointer(SIZE_T nPointer, POSITION* pPosition = NULL) const throw()
			//{
			//	return FindFirstThatT<SIZE_T>(&CGraphData::ComparePointer, nPointer, pPosition);
			//}
			BOOL FindFirstPointer(INT nProcessIdentifier, SIZE_T nPointer, POSITION* pPosition = NULL) const throw()
			{
				for(POSITION Position = GetHeadPosition(); Position; GetNext(Position))
				{
					const CGraphData& GraphData = GetAt(Position);
					if(GraphData.m_nProcessIdentifier == nProcessIdentifier && GraphData.m_nPointer == nPointer)
					{
						if(pPosition)
							*pPosition = Position;
						return TRUE;
					}
				}
				return FALSE;
			}
			BOOL FindFirstPointer(INT nProcessIdentifier, SIZE_T nPointer, CGraphData*& pGraphData) throw()
			{
				POSITION Position = NULL;
				if(!FindFirstPointer(nProcessIdentifier, nPointer, &Position))
					return FALSE;
				_A(Position);
				pGraphData = &GetAt(Position);
				return TRUE;
			}
			BOOL FindLastPointer(INT nProcessIdentifier, SIZE_T nPointer, POSITION* pPosition = NULL) const throw()
			{
				for(POSITION Position = GetTailPosition(); Position; GetPrev(Position))
				{
					const CGraphData& GraphData = GetAt(Position);
					if(GraphData.m_nProcessIdentifier == nProcessIdentifier && GraphData.m_nPointer == nPointer)
					{
						if(pPosition)
							*pPosition = Position;
						return TRUE;
					}
				}
				return FALSE;
			}
			BOOL FindLastPointer(INT nProcessIdentifier, SIZE_T nPointer, CGraphData*& pGraphData) throw()
			{
				POSITION Position = NULL;
				if(!FindLastPointer(nProcessIdentifier, nPointer, &Position))
					return FALSE;
				_A(Position);
				pGraphData = &GetAt(Position);
				return TRUE;
			}
			//BOOL FindFirstCallbackPointer(SIZE_T nCallbackPointer, POSITION* pPosition = NULL) const throw()
			//{
			//	return FindFirstThatT<SIZE_T>(&CGraphData::CompareCallbackPointer, nCallbackPointer, pPosition);
			//}
			BOOL FindFirstCallbackPointer(INT nProcessIdentifier, SIZE_T nCallbackPointer, POSITION* pPosition = NULL) const throw()
			{
				for(POSITION Position = GetHeadPosition(); Position; GetNext(Position))
				{
					const CGraphData& GraphData = GetAt(Position);
					if(GraphData.m_nProcessIdentifier == nProcessIdentifier && GraphData.m_nCallbackPointer == nCallbackPointer)
					{
						if(pPosition)
							*pPosition = Position;
						return TRUE;
					}
				}
				return FALSE;
			}
			BOOL FindFirstCallbackPointer(INT nProcessIdentifier, SIZE_T nCallbackPointer, CGraphData*& pGraphData) throw()
			{
				POSITION Position = NULL;
				if(!FindFirstCallbackPointer(nProcessIdentifier, nCallbackPointer, &Position))
					return FALSE;
				_A(Position);
				pGraphData = &GetAt(Position);
				return TRUE;
			}
			BOOL FindLastCallbackPointer(INT nProcessIdentifier, SIZE_T nCallbackPointer, POSITION* pPosition = NULL) const throw()
			{
				for(POSITION Position = GetTailPosition(); Position; GetPrev(Position))
				{
					const CGraphData& GraphData = GetAt(Position);
					if(GraphData.m_nProcessIdentifier == nProcessIdentifier && GraphData.m_nCallbackPointer == nCallbackPointer)
					{
						if(pPosition)
							*pPosition = Position;
						return TRUE;
					}
				}
				return FALSE;
			}
			BOOL FindLastCallbackPointer(INT nProcessIdentifier, SIZE_T nCallbackPointer, CGraphData*& pGraphData) throw()
			{
				POSITION Position = NULL;
				if(!FindLastCallbackPointer(nProcessIdentifier, nCallbackPointer, &Position))
					return FALSE;
				_A(Position);
				pGraphData = &GetAt(Position);
				return TRUE;
			}
		};

		//////////////////////////////////////////////////////////
		// CClassData

		class CClassData
		{
		public:
			CString m_sDescription;
			CPath m_sFilePath;
			LPCTSTR m_pszFileName;
			CPath m_sFileDirectory;
			TCHAR m_pszFileProductVersion[32];
			TCHAR m_pszFileVersion[32];
			ULONGLONG m_nFileSize;

		public:
		// CClassData
			CClassData() throw()
			{
				Initialize();
			}
			CClassData(const CLSID& ClassIdentifier)
			{
				Initialize(ClassIdentifier);
			}
			VOID Initialize() throw()
			{
				m_sDescription.Empty();
				m_sFilePath = NULL;
				m_pszFileName = NULL;
				m_sFileDirectory = NULL;
				m_pszFileProductVersion[0] = 0;
				m_pszFileVersion[0] = 0;
				m_nFileSize = 0;
			}
			VOID Initialize(const CLSID& ClassIdentifier)
			{
				Initialize();
				m_sDescription = _RegKeyHelper::QueryStringValue(HKEY_CLASSES_ROOT, AtlFormatString(_T("CLSID\\%ls"), _PersistHelper::StringFromIdentifier(ClassIdentifier)));
				m_sFilePath = (LPCTSTR) _RegKeyHelper::QueryStringValue(HKEY_CLASSES_ROOT, AtlFormatString(_T("CLSID\\%ls\\InprocServer32"), _PersistHelper::StringFromIdentifier(ClassIdentifier)));
				if(_tcslen(m_sFilePath))
				{
					m_pszFileName = (LPCTSTR) m_sFilePath + m_sFilePath.FindFileName();
					m_sFileDirectory = m_sFilePath;
					_W(m_sFileDirectory.RemoveFileSpec());
					// SUGG: File times
					_VersionInfoHelper::GetVersionStrings(m_sFilePath, m_pszFileProductVersion, m_pszFileVersion);
					CFindFiles FindFiles;
					if(FindFiles.FindFirstFile(m_sFilePath))
						m_nFileSize = ((ULONGLONG) FindFiles.GetFindData().nFileSizeHigh << 32) + FindFiles.GetFindData().nFileSizeLow;
				}
			}
		};

	private:
		CGraphBuilderCallbackPropertySheet& m_PropertySheet;
		CRoHyperStatic m_IntroductionStatic;
		CRoListViewT<CGraphData*, CRoListControlDataTraitsT> m_GraphListView;
		CRoListViewT<CLogData*, CRoListControlDataTraitsT> m_LogListView;
		CHorSplitterWindow m_Splitter;
		CRoHyperStatic m_CopyToClipboardStatic;
		CProgressBarCtrl m_ProgressBar;
		CAtlMap<INT, BOOL> m_ChangeMap;
		CObjectPtr<CThread> m_pThread;
		BOOL m_bThreadCompleted;
		mutable CRoCriticalSection m_DataCriticalSection;
		CGraphDataList m_GraphDataList;

		VOID UpdateControls()
		{
			m_LogListView.EnableWindow(m_GraphListView.GetSelectedCount() == 1);
		}
		static SIZE_T StringToPointer(const CHAR* pszString)
		{
			INT nValue;
			__D(StrToIntExA(pszString, STIF_SUPPORT_HEX, &nValue), E_UNNAMED);
			return (SIZE_T) nValue;
		}
		static HRESULT StringToResult(const CHAR* pszString)
		{
			return (HRESULT) StringToPointer(pszString);
		}
		DWORD ThreadProc(CThread*, CEvent& InitializationEvent, CEvent& TerminationEvent)
		{
			CMultiThreadedApartment MultiThreadedApartment;
			const CPath sPath = m_PropertySheet.m_sPath;
			_W(InitializationEvent.Set());
			CRoMapT<INT, CStringA> ProcessPathMap;
			CGraphDataList GraphDataList;
			_ATLTRY
			{
				CAtlFile File;
				__C(File.Create(sPath, GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE, OPEN_EXISTING));
				ULONGLONG nFileSize;
				__C(File.GetSize(nFileSize));
				__C(File.LockRange(0, nFileSize));
				_ATLTRY
				{
					CHeapPtr<CHAR> pszData;
					static const SIZE_T g_nDataCapacity = 4 << 20; // 4 MB
					__D(pszData.Reallocate(g_nDataCapacity), E_OUTOFMEMORY);
					SIZE_T nDataSize = 0, nDataPosition = 0;
					BOOL bDataReadComplete = FALSE;
					HRESULT nResult = S_OK;
					for(UINT nLineIndex = 0; ; nLineIndex++)
					{
						#pragma region Termination Check
						if(nLineIndex % (4 << 10) == 0)
						{
							const DWORD nWaitResult = WaitForSingleObject(TerminationEvent, 0);
							_Z5(atlTraceSync, 5, _T("nWaitResult 0x%x\n"), nWaitResult);
							_A(nWaitResult == WAIT_OBJECT_0 || nWaitResult == WAIT_TIMEOUT);
							if(nWaitResult != WAIT_TIMEOUT)
							{
								nResult = S_FALSE;
								break;
							}
						}
						#pragma endregion 
						_A(nDataPosition <= nDataSize);
						#pragma region Read Data
						if(!bDataReadComplete && (nDataSize - nDataPosition) < g_nDataCapacity / 4)
						{
							#pragma region Compact Data
							const SIZE_T nCarryOverDataSize = nDataSize - nDataPosition;
							if(nCarryOverDataSize)
								_W(!memmove_s(pszData, g_nDataCapacity, pszData + nDataPosition, nCarryOverDataSize));
							nDataSize -= nDataPosition;
							nDataPosition = 0;
							pszData[nDataSize] = 0;
							#pragma endregion 
							#pragma region Progress
							ULONGLONG nFilePosition;
							__C(File.GetPosition(nFilePosition));
							_W(PostPrivateMessage(WM_THREADPROGRESS, (WPARAM) ((16 << 10) * nFilePosition / nFileSize)));
							#pragma endregion 
							const SIZE_T nReadableDataSize = g_nDataCapacity - nDataSize - 1;
							DWORD nReadDataSize = 0;
							__C(File.Read(pszData + nDataSize, (DWORD) nReadableDataSize, nReadDataSize));
							_Z5(atlTraceGeneral, 5, _T("nDataSize %d, nReadableDataSize %d, nReadDataSize %d\n"), nDataSize, nReadableDataSize, nReadDataSize);
							bDataReadComplete = (SIZE_T) nReadDataSize < nReadableDataSize;
							nDataSize += nReadDataSize;
							_A(nDataSize < g_nDataCapacity);
							pszData[nDataSize] = 0;
						}
						#pragma endregion 
						LPSTR pszLineData = pszData + nDataPosition;
						LPSTR pszSeparator = strchr(pszLineData, '\n');
						// NOTE: Valid lines are terminated with \r\n, so we can skip incomplete line
						if(!pszSeparator)
							break;
						nDataPosition = (pszSeparator + 1) - pszData;
						_A(nDataPosition <= nDataSize);
						pszSeparator[0] = 0;
						if(pszSeparator[-1] == '\r')
							pszSeparator[-1] = 0;
						#pragma region Process Line
						_ATLTRY
						{
							#pragma region Parse Data
							static CAtlStaticRegExp<CAtlRECharTraitsA> g_LineExpression("^" 
								"{[0-9]+}" "\\-" // Year
								"{[0-9]+}" "\\-" // Month
								"{[0-9]+}" " " // Day
								"{[0-9]+}" "\\:" // Hour
								"{[0-9]+}" "\\:" // Minute
								"{[0-9]+}" "\t" // Second
								"{[0-9]+}" "\t" // Process Identifier
								"{[0-9]+}" "\t" // Thread Identifier
								"{.+}" // Payload
								"$", FALSE);
							CAtlREMatchContext<CAtlRECharTraitsA> MatchContext;
							__D(g_LineExpression.Match(pszLineData, &MatchContext), E_UNNAMED);
							INT pnValues[8];
							for(SIZE_T nIndex = 0; nIndex < DIM(pnValues); nIndex++)
								__D(AtlStringToInteger(_ReHelper::GetMatchString(MatchContext, (INT) nIndex), pnValues[nIndex]), E_UNNAMED);
							SYSTEMTIME Time;
							ZeroMemory(&Time, sizeof Time);
							Time.wYear = (WORD) pnValues[0];
							Time.wMonth = (WORD) pnValues[1];
							Time.wDay = (WORD) pnValues[2];
							Time.wHour = (WORD) pnValues[3];
							Time.wMinute = (WORD) pnValues[4];
							Time.wSecond = (WORD) pnValues[5];
							ULONGLONG nTime;
							_W(SystemTimeToFileTime(&Time, &reinterpret_cast<FILETIME&>(nTime)));
							const INT& nProcessIdentifier = pnValues[6];
							const INT& nThreadIdentifier = pnValues[7];
							_Y1(AtlFormatString(_T("nTime %s, nProcessIdentifier %d, nThreadIdentifier %d"), _StringHelper::FormatDateTime(nTime), nProcessIdentifier, nThreadIdentifier));
							LPCSTR pszPayloadLineData, pszPayloadLineDataSeparator;
							MatchContext.GetMatch(8, &pszPayloadLineData, &pszPayloadLineDataSeparator);
							_A(!*pszPayloadLineDataSeparator);
							#pragma endregion
							//CAtlREMatchContext<CAtlRECharTraitsA> MatchContext;
							static CAtlStaticRegExp<CAtlRECharTraitsA> g_ExpressionA("::CAmGraphBuilderCallback::Initialize: this {0x[0-9A-F]+}, pSpy {0x[0-9A-F]+}", FALSE);
							static CAtlStaticRegExp<CAtlRECharTraitsA> g_ExpressionB("::CAmGraphBuilderCallback::SelectedFilter: this {0x[0-9A-F]+}, pMoniker {.+}", FALSE);
							static CAtlStaticRegExp<CAtlRECharTraitsA> g_ExpressionC("::CAmGraphBuilderCallback::SelectedFilter: this {0x[0-9A-F]+}, nSelectedFilterResult {0x[0-9A-F]+}", FALSE);
							static CAtlStaticRegExp<CAtlRECharTraitsA> g_ExpressionD("::CAmGraphBuilderCallback::CreatedFilter: this {0x[0-9A-F]+}, pBaseFilter {0x[0-9A-F]+} {\\{[^\\}]+\\}} \\\"{[^\\\"]*}\\\"", FALSE);
							static CAtlStaticRegExp<CAtlRECharTraitsA> g_ExpressionE("::CAmGraphBuilderCallback::CreatedFilter: this {0x[0-9A-F]+}, nCreatedFilterResult {0x[0-9A-F]+}", FALSE);
							static CAtlStaticRegExp<CAtlRECharTraitsA> g_ExpressionF("::AddFilter: this {0x[0-9A-F]+}, pBaseFilter {0x[0-9A-F]+} {\\{[^\\}]+\\}}, pszName \\\"{[^\\\"]*}\\\"", FALSE);
							static CAtlStaticRegExp<CAtlRECharTraitsA> g_ExpressionG("::AddFilter: this {0x[0-9A-F]+}, sName \\\"{[^\\\"]*}\\\"", FALSE);
							static CAtlStaticRegExp<CAtlRECharTraitsA> g_ExpressionH("::RemoveFilter: this {0x[0-9A-F]+}, pBaseFilter {0x[0-9A-F]+}", FALSE);
							static CAtlStaticRegExp<CAtlRECharTraitsA> g_ExpressionI("::RemoveFilter: this {0x[0-9A-F]+}, sName \\\"{[^\\\"]*}\\\"", FALSE);
							static CAtlStaticRegExp<CAtlRECharTraitsA> g_ExpressionJ("version is [0-9\\.\\,]+, running in \\\"{[^\\\"]+}\\\" at ", FALSE);
							// TODO: Connect
							if(g_ExpressionA.Match(pszPayloadLineData, &MatchContext))
							{
								#pragma region Status Callback Initialization
								const SIZE_T nCallbackPointer = StringToPointer(_ReHelper::GetMatchString(MatchContext, 0));
								const SIZE_T nPointer = StringToPointer(_ReHelper::GetMatchString(MatchContext, 1));
								_Z5(atlTraceGeneral, 5, _T("nCallbackPointer 0x%p, nPointer 0x%p\n"), nCallbackPointer, nPointer);
								const POSITION Position = GraphDataList.AddTail();
								CGraphData& GraphData = GraphDataList.GetAt(Position);
								GraphData.m_nProcessIdentifier = nProcessIdentifier;
								#pragma region Process Path
								{
									_A(GraphData.m_sProcessPath.IsEmpty());
									const POSITION Position = ProcessPathMap.Lookup(nProcessIdentifier);
									if(Position)
										GraphData.m_sProcessPath = CA2CT(ProcessPathMap.GetValueAt(Position));
								}
								#pragma endregion 
								GraphData.m_nTime = nTime;
								GraphData.m_nPointer = nPointer;
								GraphData.m_nCallbackPointer = nCallbackPointer;
								#pragma endregion 
							} else
							if(g_ExpressionB.Match(pszPayloadLineData, &MatchContext))
							{
								#pragma region IAMGraphBuilderCallback::SelectedFilter Call
								const SIZE_T nCallbackPointer = StringToPointer(_ReHelper::GetMatchString(MatchContext, 0));
								const CStringA sMonikerDisplayName = _ReHelper::GetMatchString(MatchContext, 1);
								_Z5(atlTraceGeneral, 5, _T("nCallbackPointer 0x%p, sMonikerDisplayName \"%hs\"\n"), nCallbackPointer, sMonikerDisplayName);
								CGraphData* pGraphData = NULL;
								if(GraphDataList.FindLastCallbackPointer(nProcessIdentifier, nCallbackPointer, pGraphData))
								{
									_A(pGraphData);
									_W(pGraphData->m_LogDataList.AddTail(CLogData(nTime, sMonikerDisplayName)));
								}
								#pragma endregion 
							} else
							if(g_ExpressionC.Match(pszPayloadLineData, &MatchContext))
							{
								#pragma region Site IAMGraphBuilderCallback::SelectedFilter Return
								const SIZE_T nCallbackPointer = StringToPointer(_ReHelper::GetMatchString(MatchContext, 0));
								const HRESULT nSelectedFilterResult = StringToResult(_ReHelper::GetMatchString(MatchContext, 1));
								_Z5(atlTraceGeneral, 5, _T("nCallbackPointer 0x%p, nSelectedFilterResult 0x%08x\n"), nCallbackPointer, nSelectedFilterResult);
								CGraphData* pGraphData = NULL;
								if(GraphDataList.FindLastCallbackPointer(nProcessIdentifier, nCallbackPointer, pGraphData))
								{
									_A(pGraphData);
									if(!pGraphData->m_LogDataList.IsEmpty())
									{
										// WARN: A bit unsafe, we could also check thread identifier match
										pGraphData->m_LogDataList.GetTail().SetSiteResult(nSelectedFilterResult);
									}
								}
								#pragma endregion 
							} else
							if(g_ExpressionD.Match(pszPayloadLineData, &MatchContext))
							{
								#pragma region IAMGraphBuilderCallback::CreatedFilter Call
								const SIZE_T nCallbackPointer = StringToPointer(_ReHelper::GetMatchString(MatchContext, 0));
								const SIZE_T nFilterPointer = StringToPointer(_ReHelper::GetMatchString(MatchContext, 1));
								const CLSID FilterClassIdentifier = _PersistHelper::ClassIdentifierFromString(CStringW(_ReHelper::GetMatchString(MatchContext, 2)));
								const CStringA sFilterName = _ReHelper::GetMatchString(MatchContext, 3);
								_Z5(atlTraceGeneral, 5, _T("nCallbackPointer 0x%p, nFilterPointer 0x%p, FilterClassIdentifier %ls, sFilterName \"%hs\"\n"), nCallbackPointer, nFilterPointer, _PersistHelper::StringFromIdentifier(FilterClassIdentifier), sFilterName);
								CGraphData* pGraphData = NULL;
								if(GraphDataList.FindLastCallbackPointer(nProcessIdentifier, nCallbackPointer, pGraphData))
								{
									_A(pGraphData);
									_W(pGraphData->m_LogDataList.AddTail(CLogData(nTime, CLogData::TYPE_CREATEDFILTER, nFilterPointer, FilterClassIdentifier, sFilterName)));
								}
								#pragma endregion 
							} else
							if(g_ExpressionE.Match(pszPayloadLineData, &MatchContext))
							{
								#pragma region Site IAMGraphBuilderCallback::CreatedFilter Return
								const SIZE_T nCallbackPointer = StringToPointer(_ReHelper::GetMatchString(MatchContext, 0));
								const HRESULT nCreatedFilterResult = StringToResult(_ReHelper::GetMatchString(MatchContext, 1));
								_Z5(atlTraceGeneral, 5, _T("nCallbackPointer 0x%p, nCreatedFilterResult 0x%08x\n"), nCallbackPointer, nCreatedFilterResult);
								CGraphData* pGraphData = NULL;
								if(GraphDataList.FindLastCallbackPointer(nProcessIdentifier, nCallbackPointer, pGraphData))
								{
									_A(pGraphData);
									if(!pGraphData->m_LogDataList.IsEmpty())
									{
										// WARN: A bit unsafe, we could also check thread identifier match
										pGraphData->m_LogDataList.GetTail().SetSiteResult(nCreatedFilterResult);
									}
								}
								#pragma endregion 
							} else
							if(g_ExpressionF.Match(pszPayloadLineData, &MatchContext))
							{
								#pragma region AddFilter
								const SIZE_T nPointer = StringToPointer(_ReHelper::GetMatchString(MatchContext, 0));
								const SIZE_T nFilterPointer = StringToPointer(_ReHelper::GetMatchString(MatchContext, 1));
								const CLSID FilterClassIdentifier = _PersistHelper::ClassIdentifierFromString(CStringW(_ReHelper::GetMatchString(MatchContext, 2)));
								const CStringA sFilterName = _ReHelper::GetMatchString(MatchContext, 3);
								_Z5(atlTraceGeneral, 5, _T("nPointer 0x%p, nFilterPointer 0x%p, FilterClassIdentifier %ls, sFilterName \"%hs\"\n"), nPointer, nFilterPointer, _PersistHelper::StringFromIdentifier(FilterClassIdentifier), sFilterName);
								CGraphData* pGraphData = NULL;
								if(GraphDataList.FindLastPointer(nProcessIdentifier, nPointer, pGraphData))
								{
									_A(pGraphData);
									_W(pGraphData->m_FilterDataMap.SetAt(nFilterPointer, CFilterData(nFilterPointer, FilterClassIdentifier, sFilterName)));
									_W(pGraphData->m_LogDataList.AddTail(CLogData(nTime, CLogData::TYPE_ADDFILTER, nFilterPointer, FilterClassIdentifier, sFilterName)));
								}
								#pragma endregion 
							} else
							if(g_ExpressionG.Match(pszPayloadLineData, &MatchContext))
							{
								#pragma region AddFilter Name
								const SIZE_T nPointer = StringToPointer(_ReHelper::GetMatchString(MatchContext, 0));
								const CStringA sName = _ReHelper::GetMatchString(MatchContext, 1);
								_Z5(atlTraceGeneral, 5, _T("nPointer 0x%p, sName \"%hs\"\n"), nPointer, sName);
								CGraphData* pGraphData = NULL;
								if(GraphDataList.FindLastPointer(nProcessIdentifier, nPointer, pGraphData))
								{
									_A(pGraphData);
									if(!pGraphData->m_LogDataList.IsEmpty())
									{
										// WARN: A bit unsafe, we could also check thread identifier match
										CLogData* pLogData = &pGraphData->m_LogDataList.GetTail();
										if(pLogData->m_Type == CLogData::TYPE_ADDFILTER) // && pLogData->m_sFilterName.IsEmpty())
											pLogData->m_sFilterName = sName;
									}
								}
								#pragma endregion 
							} else
							if(g_ExpressionH.Match(pszPayloadLineData, &MatchContext))
							{
								#pragma region RemoveFilter
								const SIZE_T nPointer = StringToPointer(_ReHelper::GetMatchString(MatchContext, 0));
								const SIZE_T nFilterPointer = StringToPointer(_ReHelper::GetMatchString(MatchContext, 1));
								_Z5(atlTraceGeneral, 5, _T("nPointer 0x%p, nFilterPointer 0x%p\n"), nPointer, nFilterPointer);
								CGraphData* pGraphData = NULL;
								if(GraphDataList.FindLastPointer(nProcessIdentifier, nPointer, pGraphData))
								{
									_A(pGraphData);
									_W(pGraphData->m_LogDataList.AddTail(CLogData(nTime, nFilterPointer)));
								}
								#pragma endregion 
							} else
							if(g_ExpressionI.Match(pszPayloadLineData, &MatchContext))
							{
								#pragma region RemoveFilter Name
								const SIZE_T nPointer = StringToPointer(_ReHelper::GetMatchString(MatchContext, 0));
								const CStringA sName = _ReHelper::GetMatchString(MatchContext, 1);
								_Z5(atlTraceGeneral, 5, _T("nPointer 0x%p, sName \"%hs\"\n"), nPointer, sName);
								CGraphData* pGraphData = NULL;
								if(GraphDataList.FindLastPointer(nProcessIdentifier, nPointer, pGraphData))
								{
									_A(pGraphData);
									if(!pGraphData->m_LogDataList.IsEmpty())
									{
										// WARN: A bit unsafe, we could also check thread identifier match
										CLogData* pLogData = &pGraphData->m_LogDataList.GetTail();
										if(pLogData->m_Type == CLogData::TYPE_REMOVEFILTER && pLogData->m_sFilterName.IsEmpty())
											pLogData->m_sFilterName = sName;
									}
								}
								#pragma endregion 
							} else
							if(g_ExpressionJ.Match(pszPayloadLineData, &MatchContext))
							{
								#pragma region Library Initialization
								const CStringA sPath = _ReHelper::GetMatchString(MatchContext, 0);
								_Z5(atlTraceGeneral, 5, _T("sPath \"%hs\"\n"), sPath);
								ProcessPathMap[nProcessIdentifier] = sPath;
								#pragma endregion 
							} else
								;
							_Y2();
						}
						_ATLCATCHALL()
						{
							_Z_EXCEPTION();
						}
						#pragma endregion 
					}
					{
						CRoCriticalSectionLock DataLock(m_DataCriticalSection);
						SwapMemory(&m_GraphDataList, &GraphDataList);
					}
					PostPrivateMessage(WM_THREADCOMPLETED, (WPARAM) nResult);
				}
				_ATLCATCHALL()
				{
					__C(File.UnlockRange(0, nFileSize));
					_ATLRETHROW;
				}
				__C(File.UnlockRange(0, nFileSize));
			}
			_ATLCATCH(Exception)
			{
				PostPrivateMessage(WM_THREADCOMPLETED, (WPARAM) (HRESULT) Exception);
			}
			return 0;
		}

	public:
	// CGraphPropertyPage
		CGraphPropertyPage(CGraphBuilderCallbackPropertySheet* pPropertySheet) throw() :
			m_PropertySheet(*pPropertySheet)
		{
		}

	// CDialogResize				
		VOID DlgResize_UpdateLayout(INT nWidth, INT nHeight)
		{
			__super::DlgResize_UpdateLayout(nWidth, nHeight);
			CRect SplitterPosition, ProgressPosition;
			_W(m_Splitter.GetWindowRect(SplitterPosition));
			_W(ScreenToClient(SplitterPosition));
			_W(m_ProgressBar.GetWindowRect(ProgressPosition));
			_W(ScreenToClient(ProgressPosition));
			const LONG nX = (SplitterPosition.Height() - ProgressPosition.Height()) / 2;
			ProgressPosition = SplitterPosition;
			ProgressPosition.DeflateRect(0, nX);
			_W(m_ProgressBar.MoveWindow(ProgressPosition));
		}
			
	// Window message handlers
		LRESULT OnInitDialog(HWND, LPARAM)
		{
			_ATLTRY
			{
				_W(m_IntroductionStatic.SubclassWindow(GetDlgItem(IDC_GRAPHBUILDERCALLBACK_GRAPH_INTRODUCTION)));
				CSize IconSize(GetSystemMetrics(SM_CXSMICON), GetSystemMetrics(SM_CYSMICON));
				#pragma region Log List View
				{
					m_GraphListView.Initialize(GetDlgItem(IDC_GRAPHBUILDERCALLBACK_GRAPH_GRAPH));
					CImageList ImageList;
					_W(ImageList.Create(IconSize.cx, IconSize.cy, ILC_COLOR32 | ILC_MASK, 1, 1));
					_W(!m_GraphListView.SetImageList(ImageList.Detach(), LVSIL_SMALL));
				}
				#pragma endregion 
				#pragma region Log List View
				{
					m_LogListView.Initialize(GetDlgItem(IDC_GRAPHBUILDERCALLBACK_GRAPH_LOG));
					CImageList ImageList;
					_W(ImageList.Create(IconSize.cx, IconSize.cy, ILC_COLOR32 | ILC_MASK, 1, 1));
					_W(ImageList.AddIcon(AtlLoadIconImage(IDI_LISTVIEW_SUCCESS, LR_DEFAULTCOLOR, IconSize.cx, IconSize.cy)) == 0);
					_W(ImageList.AddIcon(AtlLoadIconImage(IDI_LISTVIEW_FAILURE, LR_DEFAULTCOLOR, IconSize.cx, IconSize.cy)) == 1);
					_W(ImageList.AddIcon(AtlLoadIconImage(IDI_GRAPHBUILDERCALLBACK_LISTVIEW_ADDFILTER, LR_DEFAULTCOLOR, IconSize.cx, IconSize.cy)) == 2);
					_W(ImageList.AddIcon(AtlLoadIconImage(IDI_GRAPHBUILDERCALLBACK_LISTVIEW_REMOVEFILTER, LR_DEFAULTCOLOR, IconSize.cx, IconSize.cy)) == 3);
					_W(ImageList.AddIcon(AtlLoadIconImage(IDI_GRAPHBUILDERCALLBACK_LISTVIEW_SELECTEDFILTER, LR_DEFAULTCOLOR, IconSize.cx, IconSize.cy)) == 4);
					_W(ImageList.AddIcon(AtlLoadIconImage(IDI_GRAPHBUILDERCALLBACK_LISTVIEW_CREATEDFILTER, LR_DEFAULTCOLOR, IconSize.cx, IconSize.cy)) == 5);
					_W(!m_LogListView.SetImageList(ImageList.Detach(), LVSIL_SMALL));
					CToolTipCtrl ToolTip = m_LogListView.GetToolTips();
					ToolTip.SetMaxTipWidth(GetSystemMetrics(SM_CXSCREEN) / 2);
					ToolTip.SetDelayTime(TTDT_AUTOPOP, 30 * 1000); // 30 seconds
				}
				#pragma endregion 
				#pragma region Splitter
				CRect GraphPosition, LogPosition, SplitterPosition;
				_W(m_GraphListView.GetWindowRect(GraphPosition));
				_W(ScreenToClient(GraphPosition));
				_W(m_LogListView.GetWindowRect(LogPosition));
				_W(ScreenToClient(LogPosition));
				_W(SplitterPosition.UnionRect(GraphPosition, LogPosition));
				_W(m_Splitter.Create(m_hWnd, SplitterPosition, NULL, WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS | WS_CLIPCHILDREN, WS_EX_CONTROLPARENT, IDC_GRAPHBUILDERCALLBACK_GRAPH_SPLITTER));
				m_GraphListView.SetParent(m_Splitter);
				m_LogListView.SetParent(m_Splitter);
				m_Splitter.SetSplitterPanes(m_GraphListView, m_LogListView);
				m_Splitter.SetSplitterPos(GraphPosition.Height());
				m_Splitter.ShowWindow(SW_HIDE);
				#pragma endregion 
				_W(m_CopyToClipboardStatic.SubclassWindow(GetDlgItem(IDC_GRAPHBUILDERCALLBACK_GRAPH_COPYTOCLIPBOARD)));
				CRoHyperStatic::ArrangeHorizontally(&m_CopyToClipboardStatic, NULL);
				m_ProgressBar = GetDlgItem(IDC_GRAPHBUILDERCALLBACK_GRAPH_PROGRESS);
				m_ProgressBar.SetRange(0, 16 << 10);
				m_ProgressBar.SetStep(256);
				m_ProgressBar.ShowWindow(SW_SHOW);
				DlgResize_Init(FALSE, FALSE);
				{
					CRect Position;
					_W(GetClientRect(Position));
					DlgResize_UpdateLayout(Position.Width(), Position.Height());
				}
				m_bThreadCompleted = FALSE;
				m_ChangeMap.RemoveAll();
				UpdateControls();
				#pragma region Default Property Sheet Size
				CRect Position;
				_W(m_PropertySheet.GetWindowRect(Position));
				Position.InflateRect(6 * Position.Width() / 8, 5 * Position.Width() / 8);
				CSize ScreenExtent(GetSystemMetrics(SM_CXSCREEN), GetSystemMetrics(SM_CYSCREEN));
				ScreenExtent.cx -= ScreenExtent.cx / 8;
				ScreenExtent.cy -= ScreenExtent.cy / 8;
				if(Position.Width() > ScreenExtent.cx)
					Position.right = Position.left + ScreenExtent.cx;
				if(Position.Height() > ScreenExtent.cy)
					Position.bottom = Position.top + ScreenExtent.cy;
				_W(m_PropertySheet.MoveWindow(Position));
				_W(m_PropertySheet.CenterWindow());
				#pragma endregion
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
			m_pThread = NULL;
			return 0;
		}
		INT OnSetActive() throw()
		{
			_ATLTRY
			{
				if(!m_bThreadCompleted)
				{
					_A(!m_pThread);
					m_ProgressBar.SetPos(0);
					CObjectPtr<CThread> pThread;
					__E(pThread.Construct()->Initialize(this, &CGraphPropertyPage::ThreadProc));
					m_pThread = pThread;
				}
			}
			_ATLCATCHALL()
			{
				_Z_EXCEPTION();
				return -1;
			}
			return 0;
		}
		LRESULT OnThreadProgress(UINT, WPARAM wParam, LPARAM)
		{
			m_ProgressBar.SetPos((INT) wParam);
			return 0;
		}
		LRESULT OnThreadCompleted(UINT, WPARAM wParam, LPARAM)
		{
			const HRESULT nResult = (HRESULT) wParam;
			_ATLTRY
			{
				__C(nResult);
				CWaitCursor WaitCursor;
				CWindowRedraw NoGraphListViewRedraw(m_GraphListView);
				m_GraphListView.DeleteAllItems();
				CImageList ImageList = m_GraphListView.GetImageList(LVSIL_SMALL);
				CRoMapT<CStringA, INT, CStringElementTraitsI<CStringA> > PathIconIndexMap;
				for(POSITION Position = m_GraphDataList.GetHeadPosition(); Position; m_GraphDataList.GetNext(Position))
				{
					CGraphData* pGraphData = &m_GraphDataList.GetAt(Position);
					// NOTE: Reverse order
					const INT nItem = m_GraphListView.InsertItem(0, pGraphData);
					_A(nItem >= 0);
					#pragma region Retrieve File Icon
					pGraphData->m_nImageIndex = -1;
					if(!pGraphData->m_sProcessPath.IsEmpty())
						_ATLTRY
						{ 
							if(!PathIconIndexMap.Lookup(pGraphData->m_sProcessPath, pGraphData->m_nImageIndex))
							{
								SHFILEINFO FileInformation;
								ZeroMemory(&FileInformation, sizeof FileInformation);
								if(SHGetFileInfo(CA2CT(pGraphData->m_sProcessPath), 0, &FileInformation, sizeof FileInformation, SHGFI_ICON | SHGFI_SMALLICON))
								{
									CIcon Icon;
									Icon.Attach(FileInformation.hIcon);
									pGraphData->m_nImageIndex = ImageList.AddIcon(Icon);
									_A(pGraphData->m_nImageIndex >= 0);
									PathIconIndexMap[pGraphData->m_sProcessPath] = pGraphData->m_nImageIndex;
								}
							}
						}
						_ATLCATCHALL()
						{
							_Z_EXCEPTION();
							_A(pGraphData->m_nImageIndex == -1);
						}
					#pragma endregion 
				}
				UpdateControls();
				m_ProgressBar.ShowWindow(SW_HIDE);
				m_Splitter.ShowWindow(SW_SHOW);
				m_GraphListView.SetFocus();
			}
			_ATLCATCH(Exception)
			{
				_Z_ATLEXCEPTION(Exception);
				AtlExceptionMessageBox(m_hWnd, Exception);
			}
			m_bThreadCompleted = TRUE;
			m_pThread = NULL;
			return 0;
		}
		//LRESULT OnChanged(UINT, INT nIdentifier, HWND)
		//{
		//	m_ChangeMap[nIdentifier] = TRUE;
		//	SetModified();
		//	UpdateControls();
		//	return 0;
		//}
		LRESULT OnGraphListViewGetDispInfo(NMLVDISPINFO* pHeader)
		{
			const CGraphData* pGraphData = m_GraphListView.DataFromParameter(pHeader->item.lParam);
			if(pHeader->item.mask & LVIF_TEXT)
			{
				CString& sTextBuffer = m_GraphListView.GetTextBufferString(TRUE);
				switch(pHeader->item.iSubItem)
				{
				case 1: // Process
					sTextBuffer = AtlFormatString(_T("%d"), pGraphData->m_nProcessIdentifier);
					break;
				case 2: // Name
					sTextBuffer = pGraphData->GetProcessName();
					break;
				case 3: // Directory
					sTextBuffer = pGraphData->GetProcessDirectory();
					break;
				default: // Time
					sTextBuffer = _StringHelper::FormatDateTime(pGraphData->m_nTime);
				}
				pHeader->item.pszText = m_GraphListView.GetTextBuffer();
			}
			if(pHeader->item.mask & LVIF_IMAGE)
				pHeader->item.iImage = pGraphData->m_nImageIndex;
			return 0;
		}
		LRESULT OnGraphListViewGetInfoTip(NMLVGETINFOTIP* pHeader)
		{
			const CGraphData* pGraphData = m_GraphListView.GetItemData(pHeader->iItem);
			CString& sTextBuffer = m_GraphListView.GetTextBufferString(TRUE);
			sTextBuffer.AppendFormat(_T("Time: %s\r\n"), _StringHelper::FormatDateTime(pGraphData->m_nTime));
			sTextBuffer.AppendFormat(_T("Process: %d\r\n"), pGraphData->m_nProcessIdentifier);
			if(!pGraphData->m_sProcessPath.IsEmpty())
			{
				sTextBuffer.AppendFormat(_T("Process Name: %s\r\n"), pGraphData->GetProcessName());
				sTextBuffer.AppendFormat(_T("Process Directory: %s\r\n"), pGraphData->GetProcessDirectory());
			}
			sTextBuffer.TrimRight(_T("\t\n\r ."));
			#pragma region Clipboard Copy
			if(GetKeyState(VK_CONTROL) < 0 && GetKeyState(VK_SHIFT) < 0)
				_ATLTRY
				{
					SetClipboardText(m_hWnd, sTextBuffer);
					MessageBeep(MB_OK);
				}
				_ATLCATCHALL()
				{
					_Z_EXCEPTION();
					MessageBeep(MB_ICONERROR);
				}
			#pragma endregion
			_tcsncpy_s(pHeader->pszText, pHeader->cchTextMax, m_GraphListView.GetTextBuffer(), _TRUNCATE);
			return 0;
		}
		LRESULT OnGraphListViewItemChanged(NMLISTVIEW* pHeader)
		{
			UpdateControls();
			if(pHeader->iItem >= 0 && ((pHeader->uOldState ^ pHeader->uNewState) & LVIS_SELECTED) && m_GraphListView.GetSelectedCount() == 1)
			{
				CWindowRedraw NoLogListViewRedraw(m_LogListView);
				m_LogListView.DeleteAllItems();
				CGraphData* pGraphData = m_GraphListView.GetItemData(m_GraphListView.GetNextItem(-1, LVNI_SELECTED));
				CLogDataList& LogDataList = pGraphData->m_LogDataList;
				for(POSITION Position = LogDataList.GetHeadPosition(); Position; LogDataList.GetNext(Position))
				{
					CLogData* pLogData = &LogDataList.GetAt(Position);
					const INT nItem = m_LogListView.InsertItem(m_LogListView.GetItemCount(), pLogData);
					_A(nItem >= 0);
				}
			}
			return 0;
		}
		LRESULT OnLogListViewGetDispInfo(NMLVDISPINFO* pHeader)
		{
			const CLogData* pLogData = m_LogListView.DataFromParameter(pHeader->item.lParam);
			if(pHeader->item.mask & LVIF_TEXT)
			{
				CString& sTextBuffer = m_LogListView.GetTextBufferString(TRUE);
				switch(pHeader->item.iSubItem)
				{
				case 1: // Event
					sTextBuffer = pLogData->GetFriendlyEventName();
					break;
				case 2: // Moniker Name
					sTextBuffer = pLogData->GetFriendlyMonikerName();
					break;
				case 3: // Filter Name
					sTextBuffer = CA2CT(pLogData->m_sFilterName);
					break;
				case 4: // Application Result
					sTextBuffer = pLogData->GetFriendlyApplicationResult();
					break;
				default: // Time
					sTextBuffer = _StringHelper::FormatDateTime(pLogData->m_nTime);
				}
				pHeader->item.pszText = m_LogListView.GetTextBuffer();
			}
			if(pHeader->item.mask & LVIF_IMAGE)
				switch(pLogData->m_Type)
				{
				case CLogData::TYPE_SELECTEDFILTER:
					pHeader->item.iImage = (!pLogData->m_bSiteResultValid || SUCCEEDED(pLogData->m_nSiteResult)) ? 4 : 1;
					break;
				case CLogData::TYPE_CREATEDFILTER:
					pHeader->item.iImage = (!pLogData->m_bSiteResultValid || SUCCEEDED(pLogData->m_nSiteResult)) ? 5 : 1;
					break;
				case CLogData::TYPE_ADDFILTER:
					pHeader->item.iImage = 2;
					break;
				case CLogData::TYPE_REMOVEFILTER:
					pHeader->item.iImage = 3;
					break;
				default:
					pHeader->item.iImage = -1;
				}
			return 0;
		}
		LRESULT OnLogListViewGetInfoTip(NMLVGETINFOTIP* pHeader)
		{
			const CLogData* pLogData = m_LogListView.GetItemData(pHeader->iItem);
			CString& sTextBuffer = m_LogListView.GetTextBufferString(TRUE);
			//sTextBuffer.AppendFormat(_T("Time: %s\r\n"), _StringHelper::FormatDateTime(pLogData->m_nTime));
			sTextBuffer.AppendFormat(_T("Event: %s\r\n"), pLogData->GetFriendlyEventName());
			CLSID ClassIdentifier = CLSID_NULL;
			if(!pLogData->m_sMonikerDisplayName.IsEmpty())
			{
				sTextBuffer.AppendFormat(_T("Moniker Display Name: %hs\r\n"), pLogData->m_sMonikerDisplayName);
				const CComPtr<IPropertyBag> pPropertyBag = pLogData->GetMonikerPropertyBag();
				if(pPropertyBag)
					_ATLTRY
					{
						sTextBuffer.AppendFormat(_T("Moniker Name: %ls\r\n"), _FilterGraphHelper::ReadPropertyBagString(pPropertyBag, L"FriendlyName"));
						_PersistHelper::ClassIdentifierFromString(_FilterGraphHelper::ReadPropertyBagString(pPropertyBag, L"CLSID"), ClassIdentifier);
					}
					_ATLCATCHALL()
					{
						_Z_EXCEPTION();
					}
			}
			if(pLogData->m_FilterClassIdentifier != CLSID_NULL)
				ClassIdentifier = pLogData->m_FilterClassIdentifier;
			if(ClassIdentifier != CLSID_NULL)
			{
				sTextBuffer.AppendFormat(_T("Class Identifier: %ls\r\n"), _PersistHelper::StringFromIdentifier(ClassIdentifier));
				_ATLTRY
				{
					CClassData ClassData(ClassIdentifier);
					if(!ClassData.m_sDescription.IsEmpty())
						sTextBuffer.AppendFormat(_T("Class Description: %s\r\n"), ClassData.m_sDescription);
					if(_tcslen(ClassData.m_sFilePath))
					{
						sTextBuffer.AppendFormat(_T("File Name: %s\r\n"), ClassData.m_pszFileName);
						sTextBuffer.AppendFormat(_T("File Directory: %s\r\n"), ClassData.m_sFileDirectory);
						// SUGG: File times
						if(_tcslen(ClassData.m_pszFileVersion))
							sTextBuffer.AppendFormat(_T("File Version: %s\r\n"), ClassData.m_pszFileVersion);
						if(_tcslen(ClassData.m_pszFileProductVersion))
							sTextBuffer.AppendFormat(_T("File Product Version: %s\r\n"), ClassData.m_pszFileProductVersion);
						if(ClassData.m_nFileSize)
							sTextBuffer.AppendFormat(_T("File Size: %s\r\n"), _StringHelper::FormatNumber((LONGLONG) ClassData.m_nFileSize));
					}
				}
				_ATLCATCHALL()
				{
					_Z_EXCEPTION();
					MessageBeep(MB_ICONERROR);
				}
			}
			if(!pLogData->m_sFilterName.IsEmpty())
				sTextBuffer.AppendFormat(_T("Filter Name: %hs\r\n"), pLogData->m_sFilterName);
			if(pLogData->m_bSiteResultValid)
				sTextBuffer.AppendFormat(_T("Application Result: 0x%08x\r\n"), pLogData->m_nSiteResult);
			sTextBuffer.TrimRight(_T("\t\n\r ."));
			#pragma region Clipboard Copy
			if(GetKeyState(VK_CONTROL) < 0 && GetKeyState(VK_SHIFT) < 0)
				_ATLTRY
				{
					SetClipboardText(m_hWnd, sTextBuffer);
					MessageBeep(MB_OK);
				}
				_ATLCATCHALL()
				{
					_Z_EXCEPTION();
					MessageBeep(MB_ICONERROR);
				}
			#pragma endregion
			_tcsncpy_s(pHeader->pszText, pHeader->cchTextMax, m_LogListView.GetTextBuffer(), _TRUNCATE);
			return 0;
		}
		LRESULT OnCopyToClipboardStaticAnchorClicked(NMHDR*)
		{
			CString sText;
			for(POSITION Position = m_GraphDataList.GetTailPosition(); Position; m_GraphDataList.GetPrev(Position))
			{
				CGraphData* pGraphData = &m_GraphDataList.GetAt(Position);
				#pragma region Graph
				#pragma region Header
				LPCTSTR g_ppszGraphHeaderItems[] = 
				{
					_T("Time"),
					_T("Process Identifier"),
					_T("Process Name"),
					_T("Process Directory"),
				};
				sText += _StringHelper::Join(g_ppszGraphHeaderItems, _T("\t")) + _T("\r\n");
				#pragma endregion
				sText += _StringHelper::Join<CString>(4, _T("\t"), 
					_StringHelper::FormatDateTime(pGraphData->m_nTime),
					AtlFormatString(_T("%d"), pGraphData->m_nProcessIdentifier),
					pGraphData->GetProcessName(),
					pGraphData->GetProcessDirectory(),
					0) + _T("\r\n");
				sText += _T("\r\n");
				#pragma endregion
				#pragma region Log
				if(pGraphData->m_LogDataList.IsEmpty())
					continue;
				#pragma region Header
				LPCTSTR g_ppszLogHeaderItems[] = 
				{
					_T("Time"),
					_T("Event"),
					_T("Moniker Display Name"),
					_T("Moniker Friendly Name"),
					_T("Moniker Class Identifier"),
					_T("Filter Class Identifier"),
					_T("Filter Name"),
					_T("Class Description"),
					_T("File Name"),
					_T("File Directory"),
					_T("File Version"),
					_T("File Product Version"),
					_T("File Size"),
					_T("Application Result"),
				};
				sText += _StringHelper::Join(g_ppszLogHeaderItems, _T("\t")) + _T("\r\n");
				#pragma endregion
				CLogDataList& LogDataList = pGraphData->m_LogDataList;
				for(POSITION Position = LogDataList.GetHeadPosition(); Position; LogDataList.GetNext(Position))
				{
					CLogData* pLogData = &LogDataList.GetAt(Position);
					CStringW sMonikerFriendlyName, sMonikerClassIdentifier;
					if(!pLogData->m_sMonikerDisplayName.IsEmpty())
					{
						const CComPtr<IPropertyBag> pPropertyBag = pLogData->GetMonikerPropertyBag();
						if(pPropertyBag)
							_ATLTRY
							{
								sMonikerFriendlyName = _FilterGraphHelper::ReadPropertyBagString(pPropertyBag, L"FriendlyName");
								sMonikerClassIdentifier = _FilterGraphHelper::ReadPropertyBagString(pPropertyBag, L"CLSID");
							}
							_ATLCATCHALL()
							{
								_Z_EXCEPTION();
							}
					}
					CStringW sFilterClassIdentifier;
					if(pLogData->m_FilterClassIdentifier != CLSID_NULL)
						sFilterClassIdentifier = _PersistHelper::StringFromIdentifier(pLogData->m_FilterClassIdentifier);
					CClassData ClassData;
					_ATLTRY
					{
						const CLSID ClassIdentifier = (pLogData->m_FilterClassIdentifier != CLSID_NULL) ? pLogData->m_FilterClassIdentifier : !sMonikerClassIdentifier.IsEmpty() ? _PersistHelper::ClassIdentifierFromString(sMonikerClassIdentifier) : CLSID_NULL;
						if(ClassIdentifier != CLSID_NULL)
							ClassData.Initialize(ClassIdentifier);
					}
					_ATLCATCHALL()
					{
						_Z_EXCEPTION();
					}
					CString sSiteResult;
					if(pLogData->m_bSiteResultValid)
						sSiteResult = AtlFormatString(_T("0x%08x"), pLogData->m_nSiteResult);
					sText += _StringHelper::Join<CString>(14, _T("\t"), 
						_StringHelper::FormatDateTime(pLogData->m_nTime),
						pLogData->GetFriendlyEventName(),
						(LPCTSTR) CA2CT(pLogData->m_sMonikerDisplayName),
						(LPCTSTR) CW2CT(sMonikerFriendlyName),
						(LPCTSTR) CW2CT(sMonikerClassIdentifier),
						(LPCTSTR) CW2CT(sFilterClassIdentifier),
						(LPCTSTR) CA2CT(pLogData->m_sFilterName),
						ClassData.m_sDescription,
						ClassData.m_pszFileName,
						ClassData.m_sFileDirectory,
						ClassData.m_pszFileVersion,
						ClassData.m_pszFileProductVersion,
						ClassData.m_nFileSize ? (LPCTSTR) _StringHelper::FormatNumber((LONGLONG) ClassData.m_nFileSize) : NULL,
						sSiteResult,
						0) + _T("\r\n");
				}
				#pragma endregion
				sText += _T("\r\n");
			}
			SetClipboardText(m_hWnd, sText);
			MessageBeep(MB_OK);
			return 0;
		}
	};

private:
	CPath m_sPath;
	CGraphPropertyPage m_GraphPropertyPage;

public:
// CGraphBuilderCallbackPropertySheet
	CGraphBuilderCallbackPropertySheet() :
		CSizablePropertySheetT<CGraphBuilderCallbackPropertySheet>(IDS_GRAPHBUILDERCALLBACK_GRAPH_PROPERTYSHEETCAPTION),
		m_GraphPropertyPage(this)
	{
		if(!_tcslen(m_sPath))
			m_sPath = CDebugTraceBase::GetFilePath();
		#if _DEVELOPMENT && FALSE
			static LPCTSTR g_pszPath = _T("D:\\Projects\\A&H\\LuxRiot\\_Issues\\45 Sanyo XP Issues\\DirectShowSpy.log");
			m_sPath = g_pszPath;
		#endif // _DEVELOPMENT
		AddPage(m_GraphPropertyPage);
	}
	BOOL SetInitialPosition()
	{
		if(!__super::SetInitialPosition())
			return FALSE;
		SetIcon(AtlLoadIconImage(IDI_MODULE, LR_DEFAULTCOLOR, GetSystemMetrics(SM_CXICON), GetSystemMetrics(SM_CYICON)), TRUE);
		SetIcon(AtlLoadIconImage(IDI_MODULE, LR_DEFAULTCOLOR, GetSystemMetrics(SM_CXSMICON), GetSystemMetrics(SM_CYSMICON)), FALSE);
		#pragma region Bitness Indication
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
