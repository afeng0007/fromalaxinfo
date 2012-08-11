

/* this ALWAYS GENERATED file contains the proxy stub code */


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


#include "VbsCallback_i.h"

#define TYPE_FORMAT_STRING_SIZE   25                                
#define PROC_FORMAT_STRING_SIZE   91                                
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _VbsCallback_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } VbsCallback_MIDL_TYPE_FORMAT_STRING;

typedef struct _VbsCallback_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } VbsCallback_MIDL_PROC_FORMAT_STRING;

typedef struct _VbsCallback_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } VbsCallback_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const VbsCallback_MIDL_TYPE_FORMAT_STRING VbsCallback__MIDL_TypeFormatString;
extern const VbsCallback_MIDL_PROC_FORMAT_STRING VbsCallback__MIDL_ProcFormatString;
extern const VbsCallback_MIDL_EXPR_FORMAT_STRING VbsCallback__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IFirstSite_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IFirstSite_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IFirst_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IFirst_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ISecond_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISecond_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IThird_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IThird_ProxyInfo;



#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const VbsCallback_MIDL_PROC_FORMAT_STRING VbsCallback__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure OuterDo */


	/* Procedure InnerDo */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x7 ),	/* 7 */
/*  8 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12 */	NdrFcShort( 0x24 ),	/* 36 */
/* 14 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 16 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nA */


	/* Parameter nC */

/* 24 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pnB */


	/* Parameter pnD */

/* 30 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 36 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 38 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 40 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OuterDo */


	/* Procedure OuterDo */

/* 42 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 44 */	NdrFcLong( 0x0 ),	/* 0 */
/* 48 */	NdrFcShort( 0x7 ),	/* 7 */
/* 50 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 52 */	NdrFcShort( 0x8 ),	/* 8 */
/* 54 */	NdrFcShort( 0x24 ),	/* 36 */
/* 56 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 58 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 60 */	NdrFcShort( 0x0 ),	/* 0 */
/* 62 */	NdrFcShort( 0x0 ),	/* 0 */
/* 64 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nA */


	/* Parameter nA */

/* 66 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 68 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 70 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pSite */


	/* Parameter pSite */

/* 72 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 74 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 76 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter pnB */


	/* Parameter pnB */

/* 78 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 80 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 82 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 84 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 86 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 88 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const VbsCallback_MIDL_TYPE_FORMAT_STRING VbsCallback__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/*  4 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/*  6 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/*  8 */	NdrFcLong( 0x20400 ),	/* 132096 */
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

			0x0
        }
    };


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IFirstSite, ver. 0.0,
   GUID={0x8D754F22,0x9EA0,0x4B27,{0x9B,0x01,0x2E,0x6C,0xED,0xE2,0x7F,0x6E}} */

#pragma code_seg(".orpc")
static const unsigned short IFirstSite_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IFirstSite_ProxyInfo =
    {
    &Object_StubDesc,
    VbsCallback__MIDL_ProcFormatString.Format,
    &IFirstSite_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IFirstSite_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    VbsCallback__MIDL_ProcFormatString.Format,
    &IFirstSite_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) _IFirstSiteProxyVtbl = 
{
    &IFirstSite_ProxyInfo,
    &IID_IFirstSite,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IFirstSite::InnerDo */
};


static const PRPC_STUB_FUNCTION IFirstSite_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl _IFirstSiteStubVtbl =
{
    &IID_IFirstSite,
    &IFirstSite_ServerInfo,
    8,
    &IFirstSite_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IFirst, ver. 0.0,
   GUID={0x2E1BDC6B,0x4AFE,0x46D3,{0x9D,0x4A,0x11,0xD0,0x63,0xBC,0xF6,0xC7}} */

#pragma code_seg(".orpc")
static const unsigned short IFirst_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    42
    };

static const MIDL_STUBLESS_PROXY_INFO IFirst_ProxyInfo =
    {
    &Object_StubDesc,
    VbsCallback__MIDL_ProcFormatString.Format,
    &IFirst_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IFirst_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    VbsCallback__MIDL_ProcFormatString.Format,
    &IFirst_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) _IFirstProxyVtbl = 
{
    &IFirst_ProxyInfo,
    &IID_IFirst,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IFirst::OuterDo */
};


static const PRPC_STUB_FUNCTION IFirst_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl _IFirstStubVtbl =
{
    &IID_IFirst,
    &IFirst_ServerInfo,
    8,
    &IFirst_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ISecond, ver. 0.0,
   GUID={0xE9172437,0x1628,0x45D7,{0xB1,0x75,0x5B,0x1C,0xFA,0x79,0xD4,0x9B}} */

#pragma code_seg(".orpc")
static const unsigned short ISecond_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    42
    };

static const MIDL_STUBLESS_PROXY_INFO ISecond_ProxyInfo =
    {
    &Object_StubDesc,
    VbsCallback__MIDL_ProcFormatString.Format,
    &ISecond_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ISecond_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    VbsCallback__MIDL_ProcFormatString.Format,
    &ISecond_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) _ISecondProxyVtbl = 
{
    &ISecond_ProxyInfo,
    &IID_ISecond,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ISecond::OuterDo */
};


static const PRPC_STUB_FUNCTION ISecond_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl _ISecondStubVtbl =
{
    &IID_ISecond,
    &ISecond_ServerInfo,
    8,
    &ISecond_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IThird, ver. 0.0,
   GUID={0xA3F9C57C,0x4A82,0x4EBA,{0x81,0x90,0x30,0x2A,0x0C,0xCC,0xBF,0x3B}} */

#pragma code_seg(".orpc")
static const unsigned short IThird_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IThird_ProxyInfo =
    {
    &Object_StubDesc,
    VbsCallback__MIDL_ProcFormatString.Format,
    &IThird_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IThird_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    VbsCallback__MIDL_ProcFormatString.Format,
    &IThird_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) _IThirdProxyVtbl = 
{
    &IThird_ProxyInfo,
    &IID_IThird,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IThird::OuterDo */
};


static const PRPC_STUB_FUNCTION IThird_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl _IThirdStubVtbl =
{
    &IID_IThird,
    &IThird_ServerInfo,
    8,
    &IThird_table[-3],
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
    VbsCallback__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x700022b, /* MIDL Version 7.0.555 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _VbsCallback_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IFirstSiteProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISecondProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IFirstProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IThirdProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _VbsCallback_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IFirstSiteStubVtbl,
    ( CInterfaceStubVtbl *) &_ISecondStubVtbl,
    ( CInterfaceStubVtbl *) &_IFirstStubVtbl,
    ( CInterfaceStubVtbl *) &_IThirdStubVtbl,
    0
};

PCInterfaceName const _VbsCallback_InterfaceNamesList[] = 
{
    "IFirstSite",
    "ISecond",
    "IFirst",
    "IThird",
    0
};

const IID *  const _VbsCallback_BaseIIDList[] = 
{
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    0
};


#define _VbsCallback_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _VbsCallback, pIID, n)

int __stdcall _VbsCallback_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _VbsCallback, 4, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _VbsCallback, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _VbsCallback, 4, *pIndex )
    
}

const ExtendedProxyFileInfo VbsCallback_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _VbsCallback_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _VbsCallback_StubVtblList,
    (const PCInterfaceName * ) & _VbsCallback_InterfaceNamesList,
    (const IID ** ) & _VbsCallback_BaseIIDList,
    & _VbsCallback_IID_Lookup, 
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

