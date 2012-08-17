////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2009
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#pragma once

#include <dshow.h>
#include <ks.h>
#include <ksmedia.h>
#include <bdatypes.h>
#include <bdamedia.h>
#include <bdatif.h>
#include <mpeg2data.h>
#include "rodshow.h"
#include "..\DirectShowSpy_i.h"

inline VOID TraceLocator(ILocator* pLocator)
{
	_A(pLocator);
	LONG nCarrierFrequency;
	if(SUCCEEDED(pLocator->get_CarrierFrequency(&nCarrierFrequency)))
		_Z2(atlTraceGeneral, 2, _T("nCarrierFrequency %d\n"), nCarrierFrequency);
	FECMethod InnerFec;
	if(SUCCEEDED(pLocator->get_InnerFEC(&InnerFec)))
		_Z2(atlTraceGeneral, 2, _T("InnerFec %d\n"), InnerFec);
	BinaryConvolutionCodeRate InnerFecRate;
	if(SUCCEEDED(pLocator->get_InnerFECRate(&InnerFecRate)))
		_Z2(atlTraceGeneral, 2, _T("InnerFecRate %d\n"), InnerFecRate);
	FECMethod OuterFec;
	if(SUCCEEDED(pLocator->get_OuterFEC(&OuterFec)))
		_Z2(atlTraceGeneral, 2, _T("OuterFec %d\n"), OuterFec);
	BinaryConvolutionCodeRate OuterFecRate;
	if(SUCCEEDED(pLocator->get_OuterFECRate(&OuterFecRate)))
		_Z2(atlTraceGeneral, 2, _T("OuterFecRate %d\n"), OuterFecRate);
	ModulationType Modulation;
	if(SUCCEEDED(pLocator->get_Modulation(&Modulation)))
		_Z2(atlTraceGeneral, 2, _T("Modulation %d\n"), Modulation);
	LONG nSymbolRate;
	if(SUCCEEDED(pLocator->get_SymbolRate(&nSymbolRate)))
		_Z2(atlTraceGeneral, 2, _T("nSymbolRate %d\n"), nSymbolRate);
}

inline VOID TraceTuningSpace(ITuningSpace* pTuningSpace)
{
	_A(pTuningSpace);
	CComBSTR sUniqueName;
	if(SUCCEEDED(pTuningSpace->get_UniqueName(&sUniqueName)))
		_Z2(atlTraceGeneral, 2, _T("sUniqueName %ls\n"), sUniqueName);
	CComBSTR sFriendlyName;
	if(SUCCEEDED(pTuningSpace->get_FriendlyName(&sFriendlyName)))
		_Z2(atlTraceGeneral, 2, _T("sFriendlyName %ls\n"), sFriendlyName);
	CComBSTR sClassIdentifier;
	if(SUCCEEDED(pTuningSpace->get_CLSID(&sClassIdentifier)))
		_Z2(atlTraceGeneral, 2, _T("CLSID %ls\n"), sClassIdentifier);
	CComBSTR sNetworkType;
	if(SUCCEEDED(pTuningSpace->get_NetworkType(&sNetworkType)))
		_Z2(atlTraceGeneral, 2, _T("sNetworkType %ls\n"), sNetworkType);
	//pTuningSpace->EnumCategoryGUIDs
	//pTuningSpace->EnumDeviceMonikers
	//pTuningSpace->get_DefaultPreferredComponentTypes
	CComBSTR sFrequencyMapping;
	if(SUCCEEDED(pTuningSpace->get_FrequencyMapping(&sFrequencyMapping)))
		_Z2(atlTraceGeneral, 2, _T("sFrequencyMapping %ls\n"), sFrequencyMapping);
	CComPtr<ILocator> pDefaultLocator;
    if(SUCCEEDED(pTuningSpace->get_DefaultLocator(&pDefaultLocator)))
	{
		_Z2(atlTraceGeneral, 2, _T("pDefaultLocator %ls\n"), pDefaultLocator);
		if(pDefaultLocator)
			TraceLocator(pDefaultLocator);
	}
}

inline VOID TraceScanningTuner(IScanningTuner* pScanningTuner)
{
	_A(pScanningTuner);
	CComPtr<ITuningSpace> pTuningSpace;
	const HRESULT nGetTuningSpaceResult = pScanningTuner->get_TuningSpace(&pTuningSpace);
	if(SUCCEEDED(nGetTuningSpaceResult))
		TraceTuningSpace(pTuningSpace);
	else
		_Z2(atlTraceGeneral, 2, _T("nGetTuningSpaceResult 0x%08x\n"), nGetTuningSpaceResult);
	CComPtr<ITuneRequest> pTuneRequest;
	const HRESULT nGetTuneRequestResult = pScanningTuner->get_TuneRequest(&pTuneRequest);
	if(SUCCEEDED(nGetTuneRequestResult))
	{
		CComPtr<ITuningSpace> pTuningSpace;
		const HRESULT nGetTuningSpaceResult = pTuneRequest->get_TuningSpace(&pTuningSpace);
		if(SUCCEEDED(nGetTuningSpaceResult))
			TraceTuningSpace(pTuningSpace);
		else
			_Z2(atlTraceGeneral, 2, _T("nGetTuningSpaceResult 0x%08x\n"), nGetTuningSpaceResult);
		//pTuneRequest->get_Components(
		CComPtr<ILocator> pLocator;
		const HRESULT nGetLocatorResult = pTuneRequest->get_Locator(&pLocator);
		if(SUCCEEDED(nGetLocatorResult))
			TraceLocator(pLocator);
		else
			_Z2(atlTraceGeneral, 2, _T("nGetLocatorResult 0x%08x\n"), nGetLocatorResult);
		// ...
	} else
		_Z2(atlTraceGeneral, 2, _T("nGetTuneRequestResult 0x%08x\n"), nGetTuneRequestResult);
	// ...
	//pScanningTuner->get_PreferredComponentTypes( 
	//pScanningTuner->get_SignalStrength( 
}
