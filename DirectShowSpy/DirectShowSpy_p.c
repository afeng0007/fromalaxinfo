

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Sun Feb 09 17:26:17 2014
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

#define TYPE_FORMAT_STRING_SIZE   1079                              
#define PROC_FORMAT_STRING_SIZE   553                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   2            

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

	/* Procedure get_MonikerDisplayName */

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
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 18 */	NdrFcShort( 0x1 ),	/* 1 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter psMonikerDisplayName */

/* 24 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 30 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CreationTime */

/* 36 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 38 */	NdrFcLong( 0x0 ),	/* 0 */
/* 42 */	NdrFcShort( 0x8 ),	/* 8 */
/* 44 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 46 */	NdrFcShort( 0x0 ),	/* 0 */
/* 48 */	NdrFcShort( 0x2c ),	/* 44 */
/* 50 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 52 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 54 */	NdrFcShort( 0x0 ),	/* 0 */
/* 56 */	NdrFcShort( 0x0 ),	/* 0 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pfTime */

/* 60 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 62 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 64 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 66 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 68 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 70 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Text */


	/* Procedure get_FriendlyName */

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


	/* Parameter psFriendlyName */

/* 96 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 98 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 100 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */


	/* Return value */

/* 102 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 104 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_FriendlyName */

/* 108 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 110 */	NdrFcLong( 0x0 ),	/* 0 */
/* 114 */	NdrFcShort( 0xa ),	/* 10 */
/* 116 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 120 */	NdrFcShort( 0x8 ),	/* 8 */
/* 122 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 124 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 128 */	NdrFcShort( 0x1 ),	/* 1 */
/* 130 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter sFriendlyName */

/* 132 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 134 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 136 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */

	/* Return value */

/* 138 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 140 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DoFilterGraphListModal */


	/* Procedure DoPropertyFrameModal */

/* 144 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 146 */	NdrFcLong( 0x0 ),	/* 0 */
/* 150 */	NdrFcShort( 0xb ),	/* 11 */
/* 152 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 154 */	NdrFcShort( 0x8 ),	/* 8 */
/* 156 */	NdrFcShort( 0x8 ),	/* 8 */
/* 158 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 160 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 166 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nParentWindowHandle */


	/* Parameter nParentWindowHandle */

/* 168 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 170 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 174 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 176 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DoFilterGraphListModal */

/* 180 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 182 */	NdrFcLong( 0x0 ),	/* 0 */
/* 186 */	NdrFcShort( 0xc ),	/* 12 */
/* 188 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 190 */	NdrFcShort( 0x8 ),	/* 8 */
/* 192 */	NdrFcShort( 0x8 ),	/* 8 */
/* 194 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 196 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 202 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nParentWindowHandle */

/* 204 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 206 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 208 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 210 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 212 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OpenGraphStudioNext */

/* 216 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 218 */	NdrFcLong( 0x0 ),	/* 0 */
/* 222 */	NdrFcShort( 0xd ),	/* 13 */
/* 224 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 226 */	NdrFcShort( 0x8 ),	/* 8 */
/* 228 */	NdrFcShort( 0x22 ),	/* 34 */
/* 230 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 232 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 238 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nParentWindowHandle */

/* 240 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 242 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 244 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbResult */

/* 246 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 248 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 250 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 252 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 254 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 256 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OpenGraphEdit */

/* 258 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 260 */	NdrFcLong( 0x0 ),	/* 0 */
/* 264 */	NdrFcShort( 0xe ),	/* 14 */
/* 266 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 268 */	NdrFcShort( 0x8 ),	/* 8 */
/* 270 */	NdrFcShort( 0x22 ),	/* 34 */
/* 272 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 274 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 280 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nParentWindowHandle */

/* 282 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 284 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 286 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbResult */

/* 288 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 290 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 292 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 294 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 296 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 298 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReadRunPropertyBag */

