

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Tue Aug 07 15:50:51 2018
 */
/* Compiler settings for TestFormRegion.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
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

#ifndef __TestFormRegion_i_h__
#define __TestFormRegion_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IRibbonCallback_FWD_DEFINED__
#define __IRibbonCallback_FWD_DEFINED__
typedef interface IRibbonCallback IRibbonCallback;

#endif 	/* __IRibbonCallback_FWD_DEFINED__ */


#ifndef __ITextAddin_FWD_DEFINED__
#define __ITextAddin_FWD_DEFINED__
typedef interface ITextAddin ITextAddin;

#endif 	/* __ITextAddin_FWD_DEFINED__ */


#ifndef __TextAddin_FWD_DEFINED__
#define __TextAddin_FWD_DEFINED__

#ifdef __cplusplus
typedef class TextAddin TextAddin;
#else
typedef struct TextAddin TextAddin;
#endif /* __cplusplus */

#endif 	/* __TextAddin_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IRibbonCallback_INTERFACE_DEFINED__
#define __IRibbonCallback_INTERFACE_DEFINED__

/* interface IRibbonCallback */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IRibbonCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("49524DC5-0E4B-4FA9-BFC9-D81CF2CC067A")
    IRibbonCallback : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnLoad( 
            /* [in] */ IDispatch *spDispRibbonUI) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ButtonClicked( 
            /* [in] */ IDispatch *RibbonControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetImage( 
            /* [in] */ IDispatch *RibbonControl,
            /* [retval][out] */ IDispatch **ppdispImage) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetEnabled( 
            /* [in] */ IDispatch *RibbonControl,
            /* [retval][out] */ VARIANT_BOOL *pvarfEnabled) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetText( 
            /* [in] */ IDispatch *RibbonControl,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CheckboxClicked( 
            /* [in] */ IDispatch *RibbonControl,
            /* [in] */ VARIANT_BOOL state) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetCheckboxState( 
            /* [in] */ IDispatch *RibbonControl,
            /* [retval][out] */ VARIANT_BOOL *pvarfState) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRibbonCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRibbonCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRibbonCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRibbonCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IRibbonCallback * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IRibbonCallback * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IRibbonCallback * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IRibbonCallback * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnLoad )( 
            IRibbonCallback * This,
            /* [in] */ IDispatch *spDispRibbonUI);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ButtonClicked )( 
            IRibbonCallback * This,
            /* [in] */ IDispatch *RibbonControl);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetImage )( 
            IRibbonCallback * This,
            /* [in] */ IDispatch *RibbonControl,
            /* [retval][out] */ IDispatch **ppdispImage);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetEnabled )( 
            IRibbonCallback * This,
            /* [in] */ IDispatch *RibbonControl,
            /* [retval][out] */ VARIANT_BOOL *pvarfEnabled);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetText )( 
            IRibbonCallback * This,
            /* [in] */ IDispatch *RibbonControl,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CheckboxClicked )( 
            IRibbonCallback * This,
            /* [in] */ IDispatch *RibbonControl,
            /* [in] */ VARIANT_BOOL state);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetCheckboxState )( 
            IRibbonCallback * This,
            /* [in] */ IDispatch *RibbonControl,
            /* [retval][out] */ VARIANT_BOOL *pvarfState);
        
        END_INTERFACE
    } IRibbonCallbackVtbl;

    interface IRibbonCallback
    {
        CONST_VTBL struct IRibbonCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRibbonCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRibbonCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRibbonCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRibbonCallback_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IRibbonCallback_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IRibbonCallback_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IRibbonCallback_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IRibbonCallback_OnLoad(This,spDispRibbonUI)	\
    ( (This)->lpVtbl -> OnLoad(This,spDispRibbonUI) ) 

#define IRibbonCallback_ButtonClicked(This,RibbonControl)	\
    ( (This)->lpVtbl -> ButtonClicked(This,RibbonControl) ) 

#define IRibbonCallback_GetImage(This,RibbonControl,ppdispImage)	\
    ( (This)->lpVtbl -> GetImage(This,RibbonControl,ppdispImage) ) 

#define IRibbonCallback_GetEnabled(This,RibbonControl,pvarfEnabled)	\
    ( (This)->lpVtbl -> GetEnabled(This,RibbonControl,pvarfEnabled) ) 

#define IRibbonCallback_GetText(This,RibbonControl,pVal)	\
    ( (This)->lpVtbl -> GetText(This,RibbonControl,pVal) ) 

#define IRibbonCallback_CheckboxClicked(This,RibbonControl,state)	\
    ( (This)->lpVtbl -> CheckboxClicked(This,RibbonControl,state) ) 

#define IRibbonCallback_GetCheckboxState(This,RibbonControl,pvarfState)	\
    ( (This)->lpVtbl -> GetCheckboxState(This,RibbonControl,pvarfState) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRibbonCallback_INTERFACE_DEFINED__ */


#ifndef __ITextAddin_INTERFACE_DEFINED__
#define __ITextAddin_INTERFACE_DEFINED__

/* interface ITextAddin */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ITextAddin;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CD978908-4438-44B8-9001-EFE02E4CDDFE")
    ITextAddin : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct ITextAddinVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITextAddin * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITextAddin * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITextAddin * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITextAddin * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITextAddin * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITextAddin * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITextAddin * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } ITextAddinVtbl;

    interface ITextAddin
    {
        CONST_VTBL struct ITextAddinVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITextAddin_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITextAddin_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITextAddin_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITextAddin_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITextAddin_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITextAddin_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITextAddin_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITextAddin_INTERFACE_DEFINED__ */



#ifndef __TestFormRegionLib_LIBRARY_DEFINED__
#define __TestFormRegionLib_LIBRARY_DEFINED__

/* library TestFormRegionLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_TestFormRegionLib;

EXTERN_C const CLSID CLSID_TextAddin;

#ifdef __cplusplus

class DECLSPEC_UUID("284C2B88-B83F-4941-89F0-66005969AAEB")
TextAddin;
#endif
#endif /* __TestFormRegionLib_LIBRARY_DEFINED__ */

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


