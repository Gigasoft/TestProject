

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IRibbonCallback,0x49524DC5,0x0E4B,0x4FA9,0xBF,0xC9,0xD8,0x1C,0xF2,0xCC,0x06,0x7A);


MIDL_DEFINE_GUID(IID, IID_ITextAddin,0xCD978908,0x4438,0x44B8,0x90,0x01,0xEF,0xE0,0x2E,0x4C,0xDD,0xFE);


MIDL_DEFINE_GUID(IID, LIBID_TestFormRegionLib,0x9E915A4A,0x24EB,0x4F44,0xA4,0x88,0x25,0x34,0x1C,0xD8,0x5D,0xA3);


MIDL_DEFINE_GUID(CLSID, CLSID_TextAddin,0x284C2B88,0xB83F,0x4941,0x89,0xF0,0x66,0x00,0x59,0x69,0xAA,0xEB);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



