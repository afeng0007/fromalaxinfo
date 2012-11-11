////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2012
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#include "stdafx.h"
#include <atlimage.h>
//#include "resource.h"
#include "rofiles.h"

///////////////////////////////////////////////////////////
// CModule

class CModule : 
	public CAtlExeModuleT<CModule>//,
	//public CWtlExeModuleT<CModule>
{
public:

	////////////////////////////////////////////////////////
	// CGdiPlusInitialization

	class CGdiPlusInitialization
	{
	private:
		ULONG_PTR m_nToken;

	public:
	// CGdiPlusInitialization
		CGdiPlusInitialization() :
			m_nToken(0)
		{
			Gdiplus::GdiplusStartupInput Input;
			Gdiplus::GdiplusStartupOutput Output;
			__D(Gdiplus::GdiplusStartup(&m_nToken, &Input, &Output) == Gdiplus::Ok, E_UNNAMED);
			_A(m_nToken);
		}
		~CGdiPlusInitialization()
		{
			if(m_nToken)
			{
				Gdiplus::GdiplusShutdown(m_nToken);
				m_nToken = 0;
			}
		}
	};

private:
	CPath m_sSourcePath;
	CPath m_sDestinationPath;

public:
// CModule
	CModule() throw()
	{
		AtlTraceSetDefaultSettings();
		_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
		_W(CExceptionFilter::Initialize());
	}
	~CModule() throw()
	{
		_Z4(atlTraceRefcount, 4, _T("this 0x%p\n"), this);
		CExceptionFilter::Terminate();
	}
	const CPath& GetSourcePath() const
	{
		return m_sSourcePath;
	}
	VOID SetSourcePath(LPCTSTR pszSourcePath)
	{
		m_sSourcePath = pszSourcePath;
	}
	const CPath& GetDestinationPath() const
	{
		return m_sDestinationPath;
	}
	VOID SetDestinationPath(LPCTSTR pszDestinationPath)
	{
		m_sDestinationPath = pszDestinationPath;
	}
	static LPCSTR StringFromPropertyTag(UINT nPropertyTag)
	{
		static const struct { UINT nPropertyTag; LPCSTR pszName; } g_pMap[] =
		{
			#define A(x) { x, #x },
			A(PropertyTagTypeByte)
			A(PropertyTagTypeASCII)
			A(PropertyTagTypeShort)
			A(PropertyTagTypeLong)
			A(PropertyTagTypeRational)
			A(PropertyTagTypeUndefined)
			A(PropertyTagTypeSLONG)
			A(PropertyTagTypeSRational)
			A(PropertyTagExifIFD)
			A(PropertyTagGpsIFD)
			A(PropertyTagNewSubfileType)
			A(PropertyTagSubfileType)
			A(PropertyTagImageWidth)
			A(PropertyTagImageHeight)
			A(PropertyTagBitsPerSample)
			A(PropertyTagCompression)
			A(PropertyTagPhotometricInterp)
			A(PropertyTagThreshHolding)
			A(PropertyTagCellWidth)
			A(PropertyTagCellHeight)
			A(PropertyTagFillOrder)
			A(PropertyTagDocumentName)
			A(PropertyTagImageDescription)
			A(PropertyTagEquipMake)
			A(PropertyTagEquipModel)
			A(PropertyTagStripOffsets)
			A(PropertyTagOrientation)
			A(PropertyTagSamplesPerPixel)
			A(PropertyTagRowsPerStrip)
			A(PropertyTagStripBytesCount)
			A(PropertyTagMinSampleValue)
			A(PropertyTagMaxSampleValue)
			A(PropertyTagXResolution)
			A(PropertyTagYResolution)
			A(PropertyTagPlanarConfig)
			A(PropertyTagPageName)
			A(PropertyTagXPosition)
			A(PropertyTagYPosition)
			A(PropertyTagFreeOffset)
			A(PropertyTagFreeByteCounts)
			A(PropertyTagGrayResponseUnit)
			A(PropertyTagGrayResponseCurve)
			A(PropertyTagT4Option)
			A(PropertyTagT6Option)
			A(PropertyTagResolutionUnit)
			A(PropertyTagPageNumber)
			A(PropertyTagTransferFuncition)
			A(PropertyTagSoftwareUsed)
			A(PropertyTagDateTime)
			A(PropertyTagArtist)
			A(PropertyTagHostComputer)
			A(PropertyTagPredictor)
			A(PropertyTagWhitePoint)
			A(PropertyTagPrimaryChromaticities)
			A(PropertyTagColorMap)
			A(PropertyTagHalftoneHints)
			A(PropertyTagTileWidth)
			A(PropertyTagTileLength)
			A(PropertyTagTileOffset)
			A(PropertyTagTileByteCounts)
			A(PropertyTagInkSet)
			A(PropertyTagInkNames)
			A(PropertyTagNumberOfInks)
			A(PropertyTagDotRange)
			A(PropertyTagTargetPrinter)
			A(PropertyTagExtraSamples)
			A(PropertyTagSampleFormat)
			A(PropertyTagSMinSampleValue)
			A(PropertyTagSMaxSampleValue)
			A(PropertyTagTransferRange)
			A(PropertyTagJPEGProc)
			A(PropertyTagJPEGInterFormat)
			A(PropertyTagJPEGInterLength)
			A(PropertyTagJPEGRestartInterval)
			A(PropertyTagJPEGLosslessPredictors)
			A(PropertyTagJPEGPointTransforms)
			A(PropertyTagJPEGQTables)
			A(PropertyTagJPEGDCTables)
			A(PropertyTagJPEGACTables)
			A(PropertyTagYCbCrCoefficients)
			A(PropertyTagYCbCrSubsampling)
			A(PropertyTagYCbCrPositioning)
			A(PropertyTagREFBlackWhite)
			A(PropertyTagICCProfile)
			A(PropertyTagGamma)
			A(PropertyTagICCProfileDescriptor)
			A(PropertyTagSRGBRenderingIntent)
			A(PropertyTagImageTitle)
			A(PropertyTagCopyright)
			A(PropertyTagResolutionXUnit)
			A(PropertyTagResolutionYUnit)
			A(PropertyTagResolutionXLengthUnit)
			A(PropertyTagResolutionYLengthUnit)
			A(PropertyTagPrintFlags)
			A(PropertyTagPrintFlagsVersion)
			A(PropertyTagPrintFlagsCrop)
			A(PropertyTagPrintFlagsBleedWidth)
			A(PropertyTagPrintFlagsBleedWidthScale)
			A(PropertyTagHalftoneLPI)
			A(PropertyTagHalftoneLPIUnit)
			A(PropertyTagHalftoneDegree)
			A(PropertyTagHalftoneShape)
			A(PropertyTagHalftoneMisc)
			A(PropertyTagHalftoneScreen)
			A(PropertyTagJPEGQuality)
			A(PropertyTagGridSize)
			A(PropertyTagThumbnailFormat)
			A(PropertyTagThumbnailWidth)
			A(PropertyTagThumbnailHeight)
			A(PropertyTagThumbnailColorDepth)
			A(PropertyTagThumbnailPlanes)
			A(PropertyTagThumbnailRawBytes)
			A(PropertyTagThumbnailSize)
			A(PropertyTagThumbnailCompressedSize)
			A(PropertyTagColorTransferFunction)
			A(PropertyTagThumbnailData)
			A(PropertyTagThumbnailImageWidth)
			A(PropertyTagThumbnailImageHeight)
			A(PropertyTagThumbnailBitsPerSample)
			A(PropertyTagThumbnailCompression)
			A(PropertyTagThumbnailPhotometricInterp)
			A(PropertyTagThumbnailImageDescription)
			A(PropertyTagThumbnailEquipMake)
			A(PropertyTagThumbnailEquipModel)
			A(PropertyTagThumbnailStripOffsets)
			A(PropertyTagThumbnailOrientation)
			A(PropertyTagThumbnailSamplesPerPixel)
			A(PropertyTagThumbnailRowsPerStrip)
			A(PropertyTagThumbnailStripBytesCount)
			A(PropertyTagThumbnailResolutionX)
			A(PropertyTagThumbnailResolutionY)
			A(PropertyTagThumbnailPlanarConfig)
			A(PropertyTagThumbnailResolutionUnit)
			A(PropertyTagThumbnailTransferFunction)
			A(PropertyTagThumbnailSoftwareUsed)
			A(PropertyTagThumbnailDateTime)
			A(PropertyTagThumbnailArtist)
			A(PropertyTagThumbnailWhitePoint)
			A(PropertyTagThumbnailPrimaryChromaticities)
			A(PropertyTagThumbnailYCbCrCoefficients)
			A(PropertyTagThumbnailYCbCrSubsampling)
			A(PropertyTagThumbnailYCbCrPositioning)
			A(PropertyTagThumbnailRefBlackWhite)
			A(PropertyTagThumbnailCopyRight)
			A(PropertyTagLuminanceTable)
			A(PropertyTagChrominanceTable)
			A(PropertyTagFrameDelay)
			A(PropertyTagLoopCount)
			//A(PropertyTagGlobalPalette)
			//A(PropertyTagIndexBackground)
			//A(PropertyTagIndexTransparent)
			A(PropertyTagPixelUnit)
			A(PropertyTagPixelPerUnitX)
			A(PropertyTagPixelPerUnitY)
			A(PropertyTagPaletteHistogram)
			A(PropertyTagExifExposureTime)
			A(PropertyTagExifFNumber)
			A(PropertyTagExifExposureProg)
			A(PropertyTagExifSpectralSense)
			A(PropertyTagExifISOSpeed)
			A(PropertyTagExifOECF)
			A(PropertyTagExifVer)
			A(PropertyTagExifDTOrig)
			A(PropertyTagExifDTDigitized)
			A(PropertyTagExifCompConfig)
			A(PropertyTagExifCompBPP)
			A(PropertyTagExifShutterSpeed)
			A(PropertyTagExifAperture)
			A(PropertyTagExifBrightness)
			A(PropertyTagExifExposureBias)
			A(PropertyTagExifMaxAperture)
			A(PropertyTagExifSubjectDist)
			A(PropertyTagExifMeteringMode)
			A(PropertyTagExifLightSource)
			A(PropertyTagExifFlash)
			A(PropertyTagExifFocalLength)
			A(PropertyTagExifSubjectArea)
			A(PropertyTagExifMakerNote)
			A(PropertyTagExifUserComment)
			A(PropertyTagExifDTSubsec)
			A(PropertyTagExifDTOrigSS)
			A(PropertyTagExifDTDigSS)
			A(PropertyTagExifFPXVer)
			A(PropertyTagExifColorSpace)
			A(PropertyTagExifPixXDim)
			A(PropertyTagExifPixYDim)
			A(PropertyTagExifRelatedWav)
			A(PropertyTagExifInterop)
			A(PropertyTagExifFlashEnergy)
			A(PropertyTagExifSpatialFR)
			A(PropertyTagExifFocalXRes)
			A(PropertyTagExifFocalYRes)
			A(PropertyTagExifFocalResUnit)
			A(PropertyTagExifSubjectLoc)
			A(PropertyTagExifExposureIndex)
			A(PropertyTagExifSensingMethod)
			A(PropertyTagExifFileSource)
			A(PropertyTagExifSceneType)
			A(PropertyTagExifCfaPattern)
			A(PropertyTagExifCustomRendered)
			A(PropertyTagExifExposureMode)
			A(PropertyTagExifWhiteBalance)
			A(PropertyTagExifDigitalZoomRatio)
			A(PropertyTagExifFocalLengthIn35mmFilm)
			A(PropertyTagExifSceneCaptureType)
			A(PropertyTagExifGainControl)
			A(PropertyTagExifContrast)
			A(PropertyTagExifSaturation)
			A(PropertyTagExifSharpness)
			A(PropertyTagExifDeviceSettingDesc)
			A(PropertyTagExifSubjectDistanceRange)
			A(PropertyTagExifUniqueImageID)
			A(PropertyTagGpsVer)
			A(PropertyTagGpsLatitudeRef)
			A(PropertyTagGpsLatitude)
			A(PropertyTagGpsLongitudeRef)
			A(PropertyTagGpsLongitude)
			A(PropertyTagGpsAltitudeRef)
			A(PropertyTagGpsAltitude)
			A(PropertyTagGpsGpsTime)
			A(PropertyTagGpsGpsSatellites)
			A(PropertyTagGpsGpsStatus)
			A(PropertyTagGpsGpsMeasureMode)
			A(PropertyTagGpsGpsDop)
			A(PropertyTagGpsSpeedRef)
			A(PropertyTagGpsSpeed)
			A(PropertyTagGpsTrackRef)
			A(PropertyTagGpsTrack)
			A(PropertyTagGpsImgDirRef)
			A(PropertyTagGpsImgDir)
			A(PropertyTagGpsMapDatum)
			A(PropertyTagGpsDestLatRef)
			A(PropertyTagGpsDestLat)
			A(PropertyTagGpsDestLongRef)
			A(PropertyTagGpsDestLong)
			A(PropertyTagGpsDestBearRef)
			A(PropertyTagGpsDestBear)
			A(PropertyTagGpsDestDistRef)
			A(PropertyTagGpsDestDist)
			A(PropertyTagGpsProcessingMethod)
			A(PropertyTagGpsAreaInformation)
			A(PropertyTagGpsDate)
			A(PropertyTagGpsDifferential)
			#undef A
		};
		for(SIZE_T nIndex = 0; nIndex < DIM(g_pMap); nIndex++)
			if(g_pMap[nIndex].nPropertyTag == nPropertyTag)
				return g_pMap[nIndex].pszName;
		return NULL;
	}
	static BOOL FindEncoderClassIdentifier(const WCHAR* pszMimeType, CLSID& ClassIdentifier)
	{
		_A(pszMimeType);
		using namespace Gdiplus;
		UINT nEncoderCount = 0;
		UINT nEncoderDataSize = 0;
		__D(GetImageEncodersSize(&nEncoderCount, &nEncoderDataSize) == Ok, E_UNNAMED);
		CTempBufferT<ImageCodecInfo> pImageCodecInfo;
		__D(pImageCodecInfo.AllocateBytes(nEncoderDataSize), E_OUTOFMEMORY);
		__D(GetImageEncoders(nEncoderCount, nEncoderDataSize, pImageCodecInfo) == Ok, E_UNNAMED);
		for(UINT nEncoderIndex = 0; nEncoderIndex < nEncoderCount; nEncoderIndex++)
			if(wcscmp(pImageCodecInfo[nEncoderIndex].MimeType, pszMimeType) == 0)
			{
				ClassIdentifier = pImageCodecInfo[nEncoderIndex].Clsid;
				return TRUE;
			}    
		return FALSE;
	}
	static BOOL FindEncoderClassIdentifier(const CHAR* pszMimeType, CLSID& ClassIdentifier)
	{
		return FindEncoderClassIdentifier(CA2W(pszMimeType), ClassIdentifier);
	}
	static VOID SaveImageAsJpegFile(Gdiplus::Image* pImage, LPCTSTR pszPath, LONG nQuality)
	{
		_A(pImage && pszPath);
		CLSID EncoderClassIdentifier;
		__D(FindEncoderClassIdentifier(_T("image/jpeg"), EncoderClassIdentifier), E_UNNAMED);
		Gdiplus::EncoderParameters EncoderParameters;
		EncoderParameters.Count = 1;
		EncoderParameters.Parameter[0].Guid = Gdiplus::EncoderQuality;
		EncoderParameters.Parameter[0].NumberOfValues = 1;
		EncoderParameters.Parameter[0].Type = Gdiplus::EncoderParameterValueTypeLong;
		EncoderParameters.Parameter[0].Value = &nQuality;
		__D(pImage->Save(CT2CW(pszPath), &EncoderClassIdentifier, &EncoderParameters) == Gdiplus::Ok, E_UNNAMED);
	}
	HRESULT Run(INT = SW_SHOWNORMAL)
	{
		CGdiPlusInitialization GdiPlusInitialization;
		Gdiplus::Bitmap SourceBitmap((LPCWSTR) CT2CW(m_sSourcePath));
		#if _DEVELOPMENT
			UINT nPropertySize, nPropertyCount;
			SourceBitmap.GetPropertySize(&nPropertySize, &nPropertyCount);
			CTempBufferT<Gdiplus::PropertyItem> pPropertyItems;
			__D(pPropertyItems.AllocateBytes(nPropertySize), E_OUTOFMEMORY);
			SourceBitmap.GetAllPropertyItems(nPropertySize, nPropertyCount, pPropertyItems);
			for(UINT nIndex = 0; nIndex < nPropertyCount; nIndex++)
			{
				Gdiplus::PropertyItem& PropertyItem = pPropertyItems[nIndex];
				CStringA sIdentifier = StringFromPropertyTag(PropertyItem.id);
				if(sIdentifier.IsEmpty())
					sIdentifier = AtlFormatStringT<CStringA>("0x%04x", PropertyItem.id);
				if(sIdentifier.Left(11) == "PropertyTag")
					sIdentifier.Delete(0, 11);
				switch(PropertyItem.type)
				{
				case PropertyTagTypeByte:
					//_A(PropertyItem.length && !(PropertyItem.length % 1));
					_Z4(atlTraceGeneral, 4, _T("PropertyItem.id %hs, .length %d, .type Byte %d, .value %d\n"), sIdentifier, PropertyItem.length, PropertyItem.type, *((const BYTE*) PropertyItem.value));
					break;
				case PropertyTagTypeASCII:
					{
						CStringA sValue;
						memcpy(sValue.GetBufferSetLength(PropertyItem.length), PropertyItem.value, PropertyItem.length);
						_Z4(atlTraceGeneral, 4, _T("PropertyItem.id %hs, .length %d, .type ASCII %d, .value %hs\n"), sIdentifier, PropertyItem.length, PropertyItem.type, sValue);
					}
					break;
				case PropertyTagTypeShort:
					_A(PropertyItem.length && !(PropertyItem.length % 2));
					_Z4(atlTraceGeneral, 4, _T("PropertyItem.id %hs, .length %d, .type Short %d, .value %d\n"), sIdentifier, PropertyItem.length, PropertyItem.type, *((const SHORT*) PropertyItem.value));
					break;
				case PropertyTagTypeLong:
					_A(PropertyItem.length && !(PropertyItem.length % 4));
					_Z4(atlTraceGeneral, 4, _T("PropertyItem.id %hs, .length %d, .type Long %d, .value %d\n"), sIdentifier, PropertyItem.length, PropertyItem.type, *((const LONG*) PropertyItem.value));
					break;
				case PropertyTagTypeRational:
					{
						_A(PropertyItem.length && !(PropertyItem.length % 8));
						const ULONG* pnValue = (const ULONG*) PropertyItem.value;
						_Z4(atlTraceGeneral, 4, _T("PropertyItem.id %hs, .length %d, .type Rational %d, .value %d/%d\n"), sIdentifier, PropertyItem.length, PropertyItem.type, pnValue[0], pnValue[1]);
					}
					break;
				case PropertyTagTypeUndefined:
					{
						CStringA sValue;
						for(SIZE_T nIndex = 0; nIndex < PropertyItem.length && nIndex < 32; nIndex++)
							sValue += AtlFormatString(_T("%02X "), ((const BYTE*) PropertyItem.value)[nIndex]);
						sValue.TrimRight();
						if(PropertyItem.length > 32)
							sValue += _T("...");
						_Z4(atlTraceGeneral, 4, _T("PropertyItem.id %hs, .length %d, .type Undefined %d, .value %hs\n"), sIdentifier, PropertyItem.length, PropertyItem.type, sValue);
					}
					break;
				case PropertyTagTypeSRational:
					{
						_A(PropertyItem.length && !(PropertyItem.length % 8));
						const LONG* pnValue = (const LONG*) PropertyItem.value;
						_Z4(atlTraceGeneral, 4, _T("PropertyItem.id %hs, .length %d, .type SRational %d, .value %d/%d\n"), sIdentifier, PropertyItem.length, PropertyItem.type, pnValue[0], pnValue[1]);
					}
					break;
				default:
					_Z4(atlTraceGeneral, 4, _T("PropertyItem.id %hs, .length %d, .type %d, .value 0x%p\n"), sIdentifier, PropertyItem.length, PropertyItem.type, PropertyItem.value);
				}
			}
		#endif // _DEVELOPMENT
		// NOTE: Orientation http://msdn.microsoft.com/en-us/library/windows/desktop/ms534416%28v=vs.85%29.aspx#_gdiplus_constant_propertytagorientation
		CSize SourceExtent(SourceBitmap.GetWidth(), SourceBitmap.GetHeight());
		_tprintf(_T("Source Extent: %d x %d\n"), SourceExtent);
		#pragma region Rotate
		SHORT nOrientation = 0;
		UINT nOrientationPropertyItemSize = SourceBitmap.GetPropertyItemSize(PropertyTagOrientation);
		if(nOrientationPropertyItemSize)
		{
			CTempBufferT<Gdiplus::PropertyItem> pOrientationPropertyItem;
			_W(pOrientationPropertyItem.AllocateBytes(nOrientationPropertyItemSize));
			pOrientationPropertyItem->id = PropertyTagOrientation;
			pOrientationPropertyItem->length = sizeof nOrientation;
			pOrientationPropertyItem->type = PropertyTagTypeShort;
			if(SourceBitmap.GetPropertyItem(pOrientationPropertyItem->id, nOrientationPropertyItemSize, pOrientationPropertyItem) == Gdiplus::Ok)
			{
				nOrientation = *((const SHORT*) pOrientationPropertyItem->value);
				_Z4(atlTraceGeneral, 4, _T("nOrientation %d\n"), nOrientation);
				 if(nOrientation == 6) // The 0th row is the visual right side of the image, and the 0th column is the visual top.
					SourceBitmap.RotateFlip(Gdiplus::Rotate90FlipNone);
				 if(nOrientation == 8) // The 0th row is the visual left side of the image, and the 0th column is the visual bottom.
					SourceBitmap.RotateFlip(Gdiplus::Rotate270FlipNone);
				 if(nOrientation == 6 || nOrientation == 8)
					 SourceExtent = CSize(SourceBitmap.GetWidth(), SourceBitmap.GetHeight());
			}
		}
		#pragma endregion 
		CSize DestinationExtent;
		if(SourceExtent.cx > SourceExtent.cy)
		{
			DestinationExtent.cx = 1024;
			DestinationExtent.cy = SourceExtent.cy * 1024 / SourceExtent.cx;
		} else
		{
			DestinationExtent.cy = 1024;
			DestinationExtent.cx = SourceExtent.cx * 1024 / SourceExtent.cy;
		}
		_tprintf(_T("Destination Extent: %d x %d\n"), DestinationExtent);
		Gdiplus::Bitmap DestinationBitmap(DestinationExtent.cx, DestinationExtent.cy);
		{
			Gdiplus::Graphics DestinationGraphics(&DestinationBitmap);
			__D(DestinationGraphics.DrawImage(&SourceBitmap, 0, 0, DestinationExtent.cx, DestinationExtent.cy) == Gdiplus::Ok, E_UNNAMED);
		}
		SaveImageAsJpegFile(&DestinationBitmap, m_sDestinationPath, 85);
		return S_OK;
	}
};

