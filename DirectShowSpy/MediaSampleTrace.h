////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2016
// Created by Roman Ryltsov roman@alax.info, http://alax.info
//
// This source code is published to complement DirectShowSpy developer powertoy 
// and demonstrate the internal use of APIs and tricks powering the tool. It is 
// allowed to freely re-use the portions of the code in other projects, commercial 
// or otherwise (provided that you don’t pretend that you wrote the original tool).
//
// Please keep in mind that DirectShowSpy is a developer tool, it is strongly recommended
// that it is not shipped with release grade software. It is allowed to distribute
// DirectShowSpy if only it is not registered with Windows by default and either
// used privately, or registered on specific throubleshooting request. The advice applies 
// to hooking methods used by DirectShowSpy in general as well.

#pragma once

#include "rodshow.h"
#include "Module_i.h"
#include "Common.h"
#include "FilterGraphHelper.h"
#include "FilterGraphList.h"

VOID MediaSampleTrace_Reset(DWORD nProcessIdentifier);
CString MediaSampleTrace_Get(DWORD nProcessIdentifier);
CComPtr<IUnknown> MediaSampleTrace_Lock();

////////////////////////////////////////////////////////////
// CMediaSampleTraceBase

class CMediaSampleTraceBase
{
public:

	////////////////////////////////////////////////////////
	// Structure

	#pragma pack(push, 1)

	enum
	{
		HEADERFLAGS_NONE = 0,
	};

	typedef struct _HEADER
	{
		UINT32 nCapacity;
		UINT32 nFlags;
		UINT32 nVersion;
		UINT32 nItemCount;
	} HEADER;

	enum
	{
		ITEMFLAGS_NONE = 0,
		ITEMFLAG_INVALID = 1,
	};

	typedef struct _ITEM
	{
		UINT32 nFlags;
		UINT32 nProcessIdentifier;
		UINT32 nPageIdentifier;
		UINT64 nFilterGraphIdentifier;
		WCHAR pszFilterGraphName[128];
	} ITEM;

	enum
	{
		PAGEHEADERFLAGS_NONE = 0,
		PAGEHEADERFLAG_X64 = 1,
	};

	typedef struct _PAGEHEADER
	{
		UINT32 nCapacity;
		UINT32 nFlags;
		UINT32 nProcessIdentifier;
		UINT32 nItemCount;
	} PAGEHEADER;

	enum
	{
		PAGEITEMFLAGS_NONE = 0,
		PAGEITEMFLAG_NEWSEGMENT = 0,
		PAGEITEMFLAG_MEDIASAMPLE = 1,
		PAGEITEMFLAG_ENDOFSTREAM = 2,
		PAGEITEMFLAG_COMMENT = 3,
		PAGEITEMFLAG_TYPE_MASK = 0x03,
		PAGEITEMFLAG_HIGHLIGHT_MASK = 0x3C,
		PAGEITEMFLAG_HIGHLIGHT_SHIFT = 2,
	};

	typedef struct _PAGEITEM
	{
		UINT32 nFlags;
		UINT32 nThreadIdentifier;
		UINT64 nFilterIdentifier;
		WCHAR pszFilterName[32];
		WCHAR pszStreamName[32];
		UINT64 nTime;
		union
		{
			struct
			{
				REFERENCE_TIME nStartTime;
				REFERENCE_TIME nStopTime;
				DOUBLE fRate;
			} NewSegment;
			struct
			{
				AM_SAMPLE2_PROPERTIES Properties;
			} MediaSample;
		} Data;
		WCHAR pszComment[96];
	} PAGEITEM;

	#pragma pack(pop)

	////////////////////////////////////////////////////////
	// CData

	class CData
	{
	public:

		///////////////////////////////////////////////////////
		// CItem

		class CItem
		{
		public:
			ITEM m_Item;
			PAGEITEM m_PageItem;
			UINT m_nHighlightIndex;

		public:
		// CItem
			CItem() :
				m_nHighlightIndex(0)
			{
			}
			static BOOL GetBackgroundColor(UINT nIndex, COLORREF& nColor)
			{
				static const COLORREF g_pnColors[] = 
				{
					RGB(0xFF, 0xCC, 0xCC),
					RGB(0xFF, 0xFF, 0xCC),
					RGB(0xCC, 0xFF, 0xCC),
					RGB(0x88, 0xCC, 0xFF),
					RGB(0xFF, 0x88, 0x88),
					RGB(0xFF, 0xFF, 0x88),
					RGB(0x88, 0xFF, 0x88),
					RGB(0x44, 0x88, 0xFF),
				};
				if(nIndex - 1 < DIM(g_pnColors))
				{
					nColor = g_pnColors[nIndex - 1];
					return TRUE;
				}
				return FALSE;
			}
			BOOL GetBackgroundColor(COLORREF& nColor) const
			{
				return GetBackgroundColor(m_nHighlightIndex, nColor);
			}
			LPCTSTR FormatType() const
			{
				switch(m_PageItem.nFlags & PAGEITEMFLAG_TYPE_MASK)
				{
				case PAGEITEMFLAG_NEWSEGMENT:
					return _T("New Segment");
				case PAGEITEMFLAG_MEDIASAMPLE:
					return _T("Media Sample");
				case PAGEITEMFLAG_ENDOFSTREAM:
					return _T("End of Stream");
				//case PAGEITEMFLAG_COMMENT:
				//	return _T("Comment");
				}
				return _T("Comment");
			}
		};

		////////////////////////////////////////////////////
		// CItemSortTraits

		class CItemSortTraits :
			public CDefaultSortTraitsT<CItem>
		{
		public:
		// CItemSortTraits
			static INT_PTR CompareElements(const CItem& Item1, const CItem& Item2, PARAMETERARGUMENT)
			{
				const INT64 nTime = Item1.m_PageItem.nTime - Item2.m_PageItem.nTime;
				return (nTime < 0) ? -1 : (nTime > 0) ? 1 : 0;
			}
		};

	public:
		CRoArrayT<CItem> m_ItemArray;

	public:
	// CData
		VOID Initialize()
		{
			m_ItemArray.SetCount(0, 32768);
		}
		VOID Add(const HEADER* pHeader, const ITEM* pItem, const PAGEHEADER* pPageHeader, const PAGEITEM* pPageItem)
		{
			_A(pHeader && pItem && pPageHeader && pPageItem);
			pHeader; pPageHeader;
			const SIZE_T nIndex = m_ItemArray.Add();
			CItem& Item = m_ItemArray[nIndex];
			Item.m_Item = *pItem;
			Item.m_PageItem = *pPageItem;
			Item.m_nHighlightIndex = (Item.m_PageItem.nFlags & PAGEITEMFLAG_HIGHLIGHT_MASK) >> PAGEITEMFLAG_HIGHLIGHT_SHIFT;
		}
		VOID Sort()
		{
			_SortHelper::QuickSort<CItemSortTraits>(m_ItemArray);
		}
	};

	////////////////////////////////////////////////////////
	// CHandleMap

	class CHandleMap :
		protected CRoMapT<CString, HANDLE>
	{
	protected:
		mutable CRoCriticalSection m_DataCriticalSection;

	public:
	// CHandleMap
		CHandleMap()
		{
		}
		~CHandleMap()
		{
			RemoveAll();
		}
		VOID Add(const CString& sName, HANDLE hValue)
		{
			CRoCriticalSectionLock DataLock(m_DataCriticalSection);
			if(Lookup(sName))
				return;
			CHandle PrivateValue;
			if(!DuplicateHandle(GetCurrentProcess(), hValue, GetCurrentProcess(), &PrivateValue.m_h, 0, FALSE, DUPLICATE_SAME_ACCESS))
				return;
			_W(SetAt(sName, PrivateValue.Detach()));
		}
		VOID RemoveAll()
		{
			CRoCriticalSectionLock DataLock(m_DataCriticalSection);
			for(auto&& hValue: GetValues())
				reinterpret_cast<CHandle&>(hValue).Close();
			__super::RemoveAll();
		}
	};

	////////////////////////////////////////////////////////
	// CPages

	class CPages
	{
	private:
		UINT64 m_nFilterGraphIdentifier;
		CStringW m_sFilterGraphName;
		CMutex m_Mutex;
		CAtlFileMapping<HEADER> m_FileMapping;

