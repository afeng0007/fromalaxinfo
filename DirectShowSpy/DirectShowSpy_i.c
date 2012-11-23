

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Fri Nov 23 16:34:56 2012
 */
/* Compiler settings for .\DirectShowSpy.idl:
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

MIDL_DEFINE_GUID(IID, IID_ISpy,0x6945711B,0xFE0F,0x4C54,0x96,0x5F,0x5B,0x67,0x96,0x9C,0x28,0xB7);


MIDL_DEFINE_GUID(IID, IID_IFilterMapperSpy,0x34B280D7,0xA144,0x4a64,0xBC,0xB9,0x36,0x16,0x89,0x6F,0x68,0x77);


MIDL_DEFINE_GUID(IID, IID_ISystemDeviceEnumeratorSpy,0x14EB119F,0x25CE,0x4654,0xAB,0xE1,0xE6,0x74,0x2A,0xF0,0x3F,0x2D);


MIDL_DEFINE_GUID(IID, LIBID_AlaxInfoDirectShowSpy,0xB9EC374B,0x834B,0x4DA9,0xBF,0xB5,0xC1,0x87,0x2C,0xE7,0x36,0xFF);


MIDL_DEFINE_GUID(IID, IID_IFilterGraphAddRemoveHook,0xACBECDFD,0xD8CA,0x49c8,0xB7,0x99,0xD2,0x32,0x25,0xD5,0xBF,0xAD);


MIDL_DEFINE_GUID(IID, IID_IFilterGraphConnectHook,0xD0F4C168,0xD09D,0x481e,0x90,0x3D,0x74,0x61,0xCE,0x69,0xE3,0x91);


MIDL_DEFINE_GUID(IID, IID_IFilterGraphStateControlHook,0x65FA1519,0xA935,0x4fa9,0xA1,0x5D,0x94,0x26,0x45,0x7E,0x02,0xF6);


MIDL_DEFINE_GUID(CLSID, CLSID_Spy,0xF552C23D,0xF088,0x41C3,0xA0,0x80,0x84,0x64,0xD7,0xBB,0x9B,0xAD);


MIDL_DEFINE_GUID(CLSID, CLSID_NoThreadSpy,0x2C281C40,0x8853,0x4a30,0x99,0xD3,0x9D,0xCF,0xF2,0xC0,0x15,0xC9);


MIDL_DEFINE_GUID(CLSID, CLSID_FilterMapperSpy,0xB6274D9B,0x1AD3,0x4c32,0x83,0xC5,0x35,0xDC,0x33,0xCA,0xFF,0x47);


MIDL_DEFINE_GUID(CLSID, CLSID_SystemDeviceEnumeratorSpy,0xAD42E3BD,0x7B9B,0x4783,0x9D,0xA2,0x61,0xA9,0xAC,0xD0,0xD4,0xD2);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



