////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2015
// Created by Roman Ryltsov roman@alax.info
//
// A permission to use the source code is granted as long as reference to 
// source website http://alax.info is retained.

#include "stdafx.h"
#include "rodshow.h"
#include "romf.h"

////////////////////////////////////////////////////////////
// CModule

class CModule :
	public CAtlExeModuleT<CModule>
{
public:
	static CString FormatTransformFlags(ULONG nTransformFlags)
	{
		CRoArrayT<CString> Array;
		static const struct { ULONG nValue; LPCSTR pszName; } g_pMap[] = 
		{
			#define A(x) { x, #x },
			A(MFT_ENUM_FLAG_SYNCMFT)
			A(MFT_ENUM_FLAG_ASYNCMFT)
			A(MFT_ENUM_FLAG_HARDWARE)
			A(MFT_ENUM_FLAG_FIELDOFUSE)
			A(MFT_ENUM_FLAG_LOCALMFT)
			A(MFT_ENUM_FLAG_TRANSCODE_ONLY)
			//A(MFT_ENUM_FLAG_SORTANDFILTER)
			//A(MFT_ENUM_FLAG_ALL)
			#undef A
		};
		for(SIZE_T nIndex = 0; nIndex < DIM(g_pMap); nIndex++)
			if(nTransformFlags & g_pMap[nIndex].nValue)
			{
				_W(Array.Add(CA2CT(g_pMap[nIndex].pszName)) >= 0);
				nTransformFlags &= ~g_pMap[nIndex].nValue;
			}
		if(!Array.IsEmpty())
		{
			if(nTransformFlags)
				_W(Array.Add(AtlFormatString(_T("0x%x"), nTransformFlags)) >= 0);
			return _StringHelper::Join(Array, _T(" | "));
		}
		if(!nTransformFlags)
			return _T("0");
		return AtlFormatString(_T("0x%x"), nTransformFlags);
	}

public:
// CModule
	CModule()
	{
		AtlTraceSetDefaultSettings();
		_Z4_THIS();
		_W(CExceptionFilter::Initialize());
	}
	~CModule()
	{
		_Z4_THIS();
		CExceptionFilter::Terminate();
	}
	HRESULT PreMessageLoop(INT nShowCommand)
	{
		const HRESULT nResult = __super::PreMessageLoop(nShowCommand);
		return SUCCEEDED(nResult) ? S_OK : nResult;
	}
	VOID RunMessageLoop()
	{
		static const CEnumerationNameT<GUID> g_pCategoryMap[] = 
		{
			#define A(x) { x, #x },
			A(MFT_CATEGORY_VIDEO_DECODER)
			A(MFT_CATEGORY_VIDEO_ENCODER)
			A(MFT_CATEGORY_VIDEO_EFFECT)
			A(MFT_CATEGORY_MULTIPLEXER)
			A(MFT_CATEGORY_DEMULTIPLEXER)
			A(MFT_CATEGORY_AUDIO_DECODER)
			A(MFT_CATEGORY_AUDIO_ENCODER)
			A(MFT_CATEGORY_AUDIO_EFFECT)
			A(MFT_CATEGORY_VIDEO_PROCESSOR)
			A(MFT_CATEGORY_OTHER)
			#if (WINVER >= _WIN32_WINNT_WIN10_RS1)
				A(MFT_CATEGORY_ENCRYPTOR)
			#endif
			A(CLSID_VideoInputDeviceCategory) // Kernel streaming (KS) minidriver backed hardware transforms https://msdn.microsoft.com/en-us/library/windows/desktop/ms700134#live_sources
			A(KSCATEGORY_BRIDGE)
			A(KSCATEGORY_CAPTURE) // Video and Audio capture stuff
			A(KSCATEGORY_VIDEO_CAMERA)
			A(KSCATEGORY_RENDER)
			A(KSCATEGORY_MIXER)
			A(KSCATEGORY_SPLITTER)
			A(KSCATEGORY_DATACOMPRESSOR)
			A(KSCATEGORY_DATADECOMPRESSOR)
			A(KSCATEGORY_DATATRANSFORM)
			A(KSCATEGORY_COMMUNICATIONSTRANSFORM)
			A(KSCATEGORY_INTERFACETRANSFORM)
			A(KSCATEGORY_MEDIUMTRANSFORM)
			A(KSCATEGORY_FILESYSTEM)
			A(KSCATEGORY_CLOCK)
			A(KSCATEGORY_PROXY)
			A(KSCATEGORY_QUALITY)
			#undef A
		};
		for(auto&& CategoryItem: g_pCategoryMap)
		{
			_tprintf(_T("Category: %hs %ls\n"), (LPCSTR) CategoryItem.pszName, (LPCWSTR) _PersistHelper::StringFromIdentifier(CategoryItem.Value));
			_tprintf(_T("\n"));
			_ATLTRY
			{
				MF::CActivateArray ActivateArray;
				ActivateArray.Enumerate(CategoryItem.Value);
				UINT nActivateIndex = 0;
				for(auto&& pActivate: ActivateArray)
				{
					CString sItem = AtlFormatString(_T("#%d"), nActivateIndex++);
					CString sFriendlyName;
					if(pActivate.TryGetString(MFT_FRIENDLY_NAME_Attribute, sFriendlyName))
						sItem.Insert(0, AtlFormatString(_T("%s "), sFriendlyName));
					_tprintf(_T("\t") _T("%s\n"), (LPCTSTR) sItem);
					_ATLTRY
					{
						UINT32 nItemCount = 0;
						__C(pActivate->GetCount(&nItemCount));
						for(UINT32 nItemIndex = 0; nItemIndex < nItemCount; nItemIndex++)
						{
							GUID Key;
							MF::CPropVariant vValue;
							__C(pActivate->GetItemByIndex(nItemIndex, &Key, &vValue));
							// NOTE: See PROPVARIANT Type Constants http://msdn.microsoft.com/en-us/library/cc235506
							if(Key == MF_TRANSFORM_CATEGORY_Attribute && vValue.vt == VT_CLSID && *vValue.puuid == CategoryItem.Value)
								continue; // Matches Category
							if(Key == MFT_FRIENDLY_NAME_Attribute)
								continue; // Already Printed
							CString sStringValue;
							BOOL bStringValueAvailable = FALSE;
							BOOL bDefault = TRUE;
							#pragma region Format as Attribute
							if(Key == MF_TRANSFORM_FLAGS_Attribute && vValue.vt == VT_UI4)
							{
								sStringValue = FormatTransformFlags(vValue.ulVal);
								bStringValueAvailable = TRUE;
								bDefault = FALSE;
							} else
							if((Key == MFT_INPUT_TYPES_Attributes || Key == MFT_OUTPUT_TYPES_Attributes) && vValue.vt == (VT_VECTOR | VT_UI1))
							{
								_A(!(vValue.caub.cElems % sizeof (MFT_REGISTER_TYPE_INFO)));
								const MFT_REGISTER_TYPE_INFO* pData = (MFT_REGISTER_TYPE_INFO*) vValue.caub.pElems;
								const SIZE_T nDataCount = vValue.caub.cElems / sizeof *pData;
								CRoArrayT<CString> Array;
								for(SIZE_T nIndex = 0; nIndex < nDataCount; nIndex++)
									_W(Array.Add(AtlFormatString(_T("\t\t\t") _T("%s %s"), MF::FormatKey(pData[nIndex].guidMajorType), MF::FormatKey(pData[nIndex].guidSubtype))) >= 0);
								sStringValue += _StringHelper::Join(Array, _T("\n"));
								if(!sStringValue.IsEmpty())
								{
									sStringValue.Insert(0, _T("\n"));
									sStringValue.Append(_T("\n") _T("\t\t\t"));
								}
								bStringValueAvailable = TRUE;
								bDefault = FALSE;
							} else
								;
							#pragma endregion 
							#pragma region Format as Type
							if(bDefault)
							{
								sStringValue = vValue.Format();
								bStringValueAvailable = !sStringValue.IsEmpty();
							}
							#pragma endregion 
							if(bStringValueAvailable)
								_tprintf(_T("\t") _T("\t") _T("%s: %s\n"), (LPCTSTR) MF::FormatKey(Key), (LPCTSTR) sStringValue);
							else
								_tprintf(_T("\t") _T("\t") _T("%s: ??? (%s)\n"), (LPCTSTR) MF::FormatKey(Key), (LPCTSTR) MF::CPropVariant::FormatType(vValue.vt));
						}
						//_ATLTRY
						//{
						//	CComPtr<IMFTransform> pTransform;
						//	__C(pActivate->ActivateObject(__uuidof(IMFTransform), (VOID**) &pTransform));
						//	const CComQIPtr<ISpecifyPropertyPages> pSpecifyPropertyPages = pTransform;
						//	if(pSpecifyPropertyPages)
						//	{
						//		CAUUID Pages;
						//		ZeroMemory(&Pages, sizeof Pages);
						//		__C(pSpecifyPropertyPages->GetPages(&Pages));
						//	}
						//}
						//_ATLCATCHALL()
						//{
						//	_Z_EXCEPTION();
						//}
					}
					_ATLCATCHALL()
					{
						_Z_EXCEPTION();
					}
					_tprintf(_T("\n"));
				}
			}
			_ATLCATCHALL()
			{
				_Z_EXCEPTION();
			}
		}
	}
};

