

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Fri Jan 10 11:37:20 2014
 */
/* Compiler settings for DirectShowSpy.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "DirectShowSpy_i.h"

#define TYPE_FORMAT_STRING_SIZE   65                                
#define PROC_FORMAT_STRING_SIZE   145                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   1            

typedef struct _DirectShowSpy_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } DirectShowSpy_MIDL_TYPE_FORMAT_STRING;

typedef struct _DirectShowSpy_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } DirectShowSpy_MIDL_PROC_FORMAT_STRING;

typedef struct _DirectShowSpy_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } DirectShowSpy_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const DirectShowSpy_MIDL_TYPE_FORMAT_STRING DirectShowSpy__MIDL_TypeFormatString;
extern const DirectShowSpy_MIDL_PROC_FORMAT_STRING DirectShowSpy__MIDL_ProcFormatString;
extern const DirectShowSpy_MIDL_EXPR_FORMAT_STRING DirectShowSpy__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ISpy_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISpy_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IFilterMapperSpy_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IFilterMapperSpy_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ISystemDeviceEnumeratorSpy_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISystemDeviceEnumeratorSpy_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IFilterGraphHelper_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IFilterGraphHelper_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const DirectShowSpy_MIDL_PROC_FORMAT_STRING DirectShowSpy__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure get_FilterGraph */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x7 ),	/* 7 */
/*  8 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 16 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppFilterGraphUnknown */

/* 24 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Return value */

/* 30 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_FilterGraph */

/* 36 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 38 */	NdrFcLong( 0x0 ),	/* 0 */
/* 42 */	NdrFcShort( 0x8 ),	/* 8 */
/* 44 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 46 */	NdrFcShort( 0x0 ),	/* 0 */
/* 48 */	NdrFcShort( 0x8 ),	/* 8 */
/* 50 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 52 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 54 */	NdrFcShort( 0x0 ),	/* 0 */
/* 56 */	NdrFcShort( 0x0 ),	/* 0 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pFilterGraphUnknown */

/* 60 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 62 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 64 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Return value */

/* 66 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 68 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 70 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Text */

/* 72 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 74 */	NdrFcLong( 0x0 ),	/* 0 */
/* 78 */	NdrFcShort( 0x9 ),	/* 9 */
/* 80 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 82 */	NdrFcShort( 0x0 ),	/* 0 */
/* 84 */	NdrFcShort( 0x8 ),	/* 8 */
/* 86 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 88 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 90 */	NdrFcShort( 0x1 ),	/* 1 */
/* 92 */	NdrFcShort( 0x0 ),	/* 0 */
/* 94 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter psText */

/* 96 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 98 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 100 */	NdrFcShort( 0x36 ),	/* Type Offset=54 */

	/* Return value */

/* 102 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 104 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DoPropertyFrameModal */

/* 108 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 110 */	NdrFcLong( 0x0 ),	/* 0 */
/* 114 */	NdrFcShort( 0xa ),	/* 10 */
/* 116 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 118 */	NdrFcShort( 0x8 ),	/* 8 */
/* 120 */	NdrFcShort( 0x8 ),	/* 8 */
/* 122 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 124 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 130 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nParentWindowHandle */

/* 132 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 134 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 138 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 140 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const DirectShowSpy_MIDL_TYPE_FORMAT_STRING DirectShowSpy__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/*  4 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6) */
/*  6 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/*  8 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 18 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 20 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 22 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 24 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 26 */	NdrFcShort( 0x1c ),	/* Offset= 28 (54) */
/* 28 */	
			0x13, 0x0,	/* FC_OP */
/* 30 */	NdrFcShort( 0xe ),	/* Offset= 14 (44) */
/* 32 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 34 */	NdrFcShort( 0x2 ),	/* 2 */
/* 36 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 38 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 40 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 42 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 44 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 46 */	NdrFcShort( 0x8 ),	/* 8 */
/* 48 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (32) */
/* 50 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 52 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 54 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 56 */	NdrFcShort( 0x0 ),	/* 0 */
/* 58 */	NdrFcShort( 0x4 ),	/* 4 */
/* 60 */	NdrFcShort( 0x0 ),	/* 0 */
/* 62 */	NdrFcShort( 0xffde ),	/* Offset= -34 (28) */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            BSTR_UserSize
            ,BSTR_UserMarshal
            ,BSTR_UserUnmarshal
            ,BSTR_UserFree
            }

        };



/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: ISpy, ver. 0.0,
   GUID={0x6945711B,0xFE0F,0x4C54,{0x96,0x5F,0x5B,0x67,0x96,0x9C,0x28,0xB7}} */