/* 300 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 302 */	NdrFcLong( 0x0 ),	/* 0 */
/* 306 */	NdrFcShort( 0xf ),	/* 15 */
/* 308 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 310 */	NdrFcShort( 0x6 ),	/* 6 */
/* 312 */	NdrFcShort( 0x8 ),	/* 8 */
/* 314 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 316 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 318 */	NdrFcShort( 0x1 ),	/* 1 */
/* 320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 322 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pBaseFilterUnknown */

/* 324 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 326 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 328 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter bAllowExtension */

/* 330 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 332 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 334 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter pvValue */

/* 336 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 338 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 340 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Return value */

/* 342 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 344 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FilterGraph */

/* 348 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 350 */	NdrFcLong( 0x0 ),	/* 0 */
/* 354 */	NdrFcShort( 0x7 ),	/* 7 */
/* 356 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 360 */	NdrFcShort( 0x8 ),	/* 8 */
/* 362 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 364 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 370 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppFilterGraphUnknown */

/* 372 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 374 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 376 */	NdrFcShort( 0x432 ),	/* Type Offset=1074 */

	/* Return value */

/* 378 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 380 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_FilterGraph */

/* 384 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 386 */	NdrFcLong( 0x0 ),	/* 0 */
/* 390 */	NdrFcShort( 0x8 ),	/* 8 */
/* 392 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 396 */	NdrFcShort( 0x8 ),	/* 8 */
/* 398 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 400 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 406 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pFilterGraphUnknown */

/* 408 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 410 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 412 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Return value */

/* 414 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 416 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 418 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DoPropertyFrameModal */

/* 420 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 422 */	NdrFcLong( 0x0 ),	/* 0 */
/* 426 */	NdrFcShort( 0xa ),	/* 10 */
/* 428 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 430 */	NdrFcShort( 0x8 ),	/* 8 */
/* 432 */	NdrFcShort( 0x8 ),	/* 8 */
/* 434 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 436 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 442 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nParentWindowHandle */

/* 444 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 446 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 450 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 452 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 454 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OpenGraphStudioNext */

/* 456 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 458 */	NdrFcLong( 0x0 ),	/* 0 */
/* 462 */	NdrFcShort( 0xc ),	/* 12 */
/* 464 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 466 */	NdrFcShort( 0x8 ),	/* 8 */
/* 468 */	NdrFcShort( 0x22 ),	/* 34 */
/* 470 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 472 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 476 */	NdrFcShort( 0x1 ),	/* 1 */
/* 478 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nParentWindowHandle */

/* 480 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 482 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter sMonikerDisplayName */

/* 486 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 488 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 490 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */

	/* Parameter pbResult */

/* 492 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 494 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 496 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 498 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 500 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 502 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OpenGraphEdit */

/* 504 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 506 */	NdrFcLong( 0x0 ),	/* 0 */
/* 510 */	NdrFcShort( 0xd ),	/* 13 */
/* 512 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 514 */	NdrFcShort( 0x8 ),	/* 8 */
/* 516 */	NdrFcShort( 0x22 ),	/* 34 */
/* 518 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 520 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 524 */	NdrFcShort( 0x1 ),	/* 1 */
/* 526 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nParentWindowHandle */

/* 528 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 530 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 532 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter sMonikerDisplayName */

/* 534 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 536 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 538 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */

	/* Parameter pbResult */

/* 540 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 542 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 544 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 546 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 548 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 550 */	0x8,		/* FC_LONG */
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
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/*  4 */	NdrFcShort( 0x1c ),	/* Offset= 28 (32) */
/*  6 */	
			0x13, 0x0,	/* FC_OP */
/*  8 */	NdrFcShort( 0xe ),	/* Offset= 14 (22) */
/* 10 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 12 */	NdrFcShort( 0x2 ),	/* 2 */
/* 14 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 16 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 18 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 20 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 22 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 24 */	NdrFcShort( 0x8 ),	/* 8 */
/* 26 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (10) */
/* 28 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 30 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 32 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 34 */	NdrFcShort( 0x0 ),	/* 0 */
/* 36 */	NdrFcShort( 0x4 ),	/* 4 */
/* 38 */	NdrFcShort( 0x0 ),	/* 0 */
/* 40 */	NdrFcShort( 0xffde ),	/* Offset= -34 (6) */
/* 42 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 44 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 46 */	
			0x12, 0x0,	/* FC_UP */
