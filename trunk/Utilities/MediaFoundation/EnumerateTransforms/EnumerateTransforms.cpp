////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2012
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#include "stdafx.h"
#include <mfapi.h>
#include <mftransform.h>
#include "rodshow.h"

#pragma comment(lib, "mfplat.lib")
#pragma comment(lib, "mfuuid.lib")

////////////////////////////////////////////////////////////
// CModule

class CModule :
	public CAtlExeModuleT<CModule>
{
public:
	static CString FormatKey(const GUID& Key)
	{
		static const struct { const GUID* pIdentifier; LPCSTR pszName; } g_pMap[] = 
		{
			#define A(x) { &x, #x },
			A(MF_TRANSFORM_FLAGS_Attribute)
			A(MF_TRANSFORM_CATEGORY_Attribute)
			A(MFT_TRANSFORM_CLSID_Attribute)
			A(MFT_INPUT_TYPES_Attributes)
			A(MFT_OUTPUT_TYPES_Attributes)
			A(MFT_ENUM_HARDWARE_URL_Attribute)
			A(MFT_FRIENDLY_NAME_Attribute)
			A(MFT_CONNECTED_STREAM_ATTRIBUTE)
			A(MFT_PREFERRED_OUTPUTTYPE_Attribute)
			A(MFT_PROCESS_LOCAL_Attribute)
			A(MFT_HW_TIMESTAMP_WITH_QPC_Attribute)
			A(MFT_FIELDOFUSE_UNLOCK_Attribute)
			A(MFT_CODEC_MERIT_Attribute)
			A(MFT_ENUM_TRANSCODE_ONLY_ATTRIBUTE)
			#undef A
		};
		for(SIZE_T nIndex = 0; nIndex < DIM(g_pMap); nIndex++)
			if(*g_pMap[nIndex].pIdentifier == Key)
				return CString(g_pMap[nIndex].pszName);
		return CString(_PersistHelper::StringFromIdentifier(Key));
	}
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
	CModule() throw()
	{
		_Z4(atlTraceRefcount, 4, _T("this 0x%p"), this);
		_W(CExceptionFilter::Initialize());
		#if defined(_DEBUG)
		AtlTraceLoadSettings(NULL);
		#endif // defined(_DEBUG)
	}
	~CModule() throw()
	{
		_Z4(atlTraceRefcount, 4, _T("this 0x%p"), this);
		CExceptionFilter::Terminate();
	}
	HRESULT PreMessageLoop(INT nShowCommand)
	{
		const HRESULT nResult = __super::PreMessageLoop(nShowCommand);
		return SUCCEEDED(nResult) ? S_OK : nResult;
	}
	VOID RunMessageLoop()
	{
		static const struct { const GUID* pCategory; LPCSTR pszName; } g_pMap[] = 
		{
			#define A(x) { &x, #x },
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
			#undef A
		};
		for(SIZE_T nCategoryIndex = 0; nCategoryIndex < DIM(g_pMap); nCategoryIndex++)
		{
			_tprintf(_T("Category: %hs %ls\n"), g_pMap[nCategoryIndex].pszName, _PersistHelper::StringFromIdentifier(*g_pMap[nCategoryIndex].pCategory));
			_tprintf(_T("\n"));
			_ATLTRY
			{
				CComHeapPtr<IMFActivate*> ppMfActivates;
				UINT32 nMfActivateCount = 0;
				__C(MFTEnumEx(*g_pMap[nCategoryIndex].pCategory, MFT_ENUM_FLAG_ALL, NULL, NULL, &ppMfActivates, &nMfActivateCount));
				CRoArrayT<CComPtr<IMFActivate>> ActivateArray;
				for(UINT32 nMfActivateIndex = 0; nMfActivateIndex < nMfActivateCount; nMfActivateIndex++)
				{
					CComPtr<IMFActivate>& pMfActivate = reinterpret_cast<CComPtr<IMFActivate>&>(ppMfActivates[nMfActivateIndex]);
					_W(ActivateArray.Add(pMfActivate) >= 0);
					pMfActivate = NULL;
				}
				for(SIZE_T nActivateIndex = 0; nActivateIndex < ActivateArray.GetCount(); nActivateIndex++)
				{
					const CComPtr<IMFActivate>& pMfActivate = ActivateArray[nActivateIndex];
					CString sItem = AtlFormatString(_T("#%d"), nActivateIndex);
					CComHeapPtr<WCHAR> pszFriendlyName;
					if(SUCCEEDED(pMfActivate->GetAllocatedString(MFT_FRIENDLY_NAME_Attribute, &pszFriendlyName, NULL)))
						sItem.Insert(0, AtlFormatString(_T("%ls "), pszFriendlyName));
					_tprintf(_T("\t") _T("%s\n"), sItem);
					_ATLTRY
					{
						UINT32 nItemCount = 0;
						__C(pMfActivate->GetCount(&nItemCount));
						for(UINT32 nItemIndex = 0; nItemIndex < nItemCount; nItemIndex++)
						{
							GUID Key;
							PROPVARIANT vValue;
							PropVariantInit(&vValue);
							__C(pMfActivate->GetItemByIndex(nItemIndex, &Key, &vValue));
							// NOTE: See PROPVARIANT Type Constants http://msdn.microsoft.com/en-us/library/cc235506%28v=prot.10%29.aspx
							if(Key == MF_TRANSFORM_CATEGORY_Attribute && vValue.vt == VT_CLSID && *vValue.puuid == *g_pMap[nCategoryIndex].pCategory)
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
							if((Key == MFT_INPUT_TYPES_Attributes || Key == MFT_OUTPUT_TYPES_Attributes) && (VT_VECTOR | VT_UI1))
							{
								_A(!(vValue.caub.cElems % sizeof (MFT_REGISTER_TYPE_INFO)));
								const MFT_REGISTER_TYPE_INFO* pData = (MFT_REGISTER_TYPE_INFO*) vValue.caub.pElems;
								const SIZE_T nDataCount = vValue.caub.cElems / sizeof *pData;
								CRoArrayT<CString> Array;
								for(SIZE_T nIndex = 0; nIndex < nDataCount; nIndex++)
									_W(Array.Add(AtlFormatString(_T("\t\t\t") _T("%ls %ls"), _FilterGraphHelper::StringFromMajorType(pData[nIndex].guidMajorType), _FilterGraphHelper::StringFromSubtype(pData[nIndex].guidSubtype))) >= 0);
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
								if(vValue.vt == VT_LPSTR)
								{
									sStringValue = CA2CT(vValue.pszVal);
									bStringValueAvailable = TRUE;
								} else
								if(vValue.vt == VT_LPWSTR)
								{
									sStringValue = CW2CT(vValue.pwszVal);
									bStringValueAvailable = TRUE;
								} else
								if(vValue.vt == VT_CLSID)
								{
									sStringValue = _PersistHelper::StringFromIdentifier(*vValue.puuid);
									bStringValueAvailable = TRUE;
								} else
								if(vValue.vt == (VT_VECTOR | VT_UI1))
								{
									sStringValue = AtlFormatString(_T("%d bytes"), vValue.caub.cElems);
									if(vValue.caub.cElems > 0)
									{
										sStringValue += _T(", ");
										ULONG nIndex;
										for(nIndex = 0; nIndex < vValue.caub.cElems && nIndex < 24; nIndex++)
											sStringValue += AtlFormatString(_T("%02X "), vValue.caub.pElems[nIndex]);
										if(nIndex < vValue.caub.cElems)
											sStringValue += _T("...");
									}
									bStringValueAvailable = TRUE;
								} else
								{
									CComVariant vVariantValue;
									bStringValueAvailable = SUCCEEDED(vVariantValue.ChangeType(VT_BSTR, &reinterpret_cast<VARIANT&>(vValue)));
									if(bStringValueAvailable)
										sStringValue = CString(vVariantValue.bstrVal);
								}
							}
							#pragma endregion 
							if(bStringValueAvailable)
								_tprintf(_T("\t") _T("\t") _T("%s: %s (0x%x)\n"), FormatKey(Key), sStringValue, vValue.vt);
							else
								_tprintf(_T("\t") _T("\t") _T("%s: ??? (0x%x)\n"), FormatKey(Key), vValue.vt);
						}
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
		_tprintf(_T("Fatal Error: %s\n"), Exception.m_sMessage);
		return 1;
	}
	_ATLCATCH(Exception)
	{
		_tprintf(_T("Fatal Error: 0x%08x %s\n"), (HRESULT) Exception, AtlFormatSystemMessage(Exception).TrimRight(_T("\t\n\r .")));
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