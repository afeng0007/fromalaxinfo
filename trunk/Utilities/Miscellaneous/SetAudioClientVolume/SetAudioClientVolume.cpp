////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2012
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#include "stdafx.h"

#define _USE_MATH_DEFINES
#include <math.h>
#include <mmdeviceapi.h>
#include <audioclient.h>

#define _A	ATLASSERT
#define __C ATLENSURE_SUCCEEDED
#define __D ATLENSURE_THROW

int _tmain(int argc, _TCHAR* argv[])
{
	__C(CoInitialize(NULL));
	CComPtr<IMMDeviceEnumerator> pMmDeviceEnumerator;
	__C(pMmDeviceEnumerator.CoCreateInstance(__uuidof(MMDeviceEnumerator)));
	CComPtr<IMMDevice> pMmDevice;
	__C(pMmDeviceEnumerator->GetDefaultAudioEndpoint(eRender, eMultimedia, &pMmDevice));
	CComPtr<IAudioClient> pAudioClient;
	__C(pMmDevice->Activate(__uuidof(IAudioClient), CLSCTX_ALL, NULL, (VOID**) &pAudioClient));
	CComHeapPtr<WAVEFORMATEX> pWaveFormatEx;
	__C(pAudioClient->GetMixFormat(&pWaveFormatEx));
	static const REFERENCE_TIME g_nBufferTime = 60 * 1000 * 10000i64; // 1 minute
	__C(pAudioClient->Initialize(AUDCLNT_SHAREMODE_SHARED, 0, g_nBufferTime, 0, pWaveFormatEx, NULL));
	#pragma region Data
	CComPtr<IAudioRenderClient> pAudioRenderClient;
	__C(pAudioClient->GetService(__uuidof(IAudioRenderClient), (VOID**) &pAudioRenderClient));
	UINT32 nSampleCount = (UINT32) (g_nBufferTime / (1000 * 10000i64) * pWaveFormatEx->nSamplesPerSec) / 2;
	_A(pWaveFormatEx->wFormatTag == WAVE_FORMAT_EXTENSIBLE);
	const WAVEFORMATEXTENSIBLE* pWaveFormatExtensible = (const WAVEFORMATEXTENSIBLE*) (const WAVEFORMATEX*) pWaveFormatEx;
	_A(pWaveFormatExtensible->SubFormat == KSDATAFORMAT_SUBTYPE_IEEE_FLOAT);
	// ASSU: Mixing format is IEEE Float PCM
	BYTE* pnData = NULL;
	__C(pAudioRenderClient->GetBuffer(nSampleCount, &pnData));
	FLOAT* pfFloatData = (FLOAT*) pnData;
	for(UINT32 nSampleIndex = 0; nSampleIndex < nSampleCount; nSampleIndex++)
		for(WORD nChannelIndex = 0; nChannelIndex < pWaveFormatEx->nChannels; nChannelIndex++)
			pfFloatData[nSampleIndex * pWaveFormatEx->nChannels + nChannelIndex] = sin(1000.0f * nSampleIndex / pWaveFormatEx->nSamplesPerSec * 2 * M_PI);
	__C(pAudioRenderClient->ReleaseBuffer(nSampleCount, 0));
	#pragma endregion
	CComPtr<ISimpleAudioVolume> pSimpleAudioVolume;
	__C(pAudioClient->GetService(__uuidof(ISimpleAudioVolume), (VOID**) &pSimpleAudioVolume));
	__C(pSimpleAudioVolume->SetMasterVolume(0.50f, NULL));
	_tprintf(_T("Playing Loud\n"));
	__C(pAudioClient->Start());
	Sleep(5 * 1000);
	_tprintf(_T("Playing Quiet\n"));
	__C(pSimpleAudioVolume->SetMasterVolume(0.10f, NULL));
	Sleep(15 * 1000);
	// NOTE: We don't care for termination crash
	return 0;
}

