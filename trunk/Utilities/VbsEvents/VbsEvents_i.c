

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Mon Jul 30 19:45:04 2012
 */
/* Compiler settings for VbsEvents.idl:
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

MIDL_DEFINE_GUID(IID, IID_IFoo,0x9117226B,0xD79D,0x43B9,0x90,0x10,0x51,0x19,0x5C,0xA4,0x4C,0x8B);


MIDL_DEFINE_GUID(IID, LIBID_VbsEventsLib,0xF5547BD2,0x82AB,0x460F,0x97,0x4F,0x0F,0xD9,0x26,0xAA,0x6B,0x86);


MIDL_DEFINE_GUID(IID, DIID__IFooEvents,0x0E1DB37B,0x1126,0x4242,0x9B,0xE6,0x81,0x8E,0xCD,0x6C,0x69,0x33);


MIDL_DEFINE_GUID(CLSID, CLSID_Foo,0xA8F6416C,0xB59C,0x4D00,0xA5,0x36,0x54,0x1A,0x7E,0x86,0xBA,0x12);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



