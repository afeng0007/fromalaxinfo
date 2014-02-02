

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Sun Feb 02 11:37:18 2014
 */
/* Compiler settings for DirectShowSpy.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */

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

#define TYPE_FORMAT_STRING_SIZE   1029                              
#define PROC_FORMAT_STRING_SIZE   581                               
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

#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
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
/*  8 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 16 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 18 */	NdrFcShort( 0x1 ),	/* 1 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter psMonikerDisplayName */

/* 26 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 28 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 30 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 32 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 34 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 36 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CreationTime */

/* 38 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 40 */	NdrFcLong( 0x0 ),	/* 0 */
/* 44 */	NdrFcShort( 0x8 ),	/* 8 */
/* 46 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 48 */	NdrFcShort( 0x0 ),	/* 0 */
/* 50 */	NdrFcShort( 0x2c ),	/* 44 */
/* 52 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 54 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 56 */	NdrFcShort( 0x0 ),	/* 0 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */
/* 60 */	NdrFcShort( 0x0 ),	/* 0 */
/* 62 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pfTime */

/* 64 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 66 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 68 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 70 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 72 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 74 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Text */


	/* Procedure get_FriendlyName */

/* 76 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 78 */	NdrFcLong( 0x0 ),	/* 0 */
/* 82 */	NdrFcShort( 0x9 ),	/* 9 */
/* 84 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 86 */	NdrFcShort( 0x0 ),	/* 0 */
/* 88 */	NdrFcShort( 0x8 ),	/* 8 */
/* 90 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 92 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 94 */	NdrFcShort( 0x1 ),	/* 1 */
/* 96 */	NdrFcShort( 0x0 ),	/* 0 */
/* 98 */	NdrFcShort( 0x0 ),	/* 0 */
/* 100 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter psText */


	/* Parameter psFriendlyName */

/* 102 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 104 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 106 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */


	/* Return value */

/* 108 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 110 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_FriendlyName */

/* 114 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 116 */	NdrFcLong( 0x0 ),	/* 0 */
/* 120 */	NdrFcShort( 0xa ),	/* 10 */
/* 122 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0x8 ),	/* 8 */
/* 128 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 130 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 134 */	NdrFcShort( 0x1 ),	/* 1 */
/* 136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 138 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter sFriendlyName */

/* 140 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 142 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 144 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */

	/* Return value */

/* 146 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 148 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 150 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DoFilterGraphListModal */


	/* Procedure DoPropertyFrameModal */

/* 152 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 154 */	NdrFcLong( 0x0 ),	/* 0 */
/* 158 */	NdrFcShort( 0xb ),	/* 11 */
/* 160 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 162 */	NdrFcShort( 0x8 ),	/* 8 */
/* 164 */	NdrFcShort( 0x8 ),	/* 8 */
/* 166 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 168 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 176 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nParentWindowHandle */


	/* Parameter nParentWindowHandle */

/* 178 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 180 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 182 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 184 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 186 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 188 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DoFilterGraphListModal */

/* 190 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 192 */	NdrFcLong( 0x0 ),	/* 0 */
/* 196 */	NdrFcShort( 0xc ),	/* 12 */
/* 198 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 200 */	NdrFcShort( 0x8 ),	/* 8 */
/* 202 */	NdrFcShort( 0x8 ),	/* 8 */
/* 204 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 206 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 214 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nParentWindowHandle */

/* 216 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 218 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 222 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 224 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OpenGraphStudioNext */

/* 228 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 230 */	NdrFcLong( 0x0 ),	/* 0 */
/* 234 */	NdrFcShort( 0xd ),	/* 13 */
/* 236 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 238 */	NdrFcShort( 0x8 ),	/* 8 */
/* 240 */	NdrFcShort( 0x22 ),	/* 34 */
/* 242 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 244 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 252 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nParentWindowHandle */

/* 254 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 256 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 258 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbResult */

/* 260 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 262 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 264 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 266 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 268 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 270 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OpenGraphEdit */

/* 272 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 274 */	NdrFcLong( 0x0 ),	/* 0 */
/* 278 */	NdrFcShort( 0xe ),	/* 14 */
/* 280 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 282 */	NdrFcShort( 0x8 ),	/* 8 */
/* 284 */	NdrFcShort( 0x22 ),	/* 34 */
/* 286 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 288 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 296 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nParentWindowHandle */