////////////////////////////////////////////////////////////
// CArgumentException

class CArgumentException :
	public CAtlException
{
public:
	CString m_sMessage;

public:
// CArgumentException
	CArgumentException(const CString& sMessage, HRESULT nCode = E_FAIL) throw() :
		CAtlException(nCode),
		m_sMessage(sMessage)
	{
	}
};

////////////////////////////////////////////////////////////
// Main

int _tmain(int argc, _TCHAR* argv[])
{
	CModule Module;
	_ATLTRY
	{
		#pragma region Syntax
		//if(argc <= 1)
		//{
		//	CPath sName = FindFileName(argv[0]);
		//	sName.RemoveExtension();
		//	_tprintf(_T("Syntax:  %s [options] <media-file-path>\n"), sName);
		//	_tprintf(_T("\n"));
		//	_tprintf(_T("Options: ") _T("/x") _T(" - ") _T("show message box before running the graph\n"));
		//	_tprintf(_T("\n"));
		//	return 2;
		//}
		#pragma endregion 
		//for(INT nArgumentIndex = 1; nArgumentIndex < argc; nArgumentIndex++)
		//{
		//	CString sArgument = argv[nArgumentIndex];
		//	_A(!sArgument.IsEmpty());
		//	if(_tcschr(_T("-/"), sArgument[0]))
		//	{
		//		sArgument.Delete(0, 1);
		//		if(sArgument.IsEmpty())
		//			throw CArgumentException(_T("Unexpected argument"));
		//		switch(sArgument[0])
		//		{
		//		case 'X':
		//		case 'x':
		//			Module.m_bShowMessageBox = TRUE;
		//			break;
		//		default:
		//			throw CArgumentException(AtlFormatString(_T("Unexpected argument (%s)"), sArgument));
		//		}
		//		continue;
		//	}
		//	if(_tcslen(Module.m_sPath))
		//		throw CArgumentException(_T("Unexpected argument: Input file name already specified"));
		//	Module.m_sPath = (LPCTSTR) sArgument;
		//	//throw CArgumentException(AtlFormatString(_T("Unexpected argument (%s)"), sArgument));
		//}
		//if(!_tcslen(Module.m_sPath))
		//	throw CArgumentException(_T("Missing argument: No input file name specified"));
		Module.WinMain(SW_SHOWNORMAL);
	}
	catch(CArgumentException Exception)
	{
		_tprintf(_T("Fatal Error: %s\n"), (LPCTSTR) Exception.m_sMessage);
		return 1;
	}
	_ATLCATCH(Exception)
	{
		_tprintf(_T("Fatal Error: 0x%08X %s\n"), (HRESULT) Exception, (LPCTSTR) AtlFormatSystemMessage(Exception).TrimRight(_T("\t\n\r .")));
		return 1;
	}
	_ATLCATCHALL()
	{
		_tprintf(_T("Fatal Error\n"));
		return 1;
	}
	return 0;
}

// NOTE: See also Matthew van Eerde's "How to enumerate Media Foundation transforms on your system"
//       http://blogs.msdn.com/b/matthew_van_eerde/archive/2010/05/03/how-to-enumerate-media-foundation-transforms-on-your-system.aspx