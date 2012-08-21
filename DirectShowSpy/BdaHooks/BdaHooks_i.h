

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Aug 20 23:06:17 2012
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


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __BdaHooks_i_h__
#define __BdaHooks_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IAddRemoveHook_FWD_DEFINED__
#define __IAddRemoveHook_FWD_DEFINED__
typedef interface IAddRemoveHook IAddRemoveHook;
#endif 	/* __IAddRemoveHook_FWD_DEFINED__ */


#ifndef __IConnectHook_FWD_DEFINED__
#define __IConnectHook_FWD_DEFINED__
typedef interface IConnectHook IConnectHook;
#endif 	/* __IConnectHook_FWD_DEFINED__ */


#ifndef __IStateControlHook_FWD_DEFINED__
#define __IStateControlHook_FWD_DEFINED__
typedef interface IStateControlHook IStateControlHook;
#endif 	/* __IStateControlHook_FWD_DEFINED__ */


#ifndef __AddRemoveHook_FWD_DEFINED__
#define __AddRemoveHook_FWD_DEFINED__

#ifdef __cplusplus
typedef class AddRemoveHook AddRemoveHook;
#else
typedef struct AddRemoveHook AddRemoveHook;
#endif /* __cplusplus */

#endif 	/* __AddRemoveHook_FWD_DEFINED__ */


#ifndef __ConnectHook_FWD_DEFINED__
#define __ConnectHook_FWD_DEFINED__

#ifdef __cplusplus
typedef class ConnectHook ConnectHook;
#else
typedef struct ConnectHook ConnectHook;
#endif /* __cplusplus */

#endif 	/* __ConnectHook_FWD_DEFINED__ */


#ifndef __StateControlHook_FWD_DEFINED__
#define __StateControlHook_FWD_DEFINED__

#ifdef __cplusplus
typedef class StateControlHook StateControlHook;
#else
typedef struct StateControlHook StateControlHook;
#endif /* __cplusplus */

#endif 	/* __StateControlHook_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IAddRemoveHook_INTERFACE_DEFINED__
#define __IAddRemoveHook_INTERFACE_DEFINED__

/* interface IAddRemoveHook */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IAddRemoveHook;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C241D3AA-D1CC-45CF-9D65-38EC9A196619")
    IAddRemoveHook : public IDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IAddRemoveHookVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAddRemoveHook * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAddRemoveHook * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAddRemoveHook * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAddRemoveHook * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAddRemoveHook * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAddRemoveHook * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAddRemoveHook * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } IAddRemoveHookVtbl;

    interface IAddRemoveHook
    {
        CONST_VTBL struct IAddRemoveHookVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAddRemoveHook_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAddRemoveHook_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAddRemoveHook_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAddRemoveHook_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAddRemoveHook_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAddRemoveHook_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAddRemoveHook_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAddRemoveHook_INTERFACE_DEFINED__ */


#ifndef __IConnectHook_INTERFACE_DEFINED__
#define __IConnectHook_INTERFACE_DEFINED__

/* interface IConnectHook */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IConnectHook;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FABCEED1-2E77-491C-8D00-A018B5A8C856")
    IConnectHook : public IDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IConnectHookVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IConnectHook * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IConnectHook * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IConnectHook * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IConnectHook * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IConnectHook * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IConnectHook * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IConnectHook * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } IConnectHookVtbl;

    interface IConnectHook
    {
        CONST_VTBL struct IConnectHookVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IConnectHook_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IConnectHook_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IConnectHook_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IConnectHook_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IConnectHook_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IConnectHook_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IConnectHook_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IConnectHook_INTERFACE_DEFINED__ */


#ifndef __IStateControlHook_INTERFACE_DEFINED__
#define __IStateControlHook_INTERFACE_DEFINED__

/* interface IStateControlHook */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IStateControlHook;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("77C8D900-78F5-404C-9BC5-E31CC05683F6")
    IStateControlHook : public IDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IStateControlHookVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStateControlHook * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStateControlHook * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStateControlHook * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStateControlHook * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStateControlHook * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStateControlHook * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStateControlHook * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } IStateControlHookVtbl;

    interface IStateControlHook
    {
        CONST_VTBL struct IStateControlHookVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStateControlHook_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStateControlHook_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStateControlHook_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStateControlHook_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStateControlHook_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStateControlHook_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStateControlHook_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStateControlHook_INTERFACE_DEFINED__ */



#ifndef __AlaxInfoBdaHooks_LIBRARY_DEFINED__
#define __AlaxInfoBdaHooks_LIBRARY_DEFINED__

/* library AlaxInfoBdaHooks */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_AlaxInfoBdaHooks;

EXTERN_C const CLSID CLSID_AddRemoveHook;

#ifdef __cplusplus

class DECLSPEC_UUID("B854D1B7-C267-4C23-8ACE-2F1427BB1867")
AddRemoveHook;
#endif

EXTERN_C const CLSID CLSID_ConnectHook;

#ifdef __cplusplus

class DECLSPEC_UUID("158F5103-6476-4EBC-BE00-7FE77410E2B3")
ConnectHook;
#endif

EXTERN_C const CLSID CLSID_StateControlHook;

#ifdef __cplusplus

class DECLSPEC_UUID("7949E086-B28E-457D-9D85-1DED7C62F06E")
StateControlHook;
#endif
#endif /* __AlaxInfoBdaHooks_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


