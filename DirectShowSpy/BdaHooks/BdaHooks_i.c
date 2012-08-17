

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Fri Aug 17 17:43:56 2012
 */
/* Compiler settings for .\BdaHooks.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

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

MIDL_DEFINE_GUID(IID, IID_IAddRemoveHook,0xC241D3AA,0xD1CC,0x45CF,0x9D,0x65,0x38,0xEC,0x9A,0x19,0x66,0x19);


MIDL_DEFINE_GUID(IID, IID_IConnectHook,0xFABCEED1,0x2E77,0x491C,0x8D,0x00,0xA0,0x18,0xB5,0xA8,0xC8,0x56);


MIDL_DEFINE_GUID(IID, IID_IStateControlHook,0x77C8D900,0x78F5,0x404C,0x9B,0xC5,0xE3,0x1C,0xC0,0x56,0x83,0xF6);


MIDL_DEFINE_GUID(IID, LIBID_AlaxInfoBdaHooks,0xA868B371,0x37CA,0x4E4F,0xB3,0x2B,0x72,0x16,0x17,0x75,0x2A,0x55);


MIDL_DEFINE_GUID(CLSID, CLSID_AddRemoveHook,0xB854D1B7,0xC267,0x4C23,0x8A,0xCE,0x2F,0x14,0x27,0xBB,0x18,0x67);


MIDL_DEFINE_GUID(CLSID, CLSID_ConnectHook,0x158F5103,0x6476,0x4EBC,0xBE,0x00,0x7F,0xE7,0x74,0x10,0xE2,0xB3);


MIDL_DEFINE_GUID(CLSID, CLSID_StateControlHook,0x7949E086,0xB28E,0x457D,0x9D,0x85,0x1D,0xED,0x7C,0x62,0xF0,0x6E);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