/* 298 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 300 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 302 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbResult */

/* 304 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 306 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 308 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 310 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 312 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 314 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReadRunPropertyBag */

/* 316 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 318 */	NdrFcLong( 0x0 ),	/* 0 */
/* 322 */	NdrFcShort( 0xf ),	/* 15 */
/* 324 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 326 */	NdrFcShort( 0x6 ),	/* 6 */
/* 328 */	NdrFcShort( 0x8 ),	/* 8 */
/* 330 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 332 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 334 */	NdrFcShort( 0x1 ),	/* 1 */
/* 336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 340 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pBaseFilterUnknown */

/* 342 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 344 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 346 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter bAllowExtension */

/* 348 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 350 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 352 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter pvValue */

/* 354 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 356 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 358 */	NdrFcShort( 0x3f6 ),	/* Type Offset=1014 */

	/* Return value */

/* 360 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 362 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 364 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FilterGraph */

/* 366 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 368 */	NdrFcLong( 0x0 ),	/* 0 */
/* 372 */	NdrFcShort( 0x7 ),	/* 7 */
/* 374 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 378 */	NdrFcShort( 0x8 ),	/* 8 */
/* 380 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 382 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 390 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppFilterGraphUnknown */

/* 392 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 394 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 396 */	NdrFcShort( 0x400 ),	/* Type Offset=1024 */

	/* Return value */

/* 398 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 400 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 402 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_FilterGraph */

/* 404 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 406 */	NdrFcLong( 0x0 ),	/* 0 */
/* 410 */	NdrFcShort( 0x8 ),	/* 8 */
/* 412 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 416 */	NdrFcShort( 0x8 ),	/* 8 */
/* 418 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 420 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 428 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pFilterGraphUnknown */

/* 430 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 432 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 434 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Return value */

/* 436 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 438 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 440 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DoPropertyFrameModal */

/* 442 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 444 */	NdrFcLong( 0x0 ),	/* 0 */
/* 448 */	NdrFcShort( 0xa ),	/* 10 */
/* 450 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 452 */	NdrFcShort( 0x8 ),	/* 8 */
/* 454 */	NdrFcShort( 0x8 ),	/* 8 */
/* 456 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 458 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 466 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nParentWindowHandle */

/* 468 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 470 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 472 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 474 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 476 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 478 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OpenGraphStudioNext */

/* 480 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 482 */	NdrFcLong( 0x0 ),	/* 0 */
/* 486 */	NdrFcShort( 0xc ),	/* 12 */
/* 488 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 490 */	NdrFcShort( 0x8 ),	/* 8 */
/* 492 */	NdrFcShort( 0x22 ),	/* 34 */
/* 494 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 496 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 500 */	NdrFcShort( 0x1 ),	/* 1 */
/* 502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 504 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nParentWindowHandle */

/* 506 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 508 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 510 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter sMonikerDisplayName */

/* 512 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 514 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 516 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */

	/* Parameter pbResult */

/* 518 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 520 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 522 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 524 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 526 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 528 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OpenGraphEdit */

/* 530 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 532 */	NdrFcLong( 0x0 ),	/* 0 */
/* 536 */	NdrFcShort( 0xd ),	/* 13 */
/* 538 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 540 */	NdrFcShort( 0x8 ),	/* 8 */
/* 542 */	NdrFcShort( 0x22 ),	/* 34 */
/* 544 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 546 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 550 */	NdrFcShort( 0x1 ),	/* 1 */
/* 552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 554 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nParentWindowHandle */

/* 556 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 558 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 560 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter sMonikerDisplayName */

/* 562 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 564 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 566 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */

	/* Parameter pbResult */

/* 568 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 570 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 572 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 574 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 576 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 578 */	0x8,		/* FC_LONG */
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
/* 36 */	NdrFcShort( 0x8 ),	/* 8 */
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
/* 54 */	NdrFcShort( 0x8 ),	/* 8 */
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
/* 84 */	NdrFcShort( 0x3a2 ),	/* Offset= 930 (1014) */
/* 86 */	
			0x13, 0x0,	/* FC_OP */
