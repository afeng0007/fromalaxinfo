////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2014
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

#include "Module_i.h"
#include "Common.h"

////////////////////////////////////////////////////////////
// CRunPropertyBagHelper

class CRunPropertyBagHelper
{
public:

	////////////////////////////////////////////////////////
	// CSimpleSortTraitsT

	class CNameSortTraits :
		public CSimpleSortTraitsT<CString>
	{
	public:
	// CNameSortTraits
		static INT_PTR CompareElements(const CString& sElementA, const CString& sElementB, PARAMETERARGUMENT Parameter)
		{
			return _tcsicmp(sElementA, sElementB);
		}
	};

protected:
	static CObjectPtr<CMemoryPropertyBag>& PropertyBagNeeded(CObjectPtr<CMemoryPropertyBag>& pPropertyBag)
	{
		if(!pPropertyBag)
			pPropertyBag.Construct();
		return pPropertyBag;
	}

public:
// CRunPropertyBagHelper
	static CComVariantArray ReadRunPropertyBag(IUnknown* pBaseFilterUnknown, BOOL bAllowExtension = TRUE)
	{
		CComVariantArray vValue;
		CRoArrayT<CComVariantArray> Array;
		const CComQIPtr<DIRECTSHOWSPY_NAMESPACE_PREFIX IRunPropertyBagAware> pRunPropertyBagAware = pBaseFilterUnknown;
		CComQIPtr<IPropertyBag2> pPropertyBag2;
		#pragma region Extension
		if(!pRunPropertyBagAware && bAllowExtension)
		{
			CObjectPtr<CMemoryPropertyBag> pPropertyBag;
			#pragma region IQualProp
			const CComQIPtr<IQualProp, &IID_IQualProp> pQualProp = pBaseFilterUnknown;
			if(pQualProp)
				_ATLTRY
				{
					INT nFramesDroppedInRenderer, nFramesDrawn, nAvgFrameRate, nJitter, nAvgSyncOffset, nDevSyncOffset;
					// NOTE: IQualProp methods are not implemented on EVR even though the interface itself is exposed
					const HRESULT nGetAvgFrameRateResult = pQualProp->get_AvgFrameRate(&nAvgFrameRate);
					if(SUCCEEDED(nGetAvgFrameRateResult))
					{
						__C(pQualProp->get_FramesDroppedInRenderer(&nFramesDroppedInRenderer));
						__C(pQualProp->get_FramesDrawn(&nFramesDrawn));
						//__C(pQualProp->get_AvgFrameRate(&nAvgFrameRate));
						__C(pQualProp->get_Jitter(&nJitter));
						__C(pQualProp->get_AvgSyncOffset(&nAvgSyncOffset));
						__C(pQualProp->get_DevSyncOffset(&nDevSyncOffset));
						PropertyBagNeeded(pPropertyBag);
						pPropertyBag->WriteValue(_T("FramesDroppedInRenderer"), CComVariant((LONG) nFramesDroppedInRenderer));
						pPropertyBag->WriteValue(_T("FramesDrawn"), CComVariant((LONG) nFramesDrawn));
						pPropertyBag->WriteValue(_T("AvgFrameRate"), CComVariant((DOUBLE) nAvgFrameRate / 100));
						pPropertyBag->WriteValue(_T("Jitter"), CComVariant((LONG) nJitter));
						pPropertyBag->WriteValue(_T("AvgSyncOffset"), CComVariant((LONG) nAvgSyncOffset));
						pPropertyBag->WriteValue(_T("DevSyncOffset"), CComVariant((LONG) nDevSyncOffset));
					}
				}
				_ATLCATCHALL()
				{
					_Z_EXCEPTION();
				}
			#pragma endregion 
			#pragma region IAMAudioRendererStats
			const CComQIPtr<IAMAudioRendererStats> pAmAudioRendererStats = pBaseFilterUnknown;
			if(pAmAudioRendererStats)
				_ATLTRY
				{
					DWORD nDummy;
					DWORD nBreakCount, nSlaveMode, nSilenceDuration, nLastBufferDuration, nDiscontinuityCount, nSlaveRate, nDropWriteDuration;
					DWORD nHighestSlaveError, nLowestSlaveError, nLastHighSlaveError, nLastLowSlaveError;
					DWORD nAccumulatedError, nBufferFullness;
					//DWORD nJitter;
					__C(pAmAudioRendererStats->GetStatParam(AM_AUDREND_STAT_PARAM_BREAK_COUNT, &nBreakCount, &nDummy));
					__C(pAmAudioRendererStats->GetStatParam(AM_AUDREND_STAT_PARAM_SLAVE_MODE, &nSlaveMode, &nDummy));
					__C(pAmAudioRendererStats->GetStatParam(AM_AUDREND_STAT_PARAM_SILENCE_DUR, &nSilenceDuration, &nDummy));
					__C(pAmAudioRendererStats->GetStatParam(AM_AUDREND_STAT_PARAM_LAST_BUFFER_DUR, &nLastBufferDuration, &nDummy));
					__C(pAmAudioRendererStats->GetStatParam(AM_AUDREND_STAT_PARAM_DISCONTINUITIES, &nDiscontinuityCount, &nDummy));
					if(nSlaveMode)
					{
						__C(pAmAudioRendererStats->GetStatParam(AM_AUDREND_STAT_PARAM_SLAVE_RATE, &nSlaveRate, &nDummy));
						__C(pAmAudioRendererStats->GetStatParam(AM_AUDREND_STAT_PARAM_SLAVE_DROPWRITE_DUR, &nDropWriteDuration, &nDummy));
						__C(pAmAudioRendererStats->GetStatParam(AM_AUDREND_STAT_PARAM_SLAVE_HIGHLOWERROR, &nHighestSlaveError, &nLowestSlaveError));
						__C(pAmAudioRendererStats->GetStatParam(AM_AUDREND_STAT_PARAM_SLAVE_LASTHIGHLOWERROR, &nLastHighSlaveError, &nLastLowSlaveError));
						__C(pAmAudioRendererStats->GetStatParam(AM_AUDREND_STAT_PARAM_SLAVE_ACCUMERROR, &nAccumulatedError, &nDummy));
					}
					__C(pAmAudioRendererStats->GetStatParam(AM_AUDREND_STAT_PARAM_BUFFERFULLNESS, &nBufferFullness, &nDummy));
					//__C(pAmAudioRendererStats->GetStatParam(AM_AUDREND_STAT_PARAM_JITTER, &nJitter, &nDummy));
					PropertyBagNeeded(pPropertyBag);
					pPropertyBag->WriteValue(_T("BreakCount"), CComVariant((LONG) nBreakCount));
					pPropertyBag->WriteValue(_T("SlaveMode"), CComVariant((LONG) nSlaveMode));
					pPropertyBag->WriteValue(_T("SilenceDuration"), CComVariant((LONG) nSilenceDuration));
					pPropertyBag->WriteValue(_T("LastBufferDuration"), CComVariant((LONG) nLastBufferDuration));
					pPropertyBag->WriteValue(_T("DiscontinuityCount"), CComVariant((LONG) nDiscontinuityCount));
					if(nSlaveMode)
					{
						pPropertyBag->WriteValue(_T("SlaveRate"), CComVariant((LONG) nSlaveRate));
						pPropertyBag->WriteValue(_T("DropWriteDuration"), CComVariant((LONG) nDropWriteDuration));
						pPropertyBag->WriteValue(_T("HighestSlaveError"), CComVariant((LONG) nHighestSlaveError));
						pPropertyBag->WriteValue(_T("LowestSlaveError"), CComVariant((LONG) nLowestSlaveError));
						pPropertyBag->WriteValue(_T("LastHighSlaveError"), CComVariant((LONG) nLastHighSlaveError));
						pPropertyBag->WriteValue(_T("LastLowSlaveError"), CComVariant((LONG) nLastLowSlaveError));
						pPropertyBag->WriteValue(_T("AccumulatedError"), CComVariant((LONG) nAccumulatedError));
					}
					pPropertyBag->WriteValue(_T("BufferFullness"), CComVariant((LONG) nBufferFullness));
					//pPropertyBag->WriteValue(_T("Jitter"), CComVariant((LONG) nJitter));
				}
				_ATLCATCHALL()
				{
					_Z_EXCEPTION();
				}
			#pragma endregion 
			if(pPropertyBag)
				pPropertyBag2 = pPropertyBag;
		}
		#pragma endregion
		if(!pPropertyBag2 && pRunPropertyBagAware)
		{
			CComPtr<IUnknown> pPropertyBagUnknown;
			__C(pRunPropertyBagAware->get_Value(&pPropertyBagUnknown));
			pPropertyBag2 = pPropertyBagUnknown;
		}
		if(pPropertyBag2)
		{
			ULONG nPropertyCount = 0;
			__C(pPropertyBag2->CountProperties(&nPropertyCount));
			_Z4(atlTraceGeneral, 4, _T("nPropertyCount %d\n"), nPropertyCount);
			if(nPropertyCount)
			{
				CTempBufferT<PROPBAG2> pPropBags(nPropertyCount);
				ZeroMemory((PROPBAG2*) pPropBags, nPropertyCount * sizeof *pPropBags);
				ULONG nPropBagCount = 0;
				__C(pPropertyBag2->GetPropertyInfo(0, nPropertyCount, pPropBags, &nPropBagCount));
				_Z4(atlTraceGeneral, 4, _T("nPropBagCount %d\n"), nPropBagCount);
				CRoListT<CComHeapPtr<OLECHAR>> NameList;
				for(ULONG nIndex = 0; nIndex < nPropBagCount; nIndex++)
					NameList.GetAt(NameList.AddTail()).Attach(pPropBags[nIndex].pstrName);
				CRoArrayT<CComVariantArray> ValueArray;
				__D(ValueArray.SetCount(nPropBagCount), E_OUTOFMEMORY);
				CTempBufferT<HRESULT> pnResults(nPropBagCount);
				__C(pPropertyBag2->Read(nPropBagCount, pPropBags, NULL, ValueArray.GetData(), pnResults));
				for(ULONG nIndex = 0; nIndex < nPropBagCount; nIndex++)
					if(SUCCEEDED(pnResults[nIndex]))
					{
						CString sName(pPropBags[nIndex].pstrName);
						_Z4(atlTraceGeneral, 4, _T("sName \"%s\"\n"), sName);
						CComVariantArray vPropertyValue;
						Array.Add(vPropertyValue.FromElements(2, CComVariant(sName), ValueArray[nIndex]));
					}
				vValue.FromElementArray(Array);
			}
		}
		return vValue;
	}
	static CString GetPropertyBagText(CRoArrayT<CString>& NameArray, CRoMapT<CString, CComVariantArray>& Map)
	{
		CString sText;
		_SortHelper::QuickSort<CNameSortTraits>(NameArray);
		// SUGG: Nicer similar names, taking prefix at dot separator, also changing Foo-A-B into Foo (A; B)
		for(SIZE_T nIndex = 0; nIndex < NameArray.GetCount(); nIndex++)
		{
			const CString& sName = NameArray[nIndex];
			_Z4(atlTraceGeneral, 4, _T("sName \"%s\"\n"), sName);
			CString sValue;
			CComVariantArray vValue;
			if(!Map.Lookup(sName, vValue))
				continue;
			CString sComment;
			#pragma region Friendly Comment
			switch(vValue.vt)
			{
			#pragma region VT_I4
			case VT_I4:
				if(vValue.lVal < -999 || vValue.lVal > 999)
					sComment = _StringHelper::FormatNumber(vValue.lVal);
				break;
			#pragma endregion 
			#pragma region VT_R8
			case VT_R8:
				if(vValue.dblVal > -0.001 || vValue.dblVal < 0.001)
					sComment = _StringHelper::FormatNumber(vValue.dblVal, 6);
				else 
				if(vValue.lVal < -999.0 || vValue.lVal > 999.0)
					sComment = _StringHelper::FormatNumber(vValue.dblVal, 1);
				break;
			#pragma endregion 
			}
			#pragma endregion 
			const HRESULT nChangeTypeResult = vValue.ChangeType(VT_BSTR);
			_Z45_HRESULT(nChangeTypeResult);
			if(FAILED(nChangeTypeResult))
				continue;
			sText.AppendFormat(_T(" * ") _T("`%s`: `%s`"), sName, CString(vValue.bstrVal));
			if(!sComment.IsEmpty())
				sText.AppendFormat(_T(" // %s"), sComment);
			sText.Append(_T("\r\n"));
		}
		return sText;
	}
	static ATL_DEPRECATED("Convert IPropertyBag2 into VARIANT using ISpy or CSpy instead") CString GetPropertyBagText(IPropertyBag2* pPropertyBag2)
	{
		_A(pPropertyBag2);
		CString sText;
		ULONG nPropertyCount = 0;
		__C(pPropertyBag2->CountProperties(&nPropertyCount));
		_Z4(atlTraceGeneral, 4, _T("nPropertyCount %d\n"), nPropertyCount);
		if(!nPropertyCount)
			return sText;
		#pragma region Read
		CTempBufferT<PROPBAG2> pPropBags(nPropertyCount);
		ZeroMemory((PROPBAG2*) pPropBags, nPropertyCount * sizeof *pPropBags);
		ULONG nPropBagCount = 0;
		__C(pPropertyBag2->GetPropertyInfo(0, nPropertyCount, pPropBags, &nPropBagCount));
		_Z4(atlTraceGeneral, 4, _T("nPropBagCount %d\n"), nPropBagCount);
		CRoListT<CComHeapPtr<OLECHAR>> NameList;
		for(ULONG nIndex = 0; nIndex < nPropBagCount; nIndex++)
			NameList.GetAt(NameList.AddTail()).Attach(pPropBags[nIndex].pstrName);
		CRoArrayT<CComVariantArray> ValueArray;
		__D(ValueArray.SetCount(nPropBagCount), E_OUTOFMEMORY);
		CTempBufferT<HRESULT> pnResults(nPropBagCount);
		__C(pPropertyBag2->Read(nPropBagCount, pPropBags, NULL, ValueArray.GetData(), pnResults));
		#pragma endregion 
		CRoMapT<CString, CComVariantArray> Map;
		CRoArrayT<CString> NameArray;
		for(ULONG nIndex = 0; nIndex < nPropBagCount; nIndex++)
			if(SUCCEEDED(pnResults[nIndex]))
			{
				CString sName(pPropBags[nIndex].pstrName);
				_Z4(atlTraceGeneral, 4, _T("sName \"%s\"\n"), sName);
				NameArray.Add(sName);
				_W(Map.SetAt(sName, ValueArray[nIndex]));
			}
		return GetPropertyBagText(NameArray, Map);
	}
	static CString GetPropertyBagText(CComVariantArray& vValue)
	{
		if(vValue.vt <= VT_NULL)
			return _T("");
		CRoArrayT<CComVariantArray> Array;
		vValue.ToElementArray(Array);
		CRoMapT<CString, CComVariantArray> Map;
		CRoArrayT<CString> NameArray;
		for(SIZE_T nIndex = 0; nIndex < Array.GetCount(); nIndex++)
		{
			CComVariantArray vPropertyName, vPropertyValue;
			Array[nIndex].ToElements(2, &vPropertyName, &vPropertyValue);
			__C(vPropertyName.ChangeType(VT_BSTR));
			CString sName(vPropertyName.bstrVal);
			_Z4(atlTraceGeneral, 4, _T("sName \"%s\"\n"), sName);
			NameArray.Add(sName);
			_W(Map.SetAt(sName, vPropertyValue));
		}
		return GetPropertyBagText(NameArray, Map);
	}
	static CString GetPropertyBagText(VARIANT vValue)
	{
		return GetPropertyBagText(reinterpret_cast<CComVariantArray&>(vValue));
	}
	__if_exists(ISpy)
	{
		static CString GetPropertyBagText(IRunPropertyBagAware* pRunPropertyBagAware, ISpy* pSpy = NULL)
		{
			if(!pRunPropertyBagAware)
				return _T("");
			return GetPropertyBagText(ReadRunPropertyBag(pRunPropertyBagAware));
		}
		static CString GetPropertyBagText(IUnknown* pBaseFilterUnknown, ISpy* pSpy = NULL)
		{
			CComQIPtr<ISpy> pEffectiveSpy = pSpy;
			if(!pEffectiveSpy && pBaseFilterUnknown)
				pEffectiveSpy = _FilterGraphHelper::GetFilterGraph(CComQIPtr<IBaseFilter>(pBaseFilterUnknown));
			if(pEffectiveSpy && pBaseFilterUnknown)
			{
				CComVariantArray vValue;
				__C(pEffectiveSpy->ReadRunPropertyBag(pBaseFilterUnknown, ATL_VARIANT_TRUE, &vValue));
				return GetPropertyBagText(vValue);
			}
			const CComQIPtr<IRunPropertyBagAware> pRunPropertyBagAware = pBaseFilterUnknown;
			return GetPropertyBagText(pRunPropertyBagAware, pEffectiveSpy);
		}
		static CString GetPropertyBagText(IFilterGraph* pFilterGraph, ISpy* pSpy = NULL)
		{
			const CComQIPtr<IServiceProvider> pServiceProvider = pFilterGraph;
			if(pServiceProvider)
			{
				CComPtr<IRunPropertyBagAware> pRunPropertyBagAware;
				pServiceProvider->QueryService<IRunPropertyBagAware>(__uuidof(IRunPropertyBagAware), &pRunPropertyBagAware);
				if(pRunPropertyBagAware)
					return GetPropertyBagText(pRunPropertyBagAware, pSpy);
			}
			return _T("");
		}
	}
};

#if !defined(DIRECTSHOWSPY)

////////////////////////////////////////////////////////////
// CRunPropertyBagAwareT

template <typename T>
class ATL_NO_VTABLE CRunPropertyBagAwareT :
	public IDispatchImpl<DIRECTSHOWSPY_NAMESPACE_PREFIX IRunPropertyBagAware, &__uuidof(DIRECTSHOWSPY_NAMESPACE_PREFIX IRunPropertyBagAware), &__uuidof(DIRECTSHOWSPY_NAMESPACE_PREFIX __AlaxInfoDirectShowSpy)>
{
public:
// CRunPropertyBagAwareT

// AlaxInfoDirectShowSpy::IRunPropertyBagAware
	STDMETHOD(get_Value)(IUnknown** ppPropertyBagUnknown)
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		_ATLTRY
		{
			__D(ppPropertyBagUnknown, E_POINTER);
			T* pT = static_cast<T*>(this);
			*ppPropertyBagUnknown = (IPropertyBag*) pT->CreatePerformancePropertyBag().Detach();
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
};

#endif // !defined(DIRECTSHOWSPY)
