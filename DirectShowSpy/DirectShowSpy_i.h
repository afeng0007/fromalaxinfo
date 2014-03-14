

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Thu Mar 13 20:08:29 2014
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

#ifndef __DirectShowSpy_i_h__
#define __DirectShowSpy_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IModuleVersionInformation_FWD_DEFINED__
#define __IModuleVersionInformation_FWD_DEFINED__
typedef interface IModuleVersionInformation IModuleVersionInformation;
#endif 	/* __IModuleVersionInformation_FWD_DEFINED__ */


#ifndef __ISpy_FWD_DEFINED__
#define __ISpy_FWD_DEFINED__
typedef interface ISpy ISpy;
#endif 	/* __ISpy_FWD_DEFINED__ */


#ifndef __IFilterMapperSpy_FWD_DEFINED__
#define __IFilterMapperSpy_FWD_DEFINED__
typedef interface IFilterMapperSpy IFilterMapperSpy;
#endif 	/* __IFilterMapperSpy_FWD_DEFINED__ */


#ifndef __ISystemDeviceEnumeratorSpy_FWD_DEFINED__
#define __ISystemDeviceEnumeratorSpy_FWD_DEFINED__
typedef interface ISystemDeviceEnumeratorSpy ISystemDeviceEnumeratorSpy;
#endif 	/* __ISystemDeviceEnumeratorSpy_FWD_DEFINED__ */


#ifndef __IFilterGraphHelper_FWD_DEFINED__
#define __IFilterGraphHelper_FWD_DEFINED__
typedef interface IFilterGraphHelper IFilterGraphHelper;
#endif 	/* __IFilterGraphHelper_FWD_DEFINED__ */


#ifndef __IFilterGraphAddRemoveHook_FWD_DEFINED__
#define __IFilterGraphAddRemoveHook_FWD_DEFINED__
typedef interface IFilterGraphAddRemoveHook IFilterGraphAddRemoveHook;
#endif 	/* __IFilterGraphAddRemoveHook_FWD_DEFINED__ */


#ifndef __IFilterGraphConnectHook_FWD_DEFINED__
#define __IFilterGraphConnectHook_FWD_DEFINED__
typedef interface IFilterGraphConnectHook IFilterGraphConnectHook;
#endif 	/* __IFilterGraphConnectHook_FWD_DEFINED__ */


#ifndef __IFilterGraphStateControlHook_FWD_DEFINED__
#define __IFilterGraphStateControlHook_FWD_DEFINED__
typedef interface IFilterGraphStateControlHook IFilterGraphStateControlHook;
#endif 	/* __IFilterGraphStateControlHook_FWD_DEFINED__ */


#ifndef __Spy_FWD_DEFINED__
#define __Spy_FWD_DEFINED__

#ifdef __cplusplus
typedef class Spy Spy;
#else
typedef struct Spy Spy;
#endif /* __cplusplus */

#endif 	/* __Spy_FWD_DEFINED__ */


#ifndef __NoThreadSpy_FWD_DEFINED__
#define __NoThreadSpy_FWD_DEFINED__

#ifdef __cplusplus
typedef class NoThreadSpy NoThreadSpy;
#else
typedef struct NoThreadSpy NoThreadSpy;
#endif /* __cplusplus */

#endif 	/* __NoThreadSpy_FWD_DEFINED__ */


#ifndef __FilterMapperSpy_FWD_DEFINED__
#define __FilterMapperSpy_FWD_DEFINED__

#ifdef __cplusplus
typedef class FilterMapperSpy FilterMapperSpy;
#else
typedef struct FilterMapperSpy FilterMapperSpy;
#endif /* __cplusplus */

#endif 	/* __FilterMapperSpy_FWD_DEFINED__ */


#ifndef __SystemDeviceEnumeratorSpy_FWD_DEFINED__
#define __SystemDeviceEnumeratorSpy_FWD_DEFINED__

#ifdef __cplusplus
typedef class SystemDeviceEnumeratorSpy SystemDeviceEnumeratorSpy;
#else
typedef struct SystemDeviceEnumeratorSpy SystemDeviceEnumeratorSpy;
#endif /* __cplusplus */

#endif 	/* __SystemDeviceEnumeratorSpy_FWD_DEFINED__ */


#ifndef __FilterGraphHelper_FWD_DEFINED__
#define __FilterGraphHelper_FWD_DEFINED__

