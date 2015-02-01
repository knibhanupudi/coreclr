//
// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information. 
//



/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.00.0603 */
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

MIDL_DEFINE_GUID(IID, IID_IHistoryAssembly,0xe6096a07,0xe188,0x4a49,0x8d,0x50,0x2a,0x01,0x72,0xa0,0xd2,0x05);


MIDL_DEFINE_GUID(IID, IID_IHistoryReader,0x1d23df4d,0xa1e2,0x4b8b,0x93,0xd6,0x6e,0xa3,0xdc,0x28,0x5a,0x54);


MIDL_DEFINE_GUID(IID, IID_IFusionBindLog,0x67E9F87D,0x8B8A,0x4a90,0x9D,0x3E,0x85,0xED,0x5B,0x2D,0xCC,0x83);


MIDL_DEFINE_GUID(IID, IID_IAssemblyManifestImport,0xde9a68ba,0x0fa2,0x11d3,0x94,0xaa,0x00,0xc0,0x4f,0xc3,0x08,0xff);


MIDL_DEFINE_GUID(IID, IID_IApplicationContext,0x7c23ff90,0x33af,0x11d3,0x95,0xda,0x00,0xa0,0x24,0xa8,0x5b,0x51);


MIDL_DEFINE_GUID(IID, IID_IAssemblyNameBinder,0x56972d9d,0x0f6c,0x47de,0xa0,0x38,0xe8,0x2d,0x5d,0xe3,0xa7,0x77);


MIDL_DEFINE_GUID(IID, IID_IAssembly,0xff08d7d4,0x04c2,0x11d3,0x94,0xaa,0x00,0xc0,0x4f,0xc3,0x08,0xff);


MIDL_DEFINE_GUID(IID, IID_IAssemblyBindingClosureEnumerator,0xb3f1e4ed,0xcb09,0x4b85,0x9a,0x1b,0x68,0x09,0x58,0x2f,0x1e,0xbc);


MIDL_DEFINE_GUID(IID, IID_IAssemblyBindingClosure,0x415c226a,0xe513,0x41ba,0x96,0x51,0x9c,0x48,0xe9,0x7a,0xa5,0xde);


MIDL_DEFINE_GUID(IID, IID_IAssemblyBindSink,0xaf0bc960,0x0b9a,0x11d3,0x95,0xca,0x00,0xa0,0x24,0xa8,0x5b,0x51);


MIDL_DEFINE_GUID(IID, IID_IAssemblyBinding,0xcfe52a80,0x12bd,0x11d3,0x95,0xca,0x00,0xa0,0x24,0xa8,0x5b,0x51);


MIDL_DEFINE_GUID(IID, IID_IAssemblyModuleImport,0xda0cd4b0,0x1117,0x11d3,0x95,0xca,0x00,0xa0,0x24,0xa8,0x5b,0x51);


MIDL_DEFINE_GUID(IID, IID_IAssemblyScavenger,0x21b8916c,0xf28e,0x11d2,0xa4,0x73,0x00,0xcc,0xff,0x8e,0xf4,0x48);


MIDL_DEFINE_GUID(IID, IID_ICodebaseList,0xD8FB9BD6,0x3969,0x11d3,0xB4,0xAF,0x00,0xC0,0x4F,0x8E,0xCB,0x26);


MIDL_DEFINE_GUID(IID, IID_IDownloadMgr,0x0A6F16F8,0xACD7,0x11d3,0xB4,0xED,0x00,0xC0,0x4F,0x8E,0xCB,0x26);


MIDL_DEFINE_GUID(IID, IID_IHostAssembly,0x711f7c2d,0x8234,0x4505,0xb0,0x2f,0x75,0x54,0xf4,0x6c,0xbf,0x29);


MIDL_DEFINE_GUID(IID, IID_IHostAssemblyModuleImport,0xb6f2729d,0x6c0f,0x4944,0xb6,0x92,0xe5,0xa2,0xce,0x2c,0x6e,0x7a);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif


