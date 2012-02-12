

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Sun Feb 12 12:28:00 2012
 */
/* Compiler settings for MaxMindGeoLite.idl:
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

MIDL_DEFINE_GUID(IID, IID_ILocation,0x3C3125E8,0x60D6,0x4703,0xB7,0xB4,0x7A,0x02,0x4C,0xEA,0x2F,0x05);


MIDL_DEFINE_GUID(IID, IID_ILocations,0xB6E2FBEB,0x1AC2,0x424B,0xB2,0xDA,0xFF,0x63,0x98,0xAD,0xCF,0x0C);


MIDL_DEFINE_GUID(IID, IID_ILazyLocations,0x34BF53BB,0xD4C8,0x4002,0xA0,0xEC,0x5B,0xA7,0x0F,0xE7,0xAC,0xA3);


MIDL_DEFINE_GUID(IID, LIBID_AlaxInfoMaxMindGeoLite,0xF80BC862,0xE43E,0x4809,0xAC,0xFC,0x1A,0x60,0x82,0x09,0xC8,0x60);


MIDL_DEFINE_GUID(CLSID, CLSID_Location,0xE4758497,0x363F,0x467D,0xBE,0x04,0xC2,0x22,0x27,0x48,0xC7,0xE6);


MIDL_DEFINE_GUID(CLSID, CLSID_Locations,0x350EBCB9,0x942A,0x4D11,0x91,0x92,0x54,0xAA,0x62,0x30,0xF7,0xBF);


MIDL_DEFINE_GUID(CLSID, CLSID_LazyLocations,0x29752330,0xE1FB,0x43D0,0xAD,0xBF,0x21,0xAF,0x77,0x63,0x32,0x59);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