/* 88 */	NdrFcShort( 0x38a ),	/* Offset= 906 (994) */
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
/* 192 */	NdrFcShort( 0x2d8 ),	/* Offset= 728 (920) */
/* 194 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 198 */	NdrFcShort( 0x2d2 ),	/* Offset= 722 (920) */
/* 200 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 204 */	NdrFcShort( 0x2d0 ),	/* Offset= 720 (924) */
/* 206 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 210 */	NdrFcShort( 0x2ce ),	/* Offset= 718 (928) */
/* 212 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 216 */	NdrFcShort( 0x2cc ),	/* Offset= 716 (932) */
/* 218 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 222 */	NdrFcShort( 0x2ca ),	/* Offset= 714 (936) */
/* 224 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 228 */	NdrFcShort( 0x2c8 ),	/* Offset= 712 (940) */
/* 230 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 234 */	NdrFcShort( 0x2c6 ),	/* Offset= 710 (944) */
/* 236 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 240 */	NdrFcShort( 0x2b0 ),	/* Offset= 688 (928) */
/* 242 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 246 */	NdrFcShort( 0x2ae ),	/* Offset= 686 (932) */
/* 248 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 252 */	NdrFcShort( 0x2b8 ),	/* Offset= 696 (948) */
/* 254 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 258 */	NdrFcShort( 0x2ae ),	/* Offset= 686 (944) */
/* 260 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 264 */	NdrFcShort( 0x2b0 ),	/* Offset= 688 (952) */
/* 266 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 270 */	NdrFcShort( 0x2ae ),	/* Offset= 686 (956) */
/* 272 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 276 */	NdrFcShort( 0x2ac ),	/* Offset= 684 (960) */
/* 278 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 282 */	NdrFcShort( 0x2aa ),	/* Offset= 682 (964) */
/* 284 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 288 */	NdrFcShort( 0x2a8 ),	/* Offset= 680 (968) */
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
/* 330 */	NdrFcShort( 0x286 ),	/* Offset= 646 (976) */
/* 332 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 336 */	NdrFcShort( 0x28a ),	/* Offset= 650 (986) */
/* 338 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 342 */	NdrFcShort( 0x288 ),	/* Offset= 648 (990) */
/* 344 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 348 */	NdrFcShort( 0x244 ),	/* Offset= 580 (928) */
/* 350 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 354 */	NdrFcShort( 0x242 ),	/* Offset= 578 (932) */
/* 356 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 360 */	NdrFcShort( 0x240 ),	/* Offset= 576 (936) */
/* 362 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 366 */	NdrFcShort( 0x236 ),	/* Offset= 566 (932) */
/* 368 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 372 */	NdrFcShort( 0x230 ),	/* Offset= 560 (932) */
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
/* 418 */	NdrFcShort( 0x1e4 ),	/* Offset= 484 (902) */
/* 420 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x89,		/* 137 */
/* 422 */	NdrFcShort( 0x20 ),	/* 32 */
/* 424 */	NdrFcShort( 0xa ),	/* 10 */
/* 426 */	NdrFcLong( 0x8 ),	/* 8 */
/* 430 */	NdrFcShort( 0x50 ),	/* Offset= 80 (510) */
/* 432 */	NdrFcLong( 0xd ),	/* 13 */
/* 436 */	NdrFcShort( 0x70 ),	/* Offset= 112 (548) */
/* 438 */	NdrFcLong( 0x9 ),	/* 9 */
/* 442 */	NdrFcShort( 0x90 ),	/* Offset= 144 (586) */
/* 444 */	NdrFcLong( 0xc ),	/* 12 */
/* 448 */	NdrFcShort( 0xb0 ),	/* Offset= 176 (624) */
/* 450 */	NdrFcLong( 0x24 ),	/* 36 */
/* 454 */	NdrFcShort( 0x102 ),	/* Offset= 258 (712) */
/* 456 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 460 */	NdrFcShort( 0x11e ),	/* Offset= 286 (746) */
/* 462 */	NdrFcLong( 0x10 ),	/* 16 */
/* 466 */	NdrFcShort( 0x138 ),	/* Offset= 312 (778) */
/* 468 */	NdrFcLong( 0x2 ),	/* 2 */
/* 472 */	NdrFcShort( 0x14e ),	/* Offset= 334 (806) */
/* 474 */	NdrFcLong( 0x3 ),	/* 3 */
/* 478 */	NdrFcShort( 0x164 ),	/* Offset= 356 (834) */
/* 480 */	NdrFcLong( 0x14 ),	/* 20 */
/* 484 */	NdrFcShort( 0x17a ),	/* Offset= 378 (862) */
/* 486 */	NdrFcShort( 0xffff ),	/* Offset= -1 (485) */
/* 488 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 490 */	NdrFcShort( 0x0 ),	/* 0 */
/* 492 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 496 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 498 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 502 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 504 */	
			0x13, 0x0,	/* FC_OP */
