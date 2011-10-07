////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2011
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#include "stdafx.h"
#define _USE_MATH_DEFINES
#include <math.h>
#include <mmsystem.h>

#pragma comment(lib, "winmm.lib")

CString g_sOptions;

VOID Check(MMRESULT nResult)
{
	if(nResult == MMSYSERR_NOERROR)
		return;
	_tprintf(_T("nResult %d\n"), nResult);
	AtlThrow(E_FAIL);
}

VOID Play(const WAVEFORMATEX& WaveFormatEx, UINT nFrequency)
{
	_ATLTRY
	{
		HWAVEOUT hWaveOut = NULL;
		if(g_sOptions.Find(_T("0")) >= 0)
			Check(waveOutOpen(&hWaveOut, 0, &WaveFormatEx, NULL, NULL, CALLBACK_NULL));
		else
			Check(waveOutOpen(&hWaveOut, WAVE_MAPPER, &WaveFormatEx, NULL, NULL, CALLBACK_NULL));
		ATLASSERT(hWaveOut);
		WAVEHDR* pWaveHeader;
		HGLOBAL hWaveHeader = (WAVEHDR*) GlobalAlloc(GMEM_MOVEABLE | GMEM_SHARE, sizeof *pWaveHeader + WaveFormatEx.nAvgBytesPerSec * 10);
		pWaveHeader = (WAVEHDR*) GlobalLock(hWaveHeader);
		ATLENSURE_THROW(pWaveHeader, E_OUTOFMEMORY);
		pWaveHeader->lpData = (LPSTR) (BYTE*) (pWaveHeader + 1);
		pWaveHeader->dwBufferLength = WaveFormatEx.nAvgBytesPerSec * 10;
		//pWaveHeader->dwUser = 
		pWaveHeader->dwFlags = 0;
		pWaveHeader->dwLoops = 0;
		#pragma region Generate Actual Data
		{
			SHORT* pnData = (SHORT*) pWaveHeader->lpData;
			SIZE_T nDataCount = pWaveHeader->dwBufferLength / sizeof *pnData;
			for(SIZE_T nIndex = 0; nIndex < nDataCount; nIndex++)
				pnData[nIndex] = (SHORT) (32000 * sin(1.0 * nIndex / WaveFormatEx.nSamplesPerSec * nFrequency * 2 * M_PI));
		}
		#pragma endregion 
	    Check(waveOutPrepareHeader(hWaveOut, pWaveHeader, sizeof *pWaveHeader)); 
		Check(waveOutWrite(hWaveOut, pWaveHeader, sizeof *pWaveHeader)); 
		GlobalUnlock(hWaveHeader);
		Sleep(INFINITE);
	}
	_ATLCATCHALL()
	{
		_tprintf(_T("Fatal error while trying to play waveform, nFrequency %d\n"), nFrequency);
	}
}

UINT STDMETHODCALLTYPE PlayA(VOID*)
{
	static const WAVEFORMATEX g_WaveFormatEx = 
	{
		WAVE_FORMAT_PCM,
		1, 
		22050,
		44100,
		2,
		16
	};
	Play(g_WaveFormatEx, 1000);
	return 0;
}

UINT STDMETHODCALLTYPE PlayB(VOID*)
{
	static const WAVEFORMATEX g_WaveFormatEx = 
	{
		WAVE_FORMAT_PCM,
		1, 
		32000,
		64000,
		2,
		16
	};
	Play(g_WaveFormatEx, 5000);
	return 0;
}

UINT STDMETHODCALLTYPE PlayC(VOID*)
{
	static const WAVEFORMATEX g_WaveFormatEx = 
	{
		WAVE_FORMAT_PCM,
		1, 
		44100,
		88200,
		2,
		16
	};
	Play(g_WaveFormatEx, 15000);
	return 0;
}

int _tmain(int argc, _TCHAR* argv[])
{
	if(argc <= 1)
	{
		_tprintf(_T("Syntax: WaveOutMultiPlay [a][b][c][0]\n"));
		_tprintf(_T("        Run 'WaveOutMultiPlay abc' to simultaneously play 1 kHz, 5 kHz and 15 kHz via default audio output device\n"));
		return 1;
	}
	g_sOptions = argv[1];
	if(g_sOptions.Find(_T('a')) >= 0)
		ATLVERIFY(_beginthreadex(NULL, 0, &PlayA, NULL, 0, NULL));
	if(g_sOptions.Find(_T('b')) >= 0)
		ATLVERIFY(_beginthreadex(NULL, 0, &PlayB, NULL, 0, NULL));
	if(g_sOptions.Find(_T('c')) >= 0)
		ATLVERIFY(_beginthreadex(NULL, 0, &PlayC, NULL, 0, NULL));
	Sleep(INFINITE);
	return 0;
}