/* 48 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (22) */
/* 50 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 52 */	NdrFcShort( 0x0 ),	/* 0 */
/* 54 */	NdrFcShort( 0x4 ),	/* 4 */
/* 56 */	NdrFcShort( 0x0 ),	/* 0 */
/* 58 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (46) */
/* 60 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 62 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 64 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 66 */	NdrFcLong( 0x0 ),	/* 0 */
/* 70 */	NdrFcShort( 0x0 ),	/* 0 */
/* 72 */	NdrFcShort( 0x0 ),	/* 0 */
/* 74 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 76 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 78 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 80 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 82 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 84 */	NdrFcShort( 0x3d4 ),	/* Offset= 980 (1064) */
/* 86 */	
			0x13, 0x0,	/* FC_OP */
/* 88 */	NdrFcShort( 0x3bc ),	/* Offset= 956 (1044) */
/* 90 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 92 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 94 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 96 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 98 */	NdrFcShort( 0x2 ),	/* Offset= 2 (100) */
/* 100 */	NdrFcShort( 0x10 ),	/* 16 */
/* 102 */	NdrFcShort( 0x2f ),	/* 47 */
/* 104 */	NdrFcLong( 0x14 ),	/* 20 */
/* 108 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 110 */	NdrFcLong( 0x3 ),	/* 3 */
/* 114 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 116 */	NdrFcLong( 0x11 ),	/* 17 */
/* 120 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 122 */	NdrFcLong( 0x2 ),	/* 2 */
/* 126 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 128 */	NdrFcLong( 0x4 ),	/* 4 */
/* 132 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 134 */	NdrFcLong( 0x5 ),	/* 5 */
/* 138 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 140 */	NdrFcLong( 0xb ),	/* 11 */
/* 144 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 146 */	NdrFcLong( 0xa ),	/* 10 */
/* 150 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 152 */	NdrFcLong( 0x6 ),	/* 6 */
/* 156 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (388) */
/* 158 */	NdrFcLong( 0x7 ),	/* 7 */
/* 162 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 164 */	NdrFcLong( 0x8 ),	/* 8 */
/* 168 */	NdrFcShort( 0xff5e ),	/* Offset= -162 (6) */
/* 170 */	NdrFcLong( 0xd ),	/* 13 */
/* 174 */	NdrFcShort( 0xff92 ),	/* Offset= -110 (64) */
/* 176 */	NdrFcLong( 0x9 ),	/* 9 */
/* 180 */	NdrFcShort( 0xd6 ),	/* Offset= 214 (394) */
/* 182 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 186 */	NdrFcShort( 0xe2 ),	/* Offset= 226 (412) */
/* 188 */	NdrFcLong( 0x24 ),	/* 36 */
/* 192 */	NdrFcShort( 0x30a ),	/* Offset= 778 (970) */
/* 194 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 198 */	NdrFcShort( 0x304 ),	/* Offset= 772 (970) */
/* 200 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 204 */	NdrFcShort( 0x302 ),	/* Offset= 770 (974) */
/* 206 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 210 */	NdrFcShort( 0x300 ),	/* Offset= 768 (978) */
/* 212 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 216 */	NdrFcShort( 0x2fe ),	/* Offset= 766 (982) */
/* 218 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 222 */	NdrFcShort( 0x2fc ),	/* Offset= 764 (986) */
/* 224 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 228 */	NdrFcShort( 0x2fa ),	/* Offset= 762 (990) */
/* 230 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 234 */	NdrFcShort( 0x2f8 ),	/* Offset= 760 (994) */
/* 236 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 240 */	NdrFcShort( 0x2e2 ),	/* Offset= 738 (978) */
/* 242 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 246 */	NdrFcShort( 0x2e0 ),	/* Offset= 736 (982) */
/* 248 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 252 */	NdrFcShort( 0x2ea ),	/* Offset= 746 (998) */
/* 254 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 258 */	NdrFcShort( 0x2e0 ),	/* Offset= 736 (994) */
/* 260 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 264 */	NdrFcShort( 0x2e2 ),	/* Offset= 738 (1002) */
/* 266 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 270 */	NdrFcShort( 0x2e0 ),	/* Offset= 736 (1006) */
/* 272 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 276 */	NdrFcShort( 0x2de ),	/* Offset= 734 (1010) */
/* 278 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 282 */	NdrFcShort( 0x2dc ),	/* Offset= 732 (1014) */
/* 284 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 288 */	NdrFcShort( 0x2da ),	/* Offset= 730 (1018) */
/* 290 */	NdrFcLong( 0x10 ),	/* 16 */
/* 294 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 296 */	NdrFcLong( 0x12 ),	/* 18 */
/* 300 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 302 */	NdrFcLong( 0x13 ),	/* 19 */
/* 306 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 308 */	NdrFcLong( 0x15 ),	/* 21 */
/* 312 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 314 */	NdrFcLong( 0x16 ),	/* 22 */
/* 318 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 320 */	NdrFcLong( 0x17 ),	/* 23 */
/* 324 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 326 */	NdrFcLong( 0xe ),	/* 14 */
/* 330 */	NdrFcShort( 0x2b8 ),	/* Offset= 696 (1026) */
/* 332 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 336 */	NdrFcShort( 0x2bc ),	/* Offset= 700 (1036) */
/* 338 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 342 */	NdrFcShort( 0x2ba ),	/* Offset= 698 (1040) */
/* 344 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 348 */	NdrFcShort( 0x276 ),	/* Offset= 630 (978) */
/* 350 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 354 */	NdrFcShort( 0x274 ),	/* Offset= 628 (982) */
/* 356 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 360 */	NdrFcShort( 0x272 ),	/* Offset= 626 (986) */
/* 362 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 366 */	NdrFcShort( 0x268 ),	/* Offset= 616 (982) */
/* 368 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 372 */	NdrFcShort( 0x262 ),	/* Offset= 610 (982) */
/* 374 */	NdrFcLong( 0x0 ),	/* 0 */
/* 378 */	NdrFcShort( 0x0 ),	/* Offset= 0 (378) */
/* 380 */	NdrFcLong( 0x1 ),	/* 1 */
/* 384 */	NdrFcShort( 0x0 ),	/* Offset= 0 (384) */
/* 386 */	NdrFcShort( 0xffff ),	/* Offset= -1 (385) */
/* 388 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 390 */	NdrFcShort( 0x8 ),	/* 8 */
/* 392 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 394 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 396 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 404 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 406 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 408 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 410 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 412 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 414 */	NdrFcShort( 0x2 ),	/* Offset= 2 (416) */
/* 416 */	
			0x13, 0x0,	/* FC_OP */
