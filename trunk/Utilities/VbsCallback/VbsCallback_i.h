

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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

#ifndef __VbsCallback_i_h__
#define __VbsCallback_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IFirstSite_FWD_DEFINED__
#define __IFirstSite_FWD_DEFINED__
typedef interface IFirstSite IFirstSite;
#endif 	/* __IFirstSite_FWD_DEFINED__ */


#ifndef __IFirst_FWD_DEFINED__
#define __IFirst_FWD_DEFINED__
typedef interface IFirst IFirst;
#endif 	/* __IFirst_FWD_DEFINED__ */


#ifndef __ISecond_FWD_DEFINED__
#define __ISecond_FWD_DEFINED__
typedef interface ISecond ISecond;
#endif 	/* __ISecond_FWD_DEFINED__ */


#ifndef __IThird_FWD_DEFINED__
#define __IThird_FWD_DEFINED__
typedef interface IThird IThird;
#endif 	/* __IThird_FWD_DEFINED__ */


#ifndef __First_FWD_DEFINED__
#define __First_FWD_DEFINED__

#ifdef __cplusplus
typedef class First First;
#else
typedef struct First First;
#endif /* __cplusplus */

#endif 	/* __First_FWD_DEFINED__ */


#ifndef __Second_FWD_DEFINED__
#define __Second_FWD_DEFINED__

#ifdef __cplusplus
typedef class Second Second;
#else
typedef struct Second Second;
#endif /* __cplusplus */

#endif 	/* __Second_FWD_DEFINED__ */


#ifndef ___IThirdEvents_FWD_DEFINED__
#define ___IThirdEvents_FWD_DEFINED__
typedef interface _IThirdEvents _IThirdEvents;
#endif 	/* ___IThirdEvents_FWD_DEFINED__ */


#ifndef __Third_FWD_DEFINED__
#define __Third_FWD_DEFINED__

#ifdef __cplusplus
typedef class Third Third;
#else
typedef struct Third Third;
#endif /* __cplusplus */

#endif 	/* __Third_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IFirstSite_INTERFACE_DEFINED__
#define __IFirstSite_INTERFACE_DEFINED__