	public:
	// CPages
		static LPCTSTR GetMutexName()
		{
			return _T("DirectShowSpy.MediaSamplePageRegistry.Access");
		}
		static SIZE_T GetFileMappingCapacity()
		{
			return 8 << 20; // 8 MB
		}
		static LPCTSTR GetFileMappingName()
		{
			return _T("DirectShowSpy.MediaSamplePageRegistry");
		}
		static CString GetPageMutexName(UINT32 nProcessIdentifier, UINT64 nPageIdentifier)
		{
			return AtlFormatString(_T("DirectShowSpy.MediaSamplePage.%08X.%08X.Access"), nProcessIdentifier, nPageIdentifier);
		}
		static SIZE_T GetPageFileMappingCapacity()
		{
			return 4 << 20; // 4 MB
		}
		static CString GetPageFileMappingName(UINT32 nProcessIdentifier, UINT64 nPageIdentifier)
		{
			return AtlFormatString(_T("DirectShowSpy.MediaSamplePage.%08X.%08X"), nProcessIdentifier, nPageIdentifier);
		}
		static VOID InitializeFileMapping(CAtlFileMapping<HEADER>& FileMapping)
		{
			HEADER* pHeader = FileMapping;
			pHeader->nCapacity = (UINT32) GetFileMappingCapacity();
			pHeader->nFlags = HEADERFLAGS_NONE;
			pHeader->nVersion = 0;
			pHeader->nItemCount = 0;
		}
		BOOL Initialize(BOOL bCreate = FALSE)
		{
			_A(!m_Mutex && !m_FileMapping);
			if(!bCreate)
			{
				if(!m_Mutex.Open(MUTEX_ALL_ACCESS, FALSE, GetMutexName()))
					return FALSE;
				_ATLTRY
				{
					//CMutexLock MutexLock(m_Mutex);
					__C(m_FileMapping.OpenMapping(GetFileMappingName(), GetFileMappingCapacity()));
				}
				_ATLCATCHALL()
				{
					m_Mutex.Close();
					_ATLRETHROW;
				}
			} else
			{
				__E(m_Mutex.Create(NULL, FALSE, GetMutexName()));
				//CMutexLock MutexLock(m_Mutex);
				__C(m_FileMapping.MapSharedMem(GetFileMappingCapacity(), GetFileMappingName()));
				HEADER* pHeader = m_FileMapping;
				if(!pHeader->nCapacity)
					InitializeFileMapping(m_FileMapping);
			}
			return TRUE;
		}
		VOID GetData(CData& Data, CHandleMap* pHandleMap = NULL)
		{
			_A(m_Mutex && m_FileMapping);
			if(pHandleMap)
			{
				pHandleMap->Add(GetMutexName(), m_Mutex);
				pHandleMap->Add(GetFileMappingName(), m_FileMapping.GetHandle());
			}
			Data.Initialize();
			CMutexLock MutexLock(m_Mutex);
			HEADER* pHeader = m_FileMapping;
			_A(pHeader->nCapacity);
			for(UINT32 nItemIndex = 0; nItemIndex < pHeader->nItemCount; nItemIndex++)
			{
				ITEM* pItem = (ITEM*) (pHeader + 1) + nItemIndex;
				if(pItem->nFlags & ITEMFLAG_INVALID)
					continue;
				_ATLTRY
				{
					CMutex PageMutex;
					const CString sMutexName = GetPageMutexName(pItem->nProcessIdentifier, pItem->nPageIdentifier);
					__E(PageMutex.Open(MUTEX_ALL_ACCESS, FALSE, sMutexName));
					CAtlFileMapping<PAGEHEADER> PageFileMapping;
					const CString sFileMappingName = GetPageFileMappingName(pItem->nProcessIdentifier, pItem->nPageIdentifier);
					__C(PageFileMapping.OpenMapping(sFileMappingName, GetPageFileMappingCapacity()));
					if(pHandleMap)
					{
						pHandleMap->Add(sMutexName, PageMutex);
						pHandleMap->Add(sFileMappingName, PageFileMapping.GetHandle());
					}
					PAGEHEADER* pPageHeader = PageFileMapping;
					CMutexLock MutexLock(PageMutex);
					#pragma region Bitness
					// SUGG: Support non-native bitness through conversion
					#if defined(_WIN64)
						if(!(pPageHeader->nFlags & PAGEHEADERFLAG_X64))
							continue;
					#else
						if(pPageHeader->nFlags & PAGEHEADERFLAG_X64)
							continue;
					#endif // defined(_WIN64)
					#pragma endregion
					for(UINT32 nItemIndex = 0; nItemIndex < pPageHeader->nItemCount; nItemIndex++)
					{
						PAGEITEM* pPageItem = (PAGEITEM*) (pPageHeader + 1) + nItemIndex;
						Data.Add(pHeader, pItem, pPageHeader, pPageItem);
					}
					continue;
				}
				_ATLCATCHALL()
				{
					_Z_EXCEPTION();
				}
				pItem->nFlags |= ITEMFLAG_INVALID;
			}
		}
		VOID ResetData()
		{
			CMutexLock MutexLock(m_Mutex);
			HEADER* pHeader = m_FileMapping;
			_A(pHeader->nCapacity);
			pHeader->nItemCount = 0;
			pHeader->nVersion++;
		}
		VOID Initialize(UINT64 nFilterGraphIdentifier, const CStringW& sFilterGraphName)
		{
			_A(!m_Mutex && !m_FileMapping);
			m_nFilterGraphIdentifier = nFilterGraphIdentifier;
			m_sFilterGraphName = sFilterGraphName;
			__E(m_Mutex.Create(NULL, FALSE, GetMutexName()));
			CMutexLock MutexLock(m_Mutex);
			BOOL bOpen = FALSE;
			__C(m_FileMapping.MapSharedMem(GetFileMappingCapacity(), GetFileMappingName(), &bOpen));
			HEADER* pHeader = m_FileMapping;
			if(!pHeader->nCapacity)
				InitializeFileMapping(m_FileMapping);
			#if defined(_DEBUG)
				_Z4(atlTraceGeneral, 4, _T("File mapping size %d, item size %d, item capacity %d\n"), GetFileMappingCapacity(), sizeof (ITEM), (GetFileMappingCapacity() - sizeof (HEADER)) / sizeof (ITEM));
				_Z4(atlTraceGeneral, 4, _T("Page file mapping size %d, page item size %d, page item capacity %d\n"), GetPageFileMappingCapacity(), sizeof (PAGEITEM), (GetPageFileMappingCapacity() - sizeof (PAGEHEADER)) / sizeof (PAGEITEM));
			#endif // defined(_DEBUG)
		}
		VOID CreatePage(UINT32& nPageIdentifier, CMutex& Mutex, CAtlFileMapping<PAGEHEADER>& FileMapping)
		{
			_A(!Mutex && !FileMapping);
			// SUGG: Random identifiers
			for(nPageIdentifier = 0; ; nPageIdentifier++)
			{
				if(!Mutex.Create(NULL, FALSE, GetPageMutexName(GetCurrentProcessId(), nPageIdentifier)))
				{
					const HRESULT nCreateResult = AtlHresultFromLastError();
					__D(nCreateResult == E_ACCESSDENIED, nCreateResult);
					continue; // Already Exists, Access Denied
				}
				_ATLTRY
				{
					CMutexLock MutexLock(Mutex);
					if(GetLastError() != ERROR_ALREADY_EXISTS)
					{
						BOOL bOpen = FALSE;
						__C(FileMapping.MapSharedMem(GetPageFileMappingCapacity(), GetPageFileMappingName(GetCurrentProcessId(), nPageIdentifier), &bOpen));
						_ATLTRY
						{
							__D(!bOpen, E_UNNAMED);
							PAGEHEADER* pPageHeader = FileMapping;
							_A(!pPageHeader->nCapacity);
							pPageHeader->nCapacity = (UINT32) GetPageFileMappingCapacity();
							pPageHeader->nFlags = 0;
							#if defined(_WIN64)
								pPageHeader->nFlags |= PAGEHEADERFLAG_X64;
							#endif // defined(_WIN64)
							pPageHeader->nProcessIdentifier = (UINT32) GetCurrentProcessId();
							pPageHeader->nItemCount = 0;
							MutexLock.Unlock();
							#pragma region Link Page
							{
								CMutexLock MutexLock(m_Mutex);
								HEADER* pHeader = m_FileMapping;
								const SIZE_T nCapacity = sizeof *pHeader + (pHeader->nItemCount + 1) * sizeof (ITEM);
								__D(nCapacity <= (SIZE_T) pHeader->nCapacity, HRESULT_FROM_WIN32(ERROR_BUFFER_OVERFLOW));
								ITEM* pItem = (ITEM*) (pHeader + 1) + pHeader->nItemCount;
								pItem->nFlags = ITEMFLAGS_NONE;
								pItem->nProcessIdentifier = (UINT32) GetCurrentProcessId();
								pItem->nPageIdentifier = nPageIdentifier;
								pItem->nFilterGraphIdentifier = m_nFilterGraphIdentifier;
								wcsncpy_s(pItem->pszFilterGraphName, m_sFilterGraphName, _TRUNCATE);
								pHeader->nItemCount++;
								pHeader->nVersion++;
							}
							#pragma endregion
							break;
						}
						_ATLCATCHALL()
						{
							_V(FileMapping.Unmap());
							_ATLRETHROW;
						}
					}
				}
				_ATLCATCHALL()
				{
					_Z_EXCEPTION();
				}
				Mutex.Close();
			}
		}
	};

	////////////////////////////////////////////////////////
	// CPage

	class CPage
	{
	public:

		///////////////////////////////////////////////////
		// CItem

		class CItem
		{
		public:
			UINT32 m_nPageIdentifier;
			CMutex m_Mutex;
			CAtlFileMapping<PAGEHEADER> m_FileMapping;
			BOOL m_bActive;

		public:
		// CItem
		};

	private:
		CRoListT<CItem> m_ItemList;

	public:
	// CPage
		BOOL IsEmpty() const
		{
			return m_ItemList.IsEmpty();
		}
		VOID Register(CPages& Pages, UINT64 nFilterIdentifier, const CStringW& sFilterName, LPCWSTR pszStreamName, const PAGEITEM& PageItem, LPCWSTR pszComment, USHORT nHighlight)
		{
			const UINT64 nTime = (UINT64) CUsAccurateFileTime::GetTime();
			for(UINT nIteration = 0; ; nIteration++)
			{
				_A(nIteration < 2);
				if(!m_ItemList.IsEmpty() && m_ItemList.GetTail().m_bActive)
				{
					CMutexLock MutexLock(m_ItemList.GetTail().m_Mutex);
					PAGEHEADER* pPageHeader = m_ItemList.GetTail().m_FileMapping;
					const SIZE_T nCapacity = sizeof *pPageHeader + (pPageHeader->nItemCount + 1) * sizeof (PAGEITEM);
					if(nCapacity <= (SIZE_T) pPageHeader->nCapacity)
					{
						PAGEITEM* pPageItem = (PAGEITEM*) (pPageHeader + 1) + pPageHeader->nItemCount;
						pPageItem->nFlags = PageItem.nFlags & PAGEITEMFLAG_TYPE_MASK;
						pPageItem->nFlags |= (nHighlight << PAGEITEMFLAG_HIGHLIGHT_SHIFT) & PAGEITEMFLAG_HIGHLIGHT_MASK;
						pPageItem->nThreadIdentifier = GetCurrentThreadId();
						pPageItem->nFilterIdentifier = nFilterIdentifier;
						wcsncpy_s(pPageItem->pszFilterName, sFilterName, _TRUNCATE);
						if(pszStreamName)
							wcsncpy_s(pPageItem->pszStreamName, pszStreamName, _TRUNCATE);
						else
							*pPageItem->pszStreamName = 0;
						pPageItem->nTime = nTime;
						pPageItem->Data = PageItem.Data;
						if(pszComment)
							wcsncpy_s(pPageItem->pszComment, pszComment, _TRUNCATE);
						else
							*pPageItem->pszComment = 0;
						pPageHeader->nItemCount++;
						return;
					}
					m_ItemList.GetTail().m_bActive = FALSE;
				}
				const POSITION Position = m_ItemList.AddTail();
				_ATLTRY
				{
					CItem& Item = m_ItemList.GetAt(Position);
					Pages.CreatePage(Item.m_nPageIdentifier, Item.m_Mutex, Item.m_FileMapping);
					Item.m_bActive = TRUE;
				}
				_ATLCATCHALL()
				{
					m_ItemList.RemoveAt(Position);
					_ATLRETHROW;
				}
			}
		}
	};

	////////////////////////////////////////////////////////
	// CHandleMapLock