/* 418 */	NdrFcShort( 0x216 ),	/* Offset= 534 (952) */
/* 420 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x49,		/* 73 */
/* 422 */	NdrFcShort( 0x18 ),	/* 24 */
/* 424 */	NdrFcShort( 0xa ),	/* 10 */
/* 426 */	NdrFcLong( 0x8 ),	/* 8 */
/* 430 */	NdrFcShort( 0x5a ),	/* Offset= 90 (520) */
/* 432 */	NdrFcLong( 0xd ),	/* 13 */
/* 436 */	NdrFcShort( 0x7e ),	/* Offset= 126 (562) */
/* 438 */	NdrFcLong( 0x9 ),	/* 9 */
/* 442 */	NdrFcShort( 0x9e ),	/* Offset= 158 (600) */
/* 444 */	NdrFcLong( 0xc ),	/* 12 */
/* 448 */	NdrFcShort( 0xc8 ),	/* Offset= 200 (648) */
/* 450 */	NdrFcLong( 0x24 ),	/* 36 */
/* 454 */	NdrFcShort( 0x124 ),	/* Offset= 292 (746) */
/* 456 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 460 */	NdrFcShort( 0x140 ),	/* Offset= 320 (780) */
/* 462 */	NdrFcLong( 0x10 ),	/* 16 */
/* 466 */	NdrFcShort( 0x15a ),	/* Offset= 346 (812) */
/* 468 */	NdrFcLong( 0x2 ),	/* 2 */
/* 472 */	NdrFcShort( 0x174 ),	/* Offset= 372 (844) */
/* 474 */	NdrFcLong( 0x3 ),	/* 3 */
/* 478 */	NdrFcShort( 0x18e ),	/* Offset= 398 (876) */
/* 480 */	NdrFcLong( 0x14 ),	/* 20 */
/* 484 */	NdrFcShort( 0x1a8 ),	/* Offset= 424 (908) */
/* 486 */	NdrFcShort( 0xffff ),	/* Offset= -1 (485) */
/* 488 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 490 */	NdrFcShort( 0x4 ),	/* 4 */
/* 492 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 496 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 498 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 500 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 502 */	NdrFcShort( 0x4 ),	/* 4 */
/* 504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 506 */	NdrFcShort( 0x1 ),	/* 1 */
/* 508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 512 */	0x13, 0x0,	/* FC_OP */
/* 514 */	NdrFcShort( 0xfe14 ),	/* Offset= -492 (22) */
/* 516 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 518 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 520 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 522 */	NdrFcShort( 0x8 ),	/* 8 */
/* 524 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 526 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 528 */	NdrFcShort( 0x4 ),	/* 4 */
/* 530 */	NdrFcShort( 0x4 ),	/* 4 */
/* 532 */	0x11, 0x0,	/* FC_RP */
/* 534 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (488) */
/* 536 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 538 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 540 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 544 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 548 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 550 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 554 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 556 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 558 */	NdrFcShort( 0xfe12 ),	/* Offset= -494 (64) */
/* 560 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 562 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 564 */	NdrFcShort( 0x8 ),	/* 8 */
/* 566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 568 */	NdrFcShort( 0x6 ),	/* Offset= 6 (574) */
/* 570 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 572 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 574 */	
			0x11, 0x0,	/* FC_RP */