/* 506 */	NdrFcShort( 0xfe1c ),	/* Offset= -484 (22) */
/* 508 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 510 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 512 */	NdrFcShort( 0x10 ),	/* 16 */
/* 514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 516 */	NdrFcShort( 0x6 ),	/* Offset= 6 (522) */
/* 518 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 520 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 522 */	
			0x11, 0x0,	/* FC_RP */
/* 524 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (488) */
/* 526 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 530 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 534 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 536 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 540 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 542 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 544 */	NdrFcShort( 0xfe20 ),	/* Offset= -480 (64) */
/* 546 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 548 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 550 */	NdrFcShort( 0x10 ),	/* 16 */
/* 552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 554 */	NdrFcShort( 0x6 ),	/* Offset= 6 (560) */
/* 556 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 558 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 560 */	
			0x11, 0x0,	/* FC_RP */
/* 562 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (526) */
/* 564 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 568 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 572 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 574 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 578 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 580 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 582 */	NdrFcShort( 0xff44 ),	/* Offset= -188 (394) */
/* 584 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 586 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 588 */	NdrFcShort( 0x10 ),	/* 16 */
/* 590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 592 */	NdrFcShort( 0x6 ),	/* Offset= 6 (598) */
/* 594 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 596 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 598 */	
			0x11, 0x0,	/* FC_RP */
/* 600 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (564) */
/* 602 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 606 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 610 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 612 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 616 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 618 */	
			0x13, 0x0,	/* FC_OP */
/* 620 */	NdrFcShort( 0x176 ),	/* Offset= 374 (994) */
/* 622 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 624 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 626 */	NdrFcShort( 0x10 ),	/* 16 */
/* 628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 630 */	NdrFcShort( 0x6 ),	/* Offset= 6 (636) */
/* 632 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 634 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 636 */	
			0x11, 0x0,	/* FC_RP */
/* 638 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (602) */
/* 640 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 642 */	NdrFcLong( 0x2f ),	/* 47 */
/* 646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 650 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 652 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 654 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 656 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 658 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 660 */	NdrFcShort( 0x1 ),	/* 1 */
/* 662 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 664 */	NdrFcShort( 0x4 ),	/* 4 */
/* 666 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 668 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 670 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 672 */	NdrFcShort( 0x18 ),	/* 24 */
/* 674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 676 */	NdrFcShort( 0xa ),	/* Offset= 10 (686) */
/* 678 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 680 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 682 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (640) */
/* 684 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 686 */	
			0x13, 0x0,	/* FC_OP */
/* 688 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (658) */
/* 690 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 694 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 698 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 700 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 704 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 706 */	
			0x13, 0x0,	/* FC_OP */
/* 708 */	NdrFcShort( 0xffda ),	/* Offset= -38 (670) */
/* 710 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 712 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 714 */	NdrFcShort( 0x10 ),	/* 16 */
/* 716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 718 */	NdrFcShort( 0x6 ),	/* Offset= 6 (724) */
/* 720 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 722 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 724 */	
			0x11, 0x0,	/* FC_RP */
/* 726 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (690) */
/* 728 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 730 */	NdrFcShort( 0x8 ),	/* 8 */
/* 732 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 734 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 736 */	NdrFcShort( 0x10 ),	/* 16 */
/* 738 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 740 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 742 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (728) */
			0x5b,		/* FC_END */
/* 746 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 748 */	NdrFcShort( 0x20 ),	/* 32 */
/* 750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 752 */	NdrFcShort( 0xa ),	/* Offset= 10 (762) */
/* 754 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 756 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 758 */	0x0,		/* 0 */
			NdrFcShort( 0xffe7 ),	/* Offset= -25 (734) */
			0x5b,		/* FC_END */
/* 762 */	
			0x11, 0x0,	/* FC_RP */
/* 764 */	NdrFcShort( 0xff12 ),	/* Offset= -238 (526) */
/* 766 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 768 */	NdrFcShort( 0x1 ),	/* 1 */
/* 770 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 774 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 776 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 778 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 780 */	NdrFcShort( 0x10 ),	/* 16 */
/* 782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 784 */	NdrFcShort( 0x6 ),	/* Offset= 6 (790) */
/* 786 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 788 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 790 */	
			0x13, 0x0,	/* FC_OP */