	class ATL_NO_VTABLE CHandleMapLock :
		public CComObjectRootEx<CComMultiThreadModelNoCS>,
		public IUnknown
	{
		typedef CThreadT<CHandleMapLock> CThread;

	public:

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	BEGIN_COM_MAP(CHandleMapLock)
	END_COM_MAP()

	private:
		CData m_Data;
		CObjectPtr<CThread> m_pThread;
		CHandleMap m_HandleMap;

		DWORD ThreadProc(CThread*, CEvent& InitializationEvent, CEvent& TerminationEvent)
		{
			CMultiThreadedApartment Apartment;
			CEvent RequestEvent, ResponseEvent;
			_W(RequestEvent.Create(NULL, FALSE, FALSE, CString(CPages::GetFileMappingName()) + _T(".TransferRequest")));
			_W(ResponseEvent.Create(NULL, FALSE, FALSE, CString(CPages::GetFileMappingName()) + _T(".TransferResponse")));
			_W(InitializationEvent.Set());
			if(!RequestEvent || !ResponseEvent)
				return 0;
			CStackPointer StackPointer;
			const HANDLE phObjects[] = { TerminationEvent, RequestEvent };
			for(; ; )
			{
				_A(StackPointer.Check()); StackPointer;
				const DWORD nWaitResult = WaitForMultipleObjects(DIM(phObjects), phObjects, FALSE, INFINITE);
				_Z4_WAITRESULT(nWaitResult);
				_A(nWaitResult - WAIT_OBJECT_0 < DIM(phObjects));
				if(nWaitResult != WAIT_OBJECT_0 + 1) // RequestEvent
					break;
				CPages Pages;
				if(Pages.Initialize())
					Pages.GetData(m_Data, &m_HandleMap);
				_W(ResponseEvent.Set());
			}
			return 0;
		}

	public:
	// CHandleMapLock
		CHandleMapLock()
		{
			_Z4_THIS();
		}
		~CHandleMapLock()
		{
			_Z4_THIS();
		}
		HRESULT FinalConstruct()
		{
			_ATLTRY
			{
				m_pThread.Construct()->Initialize(this, &CHandleMapLock::ThreadProc);
			}
			_ATLCATCH(Exception)
			{
				_C(Exception);
			}
			return S_OK;
		}
		VOID FinalRelease()
		{
			m_pThread.Release();
		}
	};

public:
// CMediaSampleTraceBase
	static BOOL ResetData()
	{
		CPages Pages;
		if(!Pages.Initialize())
			return FALSE;
		Pages.ResetData();
		return TRUE;
	}
	static CString FormatTime(UINT64 nTime)
	{
		SYSTEMTIME Time;
		FileTimeToSystemTime(&reinterpret_cast<const FILETIME&>(nTime), &Time);
		return AtlFormatString(_T("%02d:%02d:%02d.%03d"), Time.wHour, Time.wMinute, Time.wSecond, Time.wMilliseconds);
	}
	static CString CreateDataItemHeaderText()
	{
		LPCTSTR g_ppszHeader[] = 
		{
			_T("Time"),
			_T("Process Identifier"),
			_T("Thread Identifier"),
			_T("Filter Graph Identifier"),
			_T("Filter Graph Name"),
			_T("Filter Identifier"),
			_T("Filter Name"),
			_T("Stream"),
			_T("Type"),
			_T("Media Sample Flags"),
			_T("Start Time"),
			_T("Stop Time"),
			_T("Length Time"),
			_T("Data Size"),
			_T("Comment"),
			_T("Highlight"),
		};
		return _StringHelper::Join(g_ppszHeader, _T("\t")) + _T("\r\n");
	}
	static CString CreateDataItemText(const CData::CItem& Item)
	{
		CRoArrayT<CString> Array;
		Array.Add(FormatTime(Item.m_PageItem.nTime));
		Array.Add(AtlFormatString(_T("%d"), Item.m_Item.nProcessIdentifier));
		Array.Add(AtlFormatString(_T("%d"), Item.m_PageItem.nThreadIdentifier));
		Array.Add(AtlFormatString(_T("0x%p"), Item.m_Item.nFilterGraphIdentifier));
		Array.Add(CString(Item.m_Item.pszFilterGraphName));
		Array.Add(AtlFormatString(_T("0x%p"), Item.m_PageItem.nFilterIdentifier));
		Array.Add(CString(Item.m_PageItem.pszFilterName));
		Array.Add(CString(Item.m_PageItem.pszStreamName));
		Array.Add(Item.FormatType());
		switch(Item.m_PageItem.nFlags & PAGEITEMFLAG_TYPE_MASK)
		{
		case PAGEITEMFLAG_NEWSEGMENT:
			Array.Add(_T(""));
			Array.Add(AtlFormatString(_T("%I64d"), Item.m_PageItem.Data.NewSegment.nStartTime));
			if(Item.m_PageItem.Data.NewSegment.nStopTime < LLONG_MAX)
				Array.Add(AtlFormatString(_T("%I64d"), Item.m_PageItem.Data.NewSegment.nStopTime));
			//Item.m_PageItem.Data.NewSegment.fRate
			break;
		case PAGEITEMFLAG_MEDIASAMPLE:
			Array.Add(_FilterGraphHelper::FormatSampleFlags(Item.m_PageItem.Data.MediaSample.Properties.dwSampleFlags));
			if(Item.m_PageItem.Data.MediaSample.Properties.dwSampleFlags & AM_SAMPLE_TIMEVALID)
			{
				Array.Add(AtlFormatString(_T("%I64d"), Item.m_PageItem.Data.MediaSample.Properties.tStart));
				if(Item.m_PageItem.Data.MediaSample.Properties.dwSampleFlags & AM_SAMPLE_STOPVALID)
				{
					Array.Add(AtlFormatString(_T("%I64d"), Item.m_PageItem.Data.MediaSample.Properties.tStop));
					Array.Add(AtlFormatString(_T("%I64d"), Item.m_PageItem.Data.MediaSample.Properties.tStop - Item.m_PageItem.Data.MediaSample.Properties.tStart));
				}
			}
			while(Array.GetCount() < 13)
				Array.Add(_T(""));
			Array.Add(AtlFormatString(_T("%d"), Item.m_PageItem.Data.MediaSample.Properties.lActual));
			break;
		case PAGEITEMFLAG_ENDOFSTREAM:
		case PAGEITEMFLAG_COMMENT:
			break;
		default:
			_A(FALSE);
		}
		if(*Item.m_PageItem.pszComment)
		{
			while(Array.GetCount() < 14)
				Array.Add(_T(""));
			Array.Add(CString(Item.m_PageItem.pszComment));
		}
		if(Item.m_nHighlightIndex)
		{
			while(Array.GetCount() < 15)
				Array.Add(_T(""));
			Array.Add(AtlFormatString(_T("*%d"), Item.m_nHighlightIndex));
		}
		return _StringHelper::Join(Array, _T("\t")) + _T("\r\n");
	}
	static CStringA CreateDataText()
	{
		CString sText;
		CPages Pages;
		if(Pages.Initialize())
		{
			CData Data;
			CHandleMap HandleMap;
			Pages.GetData(Data, &HandleMap);
			Data.Sort();
			sText += CreateDataItemHeaderText();
			for(auto&& Item: Data.m_ItemArray)
				sText += CreateDataItemText(Item);
		}
		return CStringA(sText);
	}
	static VOID SaveToFile(const CStringA sText, const CPath& sPath)
	{
		LPCTSTR pszExtension = FindExtension(sPath);
		CAtlFile File;
		__C(File.Create(sPath, GENERIC_WRITE, FILE_SHARE_READ, CREATE_ALWAYS));
		_ATLTRY
		{
			if(_tcsicmp(pszExtension, _T(".bz2")) == 0)
			{
				CLocalObjectPtr<CBzip2Item> pItem;
				pItem->SetRawData((const BYTE*) (LPCSTR) sText, sText.GetLength());
				CHeapPtr<BYTE> pnData;
				SIZE_T nDataSize;
				pItem->GetData(pnData, nDataSize);
				__C(File.Write(pnData, (DWORD) nDataSize));
			} else
			{
				__C(File.Write(sText, sText.GetLength() * sizeof (CHAR)));
			}
		}
		_ATLCATCHALL()
		{
			File.Close();
			DeleteFile(sPath);
			_ATLRETHROW;
		}
	}
};

////////////////////////////////////////////////////////////
// CMediaSampleTrace