/* 576 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (540) */
/* 578 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 582 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 586 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 588 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 592 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 594 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 596 */	NdrFcShort( 0xff36 ),	/* Offset= -202 (394) */
/* 598 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 600 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 602 */	NdrFcShort( 0x8 ),	/* 8 */
/* 604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 606 */	NdrFcShort( 0x6 ),	/* Offset= 6 (612) */
/* 608 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 610 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 612 */	
			0x11, 0x0,	/* FC_RP */
/* 614 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (578) */
/* 616 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 618 */	NdrFcShort( 0x4 ),	/* 4 */
/* 620 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 624 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 626 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 628 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 630 */	NdrFcShort( 0x4 ),	/* 4 */
/* 632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 634 */	NdrFcShort( 0x1 ),	/* 1 */
/* 636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 640 */	0x13, 0x0,	/* FC_OP */
/* 642 */	NdrFcShort( 0x192 ),	/* Offset= 402 (1044) */
/* 644 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 646 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 648 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 650 */	NdrFcShort( 0x8 ),	/* 8 */
/* 652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 654 */	NdrFcShort( 0x6 ),	/* Offset= 6 (660) */
/* 656 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 658 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 660 */	
			0x11, 0x0,	/* FC_RP */
/* 662 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (616) */
/* 664 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 666 */	NdrFcLong( 0x2f ),	/* 47 */
/* 670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 674 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 676 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 678 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 680 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 682 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 684 */	NdrFcShort( 0x1 ),	/* 1 */
/* 686 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 688 */	NdrFcShort( 0x4 ),	/* 4 */
/* 690 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 692 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 694 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 696 */	NdrFcShort( 0x10 ),	/* 16 */
/* 698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 700 */	NdrFcShort( 0xa ),	/* Offset= 10 (710) */
/* 702 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 704 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 706 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (664) */
/* 708 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 710 */	
			0x13, 0x0,	/* FC_OP */