#ifdef __cplusplus
typedef class FilterGraphHelper FilterGraphHelper;
#else
typedef struct FilterGraphHelper FilterGraphHelper;
#endif /* __cplusplus */

#endif 	/* __FilterGraphHelper_FWD_DEFINED__ */


#ifndef __IRunPropertyBagAware_FWD_DEFINED__
#define __IRunPropertyBagAware_FWD_DEFINED__
typedef interface IRunPropertyBagAware IRunPropertyBagAware;
#endif 	/* __IRunPropertyBagAware_FWD_DEFINED__ */


#ifndef __RunPropertyBagPropertyPage_FWD_DEFINED__
#define __RunPropertyBagPropertyPage_FWD_DEFINED__

#ifdef __cplusplus
typedef class RunPropertyBagPropertyPage RunPropertyBagPropertyPage;
#else
typedef struct RunPropertyBagPropertyPage RunPropertyBagPropertyPage;
#endif /* __cplusplus */

#endif 	/* __RunPropertyBagPropertyPage_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IModuleVersionInformation_INTERFACE_DEFINED__
#define __IModuleVersionInformation_INTERFACE_DEFINED__

/* interface IModuleVersionInformation */
/* [unique][helpstring][nonextensible][oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_IModuleVersionInformation;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("968E0597-E713-4EF5-A6F3-780B816204C2")
    IModuleVersionInformation : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Path( 
            /* [retval][out] */ BSTR *psPath) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FileVersion( 
            /* [retval][out] */ LONGLONG *pnFileVersion) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FileVersionString( 
            /* [retval][out] */ BSTR *psFileVersionString) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IModuleVersionInformationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IModuleVersionInformation * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IModuleVersionInformation * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IModuleVersionInformation * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IModuleVersionInformation * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IModuleVersionInformation * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IModuleVersionInformation * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IModuleVersionInformation * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Path )( 
            IModuleVersionInformation * This,
            /* [retval][out] */ BSTR *psPath);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FileVersion )( 
            IModuleVersionInformation * This,
            /* [retval][out] */ LONGLONG *pnFileVersion);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FileVersionString )( 
            IModuleVersionInformation * This,
            /* [retval][out] */ BSTR *psFileVersionString);
        
        END_INTERFACE
    } IModuleVersionInformationVtbl;

    interface IModuleVersionInformation
    {
        CONST_VTBL struct IModuleVersionInformationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IModuleVersionInformation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IModuleVersionInformation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IModuleVersionInformation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IModuleVersionInformation_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IModuleVersionInformation_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IModuleVersionInformation_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IModuleVersionInformation_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IModuleVersionInformation_get_Path(This,psPath)	\
    ( (This)->lpVtbl -> get_Path(This,psPath) ) 

#define IModuleVersionInformation_get_FileVersion(This,pnFileVersion)	\
    ( (This)->lpVtbl -> get_FileVersion(This,pnFileVersion) ) 

#define IModuleVersionInformation_get_FileVersionString(This,psFileVersionString)	\
    ( (This)->lpVtbl -> get_FileVersionString(This,psFileVersionString) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IModuleVersionInformation_INTERFACE_DEFINED__ */


#ifndef __ISpy_INTERFACE_DEFINED__
#define __ISpy_INTERFACE_DEFINED__

/* interface ISpy */
/* [unique][helpstring][nonextensible][oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_ISpy;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6945711B-FE0F-4C54-965F-5B67969C28B7")
    ISpy : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_MonikerDisplayName( 
            /* [retval][out] */ BSTR *psMonikerDisplayName) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_CreationTime( 
            /* [retval][out] */ DATE *pfTime) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FriendlyName( 
            /* [retval][out] */ BSTR *psFriendlyName) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_FriendlyName( 
            /* [in] */ BSTR sFriendlyName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DoPropertyFrameModal( 
            /* [in] */ LONG nParentWindowHandle) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DoFilterGraphListModal( 
            /* [in] */ LONG nParentWindowHandle) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE OpenGraphStudioNext( 
            /* [in] */ LONG nParentWindowHandle,
            /* [retval][out] */ VARIANT_BOOL *pbResult) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE OpenGraphEdit( 
            /* [in] */ LONG nParentWindowHandle,
            /* [retval][out] */ VARIANT_BOOL *pbResult) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ReadRunPropertyBag( 
            /* [in] */ IUnknown *pBaseFilterUnknown,
            /* [in] */ VARIANT_BOOL bAllowExtension,
            /* [retval][out] */ VARIANT *pvValue) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISpyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpy * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpy * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpy * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISpy * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISpy * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISpy * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISpy * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MonikerDisplayName )( 
            ISpy * This,
            /* [retval][out] */ BSTR *psMonikerDisplayName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CreationTime )( 
            ISpy * This,
            /* [retval][out] */ DATE *pfTime);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )( 
            ISpy * This,
            /* [retval][out] */ BSTR *psFriendlyName);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FriendlyName )( 
            ISpy * This,
            /* [in] */ BSTR sFriendlyName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DoPropertyFrameModal )( 
            ISpy * This,
            /* [in] */ LONG nParentWindowHandle);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DoFilterGraphListModal )( 
            ISpy * This,
            /* [in] */ LONG nParentWindowHandle);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *OpenGraphStudioNext )( 
            ISpy * This,
            /* [in] */ LONG nParentWindowHandle,
            /* [retval][out] */ VARIANT_BOOL *pbResult);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *OpenGraphEdit )( 
            ISpy * This,
            /* [in] */ LONG nParentWindowHandle,
            /* [retval][out] */ VARIANT_BOOL *pbResult);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ReadRunPropertyBag )( 
            ISpy * This,
            /* [in] */ IUnknown *pBaseFilterUnknown,
            /* [in] */ VARIANT_BOOL bAllowExtension,
            /* [retval][out] */ VARIANT *pvValue);
        
        END_INTERFACE
    } ISpyVtbl;

    interface ISpy
    {
        CONST_VTBL struct ISpyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpy_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpy_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpy_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpy_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISpy_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISpy_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISpy_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISpy_get_MonikerDisplayName(This,psMonikerDisplayName)	\
    ( (This)->lpVtbl -> get_MonikerDisplayName(This,psMonikerDisplayName) ) 

#define ISpy_get_CreationTime(This,pfTime)	\
    ( (This)->lpVtbl -> get_CreationTime(This,pfTime) ) 

#define ISpy_get_FriendlyName(This,psFriendlyName)	\
    ( (This)->lpVtbl -> get_FriendlyName(This,psFriendlyName) ) 

#define ISpy_put_FriendlyName(This,sFriendlyName)	\
    ( (This)->lpVtbl -> put_FriendlyName(This,sFriendlyName) ) 

#define ISpy_DoPropertyFrameModal(This,nParentWindowHandle)	\
    ( (This)->lpVtbl -> DoPropertyFrameModal(This,nParentWindowHandle) ) 

#define ISpy_DoFilterGraphListModal(This,nParentWindowHandle)	\
    ( (This)->lpVtbl -> DoFilterGraphListModal(This,nParentWindowHandle) ) 

#define ISpy_OpenGraphStudioNext(This,nParentWindowHandle,pbResult)	\
    ( (This)->lpVtbl -> OpenGraphStudioNext(This,nParentWindowHandle,pbResult) ) 

#define ISpy_OpenGraphEdit(This,nParentWindowHandle,pbResult)	\
    ( (This)->lpVtbl -> OpenGraphEdit(This,nParentWindowHandle,pbResult) ) 

#define ISpy_ReadRunPropertyBag(This,pBaseFilterUnknown,bAllowExtension,pvValue)	\
    ( (This)->lpVtbl -> ReadRunPropertyBag(This,pBaseFilterUnknown,bAllowExtension,pvValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpy_INTERFACE_DEFINED__ */


#ifndef __IFilterMapperSpy_INTERFACE_DEFINED__
#define __IFilterMapperSpy_INTERFACE_DEFINED__

/* interface IFilterMapperSpy */
/* [unique][helpstring][nonextensible][oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_IFilterMapperSpy;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("34B280D7-A144-4a64-BCB9-3616896F6877")
    IFilterMapperSpy : public IDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IFilterMapperSpyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFilterMapperSpy * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFilterMapperSpy * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFilterMapperSpy * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFilterMapperSpy * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFilterMapperSpy * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFilterMapperSpy * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFilterMapperSpy * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } IFilterMapperSpyVtbl;

    interface IFilterMapperSpy
    {
        CONST_VTBL struct IFilterMapperSpyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFilterMapperSpy_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFilterMapperSpy_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFilterMapperSpy_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFilterMapperSpy_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFilterMapperSpy_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFilterMapperSpy_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFilterMapperSpy_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFilterMapperSpy_INTERFACE_DEFINED__ */


#ifndef __ISystemDeviceEnumeratorSpy_INTERFACE_DEFINED__
#define __ISystemDeviceEnumeratorSpy_INTERFACE_DEFINED__

/* interface ISystemDeviceEnumeratorSpy */
/* [unique][helpstring][nonextensible][oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_ISystemDeviceEnumeratorSpy;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("14EB119F-25CE-4654-ABE1-E6742AF03F2D")
    ISystemDeviceEnumeratorSpy : public IDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ISystemDeviceEnumeratorSpyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISystemDeviceEnumeratorSpy * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISystemDeviceEnumeratorSpy * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISystemDeviceEnumeratorSpy * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISystemDeviceEnumeratorSpy * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISystemDeviceEnumeratorSpy * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISystemDeviceEnumeratorSpy * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISystemDeviceEnumeratorSpy * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } ISystemDeviceEnumeratorSpyVtbl;

    interface ISystemDeviceEnumeratorSpy
    {
        CONST_VTBL struct ISystemDeviceEnumeratorSpyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISystemDeviceEnumeratorSpy_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISystemDeviceEnumeratorSpy_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISystemDeviceEnumeratorSpy_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISystemDeviceEnumeratorSpy_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISystemDeviceEnumeratorSpy_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISystemDeviceEnumeratorSpy_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISystemDeviceEnumeratorSpy_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISystemDeviceEnumeratorSpy_INTERFACE_DEFINED__ */


#ifndef __IFilterGraphHelper_INTERFACE_DEFINED__
#define __IFilterGraphHelper_INTERFACE_DEFINED__

/* interface IFilterGraphHelper */
/* [unique][helpstring][nonextensible][oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_IFilterGraphHelper;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3D1AF248-DEF1-4E26-A071-FEDF15FED6A8")
    IFilterGraphHelper : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FilterGraph( 
            /* [retval][out] */ IUnknown **ppFilterGraphUnknown) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_FilterGraph( 
            /* [in] */ IUnknown *pFilterGraphUnknown) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Text( 
            /* [retval][out] */ BSTR *psText) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DoPropertyFrameModal( 
            /* [in] */ LONG nParentWindowHandle) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DoFilterGraphListModal( 
            /* [in] */ LONG nParentWindowHandle) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE OpenGraphStudioNext( 
            /* [in] */ LONG nParentWindowHandle,
            /* [in] */ BSTR sMonikerDisplayName,
            /* [retval][out] */ VARIANT_BOOL *pbResult) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE OpenGraphEdit( 
            /* [in] */ LONG nParentWindowHandle,
            /* [in] */ BSTR sMonikerDisplayName,
            /* [retval][out] */ VARIANT_BOOL *pbResult) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFilterGraphHelperVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFilterGraphHelper * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFilterGraphHelper * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFilterGraphHelper * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFilterGraphHelper * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFilterGraphHelper * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFilterGraphHelper * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFilterGraphHelper * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FilterGraph )( 
            IFilterGraphHelper * This,
            /* [retval][out] */ IUnknown **ppFilterGraphUnknown);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FilterGraph )( 
            IFilterGraphHelper * This,
            /* [in] */ IUnknown *pFilterGraphUnknown);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            IFilterGraphHelper * This,
            /* [retval][out] */ BSTR *psText);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DoPropertyFrameModal )( 
            IFilterGraphHelper * This,
            /* [in] */ LONG nParentWindowHandle);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DoFilterGraphListModal )( 
            IFilterGraphHelper * This,
            /* [in] */ LONG nParentWindowHandle);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *OpenGraphStudioNext )( 
            IFilterGraphHelper * This,
            /* [in] */ LONG nParentWindowHandle,
            /* [in] */ BSTR sMonikerDisplayName,
            /* [retval][out] */ VARIANT_BOOL *pbResult);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *OpenGraphEdit )( 
            IFilterGraphHelper * This,
            /* [in] */ LONG nParentWindowHandle,
            /* [in] */ BSTR sMonikerDisplayName,
            /* [retval][out] */ VARIANT_BOOL *pbResult);
        
        END_INTERFACE
    } IFilterGraphHelperVtbl;

    interface IFilterGraphHelper
    {
        CONST_VTBL struct IFilterGraphHelperVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFilterGraphHelper_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFilterGraphHelper_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFilterGraphHelper_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFilterGraphHelper_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFilterGraphHelper_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFilterGraphHelper_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFilterGraphHelper_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFilterGraphHelper_get_FilterGraph(This,ppFilterGraphUnknown)	\
    ( (This)->lpVtbl -> get_FilterGraph(This,ppFilterGraphUnknown) ) 

#define IFilterGraphHelper_put_FilterGraph(This,pFilterGraphUnknown)	\
    ( (This)->lpVtbl -> put_FilterGraph(This,pFilterGraphUnknown) ) 

#define IFilterGraphHelper_get_Text(This,psText)	\
    ( (This)->lpVtbl -> get_Text(This,psText) ) 

#define IFilterGraphHelper_DoPropertyFrameModal(This,nParentWindowHandle)	\
    ( (This)->lpVtbl -> DoPropertyFrameModal(This,nParentWindowHandle) ) 

#define IFilterGraphHelper_DoFilterGraphListModal(This,nParentWindowHandle)	\
    ( (This)->lpVtbl -> DoFilterGraphListModal(This,nParentWindowHandle) ) 

#define IFilterGraphHelper_OpenGraphStudioNext(This,nParentWindowHandle,sMonikerDisplayName,pbResult)	\
    ( (This)->lpVtbl -> OpenGraphStudioNext(This,nParentWindowHandle,sMonikerDisplayName,pbResult) ) 

#define IFilterGraphHelper_OpenGraphEdit(This,nParentWindowHandle,sMonikerDisplayName,pbResult)	\
    ( (This)->lpVtbl -> OpenGraphEdit(This,nParentWindowHandle,sMonikerDisplayName,pbResult) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFilterGraphHelper_INTERFACE_DEFINED__ */



#ifndef __AlaxInfoDirectShowSpy_LIBRARY_DEFINED__
#define __AlaxInfoDirectShowSpy_LIBRARY_DEFINED__

/* library AlaxInfoDirectShowSpy */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_AlaxInfoDirectShowSpy;

#ifndef __IFilterGraphAddRemoveHook_INTERFACE_DEFINED__
#define __IFilterGraphAddRemoveHook_INTERFACE_DEFINED__

/* interface IFilterGraphAddRemoveHook */
/* [unique][helpstring][nonextensible][uuid][object] */ 


EXTERN_C const IID IID_IFilterGraphAddRemoveHook;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ACBECDFD-D8CA-49c8-B799-D23225D5BFAD")
    IFilterGraphAddRemoveHook : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnAddFilter( 
            /* [in] */ ISpy *pSpy,
            /* [in] */ IUnknown *pBaseFilterUnknown,
            /* [in] */ LPCWSTR pszName,
            /* [out][in] */ BOOL *pbDefault) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnRemoveFilter( 
            /* [in] */ ISpy *pSpy,
            /* [in] */ IUnknown *pBaseFilterUnknown,
            /* [out][in] */ BOOL *pbDefault) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnAddSourceFilter( 
            /* [in] */ ISpy *pSpy,
            /* [in] */ LPCWSTR pszFileName,
            /* [in] */ LPCWSTR pszFilterName,
            /* [out] */ IUnknown **ppBaseFilterUnknown,
            /* [out][in] */ BOOL *pbDefault) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnAddSourceFilterForMoniker( 
            /* [in] */ ISpy *pSpy,
            /* [in] */ IUnknown *pMonikerUnknown,
            /* [in] */ IUnknown *pBindCtxUnknown,
            /* [in] */ LPCWSTR pszFilterName,
            /* [out] */ IUnknown **ppBaseFilterUnknown,
            /* [out][in] */ BOOL *pbDefault) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFilterGraphAddRemoveHookVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFilterGraphAddRemoveHook * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFilterGraphAddRemoveHook * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFilterGraphAddRemoveHook * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnAddFilter )( 
            IFilterGraphAddRemoveHook * This,
            /* [in] */ ISpy *pSpy,
            /* [in] */ IUnknown *pBaseFilterUnknown,
            /* [in] */ LPCWSTR pszName,
            /* [out][in] */ BOOL *pbDefault);
        
        HRESULT ( STDMETHODCALLTYPE *OnRemoveFilter )( 
            IFilterGraphAddRemoveHook * This,
            /* [in] */ ISpy *pSpy,
            /* [in] */ IUnknown *pBaseFilterUnknown,
            /* [out][in] */ BOOL *pbDefault);
        
        HRESULT ( STDMETHODCALLTYPE *OnAddSourceFilter )( 
            IFilterGraphAddRemoveHook * This,
            /* [in] */ ISpy *pSpy,
            /* [in] */ LPCWSTR pszFileName,
            /* [in] */ LPCWSTR pszFilterName,
            /* [out] */ IUnknown **ppBaseFilterUnknown,
            /* [out][in] */ BOOL *pbDefault);
        
        HRESULT ( STDMETHODCALLTYPE *OnAddSourceFilterForMoniker )( 
            IFilterGraphAddRemoveHook * This,
            /* [in] */ ISpy *pSpy,
            /* [in] */ IUnknown *pMonikerUnknown,
            /* [in] */ IUnknown *pBindCtxUnknown,
            /* [in] */ LPCWSTR pszFilterName,
            /* [out] */ IUnknown **ppBaseFilterUnknown,
            /* [out][in] */ BOOL *pbDefault);
        
        END_INTERFACE
    } IFilterGraphAddRemoveHookVtbl;

    interface IFilterGraphAddRemoveHook
    {
        CONST_VTBL struct IFilterGraphAddRemoveHookVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFilterGraphAddRemoveHook_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFilterGraphAddRemoveHook_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFilterGraphAddRemoveHook_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFilterGraphAddRemoveHook_OnAddFilter(This,pSpy,pBaseFilterUnknown,pszName,pbDefault)	\
    ( (This)->lpVtbl -> OnAddFilter(This,pSpy,pBaseFilterUnknown,pszName,pbDefault) ) 

#define IFilterGraphAddRemoveHook_OnRemoveFilter(This,pSpy,pBaseFilterUnknown,pbDefault)	\
    ( (This)->lpVtbl -> OnRemoveFilter(This,pSpy,pBaseFilterUnknown,pbDefault) ) 

#define IFilterGraphAddRemoveHook_OnAddSourceFilter(This,pSpy,pszFileName,pszFilterName,ppBaseFilterUnknown,pbDefault)	\
    ( (This)->lpVtbl -> OnAddSourceFilter(This,pSpy,pszFileName,pszFilterName,ppBaseFilterUnknown,pbDefault) ) 

#define IFilterGraphAddRemoveHook_OnAddSourceFilterForMoniker(This,pSpy,pMonikerUnknown,pBindCtxUnknown,pszFilterName,ppBaseFilterUnknown,pbDefault)	\
    ( (This)->lpVtbl -> OnAddSourceFilterForMoniker(This,pSpy,pMonikerUnknown,pBindCtxUnknown,pszFilterName,ppBaseFilterUnknown,pbDefault) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFilterGraphAddRemoveHook_INTERFACE_DEFINED__ */


#ifndef __IFilterGraphConnectHook_INTERFACE_DEFINED__
#define __IFilterGraphConnectHook_INTERFACE_DEFINED__

/* interface IFilterGraphConnectHook */
/* [unique][helpstring][nonextensible][uuid][object] */ 


EXTERN_C const IID IID_IFilterGraphConnectHook;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D0F4C168-D09D-481e-903D-7461CE69E391")
    IFilterGraphConnectHook : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnConnectDirect( 
            /* [in] */ ISpy *pSpy,
            /* [in] */ IUnknown *pOutputPinUnknown,
            /* [in] */ IUnknown *pInputPinUnknown,
            /* [in] */ const BYTE *pMediaTypeData,
            /* [out][in] */ BOOL *pbDefault) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnReconnect( 
            /* [in] */ ISpy *pSpy,
            /* [in] */ IUnknown *pPinUnknown,
            /* [out][in] */ BOOL *pbDefault) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnDisconnect( 
            /* [in] */ ISpy *pSpy,
            /* [in] */ IUnknown *pPinUnknown,
            /* [out][in] */ BOOL *pbDefault) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnConnect( 
            /* [in] */ ISpy *pSpy,
            /* [in] */ IUnknown *pOutputPinUnknown,
            /* [in] */ IUnknown *pInputPinUnknown,
            /* [out][in] */ BOOL *pbDefault) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnReconnectEx( 
            /* [in] */ ISpy *pSpy,
            /* [in] */ IUnknown *pPinUnknown,
            /* [in] */ const BYTE *pMediaTypeData,
            /* [out][in] */ BOOL *pbDefault) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFilterGraphConnectHookVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFilterGraphConnectHook * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFilterGraphConnectHook * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFilterGraphConnectHook * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnConnectDirect )( 
            IFilterGraphConnectHook * This,
            /* [in] */ ISpy *pSpy,
            /* [in] */ IUnknown *pOutputPinUnknown,
            /* [in] */ IUnknown *pInputPinUnknown,
            /* [in] */ const BYTE *pMediaTypeData,
            /* [out][in] */ BOOL *pbDefault);
        
        HRESULT ( STDMETHODCALLTYPE *OnReconnect )( 
            IFilterGraphConnectHook * This,
            /* [in] */ ISpy *pSpy,
            /* [in] */ IUnknown *pPinUnknown,
            /* [out][in] */ BOOL *pbDefault);
        
        HRESULT ( STDMETHODCALLTYPE *OnDisconnect )( 
            IFilterGraphConnectHook * This,
            /* [in] */ ISpy *pSpy,
            /* [in] */ IUnknown *pPinUnknown,
            /* [out][in] */ BOOL *pbDefault);
        
        HRESULT ( STDMETHODCALLTYPE *OnConnect )( 
            IFilterGraphConnectHook * This,
            /* [in] */ ISpy *pSpy,
            /* [in] */ IUnknown *pOutputPinUnknown,
            /* [in] */ IUnknown *pInputPinUnknown,
            /* [out][in] */ BOOL *pbDefault);
        
        HRESULT ( STDMETHODCALLTYPE *OnReconnectEx )( 
            IFilterGraphConnectHook * This,
            /* [in] */ ISpy *pSpy,
            /* [in] */ IUnknown *pPinUnknown,
            /* [in] */ const BYTE *pMediaTypeData,
            /* [out][in] */ BOOL *pbDefault);
        
        END_INTERFACE
    } IFilterGraphConnectHookVtbl;

    interface IFilterGraphConnectHook
    {
        CONST_VTBL struct IFilterGraphConnectHookVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFilterGraphConnectHook_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFilterGraphConnectHook_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFilterGraphConnectHook_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFilterGraphConnectHook_OnConnectDirect(This,pSpy,pOutputPinUnknown,pInputPinUnknown,pMediaTypeData,pbDefault)	\
    ( (This)->lpVtbl -> OnConnectDirect(This,pSpy,pOutputPinUnknown,pInputPinUnknown,pMediaTypeData,pbDefault) ) 

#define IFilterGraphConnectHook_OnReconnect(This,pSpy,pPinUnknown,pbDefault)	\
    ( (This)->lpVtbl -> OnReconnect(This,pSpy,pPinUnknown,pbDefault) ) 

#define IFilterGraphConnectHook_OnDisconnect(This,pSpy,pPinUnknown,pbDefault)	\
    ( (This)->lpVtbl -> OnDisconnect(This,pSpy,pPinUnknown,pbDefault) ) 

#define IFilterGraphConnectHook_OnConnect(This,pSpy,pOutputPinUnknown,pInputPinUnknown,pbDefault)	\
    ( (This)->lpVtbl -> OnConnect(This,pSpy,pOutputPinUnknown,pInputPinUnknown,pbDefault) ) 

#define IFilterGraphConnectHook_OnReconnectEx(This,pSpy,pPinUnknown,pMediaTypeData,pbDefault)	\
    ( (This)->lpVtbl -> OnReconnectEx(This,pSpy,pPinUnknown,pMediaTypeData,pbDefault) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFilterGraphConnectHook_INTERFACE_DEFINED__ */


#ifndef __IFilterGraphStateControlHook_INTERFACE_DEFINED__
#define __IFilterGraphStateControlHook_INTERFACE_DEFINED__

/* interface IFilterGraphStateControlHook */
/* [unique][helpstring][nonextensible][uuid][object] */ 


EXTERN_C const IID IID_IFilterGraphStateControlHook;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("65FA1519-A935-4fa9-A15D-9426457E02F6")
    IFilterGraphStateControlHook : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnRun( 
            /* [in] */ ISpy *pSpy,
            /* [out][in] */ BOOL *pbDefault) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnPause( 
            /* [in] */ ISpy *pSpy,
            /* [out][in] */ BOOL *pbDefault) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnStop( 
            /* [in] */ ISpy *pSpy,
            /* [out][in] */ BOOL *pbDefault) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFilterGraphStateControlHookVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFilterGraphStateControlHook * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFilterGraphStateControlHook * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFilterGraphStateControlHook * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnRun )( 
            IFilterGraphStateControlHook * This,
            /* [in] */ ISpy *pSpy,
            /* [out][in] */ BOOL *pbDefault);
        
        HRESULT ( STDMETHODCALLTYPE *OnPause )( 
            IFilterGraphStateControlHook * This,
            /* [in] */ ISpy *pSpy,
            /* [out][in] */ BOOL *pbDefault);
        
        HRESULT ( STDMETHODCALLTYPE *OnStop )( 
            IFilterGraphStateControlHook * This,
            /* [in] */ ISpy *pSpy,
            /* [out][in] */ BOOL *pbDefault);
        
        END_INTERFACE
    } IFilterGraphStateControlHookVtbl;

    interface IFilterGraphStateControlHook
    {
        CONST_VTBL struct IFilterGraphStateControlHookVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFilterGraphStateControlHook_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFilterGraphStateControlHook_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFilterGraphStateControlHook_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFilterGraphStateControlHook_OnRun(This,pSpy,pbDefault)	\
    ( (This)->lpVtbl -> OnRun(This,pSpy,pbDefault) ) 

#define IFilterGraphStateControlHook_OnPause(This,pSpy,pbDefault)	\
    ( (This)->lpVtbl -> OnPause(This,pSpy,pbDefault) ) 

#define IFilterGraphStateControlHook_OnStop(This,pSpy,pbDefault)	\
    ( (This)->lpVtbl -> OnStop(This,pSpy,pbDefault) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFilterGraphStateControlHook_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_Spy;

#ifdef __cplusplus

class DECLSPEC_UUID("F552C23D-F088-41C3-A080-8464D7BB9BAD")
Spy;
#endif

EXTERN_C const CLSID CLSID_NoThreadSpy;

#ifdef __cplusplus

class DECLSPEC_UUID("2C281C40-8853-4a30-99D3-9DCFF2C015C9")
NoThreadSpy;
#endif

EXTERN_C const CLSID CLSID_FilterMapperSpy;

#ifdef __cplusplus

class DECLSPEC_UUID("B6274D9B-1AD3-4c32-83C5-35DC33CAFF47")
FilterMapperSpy;
#endif

EXTERN_C const CLSID CLSID_SystemDeviceEnumeratorSpy;

#ifdef __cplusplus

class DECLSPEC_UUID("AD42E3BD-7B9B-4783-9DA2-61A9ACD0D4D2")
SystemDeviceEnumeratorSpy;
#endif

EXTERN_C const CLSID CLSID_FilterGraphHelper;

#ifdef __cplusplus

class DECLSPEC_UUID("5A9A684C-A891-4032-8D31-FF6EAB5A0C1E")
FilterGraphHelper;
#endif

#ifndef __IRunPropertyBagAware_INTERFACE_DEFINED__
#define __IRunPropertyBagAware_INTERFACE_DEFINED__

/* interface IRunPropertyBagAware */
/* [unique][helpstring][nonextensible][uuid][object] */ 


EXTERN_C const IID IID_IRunPropertyBagAware;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E267813C-8F29-4D69-A776-CD462494FCE4")
    IRunPropertyBagAware : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Value( 
            /* [retval][out] */ IUnknown **ppPropertyBagUnknown) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IRunPropertyBagAwareVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRunPropertyBagAware * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRunPropertyBagAware * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRunPropertyBagAware * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IRunPropertyBagAware * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IRunPropertyBagAware * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IRunPropertyBagAware * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IRunPropertyBagAware * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )( 
            IRunPropertyBagAware * This,
            /* [retval][out] */ IUnknown **ppPropertyBagUnknown);
        
        END_INTERFACE
    } IRunPropertyBagAwareVtbl;

    interface IRunPropertyBagAware
    {
        CONST_VTBL struct IRunPropertyBagAwareVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRunPropertyBagAware_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRunPropertyBagAware_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRunPropertyBagAware_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRunPropertyBagAware_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IRunPropertyBagAware_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IRunPropertyBagAware_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IRunPropertyBagAware_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IRunPropertyBagAware_get_Value(This,ppPropertyBagUnknown)	\
    ( (This)->lpVtbl -> get_Value(This,ppPropertyBagUnknown) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRunPropertyBagAware_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_RunPropertyBagPropertyPage;

#ifdef __cplusplus

class DECLSPEC_UUID("76127943-D22E-4C4E-9D9B-173C224D0EE4")
RunPropertyBagPropertyPage;
#endif
#endif /* __AlaxInfoDirectShowSpy_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


