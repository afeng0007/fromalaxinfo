

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Sat Nov 17 01:35:26 2012
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
#endif // __RPCPROXY_H_VERSION__


#include "BdaHooks_i.h"

#define TYPE_FORMAT_STRING_SIZE   3                                 
#define PROC_FORMAT_STRING_SIZE   1                                 
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _BdaHooks_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } BdaHooks_MIDL_TYPE_FORMAT_STRING;

typedef struct _BdaHooks_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } BdaHooks_MIDL_PROC_FORMAT_STRING;

typedef struct _BdaHooks_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } BdaHooks_MIDL_EXPR_FORMAT_STRING;


static RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const BdaHooks_MIDL_TYPE_FORMAT_STRING BdaHooks__MIDL_TypeFormatString;
extern const BdaHooks_MIDL_PROC_FORMAT_STRING BdaHooks__MIDL_ProcFormatString;
extern const BdaHooks_MIDL_EXPR_FORMAT_STRING BdaHooks__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAddRemoveHook_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAddRemoveHook_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IConnectHook_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IConnectHook_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStateControlHook_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IStateControlHook_ProxyInfo;



#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need a Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const BdaHooks_MIDL_PROC_FORMAT_STRING BdaHooks__MIDL_ProcFormatString =
    {
        0,
        {

			0x0
        }
    };

static const BdaHooks_MIDL_TYPE_FORMAT_STRING BdaHooks__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */

			0x0
        }
    };


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IAddRemoveHook, ver. 0.0,
   GUID={0xC241D3AA,0xD1CC,0x45CF,{0x9D,0x65,0x38,0xEC,0x9A,0x19,0x66,0x19}} */

#pragma code_seg(".orpc")
static const unsigned short IAddRemoveHook_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IAddRemoveHook_ProxyInfo =
    {
    &Object_StubDesc,
    BdaHooks__MIDL_ProcFormatString.Format,
    &IAddRemoveHook_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAddRemoveHook_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    BdaHooks__MIDL_ProcFormatString.Format,
    &IAddRemoveHook_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IAddRemoveHookProxyVtbl = 
{
    0,
    &IID_IAddRemoveHook,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */
};


static const PRPC_STUB_FUNCTION IAddRemoveHook_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl _IAddRemoveHookStubVtbl =
{
    &IID_IAddRemoveHook,
    &IAddRemoveHook_ServerInfo,
    7,
    &IAddRemoveHook_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IConnectHook, ver. 0.0,
   GUID={0xFABCEED1,0x2E77,0x491C,{0x8D,0x00,0xA0,0x18,0xB5,0xA8,0xC8,0x56}} */

#pragma code_seg(".orpc")
static const unsigned short IConnectHook_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IConnectHook_ProxyInfo =
    {
    &Object_StubDesc,
    BdaHooks__MIDL_ProcFormatString.Format,
    &IConnectHook_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IConnectHook_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    BdaHooks__MIDL_ProcFormatString.Format,
    &IConnectHook_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IConnectHookProxyVtbl = 
{
    0,
    &IID_IConnectHook,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */
};


static const PRPC_STUB_FUNCTION IConnectHook_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl _IConnectHookStubVtbl =
{
    &IID_IConnectHook,
    &IConnectHook_ServerInfo,
    7,
    &IConnectHook_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IStateControlHook, ver. 0.0,
   GUID={0x77C8D900,0x78F5,0x404C,{0x9B,0xC5,0xE3,0x1C,0xC0,0x56,0x83,0xF6}} */

#pragma code_seg(".orpc")
static const unsigned short IStateControlHook_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IStateControlHook_ProxyInfo =
    {
    &Object_StubDesc,
    BdaHooks__MIDL_ProcFormatString.Format,
    &IStateControlHook_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IStateControlHook_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    BdaHooks__MIDL_ProcFormatString.Format,
    &IStateControlHook_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IStateControlHookProxyVtbl = 
{
    0,
    &IID_IStateControlHook,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */
};


static const PRPC_STUB_FUNCTION IStateControlHook_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl _IStateControlHookStubVtbl =
{
    &IID_IStateControlHook,
    &IStateControlHook_ServerInfo,
    7,
    &IStateControlHook_table[-3],
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
    BdaHooks__MIDL_TypeFormatString.Format,
    0, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x70001f4, /* MIDL Version 7.0.500 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * _BdaHooks_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IStateControlHookProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAddRemoveHookProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IConnectHookProxyVtbl,
    0
};

const CInterfaceStubVtbl * _BdaHooks_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IStateControlHookStubVtbl,
    ( CInterfaceStubVtbl *) &_IAddRemoveHookStubVtbl,
    ( CInterfaceStubVtbl *) &_IConnectHookStubVtbl,
    0
};

PCInterfaceName const _BdaHooks_InterfaceNamesList[] = 
{
    "IStateControlHook",
    "IAddRemoveHook",
    "IConnectHook",
    0
};

const IID *  _BdaHooks_BaseIIDList[] = 
{
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    0
};


#define _BdaHooks_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _BdaHooks, pIID, n)

int __stdcall _BdaHooks_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _BdaHooks, 3, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _BdaHooks, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _BdaHooks, 3, *pIndex )
    
}

const ExtendedProxyFileInfo BdaHooks_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _BdaHooks_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _BdaHooks_StubVtblList,
    (const PCInterfaceName * ) & _BdaHooks_InterfaceNamesList,
    (const IID ** ) & _BdaHooks_BaseIIDList,
    & _BdaHooks_IID_Lookup, 
    3,
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