/* 712 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (682) */
/* 714 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 716 */	NdrFcShort( 0x4 ),	/* 4 */
/* 718 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 722 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 724 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 726 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 728 */	NdrFcShort( 0x4 ),	/* 4 */
/* 730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 732 */	NdrFcShort( 0x1 ),	/* 1 */
/* 734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 738 */	0x13, 0x0,	/* FC_OP */
/* 740 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (694) */
/* 742 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 744 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 746 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 748 */	NdrFcShort( 0x8 ),	/* 8 */
/* 750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 752 */	NdrFcShort( 0x6 ),	/* Offset= 6 (758) */
/* 754 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 756 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 758 */	
			0x11, 0x0,	/* FC_RP */
/* 760 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (714) */
/* 762 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 764 */	NdrFcShort( 0x8 ),	/* 8 */
/* 766 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 768 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 770 */	NdrFcShort( 0x10 ),	/* 16 */
/* 772 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 774 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 776 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (762) */
			0x5b,		/* FC_END */
/* 780 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 782 */	NdrFcShort( 0x18 ),	/* 24 */
/* 784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 786 */	NdrFcShort( 0xa ),	/* Offset= 10 (796) */
/* 788 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 790 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 792 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (768) */
/* 794 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 796 */	
			0x11, 0x0,	/* FC_RP */
/* 798 */	NdrFcShort( 0xfefe ),	/* Offset= -258 (540) */
/* 800 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 802 */	NdrFcShort( 0x1 ),	/* 1 */
/* 804 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 808 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 810 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 812 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 814 */	NdrFcShort( 0x8 ),	/* 8 */
/* 816 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 818 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 820 */	NdrFcShort( 0x4 ),	/* 4 */
/* 822 */	NdrFcShort( 0x4 ),	/* 4 */
/* 824 */	0x13, 0x0,	/* FC_OP */
/* 826 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (800) */
/* 828 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 830 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 832 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 834 */	NdrFcShort( 0x2 ),	/* 2 */
/* 836 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 840 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 842 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 844 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 846 */	NdrFcShort( 0x8 ),	/* 8 */
/* 848 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 850 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 852 */	NdrFcShort( 0x4 ),	/* 4 */
/* 854 */	NdrFcShort( 0x4 ),	/* 4 */
/* 856 */	0x13, 0x0,	/* FC_OP */
/* 858 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (832) */
/* 860 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 862 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 864 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 866 */	NdrFcShort( 0x4 ),	/* 4 */
/* 868 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 872 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 874 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 876 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 878 */	NdrFcShort( 0x8 ),	/* 8 */
/* 880 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 882 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 884 */	NdrFcShort( 0x4 ),	/* 4 */
/* 886 */	NdrFcShort( 0x4 ),	/* 4 */
/* 888 */	0x13, 0x0,	/* FC_OP */
/* 890 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (864) */
/* 892 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 894 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 896 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 898 */	NdrFcShort( 0x8 ),	/* 8 */
/* 900 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 904 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 906 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 908 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 910 */	NdrFcShort( 0x8 ),	/* 8 */
/* 912 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 914 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 916 */	NdrFcShort( 0x4 ),	/* 4 */
/* 918 */	NdrFcShort( 0x4 ),	/* 4 */
/* 920 */	0x13, 0x0,	/* FC_OP */
/* 922 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (896) */
/* 924 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 926 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 928 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 930 */	NdrFcShort( 0x8 ),	/* 8 */
/* 932 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 934 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 936 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 938 */	NdrFcShort( 0x8 ),	/* 8 */
/* 940 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 942 */	NdrFcShort( 0xffd8 ),	/* -40 */
/* 944 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 946 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 948 */	NdrFcShort( 0xffec ),	/* Offset= -20 (928) */
/* 950 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 952 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 954 */	NdrFcShort( 0x28 ),	/* 40 */
/* 956 */	NdrFcShort( 0xffec ),	/* Offset= -20 (936) */
/* 958 */	NdrFcShort( 0x0 ),	/* Offset= 0 (958) */
/* 960 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 962 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 964 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 966 */	NdrFcShort( 0xfdde ),	/* Offset= -546 (420) */
/* 968 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 970 */	
			0x13, 0x0,	/* FC_OP */
