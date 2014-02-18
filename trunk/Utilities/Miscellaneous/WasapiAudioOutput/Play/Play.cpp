////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2014
// Created by Roman Ryltsov roman@alax.info, http://alax.info

#include "stdafx.h"
#include <mmdeviceapi.h>
#include <audioclient.h>

int _tmain(int argc, _TCHAR* argv[])
{
	CoInitialize(NULL);
	{
		CComPtr<IMMDeviceEnumerator> pMmDeviceEnumerator;
		ATLENSURE_SUCCEEDED(pMmDeviceEnumerator.CoCreateInstance(__uuidof(MMDeviceEnumerator)));
		CComPtr<IMMDevice> pMmDevice;
		ATLENSURE_SUCCEEDED(pMmDeviceEnumerator->GetDefaultAudioEndpoint(eRender, eMultimedia, &pMmDevice));
		CComPtr<IAudioClient> pAudioClient;
		ATLENSURE_SUCCEEDED(pMmDevice->Activate(__uuidof(IAudioClient), CLSCTX_ALL, NULL, (VOID**) &pAudioClient));
		CComHeapPtr<WAVEFORMATEX> pWaveFormatEx;
		ATLENSURE_SUCCEEDED(pAudioClient->GetMixFormat(&pWaveFormatEx));
		static const ULONG g_nDuration = 5000; // 5 seconds
		ATLENSURE_SUCCEEDED(pAudioClient->Initialize(AUDCLNT_SHAREMODE_SHARED, 0, (g_nDuration + (g_nDuration >> 16)) * 10000i64, 0, pWaveFormatEx, NULL));
		CComPtr<IAudioRenderClient> pAudioRenderClient;
		ATLENSURE_SUCCEEDED(pAudioClient->GetService(__uuidof(IAudioRenderClient), (VOID**) &pAudioRenderClient));
		ATLASSERT(pWaveFormatEx->wFormatTag == WAVE_FORMAT_EXTENSIBLE);
		ATLASSERT(pWaveFormatEx->wBitsPerSample == 32);
		UINT32 nSampleCount = g_nDuration * pWaveFormatEx->nSamplesPerSec / 1000;
		BYTE* pnData;
		ATLENSURE_SUCCEEDED(pAudioRenderClient->GetBuffer(nSampleCount, &pnData));
		ZeroMemory(pnData, pWaveFormatEx->nAvgBytesPerSec);
		static const FLOAT g_pfValues[] = { 0, -0.05f, 0, +0.05f };
		for(SIZE_T nSampleIndex = nSampleCount; nSampleIndex > 0; nSampleIndex--)
			((FLOAT*) pnData)[(nSampleIndex - 1) * pWaveFormatEx->nChannels] = g_pfValues[nSampleIndex % _countof(g_pfValues)];
		ATLENSURE_SUCCEEDED(pAudioRenderClient->ReleaseBuffer(nSampleCount, 0));
		ATLENSURE_SUCCEEDED(pAudioClient->Start());
		Sleep(g_nDuration);
	}
	CoUninitialize();
	return 0;
}