#pragma code_seg(".orpc")
static const unsigned short ISpy_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ISpy_ProxyInfo =
    {
    &Object_StubDesc,
    DirectShowSpy__MIDL_ProcFormatString.Format,
    &ISpy_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ISpy_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    DirectShowSpy__MIDL_ProcFormatString.Format,
    &ISpy_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _ISpyProxyVtbl = 
{
    0,
    &IID_ISpy,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */
};


static const PRPC_STUB_FUNCTION ISpy_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl _ISpyStubVtbl =
{
    &IID_ISpy,
    &ISpy_ServerInfo,
    7,
    &ISpy_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IFilterMapperSpy, ver. 0.0,
   GUID={0x34B280D7,0xA144,0x4a64,{0xBC,0xB9,0x36,0x16,0x89,0x6F,0x68,0x77}} */

#pragma code_seg(".orpc")
static const unsigned short IFilterMapperSpy_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IFilterMapperSpy_ProxyInfo =
    {
    &Object_StubDesc,
    DirectShowSpy__MIDL_ProcFormatString.Format,
    &IFilterMapperSpy_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IFilterMapperSpy_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    DirectShowSpy__MIDL_ProcFormatString.Format,
    &IFilterMapperSpy_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IFilterMapperSpyProxyVtbl = 
{
    0,
    &IID_IFilterMapperSpy,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */
};


static const PRPC_STUB_FUNCTION IFilterMapperSpy_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl _IFilterMapperSpyStubVtbl =
{
    &IID_IFilterMapperSpy,
    &IFilterMapperSpy_ServerInfo,
    7,
    &IFilterMapperSpy_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ISystemDeviceEnumeratorSpy, ver. 0.0,
   GUID={0x14EB119F,0x25CE,0x4654,{0xAB,0xE1,0xE6,0x74,0x2A,0xF0,0x3F,0x2D}} */

#pragma code_seg(".orpc")
static const unsigned short ISystemDeviceEnumeratorSpy_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ISystemDeviceEnumeratorSpy_ProxyInfo =
    {
    &Object_StubDesc,
    DirectShowSpy__MIDL_ProcFormatString.Format,
    &ISystemDeviceEnumeratorSpy_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ISystemDeviceEnumeratorSpy_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    DirectShowSpy__MIDL_ProcFormatString.Format,
    &ISystemDeviceEnumeratorSpy_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _ISystemDeviceEnumeratorSpyProxyVtbl = 
{
    0,
    &IID_ISystemDeviceEnumeratorSpy,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */
};


static const PRPC_STUB_FUNCTION ISystemDeviceEnumeratorSpy_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl _ISystemDeviceEnumeratorSpyStubVtbl =
{
    &IID_ISystemDeviceEnumeratorSpy,
    &ISystemDeviceEnumeratorSpy_ServerInfo,
    7,
    &ISystemDeviceEnumeratorSpy_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IFilterGraphHelper, ver. 0.0,
   GUID={0x3D1AF248,0xDEF1,0x4E26,{0xA0,0x71,0xFE,0xDF,0x15,0xFE,0xD6,0xA8}} */

#pragma code_seg(".orpc")
static const unsigned short IFilterGraphHelper_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    108
    };

static const MIDL_STUBLESS_PROXY_INFO IFilterGraphHelper_ProxyInfo =
    {
    &Object_StubDesc,
    DirectShowSpy__MIDL_ProcFormatString.Format,
    &IFilterGraphHelper_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IFilterGraphHelper_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    DirectShowSpy__MIDL_ProcFormatString.Format,
    &IFilterGraphHelper_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _IFilterGraphHelperProxyVtbl = 
{
    &IFilterGraphHelper_ProxyInfo,
    &IID_IFilterGraphHelper,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IFilterGraphHelper::get_FilterGraph */ ,
    (void *) (INT_PTR) -1 /* IFilterGraphHelper::put_FilterGraph */ ,
    (void *) (INT_PTR) -1 /* IFilterGraphHelper::get_Text */ ,
    (void *) (INT_PTR) -1 /* IFilterGraphHelper::DoPropertyFrameModal */
};


static const PRPC_STUB_FUNCTION IFilterGraphHelper_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IFilterGraphHelperStubVtbl =
{
    &IID_IFilterGraphHelper,
    &IFilterGraphHelper_ServerInfo,
    11,
    &IFilterGraphHelper_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    DirectShowSpy__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x700022b, /* MIDL Version 7.0.555 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _DirectShowSpy_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_ISpyProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IFilterGraphHelperProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISystemDeviceEnumeratorSpyProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IFilterMapperSpyProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _DirectShowSpy_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_ISpyStubVtbl,
    ( CInterfaceStubVtbl *) &_IFilterGraphHelperStubVtbl,
    ( CInterfaceStubVtbl *) &_ISystemDeviceEnumeratorSpyStubVtbl,
    ( CInterfaceStubVtbl *) &_IFilterMapperSpyStubVtbl,
    0
};

PCInterfaceName const _DirectShowSpy_InterfaceNamesList[] = 
{
    "ISpy",
    "IFilterGraphHelper",
    "ISystemDeviceEnumeratorSpy",
    "IFilterMapperSpy",
    0
};

const IID *  const _DirectShowSpy_BaseIIDList[] = 
{
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    0
};


#define _DirectShowSpy_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _DirectShowSpy, pIID, n)

int __stdcall _DirectShowSpy_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _DirectShowSpy, 4, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _DirectShowSpy, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _DirectShowSpy, 4, *pIndex )
    
}

const ExtendedProxyFileInfo DirectShowSpy_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _DirectShowSpy_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _DirectShowSpy_StubVtblList,
    (const PCInterfaceName * ) & _DirectShowSpy_InterfaceNamesList,
    (const IID ** ) & _DirectShowSpy_BaseIIDList,
    & _DirectShowSpy_IID_Lookup, 
    4,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64)*/

