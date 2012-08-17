////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2009
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#pragma once

#include "Common.h"
#include "BdaHooks_i.h"

////////////////////////////////////////////////////////////
// CStateControlHook

class ATL_NO_VTABLE CStateControlHook :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CStateControlHook, &CLSID_StateControlHook>,
	public IDispatchImpl<IStateControlHook>,
	public IFilterGraphStateControlHook
{
public:
	enum { IDR = IDR_STATECONTROLHOOK };

//DECLARE_REGISTRY_RESOURCEID(IDR)

DECLARE_PROTECT_FINAL_CONSTRUCT()

//DECLARE_GET_CONTROLLING_UNKNOWN()

//DECLARE_QI_TRACE(CStateControlHook)

BEGIN_COM_MAP(CStateControlHook)
	COM_INTERFACE_ENTRY(IStateControlHook)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(IFilterGraphStateControlHook)
END_COM_MAP()

public:
// CStateControlHook
	static CString GetObjectFriendlyName()
	{
		return _StringHelper::GetLine(IDR, 2);
	}
	static HRESULT WINAPI UpdateRegistry(BOOL bRegister) throw()
	{
		_Z2(atlTraceRegistrar, 2, _T("bRegister %d\n"), bRegister);
		_ATLTRY
		{
			UpdateRegistryFromResource<CStateControlHook>(bRegister);
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
	CStateControlHook() throw()
	{
		_Z4(atlTraceRefcount, 4, _T("this 0x%08x\n"), this);
	}
	~CStateControlHook() throw()
	{
		_Z4(atlTraceRefcount, 4, _T("this 0x%08x\n"), this);
	}

// IStateControlHook

// IFilterGraphStateControlHook
	STDMETHOD(OnRun)(ISpy* pSpy, BOOL* pbDefault) throw()
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		_ATLTRY
		{
			CAtlArray<CComPtr<IBaseFilter> > BaseFilterArray;
			_FilterGraphHelper::GetGraphFilters(CComQIPtr<IGraphBuilder>(pSpy), BaseFilterArray);
			for(SIZE_T nFilterIndex = 0; nFilterIndex < BaseFilterArray.GetCount(); nFilterIndex++)
			{
				const CComPtr<IBaseFilter>& pBaseFilter = BaseFilterArray[nFilterIndex];
				CComQIPtr<IMpeg2Demultiplexer> pMpeg2Demultiplexer = pBaseFilter;
				if(!pMpeg2Demultiplexer)
					continue;
				_FilterGraphHelper::CPinArray OutputPinArray;
				_FilterGraphHelper::GetFilterPins(pBaseFilter, OutputPinArray);
				for(SIZE_T nPinIndex = 0; nPinIndex < OutputPinArray.GetCount(); nPinIndex++)
				{
					const CComPtr<IPin> pPin = OutputPinArray[nPinIndex];
					_Z4(atlTraceGeneral, 4, _T("nPinIndex %d, pPin %ls\n"), nPinIndex, _FilterGraphHelper::GetPinFullName(pPin));
					CComQIPtr<IMPEG2PIDMap> pMpeg2PidMap = pPin;
					if(pMpeg2PidMap)
					{
						CComPtr<IEnumPIDMap> pEnumPidMap;
						__C(pMpeg2PidMap->EnumPIDMap(&pEnumPidMap));
						PID_MAP PidMap;
						while(pEnumPidMap->Next(1, &PidMap, NULL) == S_OK)
							_Z4(atlTraceGeneral, 4, _T("PidMap { ulPID %d, PidMap.MediaSampleContent %d }\n"), PidMap.ulPID, PidMap.MediaSampleContent);
					}
					CComQIPtr<IMPEG2StreamIdMap> pMpeg2StreamIdMap = pPin;
					if(pMpeg2StreamIdMap)
					{
						CComPtr<IEnumStreamIdMap> pEnumStreamIdMap;
						__C(pMpeg2StreamIdMap->EnumStreamIdMap(&pEnumStreamIdMap));
						STREAM_ID_MAP StreamIdMap;
						while(pEnumStreamIdMap->Next(1, &StreamIdMap, NULL) == S_OK)
							_Z4(atlTraceGeneral, 4, _T("StreamIdMap { stream_id %d, StreamIdMap.dwMediaSampleContent %d, StreamIdMap.ulSubstreamFilterValue %d, iDataOffset %d }\n"), StreamIdMap.stream_id, StreamIdMap.dwMediaSampleContent, StreamIdMap.ulSubstreamFilterValue, StreamIdMap.iDataOffset);
					}
				}
			}
		}
		_ATLCATCH(Exception)
		{
			_C(Exception);
		}
		return S_OK;
	}
	STDMETHOD(OnPause)(ISpy* pSpy, BOOL* pbDefault) throw()
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		return S_OK;
	}
	STDMETHOD(OnStop)(ISpy* pSpy, BOOL* pbDefault) throw()
	{
		_Z4(atlTraceCOM, 4, _T("...\n"));
		return S_OK;
	}
};

OBJECT_ENTRY_AUTO(__uuidof(StateControlHook), CStateControlHook)