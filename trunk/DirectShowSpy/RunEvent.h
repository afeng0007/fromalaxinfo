////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2015
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

////////////////////////////////////////////////////////////
// CRunEventHelper

class CRunEventHelper
{
public:

	////////////////////////////////////////////////////////
	// CEventsT, CEvents

	template <SIZE_T t_nItemCapacity = 256, SIZE_T t_nItemTextLength = 256>
	class CEventsT
	{
	public:

		////////////////////////////////////////////////////
		// CItem

		class CItem
		{
		public:
			ULONGLONG m_nTime;
			CHAR m_pszText[t_nItemTextLength];

		public:
		// CItem
			CComVariantArray GetAsVariant(ULONGLONG nTime) const
			{
				CComVariantArray vValue;
				vValue.FromElements(2, CComVariant((LONG) ((nTime - m_nTime) / 10000)), CComVariant(m_pszText));
				return vValue;
			}
			BOOL SetAsVariant(CComVariantArray& vValue)
			{
				if(vValue.vt != (VT_ARRAY | VT_VARIANT))
					return FALSE;
				_A(vValue.GetDimensionCount() == 1);
				CRoArrayT<CComVariantArray> Array;
				vValue.ToElementArray(Array);
				if(Array.GetCount() < 2)
					return FALSE;
				m_nTime = Array[0].GetAsType(VT_I4).lVal * 10000;
				strncpy_s(m_pszText, CW2A(Array[1].GetAsType(VT_BSTR).bstrVal), _TRUNCATE);
				return TRUE;
			}
			BOOL SetAsVariant(VARIANT vValue)
			{
				return SetAsVariant(reinterpret_cast<CComVariantArray&>(vValue));
			}
			CString GetText(ULONGLONG nTime) const
			{
				CString sText;
				sText.AppendFormat(_T("%Id"), (LONG) (nTime - m_nTime));
				sText.AppendChar(_T('\t'));
				sText.Append(CA2CT(m_pszText));
				return sText;
			}
		};

	private:
		mutable CRoLightCriticalSection m_DataCriticalSection;
		BOOL m_bCapture;
		CItem m_pItems[t_nItemCapacity];
		SIZE_T m_nItemIndex;
		SIZE_T m_nItemCount;
		BOOL m_bTrace;
		SIZE_T m_nTraceItemCount;

		VOID InternalAddItem(ULONGLONG nTime, LPCSTR pszText)
		{
			CRoLightCriticalSectionLock DataLock(m_DataCriticalSection);
			if(!m_bCapture)
				return;
			CItem& Item = m_pItems[m_nItemIndex];
			Item.m_nTime = nTime;
			strncpy_s(Item.m_pszText, pszText, _TRUNCATE);
			if(m_nItemCount < t_nItemCapacity)
				m_nItemCount++;
			++m_nItemIndex %= t_nItemCapacity;
			if(m_bTrace && m_nTraceItemCount)
				m_nTraceItemCount--;
		}
		VOID InternalAddItemV(ULONGLONG nTime, LPCSTR pszFormat, va_list Arguments)
		{
			CRoLightCriticalSectionLock DataLock(m_DataCriticalSection);
			if(!m_bCapture)
				return;
			CItem& Item = m_pItems[m_nItemIndex];
			Item.m_nTime = nTime;
			vsprintf_s(Item.m_pszText, pszFormat, Arguments);
			if(m_nItemCount < t_nItemCapacity)
				m_nItemCount++;
			++m_nItemIndex %= t_nItemCapacity;
			if(m_bTrace && m_nTraceItemCount)
				m_nTraceItemCount--;
		}