/* 792 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (766) */
/* 794 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 796 */	NdrFcShort( 0x2 ),	/* 2 */
/* 798 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 802 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 804 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 806 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 808 */	NdrFcShort( 0x10 ),	/* 16 */
/* 810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 812 */	NdrFcShort( 0x6 ),	/* Offset= 6 (818) */
/* 814 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 816 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 818 */	
			0x13, 0x0,	/* FC_OP */
/* 820 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (794) */
/* 822 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 824 */	NdrFcShort( 0x4 ),	/* 4 */
/* 826 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 830 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 832 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 834 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 836 */	NdrFcShort( 0x10 ),	/* 16 */
/* 838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 840 */	NdrFcShort( 0x6 ),	/* Offset= 6 (846) */
/* 842 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 844 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 846 */	
			0x13, 0x0,	/* FC_OP */
/* 848 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (822) */
/* 850 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 852 */	NdrFcShort( 0x8 ),	/* 8 */
/* 854 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 858 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 860 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 862 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 864 */	NdrFcShort( 0x10 ),	/* 16 */
/* 866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 868 */	NdrFcShort( 0x6 ),	/* Offset= 6 (874) */
/* 870 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 872 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 874 */	
			0x13, 0x0,	/* FC_OP */
/* 876 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (850) */
/* 878 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 880 */	NdrFcShort( 0x8 ),	/* 8 */
/* 882 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 884 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 886 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 888 */	NdrFcShort( 0x8 ),	/* 8 */
/* 890 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 892 */	NdrFcShort( 0xffc8 ),	/* -56 */
/* 894 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 896 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 898 */	NdrFcShort( 0xffec ),	/* Offset= -20 (878) */
/* 900 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 902 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 904 */	NdrFcShort( 0x38 ),	/* 56 */
/* 906 */	NdrFcShort( 0xffec ),	/* Offset= -20 (886) */
/* 908 */	NdrFcShort( 0x0 ),	/* Offset= 0 (908) */
/* 910 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 912 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 914 */	0x40,		/* FC_STRUCTPAD4 */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 916 */	0x0,		/* 0 */
			NdrFcShort( 0xfe0f ),	/* Offset= -497 (420) */
			0x5b,		/* FC_END */
/* 920 */	
			0x13, 0x0,	/* FC_OP */
/* 922 */	NdrFcShort( 0xff04 ),	/* Offset= -252 (670) */
/* 924 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 926 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 928 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 930 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 932 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 934 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 936 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 938 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 940 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 942 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 944 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 946 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 948 */	
			0x13, 0x0,	/* FC_OP */
/* 950 */	NdrFcShort( 0xfdce ),	/* Offset= -562 (388) */
/* 952 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 954 */	NdrFcShort( 0xfc4c ),	/* Offset= -948 (6) */
/* 956 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 958 */	NdrFcShort( 0xfc82 ),	/* Offset= -894 (64) */
/* 960 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 962 */	NdrFcShort( 0xfdc8 ),	/* Offset= -568 (394) */
/* 964 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 966 */	NdrFcShort( 0xfdd6 ),	/* Offset= -554 (412) */
/* 968 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 970 */	NdrFcShort( 0x2 ),	/* Offset= 2 (972) */
/* 972 */	
			0x13, 0x0,	/* FC_OP */
/* 974 */	NdrFcShort( 0x14 ),	/* Offset= 20 (994) */
/* 976 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 978 */	NdrFcShort( 0x10 ),	/* 16 */
/* 980 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 982 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 984 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 986 */	
			0x13, 0x0,	/* FC_OP */
/* 988 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (976) */
/* 990 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 992 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 994 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 996 */	NdrFcShort( 0x20 ),	/* 32 */
/* 998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1000 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1000) */
/* 1002 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1004 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1006 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1008 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1010 */	NdrFcShort( 0xfc68 ),	/* Offset= -920 (90) */
/* 1012 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1014 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1016 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1018 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1022 */	NdrFcShort( 0xfc58 ),	/* Offset= -936 (86) */
/* 1024 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1026 */	NdrFcShort( 0xfc3e ),	/* Offset= -962 (64) */

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
    38,
    76,
    114,
    152,
    190,
    228,
    272,
    316
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
    366,
    404,
    76,
    442,
    152,
    480,
    530
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
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