/* 972 */	NdrFcShort( 0xfeea ),	/* Offset= -278 (694) */
/* 974 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 976 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 978 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 980 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 982 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 984 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 986 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 988 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 990 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 992 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 994 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 996 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 998 */	
			0x13, 0x0,	/* FC_OP */
/* 1000 */	NdrFcShort( 0xfd9c ),	/* Offset= -612 (388) */
/* 1002 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1004 */	NdrFcShort( 0xfc1a ),	/* Offset= -998 (6) */
/* 1006 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1008 */	NdrFcShort( 0xfc50 ),	/* Offset= -944 (64) */
/* 1010 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1012 */	NdrFcShort( 0xfd96 ),	/* Offset= -618 (394) */
/* 1014 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1016 */	NdrFcShort( 0xfda4 ),	/* Offset= -604 (412) */
/* 1018 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1020 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1022) */
/* 1022 */	
			0x13, 0x0,	/* FC_OP */
/* 1024 */	NdrFcShort( 0x14 ),	/* Offset= 20 (1044) */
/* 1026 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1028 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1030 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 1032 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 1034 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1036 */	
			0x13, 0x0,	/* FC_OP */
/* 1038 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1026) */
/* 1040 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1042 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 1044 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1046 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1050 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1050) */
/* 1052 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1054 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1056 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1058 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1060 */	NdrFcShort( 0xfc36 ),	/* Offset= -970 (90) */
/* 1062 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1064 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1066 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1068 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1072 */	NdrFcShort( 0xfc26 ),	/* Offset= -986 (86) */
/* 1074 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1076 */	NdrFcShort( 0xfc0c ),	/* Offset= -1012 (64) */

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
            },
            {
            VARIANT_UserSize
            ,VARIANT_UserMarshal
            ,VARIANT_UserUnmarshal
            ,VARIANT_UserFree
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
    0,
    36,
    72,
    108,
    144,
    180,
    216,
    258,
    300
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
CINTERFACE_PROXY_VTABLE(16) _ISpyProxyVtbl = 
{
    &ISpy_ProxyInfo,
    &IID_ISpy,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ISpy::get_MonikerDisplayName */ ,
    (void *) (INT_PTR) -1 /* ISpy::get_CreationTime */ ,
    (void *) (INT_PTR) -1 /* ISpy::get_FriendlyName */ ,
    (void *) (INT_PTR) -1 /* ISpy::put_FriendlyName */ ,
    (void *) (INT_PTR) -1 /* ISpy::DoPropertyFrameModal */ ,
    (void *) (INT_PTR) -1 /* ISpy::DoFilterGraphListModal */ ,
    (void *) (INT_PTR) -1 /* ISpy::OpenGraphStudioNext */ ,
    (void *) (INT_PTR) -1 /* ISpy::OpenGraphEdit */ ,
    (void *) (INT_PTR) -1 /* ISpy::ReadRunPropertyBag */
};


static const PRPC_STUB_FUNCTION ISpy_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ISpyStubVtbl =
{
    &IID_ISpy,
    &ISpy_ServerInfo,
    16,
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
    348,
    384,
    72,
    420,
    144,
    456,
    504
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
CINTERFACE_PROXY_VTABLE(14) _IFilterGraphHelperProxyVtbl = 
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
    (void *) (INT_PTR) -1 /* IFilterGraphHelper::DoPropertyFrameModal */ ,
    (void *) (INT_PTR) -1 /* IFilterGraphHelper::DoFilterGraphListModal */ ,
    (void *) (INT_PTR) -1 /* IFilterGraphHelper::OpenGraphStudioNext */ ,
    (void *) (INT_PTR) -1 /* IFilterGraphHelper::OpenGraphEdit */
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
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IFilterGraphHelperStubVtbl =
{
    &IID_IFilterGraphHelper,
    &IFilterGraphHelper_ServerInfo,
    14,
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