////////////////////////////////////////////////////////////
// Main

int _tmain(int argc, _TCHAR* argv[])
{
	_ATLTRY
	{
		CSingleThreadedApartment SingleThreadedApartment;
		CModule Module;
		#pragma region Parse Command Line
		for(INT nIndex = 1; nIndex < argc; nIndex++)
		{
			CString sArgument = argv[nIndex];
			_A(!sArgument.IsEmpty());
			#pragma region Switches
			if(_tcschr(_T("-/"), sArgument[0]))
			{
				sArgument.Delete(0);
				#pragma region Switch Value/Specification
				CString sArgumentValue;
				if(sArgument.GetLength() > 1)
				{
					SIZE_T nIndex = 1;
					if(sArgument[1] == _T(':'))
						nIndex++;
					sArgumentValue = (LPCTSTR) sArgument + nIndex;
				}
				#pragma endregion
				//if(_tcschr(_T("Ss"), sArgument[0]))
				//{
				//	_tprintf(_T("Option: Suppress Compressor Property Pages\n"));
				//	Module.SetSuppressCompressorPropertyPages();
				//}
				continue;
			}
			#pragma endregion 
			if(sArgument.GetLength() >= 2 && sArgument[0] == _T('"') && sArgument[sArgument.GetLength() - 1] == _T('"'))
				sArgument = sArgument.Mid(1, sArgument.GetLength() - 2);
			if(!_tcslen(Module.GetSourcePath()))
				Module.SetSourcePath(sArgument);
			else if(!_tcslen(Module.GetDestinationPath()))
				Module.SetDestinationPath(sArgument);
			else
				__C(E_UNEXPECTED);
		}
		#pragma endregion
		Module.Run();
	}
	_ATLCATCH(Exception)
	{
		_tprintf(_T("Error 0x%08x: %s\n"), (HRESULT) Exception, AtlFormatSystemMessage(Exception).TrimRight(_T("\t\n\r .")));
		return (INT) (HRESULT) Exception;
	}
	_ATLCATCHALL()
	{
		_tprintf(_T("Fatal Error\n"));
		return (INT) E_FAIL;
	}
	return 0;
}
