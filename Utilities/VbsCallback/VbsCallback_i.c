

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Sat Aug 11 14:31:40 2012
 */
/* Compiler settings for VbsCallback.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IFirstSite,0x8D754F22,0x9EA0,0x4B27,0x9B,0x01,0x2E,0x6C,0xED,0xE2,0x7F,0x6E);


MIDL_DEFINE_GUID(IID, IID_IFirst,0x2E1BDC6B,0x4AFE,0x46D3,0x9D,0x4A,0x11,0xD0,0x63,0xBC,0xF6,0xC7);


MIDL_DEFINE_GUID(IID, IID_ISecond,0xE9172437,0x1628,0x45D7,0xB1,0x75,0x5B,0x1C,0xFA,0x79,0xD4,0x9B);


MIDL_DEFINE_GUID(IID, IID_IThird,0xA3F9C57C,0x4A82,0x4EBA,0x81,0x90,0x30,0x2A,0x0C,0xCC,0xBF,0x3B);


MIDL_DEFINE_GUID(IID, LIBID_AlaxInfoVbsCallback,0xC14D3DD0,0x6C32,0x4A28,0x99,0xE6,0x7C,0xC4,0xD2,0x8F,0xE2,0x95);


MIDL_DEFINE_GUID(CLSID, CLSID_First,0x564A63EF,0xA5FF,0x45E9,0xAE,0xF9,0xB3,0x72,0x8F,0x71,0xE3,0x0E);


MIDL_DEFINE_GUID(CLSID, CLSID_Second,0x4E05E837,0x0BF7,0x4371,0x96,0xED,0x58,0xAA,0x68,0x73,0x63,0x06);


MIDL_DEFINE_GUID(IID, DIID__IThirdEvents,0x543C4C99,0x8849,0x4902,0xBA,0xBC,0xBF,0x44,0x38,0x45,0x34,0xD8);


MIDL_DEFINE_GUID(CLSID, CLSID_Third,0xE1DE5528,0x01C7,0x4FC3,0xB4,0xE2,0x44,0x79,0x25,0xF5,0x5E,0x6D);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



