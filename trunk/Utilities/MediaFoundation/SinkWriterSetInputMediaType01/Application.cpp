#include "stdafx.h"

#include <codecapi.h>
#include <mfapi.h>
#include <mfidl.h>
#include <mfreadwrite.h>

#pragma comment(lib, "mfuuid.lib")
#pragma comment(lib, "mfplat.lib")
#pragma comment(lib, "mfreadwrite.lib")

#define __C ATLENSURE_SUCCEEDED

int _tmain(int argc, _TCHAR* argv[])
{
	__C(CoInitialize(NULL));
    __C(MFStartup(MF_VERSION, MFSTARTUP_FULL));
	{
		// NOTE: Tutorial: Using the Sink Writer to Encode Video https://msdn.microsoft.com/en-us/library/windows/desktop/ff819477

		LPCWSTR pszPath = L"D:\\Temp.mp4";

		// NOTE: MFCreateSinkWriterFromURL function https://msdn.microsoft.com/en-us/library/windows/desktop/dd388105
		CComPtr<IMFSinkWriter> pSinkWriter;
		__C(MFCreateSinkWriterFromURL(pszPath, NULL, NULL, &pSinkWriter));

		const UINT32 nFrameWidth = 320;
		const UINT32 nFrameHeight = 240;
		const UINT32 nFrameRateNumerator = 30;
		const UINT32 nFrameRateDenominator = 1;

		// NOTE: H.264 Video Encoder https://msdn.microsoft.com/en-us/library/windows/desktop/dd797816
		CComPtr<IMFMediaType> pMediaTypeOut;
		__C(MFCreateMediaType(&pMediaTypeOut));
		__C(pMediaTypeOut->SetGUID(MF_MT_MAJOR_TYPE, MFMediaType_Video)); 
		__C(pMediaTypeOut->SetGUID(MF_MT_SUBTYPE, MFVideoFormat_H264));
		__C(pMediaTypeOut->SetUINT32(MF_MT_AVG_BITRATE, 800000));
		__C(pMediaTypeOut->SetUINT32(MF_MT_INTERLACE_MODE, MFVideoInterlace_Progressive)); 
		__C(MFSetAttributeSize(pMediaTypeOut, MF_MT_FRAME_SIZE, nFrameWidth, nFrameHeight)); 
		__C(MFSetAttributeRatio(pMediaTypeOut, MF_MT_FRAME_RATE, nFrameRateNumerator, nFrameRateDenominator));
		__C(MFSetAttributeRatio(pMediaTypeOut, MF_MT_PIXEL_ASPECT_RATIO, 1, 1));
		__C(pMediaTypeOut->SetUINT32(MF_MT_MPEG2_PROFILE, eAVEncH264VProfile_Main));

		DWORD streamIndex;  
		__C(pSinkWriter->AddStream(pMediaTypeOut, &streamIndex));

		//const GUID Subtype = MFVideoFormat_RGB32;
		const GUID Subtype = MFVideoFormat_YUY2;

		CComPtr<IMFMediaType> pMediaTypeIn;
		__C(MFCreateMediaType(&pMediaTypeIn)); 
		__C(pMediaTypeIn->SetGUID(MF_MT_MAJOR_TYPE, MFMediaType_Video));   
		__C(pMediaTypeIn->SetGUID(MF_MT_SUBTYPE, Subtype));
		__C(pMediaTypeIn->SetUINT32(MF_MT_INTERLACE_MODE, MFVideoInterlace_Progressive));   
		__C(pMediaTypeIn->SetUINT32(MF_MT_DEFAULT_STRIDE, 2 * nFrameWidth));   
		UINT32 nSampleSize = 0;
		__C(MFCalculateImageSize(Subtype, nFrameWidth, nFrameHeight, &nSampleSize));
		__C(pMediaTypeIn->SetUINT32(MF_MT_SAMPLE_SIZE, nSampleSize));
		__C(pMediaTypeIn->SetUINT32(MF_MT_FIXED_SIZE_SAMPLES, TRUE));
		__C(pMediaTypeIn->SetUINT32(MF_MT_ALL_SAMPLES_INDEPENDENT, TRUE));
		__C(MFSetAttributeSize(pMediaTypeIn, MF_MT_FRAME_SIZE, nFrameWidth, nFrameHeight));   
		__C(MFSetAttributeRatio(pMediaTypeIn, MF_MT_FRAME_RATE, nFrameRateNumerator, nFrameRateDenominator)); 
		__C(MFSetAttributeRatio(pMediaTypeIn, MF_MT_PIXEL_ASPECT_RATIO, 1, 1));   

		__C(pSinkWriter->SetInputMediaType(streamIndex, pMediaTypeIn, NULL));   
		__C(pSinkWriter->BeginWriting());
	}
	return 0;
}

