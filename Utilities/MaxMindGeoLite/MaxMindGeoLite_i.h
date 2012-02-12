

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Sun Feb 12 12:28:00 2012
 */
/* Compiler settings for MaxMindGeoLite.idl:
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

#ifndef __MaxMindGeoLite_i_h__
#define __MaxMindGeoLite_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ILocation_FWD_DEFINED__
#define __ILocation_FWD_DEFINED__
typedef interface ILocation ILocation;
#endif 	/* __ILocation_FWD_DEFINED__ */


#ifndef __ILocations_FWD_DEFINED__
#define __ILocations_FWD_DEFINED__
typedef interface ILocations ILocations;
#endif 	/* __ILocations_FWD_DEFINED__ */


#ifndef __ILazyLocations_FWD_DEFINED__
#define __ILazyLocations_FWD_DEFINED__
typedef interface ILazyLocations ILazyLocations;
#endif 	/* __ILazyLocations_FWD_DEFINED__ */


#ifndef __Location_FWD_DEFINED__
#define __Location_FWD_DEFINED__

#ifdef __cplusplus
typedef class Location Location;
#else
typedef struct Location Location;
#endif /* __cplusplus */

#endif 	/* __Location_FWD_DEFINED__ */


#ifndef __Locations_FWD_DEFINED__
#define __Locations_FWD_DEFINED__

#ifdef __cplusplus
typedef class Locations Locations;
#else
typedef struct Locations Locations;
#endif /* __cplusplus */

#endif 	/* __Locations_FWD_DEFINED__ */


#ifndef __LazyLocations_FWD_DEFINED__
#define __LazyLocations_FWD_DEFINED__

#ifdef __cplusplus
typedef class LazyLocations LazyLocations;
#else
typedef struct LazyLocations LazyLocations;
#endif /* __cplusplus */

#endif 	/* __LazyLocations_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __ILocation_INTERFACE_DEFINED__
#define __ILocation_INTERFACE_DEFINED__

