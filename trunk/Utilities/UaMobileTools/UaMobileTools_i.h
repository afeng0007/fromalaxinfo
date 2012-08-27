

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Mon Aug 27 19:32:12 2012
 */
/* Compiler settings for UaMobileTools.idl:
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

#ifndef __UaMobileTools_i_h__
#define __UaMobileTools_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IKyivstarUaBalanceQuery_FWD_DEFINED__
#define __IKyivstarUaBalanceQuery_FWD_DEFINED__
typedef interface IKyivstarUaBalanceQuery IKyivstarUaBalanceQuery;
#endif 	/* __IKyivstarUaBalanceQuery_FWD_DEFINED__ */


#ifndef __KyivstarUaBalanceQuery_FWD_DEFINED__
#define __KyivstarUaBalanceQuery_FWD_DEFINED__

#ifdef __cplusplus
typedef class KyivstarUaBalanceQuery KyivstarUaBalanceQuery;
#else
typedef struct KyivstarUaBalanceQuery KyivstarUaBalanceQuery;
#endif /* __cplusplus */

#endif 	/* __KyivstarUaBalanceQuery_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IKyivstarUaBalanceQuery_INTERFACE_DEFINED__
#define __IKyivstarUaBalanceQuery_INTERFACE_DEFINED__

/* interface IKyivstarUaBalanceQuery */
/* [unique][helpstring][oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_IKyivstarUaBalanceQuery;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("48174E17-C955-4FD9-9671-9814710855A3")
    IKyivstarUaBalanceQuery : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ BSTR sNumber,
            /* [in] */ BSTR sPassword) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Number( 
            /* [retval][out] */ BSTR *psNumber) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Balance( 
            /* [retval][out] */ DOUBLE *pfBalance) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IKyivstarUaBalanceQueryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IKyivstarUaBalanceQuery * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IKyivstarUaBalanceQuery * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IKyivstarUaBalanceQuery * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IKyivstarUaBalanceQuery * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IKyivstarUaBalanceQuery * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IKyivstarUaBalanceQuery * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IKyivstarUaBalanceQuery * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IKyivstarUaBalanceQuery * This,
            /* [in] */ BSTR sNumber,
            /* [in] */ BSTR sPassword);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Number )( 
            IKyivstarUaBalanceQuery * This,
            /* [retval][out] */ BSTR *psNumber);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Balance )( 
            IKyivstarUaBalanceQuery * This,
            /* [retval][out] */ DOUBLE *pfBalance);
        
        END_INTERFACE
    } IKyivstarUaBalanceQueryVtbl;

    interface IKyivstarUaBalanceQuery
    {
        CONST_VTBL struct IKyivstarUaBalanceQueryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IKyivstarUaBalanceQuery_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IKyivstarUaBalanceQuery_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IKyivstarUaBalanceQuery_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IKyivstarUaBalanceQuery_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IKyivstarUaBalanceQuery_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IKyivstarUaBalanceQuery_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IKyivstarUaBalanceQuery_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IKyivstarUaBalanceQuery_Initialize(This,sNumber,sPassword)	\
    ( (This)->lpVtbl -> Initialize(This,sNumber,sPassword) ) 

#define IKyivstarUaBalanceQuery_get_Number(This,psNumber)	\
    ( (This)->lpVtbl -> get_Number(This,psNumber) ) 

#define IKyivstarUaBalanceQuery_get_Balance(This,pfBalance)	\
    ( (This)->lpVtbl -> get_Balance(This,pfBalance) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IKyivstarUaBalanceQuery_INTERFACE_DEFINED__ */



#ifndef __AlaxInfoUaMobileTools_LIBRARY_DEFINED__
#define __AlaxInfoUaMobileTools_LIBRARY_DEFINED__

/* library AlaxInfoUaMobileTools */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_AlaxInfoUaMobileTools;

EXTERN_C const CLSID CLSID_KyivstarUaBalanceQuery;

#ifdef __cplusplus

class DECLSPEC_UUID("BE7310DD-BFCA-4676-91E0-F9232DF56155")
KyivstarUaBalanceQuery;
#endif
#endif /* __AlaxInfoUaMobileTools_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