/* interface IFirstSite */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IFirstSite;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8D754F22-9EA0-4B27-9B01-2E6CEDE27F6E")
    IFirstSite : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE InnerDo( 
            /* [in] */ LONG nC,
            /* [retval][out] */ LONG *pnD) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFirstSiteVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFirstSite * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFirstSite * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFirstSite * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFirstSite * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFirstSite * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFirstSite * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFirstSite * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *InnerDo )( 
            IFirstSite * This,
            /* [in] */ LONG nC,
            /* [retval][out] */ LONG *pnD);
        
        END_INTERFACE
    } IFirstSiteVtbl;

    interface IFirstSite
    {
        CONST_VTBL struct IFirstSiteVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFirstSite_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFirstSite_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFirstSite_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFirstSite_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFirstSite_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFirstSite_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFirstSite_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFirstSite_InnerDo(This,nC,pnD)	\
    ( (This)->lpVtbl -> InnerDo(This,nC,pnD) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFirstSite_INTERFACE_DEFINED__ */


#ifndef __IFirst_INTERFACE_DEFINED__
#define __IFirst_INTERFACE_DEFINED__

/* interface IFirst */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IFirst;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2E1BDC6B-4AFE-46D3-9D4A-11D063BCF6C7")
    IFirst : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE OuterDo( 
            /* [in] */ LONG nA,
            /* [in] */ IDispatch *pSite,
            /* [retval][out] */ LONG *pnB) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFirstVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFirst * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFirst * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFirst * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFirst * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFirst * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFirst * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFirst * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *OuterDo )( 
            IFirst * This,
            /* [in] */ LONG nA,
            /* [in] */ IDispatch *pSite,
            /* [retval][out] */ LONG *pnB);
        
        END_INTERFACE
    } IFirstVtbl;

    interface IFirst
    {
        CONST_VTBL struct IFirstVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFirst_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFirst_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFirst_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFirst_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFirst_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFirst_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFirst_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFirst_OuterDo(This,nA,pSite,pnB)	\
    ( (This)->lpVtbl -> OuterDo(This,nA,pSite,pnB) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFirst_INTERFACE_DEFINED__ */


#ifndef __ISecond_INTERFACE_DEFINED__
#define __ISecond_INTERFACE_DEFINED__

/* interface ISecond */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISecond;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E9172437-1628-45D7-B175-5B1CFA79D49B")
    ISecond : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE OuterDo( 
            /* [in] */ LONG nA,
            /* [in] */ IDispatch *pSite,
            /* [retval][out] */ LONG *pnB) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISecondVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISecond * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISecond * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISecond * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISecond * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISecond * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISecond * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISecond * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *OuterDo )( 
            ISecond * This,
            /* [in] */ LONG nA,
            /* [in] */ IDispatch *pSite,
            /* [retval][out] */ LONG *pnB);
        
        END_INTERFACE
    } ISecondVtbl;

    interface ISecond
    {
        CONST_VTBL struct ISecondVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISecond_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISecond_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISecond_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISecond_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISecond_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISecond_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISecond_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISecond_OuterDo(This,nA,pSite,pnB)	\
    ( (This)->lpVtbl -> OuterDo(This,nA,pSite,pnB) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISecond_INTERFACE_DEFINED__ */


#ifndef __IThird_INTERFACE_DEFINED__
#define __IThird_INTERFACE_DEFINED__

/* interface IThird */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IThird;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A3F9C57C-4A82-4EBA-8190-302A0CCCBF3B")
    IThird : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE OuterDo( 
            /* [in] */ LONG nA,
            /* [retval][out] */ LONG *pnB) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IThirdVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IThird * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IThird * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IThird * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IThird * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IThird * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IThird * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IThird * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *OuterDo )( 
            IThird * This,
            /* [in] */ LONG nA,
            /* [retval][out] */ LONG *pnB);
        
        END_INTERFACE
    } IThirdVtbl;

    interface IThird
    {
        CONST_VTBL struct IThirdVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IThird_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IThird_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IThird_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IThird_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IThird_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IThird_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IThird_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IThird_OuterDo(This,nA,pnB)	\
    ( (This)->lpVtbl -> OuterDo(This,nA,pnB) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IThird_INTERFACE_DEFINED__ */



#ifndef __AlaxInfoVbsCallback_LIBRARY_DEFINED__
#define __AlaxInfoVbsCallback_LIBRARY_DEFINED__

/* library AlaxInfoVbsCallback */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_AlaxInfoVbsCallback;

EXTERN_C const CLSID CLSID_First;

#ifdef __cplusplus

class DECLSPEC_UUID("564A63EF-A5FF-45E9-AEF9-B3728F71E30E")
First;
#endif

EXTERN_C const CLSID CLSID_Second;

#ifdef __cplusplus

class DECLSPEC_UUID("4E05E837-0BF7-4371-96ED-58AA68736306")
Second;
#endif

#ifndef ___IThirdEvents_DISPINTERFACE_DEFINED__
#define ___IThirdEvents_DISPINTERFACE_DEFINED__

/* dispinterface _IThirdEvents */
/* [uuid] */ 


EXTERN_C const IID DIID__IThirdEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("543C4C99-8849-4902-BABC-BF44384534D8")
    _IThirdEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _IThirdEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _IThirdEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _IThirdEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _IThirdEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _IThirdEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _IThirdEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _IThirdEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _IThirdEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _IThirdEventsVtbl;

    interface _IThirdEvents
    {
        CONST_VTBL struct _IThirdEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _IThirdEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _IThirdEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _IThirdEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _IThirdEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _IThirdEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _IThirdEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _IThirdEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___IThirdEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_Third;

#ifdef __cplusplus

class DECLSPEC_UUID("E1DE5528-01C7-4FC3-B4E2-447925F55E6D")
Third;
#endif
#endif /* __AlaxInfoVbsCallback_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