/* interface ILocation */
/* [unique][helpstring][oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_ILocation;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3C3125E8-60D6-4703-B7B4-7A024CEA2F05")
    ILocation : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Country( 
            /* [retval][out] */ BSTR *psCountry) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Region( 
            /* [retval][out] */ BSTR *psRegion) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_City( 
            /* [retval][out] */ BSTR *psCity) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_PostalCode( 
            /* [retval][out] */ BSTR *psPostalCode) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Latitude( 
            /* [retval][out] */ DOUBLE *pfLatitude) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Longitude( 
            /* [retval][out] */ DOUBLE *pfLongitude) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MetroCode( 
            /* [retval][out] */ BSTR *psMetroCode) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AreaCode( 
            /* [retval][out] */ BSTR *psAreaCode) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ILocationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ILocation * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ILocation * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ILocation * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ILocation * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ILocation * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ILocation * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ILocation * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Country )( 
            ILocation * This,
            /* [retval][out] */ BSTR *psCountry);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Region )( 
            ILocation * This,
            /* [retval][out] */ BSTR *psRegion);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_City )( 
            ILocation * This,
            /* [retval][out] */ BSTR *psCity);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PostalCode )( 
            ILocation * This,
            /* [retval][out] */ BSTR *psPostalCode);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Latitude )( 
            ILocation * This,
            /* [retval][out] */ DOUBLE *pfLatitude);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Longitude )( 
            ILocation * This,
            /* [retval][out] */ DOUBLE *pfLongitude);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetroCode )( 
            ILocation * This,
            /* [retval][out] */ BSTR *psMetroCode);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AreaCode )( 
            ILocation * This,
            /* [retval][out] */ BSTR *psAreaCode);
        
        END_INTERFACE
    } ILocationVtbl;

    interface ILocation
    {
        CONST_VTBL struct ILocationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILocation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILocation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILocation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILocation_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ILocation_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ILocation_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ILocation_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ILocation_get_Country(This,psCountry)	\
    ( (This)->lpVtbl -> get_Country(This,psCountry) ) 

#define ILocation_get_Region(This,psRegion)	\
    ( (This)->lpVtbl -> get_Region(This,psRegion) ) 

#define ILocation_get_City(This,psCity)	\
    ( (This)->lpVtbl -> get_City(This,psCity) ) 

#define ILocation_get_PostalCode(This,psPostalCode)	\
    ( (This)->lpVtbl -> get_PostalCode(This,psPostalCode) ) 

#define ILocation_get_Latitude(This,pfLatitude)	\
    ( (This)->lpVtbl -> get_Latitude(This,pfLatitude) ) 

#define ILocation_get_Longitude(This,pfLongitude)	\
    ( (This)->lpVtbl -> get_Longitude(This,pfLongitude) ) 

#define ILocation_get_MetroCode(This,psMetroCode)	\
    ( (This)->lpVtbl -> get_MetroCode(This,psMetroCode) ) 

#define ILocation_get_AreaCode(This,psAreaCode)	\
    ( (This)->lpVtbl -> get_AreaCode(This,psAreaCode) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILocation_INTERFACE_DEFINED__ */


#ifndef __ILocations_INTERFACE_DEFINED__
#define __ILocations_INTERFACE_DEFINED__

/* interface ILocations */
/* [unique][helpstring][oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_ILocations;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B6E2FBEB-1AC2-424B-B2DA-FF6398ADCF0C")
    ILocations : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ VARIANT vIndex,
            /* [retval][out] */ ILocation **ppLocation) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ILocationsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ILocations * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ILocations * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ILocations * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ILocations * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ILocations * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ILocations * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ILocations * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ILocations * This,
            /* [in] */ VARIANT vIndex,
            /* [retval][out] */ ILocation **ppLocation);
        
        END_INTERFACE
    } ILocationsVtbl;

    interface ILocations
    {
        CONST_VTBL struct ILocationsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILocations_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILocations_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILocations_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILocations_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ILocations_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ILocations_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ILocations_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ILocations_get_Item(This,vIndex,ppLocation)	\
    ( (This)->lpVtbl -> get_Item(This,vIndex,ppLocation) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILocations_INTERFACE_DEFINED__ */


#ifndef __ILazyLocations_INTERFACE_DEFINED__
#define __ILazyLocations_INTERFACE_DEFINED__

/* interface ILazyLocations */
/* [unique][helpstring][oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_ILazyLocations;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("34BF53BB-D4C8-4002-A0EC-5BA70FE7ACA3")
    ILazyLocations : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Initialized( 
            /* [retval][out] */ VARIANT_BOOL *pbInitialized) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ILazyLocationsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ILazyLocations * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ILazyLocations * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ILazyLocations * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ILazyLocations * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ILazyLocations * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ILazyLocations * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ILazyLocations * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Initialized )( 
            ILazyLocations * This,
            /* [retval][out] */ VARIANT_BOOL *pbInitialized);
        
        END_INTERFACE
    } ILazyLocationsVtbl;

    interface ILazyLocations
    {
        CONST_VTBL struct ILazyLocationsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILazyLocations_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILazyLocations_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILazyLocations_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILazyLocations_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ILazyLocations_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ILazyLocations_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ILazyLocations_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ILazyLocations_get_Initialized(This,pbInitialized)	\
    ( (This)->lpVtbl -> get_Initialized(This,pbInitialized) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILazyLocations_INTERFACE_DEFINED__ */



#ifndef __AlaxInfoMaxMindGeoLite_LIBRARY_DEFINED__
#define __AlaxInfoMaxMindGeoLite_LIBRARY_DEFINED__

/* library AlaxInfoMaxMindGeoLite */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_AlaxInfoMaxMindGeoLite;

EXTERN_C const CLSID CLSID_Location;

#ifdef __cplusplus

class DECLSPEC_UUID("E4758497-363F-467D-BE04-C2222748C7E6")
Location;
#endif

EXTERN_C const CLSID CLSID_Locations;

#ifdef __cplusplus

class DECLSPEC_UUID("350EBCB9-942A-4D11-9192-54AA6230F7BF")
Locations;
#endif

EXTERN_C const CLSID CLSID_LazyLocations;

#ifdef __cplusplus

class DECLSPEC_UUID("29752330-E1FB-43D0-ADBF-21AF77633259")
LazyLocations;
#endif
#endif /* __AlaxInfoMaxMindGeoLite_LIBRARY_DEFINED__ */

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


