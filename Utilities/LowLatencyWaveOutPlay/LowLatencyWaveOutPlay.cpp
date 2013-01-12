////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2013
// Created by Roman Ryltsov roman@alax.info

#include "stdafx.h"
#define _USE_MATH_DEFINES
#include <math.h>
#include <mmsystem.h>

#pragma comment(lib, "winmm.lib")

WAVEFORMATEX g_WaveFormatEx;
SIZE_T g_nBufferCount;
ULONG g_nBufferLength;
ULONG g_nFrequency = 1000;
ULONG g_nSampleIndex = 0;
HANDLE g_hDoneEvent;
volatile LONG g_nDoneCount = 0;

VOID Check(MMRESULT nResult)
{
	if(nResult == MMSYSERR_NOERROR)
		return;
	_tprintf(_T("nResult %d\n"), nResult);
	AtlThrow(E_FAIL);
}
VOID Generate(WAVEHDR& WaveHeader)
{
	ATLASSERT(g_WaveFormatEx.nChannels == 1 && g_WaveFormatEx.wBitsPerSample == 16 && g_WaveFormatEx.nBlockAlign == 2);
	SHORT* pnData = (SHORT*) WaveHeader.lpData;
	SIZE_T nDataCount = WaveHeader.dwBufferLength / sizeof *pnData;
	for(SIZE_T nIndex = 0; nIndex < nDataCount; nIndex++)
		pnData[nIndex] = (SHORT) (32000 * sin(1.0 * (g_nSampleIndex + nIndex) / g_WaveFormatEx.nSamplesPerSec * g_nFrequency * 2 * M_PI));
	g_nSampleIndex += nDataCount;
}
VOID CALLBACK waveOutProc(HWAVEOUT hWaveOut, UINT nMessage, DWORD_PTR nInstance, DWORD_PTR nParameter1, DWORD_PTR nParameter2)
{
	switch(nMessage)
	{
	case WOM_DONE:
		{
			WAVEHDR* pWaveHeader = (WAVEHDR*) nParameter1;
			ATLASSERT(!nParameter2);
			ATLASSERT(pWaveHeader->dwFlags & WHDR_PREPARED);
			ATLASSERT(pWaveHeader->dwFlags & WHDR_DONE);
			InterlockedIncrement(&g_nDoneCount);
			ATLVERIFY(SetEvent(g_hDoneEvent));
		}
		break;
	}
}
int _tmain(int argc, _TCHAR* argv[])
{
	#if defined(_DEBUG)
		AtlTraceLoadSettings(NULL);
	#endif // defined(_DEBUG)
	if(argc <= 3)
	{
		_tprintf(_T("Syntax: LowLatencyWaveOutPlay <sampling-rate> <buffer-count> <buffer-length>\n"));
		_tprintf(_T("        Run 'LowLatencyWaveOutPlay 22050 8 5' to play 1000 Hz signal using 5 buffers, 8 ms long each via default audio output device (at 22050 Hz sampling rate)\n"));
		return 1;
	}
	ZeroMemory(&g_WaveFormatEx, sizeof g_WaveFormatEx);
    g_WaveFormatEx.wFormatTag = WAVE_FORMAT_PCM;
    g_WaveFormatEx.nChannels = 1;
    g_WaveFormatEx.nSamplesPerSec = _ttoi(argv[1]);;
    g_WaveFormatEx.wBitsPerSample = 16;
    g_WaveFormatEx.nBlockAlign = g_WaveFormatEx.nChannels * (g_WaveFormatEx.wBitsPerSample >> 3);
    g_WaveFormatEx.nAvgBytesPerSec = g_WaveFormatEx.nSamplesPerSec * g_WaveFormatEx.nBlockAlign;
	_tprintf(_T("Format: %d Hz, %d channels, %d bits per sample\n"), g_WaveFormatEx.nSamplesPerSec, g_WaveFormatEx.nChannels, g_WaveFormatEx.wBitsPerSample);
	g_nBufferCount = _ttoi(argv[2]);
	g_nBufferLength = _ttoi(argv[3]);
	HWAVEOUT hWaveOut = NULL;
	Check(waveOutOpen(&hWaveOut, WAVE_MAPPER, &g_WaveFormatEx, (DWORD_PTR) &waveOutProc, NULL, CALLBACK_FUNCTION));
	ATLASSERT(hWaveOut);
	#pragma region Allocate Buffers
	const SIZE_T nDataSize = (g_WaveFormatEx.nAvgBytesPerSec * g_nBufferLength / 1000) & ~(g_WaveFormatEx.nBlockAlign - 1);
	_tprintf(_T("Buffer Count: %d\n"), g_nBufferCount);
	_tprintf(_T("Buffer Length: %d ms (%d bytes)\n"), g_nBufferLength, nDataSize);
	_tprintf(_T("Signal Frequency: %d Hz\n"), g_nFrequency);
	CTempBuffer<HGLOBAL> phWaveHeaders(g_nBufferCount);
	CTempBuffer<WAVEHDR*> ppWaveHeaders(g_nBufferCount);
	for(SIZE_T nIndex = 0; nIndex < g_nBufferCount; nIndex++)
	{
		HGLOBAL& hWaveHeader = phWaveHeaders[nIndex];
		WAVEHDR*& pWaveHeader = ppWaveHeaders[nIndex];
		hWaveHeader = GlobalAlloc(GMEM_MOVEABLE | GMEM_SHARE, sizeof *pWaveHeader + nDataSize);
		pWaveHeader = (WAVEHDR*) GlobalLock(hWaveHeader);
		ATLENSURE_THROW(pWaveHeader, E_OUTOFMEMORY);
		pWaveHeader->lpData = (LPSTR) (BYTE*) (pWaveHeader + 1);
		pWaveHeader->dwBufferLength = (DWORD) nDataSize;
		//pWaveHeader->dwUser = 
		pWaveHeader->dwFlags = 0;
		pWaveHeader->dwLoops = 0;
		Check(waveOutPrepareHeader(hWaveOut, pWaveHeader, sizeof *pWaveHeader)); 
		ATLASSERT(pWaveHeader->dwFlags & WHDR_PREPARED);
		//GlobalUnlock(hWaveHeader);
	}
	#pragma endregion 
	SIZE_T nBufferIndex = 0;
	g_hDoneEvent = CreateEvent(NULL, FALSE, FALSE, NULL);
	g_nDoneCount = 0;
	for(SIZE_T nIndex = 0; nIndex < g_nBufferCount; nIndex++)
	{
		WAVEHDR* pWaveHeader = ppWaveHeaders[nIndex];
		Generate(*pWaveHeader);
		Check(waveOutWrite(hWaveOut, pWaveHeader, sizeof *pWaveHeader)); 
	}
	for(; ; )
	{
		ATLVERIFY(WaitForSingleObject(g_hDoneEvent, INFINITE) == WAIT_OBJECT_0);
		for(; ; )
		{
			const LONG nDoneCount = InterlockedDecrement(&g_nDoneCount);
			if(nDoneCount < 0)
				break;
			WAVEHDR* pWaveHeader = ppWaveHeaders[nBufferIndex];
			ATLTRACE(_T("nBufferIndex %d, pWaveHeader 0x%p, dwFlags 0x%x\n"), nBufferIndex, pWaveHeader, pWaveHeader->dwFlags);
			ATLASSERT(pWaveHeader->dwFlags & WHDR_PREPARED);
			ATLASSERT(pWaveHeader->dwFlags & WHDR_DONE);
			pWaveHeader->dwFlags &= ~WHDR_DONE;
			Generate(*pWaveHeader);
			Check(waveOutWrite(hWaveOut, pWaveHeader, sizeof *pWaveHeader)); 
			++nBufferIndex %= g_nBufferCount;
		}
		InterlockedIncrement(&g_nDoneCount);
	}
	return 0;
}