	public:
	// CEventsT
		CEventsT() :
			m_bCapture(FALSE),
			m_bTrace(FALSE)
		{
		}
		static SIZE_T GetCapacity()
		{
			return t_nItemCapacity;
		}
		BOOL IsCapture() const
		{
			CRoLightCriticalSectionLock DataLock(m_DataCriticalSection);
			return m_bCapture;
		}
		VOID SetCapture(BOOL bCapture)
		{
			CRoLightCriticalSectionLock DataLock(m_DataCriticalSection);
			if(m_bCapture == bCapture)
				return;
			m_bCapture = bCapture;
			if(bCapture)
			{
				m_nItemIndex = 0;
				m_nItemCount = 0;
			}
		}
		VOID AddItemV(ULONGLONG nTime, LPCSTR pszFormat, va_list Arguments)
		{
			InternalAddItemV(nTime, pszFormat, Arguments);
		}
		VOID AddItem(ULONGLONG nTime, LPCSTR pszFormat, ...)
		{
			va_list Arguments;
			va_start(Arguments, pszFormat);
			AddItemV(pszFormat, Arguments);
			va_end(Arguments);
		}
		VOID AddItem(LPCSTR pszFormat, ...)
		{
			va_list Arguments;
			va_start(Arguments, pszFormat);
			AddItemV(CMsAccurateFileTime::GetTime(), pszFormat, Arguments);
			va_end(Arguments);
		}
		VOID AddItem(const CRoArrayT<CStringA>& Array)
		{
			InternalAddItem(CMsAccurateFileTime::GetTime(), _StringHelper::Join(Array, "\t"));
		}
		CComVariantArray GetAsVariant() const
		{
			CComVariantArray vValue;
			CRoLightCriticalSectionLock DataLock(m_DataCriticalSection);
			if(m_bCapture && m_nItemCount)
			{
				const ULONGLONG nTime = CMsAccurateFileTime::GetTime();
				CRoArrayT<CComVariantArray> Array;
				Array.SetCount(0, (INT) m_nItemCount);
				for(SIZE_T nItemIndex = 0; nItemIndex < m_nItemCount; nItemIndex++)
				{
					const CItem& Item = m_pItems[((m_nItemIndex - 1) - nItemIndex + t_nItemCapacity) % t_nItemCapacity];
					Array.Add(Item.GetAsVariant(nTime));
				}
				vValue.FromElementArray(Array);
			}
			return vValue;
		}
		SIZE_T GetText(CRoArrayT<CString>& Array) const
		{
			_A(Array.IsEmpty());
			CRoLightCriticalSectionLock DataLock(m_DataCriticalSection);
			if(m_bCapture && m_nItemCount)
			{
				const ULONGLONG nTime = CMsAccurateFileTime::GetTime();
				Array.SetCount(0, (INT) m_nItemCount);
				for(SIZE_T nItemIndex = 0; nItemIndex < m_nItemCount; nItemIndex++)
				{
					const CItem& Item = m_pItems[((m_nItemIndex - 1) - nItemIndex + t_nItemCapacity) % t_nItemCapacity];
					Array.Add(Item.GetText(nTime));
				}
			}
			return Array.GetCount();
		}
		BOOL IsTrace() const
		{
			CRoLightCriticalSectionLock DataLock(m_DataCriticalSection);
			return m_bTrace && !m_nTraceItemCount;
		}
		VOID SetTrace(BOOL bTrace, SIZE_T nTraceItemCount = 0)
		{
			CRoLightCriticalSectionLock DataLock(m_DataCriticalSection);
			if(bTrace)
			{
				if(m_bTrace)
					return; // Stick to Existing Schedule
				m_bTrace = TRUE;
				m_nTraceItemCount = nTraceItemCount;
			} else
				m_bTrace = FALSE;
		}
	};

	typedef CEventsT<> CEvents;

public:
// CRunEventHelper
};

#if !defined(DIRECTSHOWSPY)

////////////////////////////////////////////////////////////
// CRunEventAwareT

template <typename T>
class ATL_NO_VTABLE CRunEventAwareT :
	public IDispatchImpl<DIRECTSHOWSPY_NAMESPACE_PREFIX IRunEventAware, &__uuidof(DIRECTSHOWSPY_NAMESPACE_PREFIX IRunEventAware), &__uuidof(DIRECTSHOWSPY_NAMESPACE_PREFIX __AlaxInfoDirectShowSpy)>
{
protected:
	CRunEventHelper::CEvents m_Events;

public:
// CRunEventAwareT
	
// AlaxInfoDirectShowSpy::IRunEventAware
	STDMETHOD(get_Value)(VARIANT* pvEvents)
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		_ATLTRY
		{
			__D(pvEvents, E_POINTER);
			VariantInit(pvEvents);
			T* pT = static_cast<T*>(this);
			//CRoCriticalSectionLock DataLock(pT->GetDataCriticalSection());
			_V(m_Events.GetAsVariant().Detach(pvEvents));
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
	STDMETHOD(get_Capture)(VARIANT_BOOL* pbCapture)
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		_ATLTRY
		{
			__D(pbCapture, E_POINTER);
			T* pT = static_cast<T*>(this);
			//CRoCriticalSectionLock DataLock(pT->GetDataCriticalSection());
			*pbCapture = m_Events.IsCapture() ? ATL_VARIANT_TRUE : ATL_VARIANT_FALSE;
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
	STDMETHOD(put_Capture)(VARIANT_BOOL bCapture)
	{
		_Z4(atlTraceCOM, 4, _T("bCapture %d\n"), bCapture);
		_ATLTRY
		{
			T* pT = static_cast<T*>(this);
			//CRoCriticalSectionLock DataLock(pT->GetDataCriticalSection());
			m_Events.SetCapture(bCapture != ATL_VARIANT_FALSE);
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
};

#endif // !defined(DIRECTSHOWSPY)