class ATL_NO_VTABLE CMediaSampleTrace :
	public CComObjectRootEx<CComMultiThreadModelNoCS>,
	public CComCoClass<CMediaSampleTrace>,// &__uuidof(MediaSampleTrace)>,
	//public IProvideClassInfo2Impl<&__uuidof(MediaSampleTrace), &IID_NULL>,
	public IMediaSampleTrace,
	public CMediaSampleTraceBase
{
public:
	//enum { IDR = IDR_MEDIASAMPLETRACE };

DECLARE_NO_REGISTRY() //DECLARE_REGISTRY_RESOURCEID(IDR)

BEGIN_COM_MAP(CMediaSampleTrace)
	COM_INTERFACE_ENTRY(IMediaSampleTrace)
	//COM_INTERFACE_ENTRY(IProvideClassInfo2)
	//COM_INTERFACE_ENTRY(IProvideClassInfo)
END_COM_MAP()

public:

private:
	mutable CRoCriticalSection m_DataCriticalSection;
	UINT_PTR m_nFilterGraphIdentifier;
	CStringW m_sFilterGraphName;
	CPages m_Pages;
	CPage m_Page;

public:
// CMediaSampleTrace
	CMediaSampleTrace()
	{
		_Z4_THIS();
	}
	~CMediaSampleTrace()
	{
		_Z4_THIS();
		#pragma region Transfer Ownership
		if(!m_Page.IsEmpty())
		{
			CEvent RequestEvent, ResponseEvent;
			if(RequestEvent.Open(EVENT_ALL_ACCESS, FALSE, CString(CPages::GetFileMappingName()) + _T(".TransferRequest")))
			{
				ResponseEvent.Open(EVENT_ALL_ACCESS, FALSE, CString(CPages::GetFileMappingName()) + _T(".TransferResponse"));
				if(RequestEvent.Set())
				{
					// NOTE: The event creator (UI) has some time to grap mapping handles and store a private copy 
					static const ULONG g_nTimeoutTime = 500; // 500 ms
					if(ResponseEvent)
					{
						const DWORD nWaitResult = WaitForSingleObject(ResponseEvent, g_nTimeoutTime);
						_Z5_WAITRESULT(nWaitResult);
					} else
						Sleep(g_nTimeoutTime);
				}
			}
		}
		#pragma endregion 
	}
	VOID Initialize(ISpy* pSpy)
	{
		_A(pSpy);
		CComBSTR sName;
		__C(pSpy->get_FriendlyName(&sName));
		const CComQIPtr<IFilterGraph2> pFilterGraph2 = pSpy;
		_A(pFilterGraph2);
		CRoCriticalSectionLock DataLock(m_DataCriticalSection);
		m_nFilterGraphIdentifier = (UINT_PTR) (IFilterGraph2*) pFilterGraph2;
		m_sFilterGraphName = CStringW(sName);
		m_Pages.Initialize((UINT64) m_nFilterGraphIdentifier, m_sFilterGraphName);
	}
	static CStringW GetFilterName(IUnknown* pBaseFilterUnknown)
	{
		CStringW sFilterName;
		const CComQIPtr<IBaseFilter> pBaseFilter = pBaseFilterUnknown;
		if(pBaseFilter)
			sFilterName = _FilterGraphHelper::GetFilterName(pBaseFilter);
		return sFilterName;
	}

// IMediaSampleTrace
	STDMETHOD(RegisterNewSegment)(IUnknown* pBaseFilterUnknown, const WCHAR* pszStreamName, LONGLONG nStartTime, LONGLONG nStopTime, DOUBLE fRate, const WCHAR* pszComment, USHORT nHighlight)
	{
		_Z5(atlTraceCOM, 5, _T("this 0x%p, pBaseFilterUnknown 0x%p, pszStreamName \"%s\", nStartTime %I64d, nHighlight %d\n"), this, pBaseFilterUnknown, CString(pszStreamName), nStartTime, nHighlight);
		_ATLTRY
		{
			PAGEITEM PageItem;
			PageItem.nFlags = PAGEITEMFLAG_NEWSEGMENT;
			PageItem.Data.NewSegment.nStartTime = nStartTime;
			PageItem.Data.NewSegment.nStopTime = nStopTime;
			PageItem.Data.NewSegment.fRate = fRate;
			CRoCriticalSectionLock DataLock(m_DataCriticalSection);
			m_Page.Register(m_Pages, (UINT_PTR) pBaseFilterUnknown, GetFilterName(pBaseFilterUnknown), pszStreamName, PageItem, pszComment, nHighlight);
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
	STDMETHOD(RegisterMediaSample)(IUnknown* pBaseFilterUnknown, const WCHAR* pszStreamName, const BYTE* pnSamplePropertiesData, const WCHAR* pszComment, USHORT nHighlight)
	{
		_Z5(atlTraceCOM, 5, _T("this 0x%p, pBaseFilterUnknown 0x%p, pszStreamName \"%s\", pnSamplePropertiesData 0x%p, nHighlight %d\n"), this, pBaseFilterUnknown, CString(pszStreamName), pnSamplePropertiesData, nHighlight);
		_ATLTRY
		{
			__D(pnSamplePropertiesData, E_POINTER);
			PAGEITEM PageItem;
			PageItem.nFlags = PAGEITEMFLAG_MEDIASAMPLE;
			PageItem.Data.MediaSample.Properties = *((const AM_SAMPLE2_PROPERTIES*) pnSamplePropertiesData);
			CRoCriticalSectionLock DataLock(m_DataCriticalSection);
			m_Page.Register(m_Pages, (UINT_PTR) pBaseFilterUnknown, GetFilterName(pBaseFilterUnknown), pszStreamName, PageItem, pszComment, nHighlight);
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
	STDMETHOD(RegisterEndOfStream)(IUnknown* pBaseFilterUnknown, const WCHAR* pszStreamName, const WCHAR* pszComment, USHORT nHighlight)
	{
		_Z5(atlTraceCOM, 5, _T("this 0x%p, pBaseFilterUnknown 0x%p, pszStreamName \"%s\", nHighlight %d\n"), this, pBaseFilterUnknown, CString(pszStreamName), nHighlight);
		_ATLTRY
		{
			PAGEITEM PageItem;
			PageItem.nFlags = PAGEITEMFLAG_ENDOFSTREAM;
			CRoCriticalSectionLock DataLock(m_DataCriticalSection);
			m_Page.Register(m_Pages, (UINT_PTR) pBaseFilterUnknown, GetFilterName(pBaseFilterUnknown), pszStreamName, PageItem, pszComment, nHighlight);
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
	STDMETHOD(RegisterComment)(IUnknown* pBaseFilterUnknown, const WCHAR* pszStreamName, const WCHAR* pszComment, USHORT nHighlight)
	{
		_Z5(atlTraceCOM, 5, _T("this 0x%p, pBaseFilterUnknown 0x%p, pszStreamName \"%s\", pszComment \"%s\", nHighlight %d\n"), this, pBaseFilterUnknown, CString(pszStreamName), CString(pszComment), nHighlight);
		_ATLTRY
		{
			PAGEITEM PageItem;
			PageItem.nFlags = PAGEITEMFLAG_COMMENT;
			CRoCriticalSectionLock DataLock(m_DataCriticalSection);
			m_Page.Register(m_Pages, (UINT_PTR) pBaseFilterUnknown, GetFilterName(pBaseFilterUnknown), pszStreamName, PageItem, pszComment, nHighlight);
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
};

//OBJECT_ENTRY_AUTO(__uuidof(MediaSampleTrace), CMediaSampleTrace)

////////////////////////////////////////////////////////////
// CMediaSampleTracePropertySheet

// SUGG: Thread, Type fitlers

class CMediaSampleTracePropertySheet :
	public CSizablePropertySheetT<CMediaSampleTracePropertySheet>,
	public CMediaSampleTraceBase
{
public:

BEGIN_MSG_MAP_EX(CMediaSampleTracePropertySheet)
	CHAIN_MSG_MAP(CSizablePropertySheet)
	MSG_WM_SYSCOMMAND(OnSysCommand)
END_MSG_MAP()

public:

	////////////////////////////////////////////////////////
	// CMediaSamplePropertyPage

	class CMediaSamplePropertyPage :
		public CPropertyPageT<CMediaSamplePropertyPage>,
		public CPropertyPageWithAcceleratorsT<CMediaSamplePropertyPage>,
		public CDialogResize<CMediaSamplePropertyPage>,
		public CCustomDraw<CMediaSamplePropertyPage>
	{
	public:
		enum { IDD = IDD_MEDIASAMPLETRACE_MEDIASAMPLE_PROPERTYPAGE };

	BEGIN_MSG_MAP_EX(CMediaSamplePropertyPage)
		CHAIN_MSG_MAP(CPropertyPage)
		CHAIN_MSG_MAP(CPropertyPageWithAccelerators)
		CHAIN_MSG_MAP(CDialogResize<CMediaSamplePropertyPage>)
		CHAIN_MSG_MAP(CCustomDraw<CMediaSamplePropertyPage>)
		MSG_WM_INITDIALOG(OnInitDialog)
		MSG_WM_DESTROY(OnDestroy)
		MSG_LVN_GETDISPINFO(IDC_MEDIASAMPLETRACE_MEDIASAMPLE_LIST, OnListViewGetDispInfo)
		MSG_LVN_GETINFOTIP(IDC_MEDIASAMPLETRACE_MEDIASAMPLE_LIST, OnListViewGetInfoTip)
		MSG_WM_CONTEXTMENU(OnContextMenu)
		COMMAND_ID_HANDLER_EX(IDC_MEDIASAMPLETRACE_MEDIASAMPLE_REFRESH, OnRefresh)
		COMMAND_ID_HANDLER_EX(IDC_MEDIASAMPLETRACE_MEDIASAMPLE_COPYTOCLIPBOARD, OnCopyToClipboard)
		COMMAND_ID_HANDLER_EX(IDC_MEDIASAMPLETRACE_MEDIASAMPLE_SAVETOFILE, OnSaveToFile)
		COMMAND_ID_HANDLER_EX(IDC_MEDIASAMPLETRACE_MEDIASAMPLE_LOADFROMFILE, OnLoadFromFile)
		COMMAND_ID_HANDLER_EX(IDC_MEDIASAMPLETRACE_MEDIASAMPLE_RESETDATA, OnResetData)
		COMMAND_ID_HANDLER_EX(IDC_MEDIASAMPLETRACE_MEDIASAMPLE_OPENFILTERGRAPHLIST, OnOpenFilterGraphList)
		COMMAND_ID_HANDLER_EX(IDC_MEDIASAMPLETRACE_MEDIASAMPLE_OPENFILTERGRAPHPROPERTIES, OnOpenFilterGraphProperties)
		COMMAND_ID_HANDLER_EX(IDC_MEDIASAMPLETRACE_MEDIASAMPLE_HIGHLIGHT_REMOVEALL, OnHighlightRemoveAll)
		COMMAND_RANGE_HANDLER_EX(IDC_MEDIASAMPLETRACE_MEDIASAMPLE_HIGHLIGHT_REMOVE, IDC_MEDIASAMPLETRACE_MEDIASAMPLE_HIGHLIGHT_8, OnHighlight)
		REFLECT_NOTIFICATIONS()
	END_MSG_MAP()

	BEGIN_DLGRESIZE_MAP(CMediaSamplePropertyPage)
		DLGRESIZE_CONTROL(IDC_MEDIASAMPLETRACE_MEDIASAMPLE_INTRODUCTION, DLSZ_SIZE_X)
		DLGRESIZE_CONTROL(IDD_MEDIASAMPLETRACE_MEDIASAMPLE_FILTER, DLSZ_SIZE_X)
		DLGRESIZE_CONTROL(IDC_MEDIASAMPLETRACE_MEDIASAMPLE_LIST, DLSZ_SIZE_X | DLSZ_SIZE_Y)
		DLGRESIZE_CONTROL(IDC_MEDIASAMPLETRACE_MEDIASAMPLE_REFRESH, DLSZ_MOVE_Y)
		DLGRESIZE_CONTROL(IDC_MEDIASAMPLETRACE_MEDIASAMPLE_COPYTOCLIPBOARD, DLSZ_MOVE_Y)
		DLGRESIZE_CONTROL(IDC_MEDIASAMPLETRACE_MEDIASAMPLE_SAVETOFILE, DLSZ_MOVE_Y)
		DLGRESIZE_CONTROL(IDC_MEDIASAMPLETRACE_MEDIASAMPLE_LOADFROMFILE, DLSZ_MOVE_Y)
	END_DLGRESIZE_MAP()

	public:

		////////////////////////////////////////////////////
		// CFilterDialog

		class CFilterDialog :
			public CDialogImpl<CFilterDialog>,
			public CDialogResize<CFilterDialog>
		{
		public:
			enum { IDD = IDD_MEDIASAMPLETRACE_MEDIASAMPLE_FILTER };

		BEGIN_MSG_MAP_EX(CFilterDialog)
			//CHAIN_MSG_MAP(CFilterDialog)
			CHAIN_MSG_MAP(CDialogResize<CFilterDialog>)
			MSG_WM_INITDIALOG(OnInitDialog)
			COMMAND_HANDLER_EX(IDC_MEDIASAMPLETRACE_MEDIASAMPLE_FILTER_PROCESS, CBN_SELENDOK, OnProcessComboBoxSelEndOk)
			COMMAND_HANDLER_EX(IDC_MEDIASAMPLETRACE_MEDIASAMPLE_FILTER_FILTERGRAPH, CBN_SELENDOK, OnFilterGraphComboBoxSelEndOk)
			COMMAND_HANDLER_EX(IDC_MEDIASAMPLETRACE_MEDIASAMPLE_FILTER_FILTER, CBN_SELENDOK, OnFilterComboBoxSelEndOk)
			COMMAND_HANDLER_EX(IDC_MEDIASAMPLETRACE_MEDIASAMPLE_FILTER_STREAM, CBN_SELENDOK, OnStreamComboBoxSelEndOk)
			REFLECT_NOTIFICATIONS()
		END_MSG_MAP()

		BEGIN_DLGRESIZE_MAP(CFilterDialog)
			DLGRESIZE_CONTROL(IDC_MEDIASAMPLETRACE_MEDIASAMPLE_FILTER_PROCESS_TITLE, 0)
			DLGRESIZE_CONTROL(IDC_MEDIASAMPLETRACE_MEDIASAMPLE_FILTER_PROCESS, 0) //DLSZ_SIZE_X)
			DLGRESIZE_CONTROL(IDC_MEDIASAMPLETRACE_MEDIASAMPLE_FILTER_FILTERGRAPH_TITLE, 0)
			DLGRESIZE_CONTROL(IDC_MEDIASAMPLETRACE_MEDIASAMPLE_FILTER_FILTERGRAPH, DLSZ_SIZE_X)
			DLGRESIZE_CONTROL(IDC_MEDIASAMPLETRACE_MEDIASAMPLE_FILTER_FILTER_TITLE, 0)
			DLGRESIZE_CONTROL(IDC_MEDIASAMPLETRACE_MEDIASAMPLE_FILTER_FILTER, DLSZ_SIZE_X)
			DLGRESIZE_CONTROL(IDC_MEDIASAMPLETRACE_MEDIASAMPLE_FILTER_STREAM_TITLE, 0)
			DLGRESIZE_CONTROL(IDC_MEDIASAMPLETRACE_MEDIASAMPLE_FILTER_STREAM, DLSZ_SIZE_X)
		END_DLGRESIZE_MAP()

		public:

			////////////////////////////////////////////////
			// CValueT

			template <typename CIdentifier>
			class CValueT
			{
			public:
				CIdentifier m_nIdentifier;
				CStringW m_sValue;

			public:
			// CValueT
				CValueT() :
					m_nIdentifier(0)
				{
				}
				CValueT(CIdentifier nIdentifier, LPCWSTR pszValue = NULL) :
					m_nIdentifier(nIdentifier),
					m_sValue(pszValue)
				{
				}
			};

			typedef CValueT<UINT32> CProcessValue;
			typedef CValueT<UINT64> CFilterGraphValue;
			typedef CValueT<UINT64> CFilterValue;
			typedef CValueT<UINT> CStreamValue;

			class CProcessValueSortTraits :
				public CSimpleSortTraitsT<CProcessValue>
			{
			public:
			// CProcessValueSortTraits
				static INT_PTR CompareElements(const CProcessValue& Element1, const CProcessValue& Element2, PARAMETERARGUMENT)
				{
					return (INT_PTR) (Element1.m_nIdentifier - Element2.m_nIdentifier);
				}
			};

			class CFilterGraphValueSortTraits :
				public CSimpleSortTraitsT<CFilterGraphValue>
			{
			public:
			// CFilterGraphValueSortTraits
				static INT_PTR CompareElements(const CFilterGraphValue& Element1, const CFilterGraphValue& Element2, PARAMETERARGUMENT)
				{
					const INT nName = _wcsicmp(Element1.m_sValue, Element2.m_sValue);
					if(nName)
						return nName;
					return (INT_PTR) (Element1.m_nIdentifier - Element2.m_nIdentifier);
				}
			};

			class CFilterValueSortTraits :
				public CSimpleSortTraitsT<CFilterValue>
			{
			public:
			// CFilterValueSortTraits
				static INT_PTR CompareElements(const CFilterValue& Element1, const CFilterValue& Element2, PARAMETERARGUMENT)
				{
					const INT nName = _wcsicmp(Element1.m_sValue, Element2.m_sValue);
					if(nName)
						return nName;
					return (INT_PTR) (Element1.m_nIdentifier - Element2.m_nIdentifier);
				}
			};

			class CStreamValueSortTraits :
				public CSimpleSortTraitsT<CStreamValue>
			{
			public:
			// CStreamValueSortTraits
				static INT_PTR CompareElements(const CStreamValue& Element1, const CStreamValue& Element2, PARAMETERARGUMENT)
				{
					return _wcsicmp(Element1.m_sValue, Element2.m_sValue);
				}
			};

		private:
			CMediaSamplePropertyPage& m_Owner;
			CRoComboBoxT<CProcessValue, CRoListControlDataTraitsT> m_ProcessComboBox;
			CRoComboBoxT<CFilterGraphValue, CRoListControlDataTraitsT> m_FilterGraphComboBox;
			CRoComboBoxT<CFilterValue, CRoListControlDataTraitsT> m_FilterComboBox;
			CRoComboBoxT<CStreamValue, CRoListControlDataTraitsT> m_StreamComboBox;
			CProcessValue* m_pProcessValue;
			CFilterGraphValue* m_pFilterGraphValue;
			CFilterValue* m_pFilterValue;
			CStreamValue* m_pStreamValue;

		public:
		// CFilterDialog
			CFilterDialog(CMediaSamplePropertyPage* pOwner) :
				m_Owner(*pOwner)
			{
			}
			VOID UpdateProcessComboBox()
			{
				m_ProcessComboBox.ResetContent();
				INT nItem = 0;
				_W(m_ProcessComboBox.InsertString(nItem++, _T("<All Processes>")) == 0);
				m_ProcessComboBox.SetCurSel(0);
				CRoArrayT<UINT32> IdentifierArray;
				CRoArrayT<CProcessValue> ValueArray;
				for(auto&& Item: m_Owner.m_Data.m_ItemArray)
				{
					if(IdentifierArray.FindFirst(Item.m_Item.nProcessIdentifier))
						continue;
					IdentifierArray.Add(Item.m_Item.nProcessIdentifier);
					ValueArray.Add(CProcessValue(Item.m_Item.nProcessIdentifier, AtlFormatStringW(L"%d", Item.m_Item.nProcessIdentifier)));
				}
				_SortHelper::QuickSort<CProcessValueSortTraits>(ValueArray);
				for(auto&& Value: ValueArray)
					m_ProcessComboBox.InsertString(nItem++, Value.m_sValue, Value);
				if(ValueArray.GetCount() == 1)
					m_ProcessComboBox.SetCurSel(1);
				const BOOL bEnabled = m_ProcessComboBox.GetCount() > 2;
				m_ProcessComboBox.GetWindow(GW_HWNDPREV).EnableWindow(bEnabled);
				m_ProcessComboBox.EnableWindow(bEnabled);
				OnProcessComboBoxSelEndOk();
				UpdateFilterGraphComboBox();
			}
			VOID UpdateFilterGraphComboBox()
			{
				m_FilterGraphComboBox.ResetContent();
				INT nItem = 0;
				_W(m_FilterGraphComboBox.InsertString(nItem++, _T("<All Filter Graphs>")) == 0);
				m_FilterGraphComboBox.SetCurSel(0);
				CRoArrayT<UINT64> IdentifierArray;
				CRoArrayT<CFilterGraphValue> ValueArray;
				for(auto&& Item: m_Owner.m_Data.m_ItemArray)
				{
					if(m_pProcessValue && m_pProcessValue->m_nIdentifier != Item.m_Item.nProcessIdentifier)
						continue;
					if(IdentifierArray.FindFirst(Item.m_Item.nFilterGraphIdentifier))
						continue;
					IdentifierArray.Add(Item.m_Item.nFilterGraphIdentifier);
					ValueArray.Add(CFilterGraphValue(Item.m_Item.nFilterGraphIdentifier, GetFilterGraphFriendlyName(Item.m_Item)));
				}
				_SortHelper::QuickSort<CFilterGraphValueSortTraits>(ValueArray);
				for(auto&& Value: ValueArray)
					m_FilterGraphComboBox.InsertString(nItem++, Value.m_sValue, Value);
				if(ValueArray.GetCount() == 1)
					m_FilterGraphComboBox.SetCurSel(1);
				const BOOL bEnabled = m_FilterGraphComboBox.GetCount() > 2;
				m_FilterGraphComboBox.GetWindow(GW_HWNDPREV).EnableWindow(bEnabled);
				m_FilterGraphComboBox.EnableWindow(bEnabled);
				OnFilterGraphComboBoxSelEndOk();
				UpdateFilterComboBox();
			}
			VOID UpdateFilterComboBox()
			{
				m_FilterComboBox.ResetContent();
				INT nItem = 0;
				_W(m_FilterComboBox.InsertString(nItem++, _T("<All Filters>")) == 0);
				m_FilterComboBox.SetCurSel(0);
				CRoArrayT<UINT64> IdentifierArray;
				CRoArrayT<CFilterValue> ValueArray;
				for(auto&& Item: m_Owner.m_Data.m_ItemArray)
				{
					if(m_pProcessValue && m_pProcessValue->m_nIdentifier != Item.m_Item.nProcessIdentifier)
						continue;
					if(m_pFilterGraphValue && m_pFilterGraphValue->m_nIdentifier != Item.m_Item.nFilterGraphIdentifier)
						continue;
					if(IdentifierArray.FindFirst(Item.m_PageItem.nFilterIdentifier))
						continue;
					IdentifierArray.Add(Item.m_PageItem.nFilterIdentifier);
					ValueArray.Add(CFilterValue(Item.m_PageItem.nFilterIdentifier, GetFilterFriendlyName(Item.m_PageItem)));
				}
				_SortHelper::QuickSort<CFilterValueSortTraits>(ValueArray);
				for(auto&& Value: ValueArray)
					m_FilterComboBox.InsertString(nItem++, Value.m_sValue, Value);
				if(ValueArray.GetCount() == 1)
					m_FilterComboBox.SetCurSel(1);
				const BOOL bEnabled = m_FilterComboBox.GetCount() > 2;
				m_FilterComboBox.GetWindow(GW_HWNDPREV).EnableWindow(bEnabled);
				m_FilterComboBox.EnableWindow(bEnabled);
				OnFilterComboBoxSelEndOk();
				UpdateStreamComboBox();
			}
			VOID UpdateStreamComboBox()
			{
				m_StreamComboBox.ResetContent();
				INT nItem = 0;
				_W(m_StreamComboBox.InsertString(nItem++, _T("<All Streams>")) == 0);
				m_StreamComboBox.SetCurSel(0);
				CRoArrayT<CStringW> IdentifierArray;
				CRoArrayT<CStreamValue> ValueArray;
				for(auto&& Item: m_Owner.m_Data.m_ItemArray)
				{
					if(m_pProcessValue && m_pProcessValue->m_nIdentifier != Item.m_Item.nProcessIdentifier)
						continue;
					if(m_pFilterGraphValue && m_pFilterGraphValue->m_nIdentifier != Item.m_Item.nFilterGraphIdentifier)
						continue;
					if(m_pFilterValue && m_pFilterValue->m_nIdentifier != Item.m_PageItem.nFilterIdentifier)
						continue;
					if(!*Item.m_PageItem.pszStreamName)
						continue;
					if(IdentifierArray.FindFirst(Item.m_PageItem.pszStreamName))
						continue;
					IdentifierArray.Add(Item.m_PageItem.pszStreamName);
					ValueArray.Add(CStreamValue(1, Item.m_PageItem.pszStreamName));
				}
				_SortHelper::QuickSort<CStreamValueSortTraits>(ValueArray);
				for(auto&& Value: ValueArray)
					m_StreamComboBox.InsertString(nItem++, Value.m_sValue, Value);
				if(ValueArray.GetCount() == 1)
					m_StreamComboBox.SetCurSel(1);
				const BOOL bEnabled = m_StreamComboBox.GetCount() > 2;
				m_StreamComboBox.GetWindow(GW_HWNDPREV).EnableWindow(bEnabled);
				m_StreamComboBox.EnableWindow(bEnabled);
				OnStreamComboBoxSelEndOk();
			}
			VOID Reset()
			{
				m_pProcessValue = NULL;
				UpdateProcessComboBox();
			}
			BOOL IsVisible(const CData::CItem& Item) const
			{
				if(m_pProcessValue && Item.m_Item.nProcessIdentifier != m_pProcessValue->m_nIdentifier)
					return FALSE;
				if(m_pFilterGraphValue && Item.m_Item.nFilterGraphIdentifier != m_pFilterGraphValue->m_nIdentifier)
					return FALSE;
				if(m_pFilterValue && Item.m_PageItem.nFilterIdentifier != m_pFilterValue->m_nIdentifier)
					return FALSE;
				if(m_pStreamValue && wcscmp(Item.m_PageItem.pszStreamName, m_pStreamValue->m_sValue) != 0)
					return FALSE;
				return TRUE;
			}

		// Window Message Handler
			LRESULT OnInitDialog(HWND, LPARAM)
			{
				m_ProcessComboBox = GetDlgItem(IDC_MEDIASAMPLETRACE_MEDIASAMPLE_FILTER_PROCESS);
				m_FilterGraphComboBox = GetDlgItem(IDC_MEDIASAMPLETRACE_MEDIASAMPLE_FILTER_FILTERGRAPH);
				m_FilterComboBox = GetDlgItem(IDC_MEDIASAMPLETRACE_MEDIASAMPLE_FILTER_FILTER);
				m_StreamComboBox = GetDlgItem(IDC_MEDIASAMPLETRACE_MEDIASAMPLE_FILTER_STREAM);
				m_pProcessValue = NULL;
				m_pFilterGraphValue = NULL;
				m_pFilterValue = NULL;
				m_pStreamValue = NULL;
				DlgResize_Init(FALSE);
				return TRUE;
			}
			LRESULT OnProcessComboBoxSelEndOk(UINT = 0, INT = 0, HWND = NULL)
			{
				CProcessValue& ProcessValue = m_ProcessComboBox.GetItemData(m_ProcessComboBox.GetCurSel());
				m_pProcessValue = ProcessValue.m_nIdentifier ? &ProcessValue : NULL;
				UpdateFilterGraphComboBox();
				m_Owner.HandleFilterUpdate();
				return 0;
			}
			LRESULT OnFilterGraphComboBoxSelEndOk(UINT = 0, INT = 0, HWND = NULL)
			{
				CFilterGraphValue& FilterGraphValue = m_FilterGraphComboBox.GetItemData(m_FilterGraphComboBox.GetCurSel());
				m_pFilterGraphValue = FilterGraphValue.m_nIdentifier ? &FilterGraphValue : NULL;
				UpdateFilterComboBox();
				m_Owner.HandleFilterUpdate();
				return 0;
			}
			LRESULT OnFilterComboBoxSelEndOk(UINT = 0, INT = 0, HWND = NULL)
			{
				CFilterValue& FilterValue = m_FilterComboBox.GetItemData(m_FilterComboBox.GetCurSel());
				m_pFilterValue = FilterValue.m_nIdentifier ? &FilterValue : NULL;
				UpdateStreamComboBox();
				m_Owner.HandleFilterUpdate();
				return 0;
			}
			LRESULT OnStreamComboBoxSelEndOk(UINT = 0, INT = 0, HWND = NULL)
			{
				CStreamValue& StreamValue = m_StreamComboBox.GetItemData(m_StreamComboBox.GetCurSel());
				m_pStreamValue = !StreamValue.m_sValue.IsEmpty() ? &StreamValue : NULL;
				m_Owner.HandleFilterUpdate();
				return 0;
			}
		};

	private:
		CMediaSampleTracePropertySheet& m_PropertySheet;
		CRoHyperStatic m_IntroductionStatic;
		CRoListViewT<CData::CItem, CRoListControlDataTraitsT> m_ListView;
		CRoHyperStatic m_RefreshStatic;
		CRoHyperStatic m_CopyToClipboardStatic;
		CRoHyperStatic m_SaveToFileStatic;
		CRoHyperStatic m_LoadFromFileStatic;
		CFilterDialog m_FilterDialog;
		CRoMapT<INT, BOOL> m_ChangeMap;
		CData m_Data;
		CHandleMap m_HandleMap;
		CObjectPtr<CHandleMapLock> m_pHandleMapLock;

	public:
	// CMediaSamplePropertyPage
		CMediaSamplePropertyPage(CMediaSampleTracePropertySheet* pPropertySheet) :
			m_PropertySheet(*pPropertySheet),
			m_FilterDialog(this)
		{
		}
		VOID UpdateControls()
		{
		}
		VOID UpdateListView()
		{
			CWindowRedraw ListViewRedraw(m_ListView);
			m_ListView.DeleteAllItems();
			if(m_pHandleMapLock) // Live vs. File Source
			{
				m_Data.Initialize();
				CPages Pages;
				if(Pages.Initialize())
				{
					Pages.GetData(m_Data, &m_HandleMap);
					m_Data.Sort();
					INT nItem = 0;
					for(auto&& Item: m_Data.m_ItemArray)
						m_ListView.InsertItem(nItem++, Item);
				}
			}
			m_FilterDialog.Reset();
		}
		static CString GetFilterGraphFriendlyName(const ITEM& Item)
		{
			CString sFriendlyName(Item.pszFilterGraphName);
			if(!sFriendlyName.IsEmpty())
				sFriendlyName.AppendFormat(_T(" (0x%p)"), (UINT_PTR) Item.nFilterGraphIdentifier);
			else
				sFriendlyName.AppendFormat(_T("0x%p"), (UINT_PTR) Item.nFilterGraphIdentifier);
			return sFriendlyName;
		}
		static CString GetFilterFriendlyName(const PAGEITEM& PageItem)
		{
			CString sFriendlyName(PageItem.pszFilterName);
			if(!sFriendlyName.IsEmpty())
				sFriendlyName.AppendFormat(_T(" (0x%p)"), (UINT_PTR) PageItem.nFilterIdentifier);
			else
				sFriendlyName.AppendFormat(_T("0x%p"), (UINT_PTR) PageItem.nFilterIdentifier);
			return sFriendlyName;
		}
		CStringA CreateText()
		{
			CString sText;
			sText += CreateDataItemHeaderText();
			for(INT nItem = 0; nItem < m_ListView.GetItemCount(); nItem++)
				sText += CreateDataItemText(m_ListView.GetItemData(nItem));
			return Utf8StringFromString(sText);
		}
		VOID HandleFilterUpdate()
		{
			CWindowRedraw ListViewRedraw(m_ListView);
			m_ListView.DeleteAllItems();
			INT nItem = 0;
			for(auto&& Item: m_Data.m_ItemArray)
				if(m_FilterDialog.IsVisible(Item))
					m_ListView.InsertItem(nItem++, Item);
			// SUGG: Preserve selection
		}
		VOID LoadFrom(CString sText)
		{
			sText.Replace(_T("\r\n"), _T("\n"));
			CRoListT<CData::CItem> ItemList;
			{
				CRoArrayT<CString> LineArray;
				_StringHelper::GetLines(sText, LineArray);
				__D(LineArray.GetCount() > 1, E_UNNAMED);
				LineArray.RemoveAt(0); // Header
				for(auto&& sLine: LineArray)
				{
					CData::CItem Item;
					_ATLTRY
					{
						ZeroMemory(&Item.m_Item, sizeof Item.m_Item);
						ZeroMemory(&Item.m_PageItem, sizeof Item.m_PageItem);
						CRoArrayT<CString> Array;
						_StringHelper::Split(sLine, _T('\t'), Array);
						__D(Array.GetCount() >= 9, E_UNNAMED);
						Item.m_Item.nFlags = ITEMFLAGS_NONE;
						_W(StrToIntEx(Array[1], 0, (INT*) &Item.m_Item.nProcessIdentifier));
						Item.m_Item.nPageIdentifier = 0;
						_W(StrToInt64Ex(Array[3], STIF_SUPPORT_HEX, (LONGLONG*) &Item.m_Item.nFilterGraphIdentifier));
						wcsncpy_s(Item.m_Item.pszFilterGraphName, Array[4], _TRUNCATE);
						Item.m_PageItem.nFlags = PAGEITEMFLAGS_NONE;
						_W(StrToIntEx(Array[2], 0, (INT*) &Item.m_PageItem.nThreadIdentifier));
						_W(StrToInt64Ex(Array[5], STIF_SUPPORT_HEX, (LONGLONG*) &Item.m_PageItem.nFilterIdentifier));
						wcsncpy_s(Item.m_PageItem.pszFilterName, Array[6], _TRUNCATE);
						wcsncpy_s(Item.m_PageItem.pszStreamName, Array[7], _TRUNCATE);
						#pragma region Time
						static CRoStaticRe g_Expression(_T("^{[0-9]+}\\:{[0-9]+}\\:{[0-9]+}\\.{[0-9]+}$"), FALSE);
						CRoReMatchContext MatchContext;
						if(g_Expression.Match(Array[0], &MatchContext))
						{
							// NOTE: Let's go with today
							SYSTEMTIME Time;
							GetSystemTime(&Time);
							Time.wHour = (WORD) _ttoi(MatchContext.GetMatchString(0));
							Time.wMinute = (WORD) _ttoi(MatchContext.GetMatchString(1));
							Time.wSecond = (WORD) _ttoi(MatchContext.GetMatchString(2));
							Time.wMilliseconds = (WORD) _ttoi(MatchContext.GetMatchString(3));
							_W(SystemTimeToFileTime(&Time, &reinterpret_cast<FILETIME&>(Item.m_PageItem.nTime)));
						}
						#pragma endregion
						const CString& sType = Array[8];
						if(sType.Compare(_T("New Segment")) == 0)
						{
							Item.m_PageItem.nFlags |= PAGEITEMFLAG_NEWSEGMENT;
						} else
						if(sType.Compare(_T("Media Sample")) == 0)
						{
							Item.m_PageItem.nFlags |= PAGEITEMFLAG_MEDIASAMPLE;
							AM_SAMPLE2_PROPERTIES& Properties = Item.m_PageItem.Data.MediaSample.Properties;
							#pragma region Sample Flags
							_A(!Properties.dwSampleFlags);
							CString sSampleFlags = Array[9];
							sSampleFlags.Replace(_T(" | "), _T("|"));
							CRoArrayT<CString> FlagArray;
							_StringHelper::Split(sSampleFlags, _T('|'), FlagArray);
							for(auto&& sFlag: FlagArray)
							{
								static const CFlagNameT<DWORD> g_pMap[] = 
								{
									#define A(x) { x, #x },
									A(AM_SAMPLE_SPLICEPOINT)
									A(AM_SAMPLE_PREROLL)
									A(AM_SAMPLE_DATADISCONTINUITY)
									A(AM_SAMPLE_TYPECHANGED)
									A(AM_SAMPLE_TIMEVALID)
									A(AM_SAMPLE_TIMEDISCONTINUITY)
									A(AM_SAMPLE_FLUSH_ON_PAUSE)
									A(AM_SAMPLE_STOPVALID)
									A(AM_SAMPLE_ENDOFSTREAM)
									//A(AM_STREAM_MEDIA)
									//A(AM_STREAM_CONTROL)
									#undef A
								};
								BOOL bHandled = FALSE;
								for(auto&& Item: g_pMap)
									if(sFlag.Compare(CString(Item.pszName)) == 0)
									{
										Properties.dwSampleFlags |= Item.Value;
										bHandled = TRUE;
										break;
									}
								if(bHandled)
									continue;
								INT nFlag;
								_W(StrToIntEx(sFlag, STIF_SUPPORT_HEX, &nFlag));
								Properties.dwSampleFlags |= nFlag;
							}
							#pragma endregion 
							if(!Array[10].IsEmpty())
								_W(StrToInt64Ex(Array[10], 0, (LONGLONG*) &Properties.tStart));
							if(!Array[11].IsEmpty())
								_W(StrToInt64Ex(Array[11], 0, (LONGLONG*) &Properties.tStop));
							if(!Array[13].IsEmpty())
								_W(StrToIntEx(Array[13], 0, (INT*) &Properties.lActual));
						} else
						if(sType.Compare(_T("End of Stream")) == 0)
						{
							Item.m_PageItem.nFlags |= PAGEITEMFLAG_ENDOFSTREAM;
						} else
						{
							_A(sType.Compare(_T("Comment")) == 0);
							Item.m_PageItem.nFlags |= PAGEITEMFLAG_COMMENT;
						}
						if(Array.GetCount() > 14)
							wcsncpy_s(Item.m_PageItem.pszComment, Array[14], _TRUNCATE);
						if(Array.GetCount() > 15)
						{
							CString sHighlight = Array[15];
							if(!sHighlight.IsEmpty())
							{
								_A(sHighlight[0] == _T('*'));
								sHighlight.Delete(0);
								_W(StrToIntEx(sHighlight, 0, (INT*) &Item.m_nHighlightIndex));
								//Item.m_PageItem.nFlags &= ~PAGEITEMFLAG_HIGHLIGHT_MASK;
								//Item.m_PageItem.nFlags |= (Item.m_nHighlightIndex << PAGEITEMFLAG_HIGHLIGHT_SHIFT) & PAGEITEMFLAG_HIGHLIGHT_MASK;
							}
						}
					}
					_ATLCATCHALL()
					{
						_Z_EXCEPTION();
						continue;
					}
					ItemList.AddTail(Item);
				}
			}
			m_Data.Initialize();
			for(auto&& Item: ItemList)
				m_Data.m_ItemArray.Add(Item);
			m_pHandleMapLock.Release();
			m_HandleMap.RemoveAll();
			UpdateListView();
		}
		VOID LoadFromFile(LPCTSTR pszPath)
		{
			CAtlFile File;
			__C(File.Create(pszPath, GENERIC_READ, FILE_SHARE_READ, OPEN_EXISTING));
			ULONGLONG nFileSize;
			__C(File.GetSize(nFileSize));
			CHeapPtr<BYTE> pnData;
			__D(pnData.Allocate((SIZE_T) nFileSize + 1), E_OUTOFMEMORY);
			__C(File.Read(pnData, (DWORD) nFileSize));
			pnData[(SIZE_T) nFileSize] = 0;
			LoadFrom(StringFromUtf8String(CStringA((LPCSTR) (const BYTE*) pnData)));
		}

	// CCustomDraw
		DWORD OnPrePaint(INT nIdentifier, NMCUSTOMDRAW*)
		{
			if(nIdentifier == IDC_MEDIASAMPLETRACE_MEDIASAMPLE_LIST)
				return CDRF_NOTIFYITEMDRAW;
			return CDRF_DODEFAULT;
		}
		DWORD OnItemPrePaint(INT, NMCUSTOMDRAW* pHeader)
		{
			NMLVCUSTOMDRAW* pHeaderEx = (NMLVCUSTOMDRAW*) pHeader;
			const CData::CItem& Item = m_ListView.DataFromParameter(pHeaderEx->nmcd.lItemlParam);
			Item.GetBackgroundColor(pHeaderEx->clrTextBk);
			return CDRF_DODEFAULT;
		}

	// Window Message Handler
		LRESULT OnInitDialog(HWND, LPARAM)
		{
			_ATLTRY
			{
				CWaitCursor WaitCursor;
				_W(m_IntroductionStatic.SubclassWindow(GetDlgItem(IDC_MEDIASAMPLETRACE_MEDIASAMPLE_INTRODUCTION)));
				m_ListView.Initialize(GetDlgItem(IDC_MEDIASAMPLETRACE_MEDIASAMPLE_LIST));
				_W(m_RefreshStatic.SubclassWindow(GetDlgItem(IDC_MEDIASAMPLETRACE_MEDIASAMPLE_REFRESH)));
				m_RefreshStatic.SetExtendedStyle(CRoHyperStatic::CS_ANCHORCLICKCOMMAND);
				_W(m_CopyToClipboardStatic.SubclassWindow(GetDlgItem(IDC_MEDIASAMPLETRACE_MEDIASAMPLE_COPYTOCLIPBOARD)));
				m_CopyToClipboardStatic.SetExtendedStyle(CRoHyperStatic::CS_ANCHORCLICKCOMMAND);
				_W(m_SaveToFileStatic.SubclassWindow(GetDlgItem(IDC_MEDIASAMPLETRACE_MEDIASAMPLE_SAVETOFILE)));
				m_SaveToFileStatic.SetExtendedStyle(CRoHyperStatic::CS_ANCHORCLICKCOMMAND);
				_W(m_LoadFromFileStatic.SubclassWindow(GetDlgItem(IDC_MEDIASAMPLETRACE_MEDIASAMPLE_LOADFROMFILE)));
				m_LoadFromFileStatic.SetExtendedStyle(CRoHyperStatic::CS_ANCHORCLICKCOMMAND);
				CRoHyperStatic::ArrangeHorizontally(&m_RefreshStatic, &m_CopyToClipboardStatic, &m_SaveToFileStatic, &m_LoadFromFileStatic, NULL);
				#pragma region Filter
				__E(m_FilterDialog.Create(m_hWnd, (LPARAM) this));
				{
					CRect FilterPosition, Position;
					_W(m_FilterDialog.GetWindowRect(FilterPosition));
					m_FilterDialog.SetDlgCtrlID(CFilterDialog::IDD);
					const CSize FilterExtent = FilterPosition.Size();
					_W(m_ListView.GetWindowRect(Position));
					_W(ScreenToClient(Position));
					const LONG nSpacing = Position.left;
					FilterPosition.left = Position.left;
					FilterPosition.right = Position.right;
					FilterPosition.top = Position.top;
					FilterPosition.bottom = FilterPosition.top + FilterExtent.cy;
					Position.top = FilterPosition.bottom + nSpacing;
					_W(m_FilterDialog.SetWindowPos(m_IntroductionStatic, FilterPosition, SWP_NOACTIVATE | SWP_SHOWWINDOW));
					_W(m_ListView.MoveWindow(Position));
				}
				#pragma endregion 
				DlgResize_Init(FALSE, FALSE);
				m_pHandleMapLock.Construct();
				UpdateListView();
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
				#if _DEVELOPMENT && FALSE
					LoadFromFile(_T("D:\\MediaSampleTrace.tsv"));
				#endif // _DEVELOPMENT
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
			CWaitCursor WaitCursor;
			m_pHandleMapLock.Release();
			return 0;
		}
		LRESULT OnTranslateAccelerator(MSG* pMessage)
		{
			return TranslateAccelerator(m_hWnd, m_hAccelerators, pMessage) ? PSNRET_MESSAGEHANDLED : PSNRET_NOERROR;
		}
		LRESULT OnListViewGetDispInfo(NMLVDISPINFO* pHeader)
		{
			const CData::CItem& Item = m_ListView.DataFromParameter(pHeader->item.lParam);
			if(pHeader->item.mask & LVIF_TEXT)
			{
				CString& sTextBuffer = m_ListView.GetTextBufferString(TRUE);
				switch(pHeader->item.iSubItem)
				{
				case 1: // Process
					sTextBuffer = AtlFormatString(_T("%d"), (UINT_PTR) Item.m_Item.nProcessIdentifier);
					break;
				case 2: // Thread
					sTextBuffer = AtlFormatString(_T("%d"), (UINT_PTR) Item.m_PageItem.nThreadIdentifier);
					break;
				case 3: // Filter Graph
					sTextBuffer = GetFilterGraphFriendlyName(Item.m_Item);
					break;
				case 4: // Filter
					sTextBuffer = GetFilterFriendlyName(Item.m_PageItem);
					break;
				case 5: // Stream
					sTextBuffer = AtlFormatString(_T("%ls"), Item.m_PageItem.pszStreamName);
					break;
				case 6: // Type
					sTextBuffer = Item.FormatType();
					break;
				case 7: // Flags
					if((Item.m_PageItem.nFlags & PAGEITEMFLAG_TYPE_MASK) == PAGEITEMFLAG_MEDIASAMPLE)
						sTextBuffer = _FilterGraphHelper::FormatSampleFlags(Item.m_PageItem.Data.MediaSample.Properties.dwSampleFlags);
					break;
				case 8: // Start Time
					if((Item.m_PageItem.nFlags & PAGEITEMFLAG_TYPE_MASK) == PAGEITEMFLAG_NEWSEGMENT)
					{
						sTextBuffer = _FilterGraphHelper::FormatReferenceTime(Item.m_PageItem.Data.NewSegment.nStartTime);
					} else
					if((Item.m_PageItem.nFlags & PAGEITEMFLAG_TYPE_MASK) == PAGEITEMFLAG_MEDIASAMPLE)
					{
						if(Item.m_PageItem.Data.MediaSample.Properties.dwSampleFlags & AM_SAMPLE_TIMEVALID)
							sTextBuffer = _FilterGraphHelper::FormatReferenceTime(Item.m_PageItem.Data.MediaSample.Properties.tStart);
					}
					break;
				case 9: // Stop Time
					if((Item.m_PageItem.nFlags & PAGEITEMFLAG_TYPE_MASK) == PAGEITEMFLAG_NEWSEGMENT)
					{
						if(Item.m_PageItem.Data.NewSegment.nStopTime < LLONG_MAX)
							sTextBuffer = _FilterGraphHelper::FormatReferenceTime(Item.m_PageItem.Data.NewSegment.nStopTime);
					} else
					if((Item.m_PageItem.nFlags & PAGEITEMFLAG_TYPE_MASK) == PAGEITEMFLAG_MEDIASAMPLE)
					{
						if((Item.m_PageItem.Data.MediaSample.Properties.dwSampleFlags & (AM_SAMPLE_TIMEVALID | AM_SAMPLE_STOPVALID)) == (AM_SAMPLE_TIMEVALID | AM_SAMPLE_STOPVALID))
							sTextBuffer = _FilterGraphHelper::FormatReferenceTime(Item.m_PageItem.Data.MediaSample.Properties.tStop);
					}
					break;
				case 10: // Comment
					sTextBuffer = CString(Item.m_PageItem.pszComment);
					break;
				default: // Time
					sTextBuffer = FormatTime(Item.m_PageItem.nTime);
				}
				pHeader->item.pszText = m_ListView.GetTextBuffer();
				pHeader->item.mask |= LVIF_DI_SETITEM;
			}
			return 0;
		}
		LRESULT OnListViewGetInfoTip(NMLVGETINFOTIP* pHeader)
		{
			const CData::CItem& Item = m_ListView.GetItemData(pHeader->iItem);
			CString& sTextBuffer = m_ListView.GetTextBufferString(TRUE);
			sTextBuffer.AppendFormat(_T("Time: %s\r\n"), FormatTime(Item.m_PageItem.nTime));
			sTextBuffer.AppendFormat(_T("Process: %d\r\n"), (UINT_PTR) Item.m_Item.nProcessIdentifier);
			sTextBuffer.AppendFormat(_T("Thread: %d\r\n"), (UINT_PTR) Item.m_PageItem.nThreadIdentifier);
			sTextBuffer.AppendFormat(_T("Filter Graph: %s\r\n"), GetFilterGraphFriendlyName(Item.m_Item));
			sTextBuffer.AppendFormat(_T("Filter: %s\r\n"), GetFilterFriendlyName(Item.m_PageItem));
			sTextBuffer.AppendFormat(_T("Stream: %ls\r\n"), Item.m_PageItem.pszStreamName);
			sTextBuffer.AppendFormat(_T("Type: %s\r\n"), Item.FormatType());
			switch(Item.m_PageItem.nFlags & PAGEITEMFLAG_TYPE_MASK)
			{
			case PAGEITEMFLAG_NEWSEGMENT:
				sTextBuffer.AppendFormat(_T("Start Time: %s\r\n"), _FilterGraphHelper::FormatReferenceTime(Item.m_PageItem.Data.NewSegment.nStartTime));
				if(Item.m_PageItem.Data.NewSegment.nStopTime < LLONG_MAX)
					sTextBuffer.AppendFormat(_T("Stop Time: %s\r\n"), _FilterGraphHelper::FormatReferenceTime(Item.m_PageItem.Data.NewSegment.nStopTime));
				sTextBuffer.AppendFormat(_T("Rate: %.3f\r\n"), Item.m_PageItem.Data.NewSegment.fRate);
				break;
			case PAGEITEMFLAG_MEDIASAMPLE:
				sTextBuffer.AppendFormat(_T("Sample Flags: %s\r\n"), _FilterGraphHelper::FormatSampleFlags(Item.m_PageItem.Data.MediaSample.Properties.dwSampleFlags));
				if(Item.m_PageItem.Data.MediaSample.Properties.dwSampleFlags & AM_SAMPLE_TIMEVALID)
				{
					sTextBuffer.AppendFormat(_T("Start Time: %s\r\n"), _FilterGraphHelper::FormatReferenceTime(Item.m_PageItem.Data.MediaSample.Properties.tStart));
					if(Item.m_PageItem.Data.MediaSample.Properties.dwSampleFlags & AM_SAMPLE_STOPVALID)
					{
						sTextBuffer.AppendFormat(_T("Stop Time: %s\r\n"), _FilterGraphHelper::FormatReferenceTime(Item.m_PageItem.Data.MediaSample.Properties.tStop));
						sTextBuffer.AppendFormat(_T("Length Time: %s\r\n"), _FilterGraphHelper::FormatReferenceTime(Item.m_PageItem.Data.MediaSample.Properties.tStop - Item.m_PageItem.Data.MediaSample.Properties.tStart));
					}
				}
				sTextBuffer.AppendFormat(_T("Data Size: %s\r\n"), _StringHelper::FormatNumber(Item.m_PageItem.Data.MediaSample.Properties.lActual));
				break;
			case PAGEITEMFLAG_ENDOFSTREAM:
			case PAGEITEMFLAG_COMMENT:
				break;
			default:
				_A(FALSE);
			}
			if(*Item.m_PageItem.pszComment)
				sTextBuffer.AppendFormat(_T("\r\n") _T("%ls\r\n"), Item.m_PageItem.pszComment);
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
			_tcsncpy_s(pHeader->pszText, pHeader->cchTextMax, m_ListView.GetTextBuffer(), _TRUNCATE);
			return 0;
		}
		LRESULT OnContextMenu(CWindow, CPoint Position)
		{
			CMenu ContainerMenu = AtlLoadMenu(IDD);
			CMenuHandle Menu = ContainerMenu.GetSubMenu(0);
			const INT nItemCount = m_ListView.GetItemCount();
			const INT nSelectItemCount = m_ListView.GetSelectedCount();
			for(INT nIdentifier = IDC_MEDIASAMPLETRACE_MEDIASAMPLE_HIGHLIGHT_REMOVE; nIdentifier <= IDC_MEDIASAMPLETRACE_MEDIASAMPLE_HIGHLIGHT_8; nIdentifier++)
				Menu.EnableMenuItem(nIdentifier, nSelectItemCount ? MF_ENABLED : MF_GRAYED | MF_DISABLED);
			Menu.EnableMenuItem(IDC_MEDIASAMPLETRACE_MEDIASAMPLE_HIGHLIGHT_REMOVEALL, nItemCount ? MF_ENABLED : MF_GRAYED | MF_DISABLED);
			Menu.EnableMenuItem(IDC_MEDIASAMPLETRACE_MEDIASAMPLE_COPYTOCLIPBOARD, nItemCount ? MF_ENABLED : MF_GRAYED | MF_DISABLED);
			Menu.EnableMenuItem(IDC_MEDIASAMPLETRACE_MEDIASAMPLE_SAVETOFILE, nItemCount ? MF_ENABLED : MF_GRAYED | MF_DISABLED);
			Menu.TrackPopupMenu(TPM_RIGHTBUTTON | TPM_LEFTALIGN | TPM_TOPALIGN, Position.x, Position.y, m_hWnd); 
			return 0;
		}
		LRESULT OnRefresh(UINT, INT, HWND)
		{
			CWaitCursor WaitCursor;
			UpdateListView();
			return 0;
		}
		LRESULT OnCopyToClipboard(UINT, INT, HWND)
		{
			CWaitCursor WaitCursor;
			SetClipboardText(m_hWnd, CreateText());
			MessageBeep(MB_OK);
			return 0;
		}
		LRESULT OnSaveToFile(UINT, INT, HWND)
		{
			static const COMDLG_FILTERSPEC g_pFilter[] = 
			{
				{ _T("TSV Files"), _T("*.tsv") },
				{ _T("TSV Files, Bzip2 Compressed"), _T("*.tsv.bz2") },
				{ _T("All Files"), _T("*.*") },
			};
			CPath sPath = _CommonDialogHelper::QuerySavePath(m_hWnd, g_pFilter, _T("tsv"), _T("Media Sample Trace.tsv"));
			if(!_tcslen(sPath))
				return 0;
			CWaitCursor WaitCursor;
			SaveToFile(CreateText(), sPath);
			return 0;
		}
		LRESULT OnLoadFromFile(UINT, INT, HWND)
		{
			static const COMDLG_FILTERSPEC g_pFilter[] = 
			{
				{ _T("TSV Files"), _T("*.tsv") },
				{ _T("All Files"), _T("*.*") },
			};
			CPath sPath = _CommonDialogHelper::QueryOpenPath(m_hWnd, g_pFilter, _T("tsv"), _T("Media Sample Trace.tsv"));
			if(!_tcslen(sPath))
				return 0;
			CWaitCursor WaitCursor;
			LoadFromFile(sPath);
			return 0;
		}
		LRESULT OnResetData(UINT, INT, HWND)
		{
			CWaitCursor WaitCursor;
			m_HandleMap.RemoveAll();
			CPages Pages;
			if(Pages.Initialize())
				Pages.ResetData();
			UpdateListView();
			return 0;
		}
		LRESULT OnOpenFilterGraphList(UINT, INT, HWND)
		{
			CLocalObjectPtr<CFilterGraphHelper> pFilterGraphHelper;
			pFilterGraphHelper->DoFilterGraphListModal((LONG) (LONG_PTR) m_hWnd);
			return 0;
		}
		LRESULT OnOpenFilterGraphProperties(UINT, INT, HWND)
		{
			if(m_ListView.GetSelectedCount() == 1)
			{
				const INT nItem = m_ListView.GetNextItem(-1, LVNI_SELECTED);
				_A(nItem >= 0);
				CData::CItem& Item = m_ListView.GetItemData(nItem);
				const LONG nProcessIdentifier = Item.m_Item.nProcessIdentifier;
				CComPtr<IRunningObjectTable> pRunningObjectTable;
				__C(GetRunningObjectTable(0, &pRunningObjectTable));
				CRoMapT<CStringW, CFilterGraphListPropertySheet::CListPropertyPage::CItem> ItemMap;
				CFilterGraphListPropertySheet::CListPropertyPage::EnumerateItems(pRunningObjectTable, ItemMap, &nProcessIdentifier);
				for(auto&& GraphItem: ItemMap.GetValues())
				{
					if(abs((LONG_PTR) (GraphItem.m_nInstance - Item.m_Item.nFilterGraphIdentifier)) < 0x0100)
						if(GraphItem.FilterGraphNeeded(pRunningObjectTable))
						{
							CLocalObjectPtr<CFilterGraphHelper> pFilterGraphHelper;
							pFilterGraphHelper->SetFilterGraph(GraphItem.m_pFilterGraph);
							_V(pFilterGraphHelper->DoPropertyFrameModal((LONG) (LONG_PTR) m_hWnd));
							return 0;
						}
				}
			}
			_W(PostMessage(WM_COMMAND, IDC_MEDIASAMPLETRACE_MEDIASAMPLE_OPENFILTERGRAPHLIST));
			return 0;
		}
		LRESULT OnHighlightRemoveAll(UINT, INT nIdentifier, HWND)
		{
			const INT nItemCount = m_ListView.GetItemCount();
			if(nItemCount > 0)
			{
				for(INT nItem = 0; nItem < nItemCount; nItem++)
					m_ListView.GetItemData(nItem).m_nHighlightIndex = 0;
				m_ListView.RedrawItems(0, nItemCount - 1);
			}
			return 0;
		}
		LRESULT OnHighlight(UINT, INT nIdentifier, HWND)
		{
			for(INT nItem: m_ListView.GetSelectedItems())
			{
				m_ListView.GetItemData(nItem).m_nHighlightIndex = nIdentifier - IDC_MEDIASAMPLETRACE_MEDIASAMPLE_HIGHLIGHT_REMOVE;
				m_ListView.RedrawItems(nItem, nItem);
			}
			return 0;
		}
	};

private:
	CMediaSamplePropertyPage m_MediaSamplePropertyPage;

public:
// CMediaSampleTracePropertySheet
	CMediaSampleTracePropertySheet() :
		CSizablePropertySheetT<CMediaSampleTracePropertySheet>(IDS_MEDIASAMPLETRACE_MEDIASAMPLE_PROPERTYSHEETCAPTION, TRUE),
		m_MediaSamplePropertyPage(this)
	{
		AddPage(m_MediaSamplePropertyPage);
	}
	BOOL SetInitialPosition()
	{
		if(!__super::SetInitialPosition())
			return FALSE;
		SetIcon(AtlLoadIconImage(IDI_MODULE, LR_DEFAULTCOLOR, GetSystemMetrics(SM_CXICON), GetSystemMetrics(SM_CYICON)), TRUE);
		SetIcon(AtlLoadIconImage(IDI_MODULE, LR_DEFAULTCOLOR, GetSystemMetrics(SM_CXSMICON), GetSystemMetrics(SM_CYSMICON)), FALSE);
		CAboutDialog::UpdateCaption(*this);
		#pragma region System Menu
		CMenuHandle Menu = GetSystemMenu(FALSE);
		_W(Menu.AppendMenu(MF_SEPARATOR));
		_W(Menu.AppendMenu(MF_STRING, ID_APP_ABOUT, _T("&About...")));
		#pragma endregion
		return TRUE;
	}

// Window Message Handler
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

inline VOID MediaSampleTrace_Reset(DWORD nProcessIdentifier)
{
	nProcessIdentifier;
	// TODO: Implement processs-specific operation (support non-zero nProcessIdentifier)
	CMediaSampleTraceBase::CPages Pages;
	if(Pages.Initialize())
		Pages.ResetData();
}
inline CString MediaSampleTrace_Get(DWORD nProcessIdentifier)
{
	CString sText;
	CMediaSampleTraceBase::CPages Pages;
	if(Pages.Initialize())
	{
		CMediaSampleTraceBase::CData Data;
		Data.Initialize();
		CMediaSampleTraceBase::CHandleMap HandleMap;
		Pages.GetData(Data, &HandleMap);
		Data.Sort();
		sText += CMediaSampleTracePropertySheet::CreateDataItemHeaderText();
		for(auto&& Item: Data.m_ItemArray)
			if(!nProcessIdentifier || Item.m_Item.nProcessIdentifier == nProcessIdentifier)
				sText += CMediaSampleTracePropertySheet::CreateDataItemText(Item);
	}
	return sText;
}
inline CComPtr<IUnknown> MediaSampleTrace_Lock()
{
	CObjectPtr<CMediaSampleTraceBase::CHandleMapLock> pHandleMapLock;
	pHandleMapLock.Construct();
	return (CMediaSampleTraceBase::CHandleMapLock*) pHandleMapLock;
}
