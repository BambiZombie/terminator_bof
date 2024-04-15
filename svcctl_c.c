

/* this ALWAYS GENERATED file contains the RPC client stubs */


 /* File created by MIDL compiler version 8.01.0626 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for svcctl.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0626 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_M_AMD64)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/

#include <string.h>

#include "svcctl_h.h"

#define TYPE_FORMAT_STRING_SIZE   3467                              
#define PROC_FORMAT_STRING_SIZE   3691                              
#define EXPR_FORMAT_STRING_SIZE   41                                
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _svcctl_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } svcctl_MIDL_TYPE_FORMAT_STRING;

typedef struct _svcctl_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } svcctl_MIDL_PROC_FORMAT_STRING;

typedef struct _svcctl_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } svcctl_MIDL_EXPR_FORMAT_STRING;


const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

#if defined(_CONTROL_FLOW_GUARD_XFG)
#define XFG_TRAMPOLINES(ObjectType)\
NDR_SHAREABLE unsigned long ObjectType ## _UserSize_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize(pFlags, Offset, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserMarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserUnmarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE void ObjectType ## _UserFree_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree(pFlags, (ObjectType *)pObject);\
}
#define XFG_TRAMPOLINES64(ObjectType)\
NDR_SHAREABLE unsigned long ObjectType ## _UserSize64_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize64(pFlags, Offset, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserMarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal64(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserUnmarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal64(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE void ObjectType ## _UserFree64_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree64(pFlags, (ObjectType *)pObject);\
}
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)\
static void* ObjectType ## _bind_XFG(HandleType pObject)\
{\
return ObjectType ## _bind((ObjectType) pObject);\
}\
static void ObjectType ## _unbind_XFG(HandleType pObject, handle_t ServerHandle)\
{\
ObjectType ## _unbind((ObjectType) pObject, ServerHandle);\
}
#define XFG_TRAMPOLINE_FPTR(Function) Function ## _XFG
#define XFG_TRAMPOLINE_FPTR_DEPENDENT_SYMBOL(Symbol) Symbol ## _XFG
#else
#define XFG_TRAMPOLINES(ObjectType)
#define XFG_TRAMPOLINES64(ObjectType)
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)
#define XFG_TRAMPOLINE_FPTR(Function) Function
#define XFG_TRAMPOLINE_FPTR_DEPENDENT_SYMBOL(Symbol) Symbol
#endif

extern const svcctl_MIDL_TYPE_FORMAT_STRING svcctl__MIDL_TypeFormatString;
extern const svcctl_MIDL_PROC_FORMAT_STRING svcctl__MIDL_ProcFormatString;
extern const svcctl_MIDL_EXPR_FORMAT_STRING svcctl__MIDL_ExprFormatString;

#define GENERIC_BINDING_TABLE_SIZE   2            


/* Standard interface: svcctl, ver. 2.0,
   GUID={0x367ABB81,0x9844,0x35F1,{0xAD,0x32,0x98,0xF0,0x38,0x00,0x10,0x03}} */



//const RPC_CLIENT_INTERFACE svcctl___RpcClientInterface =
//    {
//    sizeof(RPC_CLIENT_INTERFACE),
//    {{0x367ABB81,0x9844,0x35F1,{0xAD,0x32,0x98,0xF0,0x38,0x00,0x10,0x03}},{2,0}},
//    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
//    0,
//    0,
//    0,
//    0,
//    0,
//    0x00000000
//    };
//RPC_IF_HANDLE svcctl_v2_0_c_ifspec = (RPC_IF_HANDLE)& svcctl___RpcClientInterface;
//
//extern const MIDL_STUB_DESC svcctl_StubDesc;
//
//RPC_BINDING_HANDLE svcctl__MIDL_AutoBindHandle;

/* Standard interface: __MIDL_itf_svcctl_0000_0001, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */

extern const GENERIC_BINDING_ROUTINE_PAIR BindingRoutines[ GENERIC_BINDING_TABLE_SIZE ];

#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const svcctl_MIDL_PROC_FORMAT_STRING svcctl__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure RCloseServiceHandle */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* Ctxt flags:  via ptr, in, out, */
/* 12 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 14 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 16 */	NdrFcShort( 0x38 ),	/* 56 */
/* 18 */	NdrFcShort( 0x40 ),	/* 64 */
/* 20 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 22 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */
/* 26 */	NdrFcShort( 0x0 ),	/* 0 */
/* 28 */	NdrFcShort( 0x0 ),	/* 0 */
/* 30 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSCObject */

/* 32 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 34 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 36 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Return value */

/* 38 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 40 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 42 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RControlService */

/* 44 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 46 */	NdrFcLong( 0x0 ),	/* 0 */
/* 50 */	NdrFcShort( 0x1 ),	/* 1 */
/* 52 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 54 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 56 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 58 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 60 */	NdrFcShort( 0x2c ),	/* 44 */
/* 62 */	NdrFcShort( 0x48 ),	/* 72 */
/* 64 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 66 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 68 */	NdrFcShort( 0x0 ),	/* 0 */
/* 70 */	NdrFcShort( 0x0 ),	/* 0 */
/* 72 */	NdrFcShort( 0x0 ),	/* 0 */
/* 74 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hService */

/* 76 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 78 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 80 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter dwControl */

/* 82 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 84 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 86 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpServiceStatus */

/* 88 */	NdrFcShort( 0x8112 ),	/* Flags:  must free, out, simple ref, srv alloc size=32 */
/* 90 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 92 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Return value */

/* 94 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 96 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 98 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RDeleteService */

/* 100 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 102 */	NdrFcLong( 0x0 ),	/* 0 */
/* 106 */	NdrFcShort( 0x2 ),	/* 2 */
/* 108 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 110 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 112 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 114 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 116 */	NdrFcShort( 0x24 ),	/* 36 */
/* 118 */	NdrFcShort( 0x8 ),	/* 8 */
/* 120 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 122 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 130 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hService */

/* 132 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 134 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 136 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Return value */

/* 138 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 140 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RLockServiceDatabase */

/* 144 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 146 */	NdrFcLong( 0x0 ),	/* 0 */
/* 150 */	NdrFcShort( 0x3 ),	/* 3 */
/* 152 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 154 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 156 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 158 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 160 */	NdrFcShort( 0x24 ),	/* 36 */
/* 162 */	NdrFcShort( 0x40 ),	/* 64 */
/* 164 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 166 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 174 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSCManager */

/* 176 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 178 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 180 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter lpLock */

/* 182 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 184 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 186 */	NdrFcShort( 0x22 ),	/* Type Offset=34 */

	/* Return value */

/* 188 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 190 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 192 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RQueryServiceObjectSecurity */

/* 194 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 196 */	NdrFcLong( 0x0 ),	/* 0 */
/* 200 */	NdrFcShort( 0x4 ),	/* 4 */
/* 202 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 204 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 206 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 208 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 210 */	NdrFcShort( 0x34 ),	/* 52 */
/* 212 */	NdrFcShort( 0x24 ),	/* 36 */
/* 214 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 216 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 218 */	NdrFcShort( 0x1 ),	/* 1 */
/* 220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 224 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hService */

/* 226 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 228 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 230 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter dwSecurityInformation */

/* 232 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 234 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 236 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpSecurityDescriptor */

/* 238 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 240 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 242 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Parameter cbBufSize */

/* 244 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 246 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 248 */	NdrFcShort( 0x40 ),	/* 64 */

	/* Parameter pcbBytesNeeded */

/* 250 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 252 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 254 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 256 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 258 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 260 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RSetServiceObjectSecurity */

/* 262 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 264 */	NdrFcLong( 0x0 ),	/* 0 */
/* 268 */	NdrFcShort( 0x5 ),	/* 5 */
/* 270 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 272 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 274 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 276 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 278 */	NdrFcShort( 0x34 ),	/* 52 */
/* 280 */	NdrFcShort( 0x8 ),	/* 8 */
/* 282 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 284 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 288 */	NdrFcShort( 0x1 ),	/* 1 */
/* 290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 292 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hService */

/* 294 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 296 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 298 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter dwSecurityInformation */

/* 300 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 302 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 304 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpSecurityDescriptor */

/* 306 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 308 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 310 */	NdrFcShort( 0x5c ),	/* Type Offset=92 */

	/* Parameter cbBufSize */

/* 312 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 314 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 316 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 318 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 320 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 322 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RQueryServiceStatus */

/* 324 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 326 */	NdrFcLong( 0x0 ),	/* 0 */
/* 330 */	NdrFcShort( 0x6 ),	/* 6 */
/* 332 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 334 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 336 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 338 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 340 */	NdrFcShort( 0x24 ),	/* 36 */
/* 342 */	NdrFcShort( 0x48 ),	/* 72 */
/* 344 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 346 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 354 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hService */

/* 356 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 358 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 360 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter lpServiceStatus */

/* 362 */	NdrFcShort( 0x8112 ),	/* Flags:  must free, out, simple ref, srv alloc size=32 */
/* 364 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 366 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Return value */

/* 368 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 370 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 372 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RSetServiceStatus */

/* 374 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 376 */	NdrFcLong( 0x0 ),	/* 0 */
/* 380 */	NdrFcShort( 0x7 ),	/* 7 */
/* 382 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 384 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 386 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 388 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 390 */	NdrFcShort( 0x64 ),	/* 100 */
/* 392 */	NdrFcShort( 0x8 ),	/* 8 */
/* 394 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 396 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 404 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServiceStatus */

/* 406 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 408 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 410 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter lpServiceStatus */

/* 412 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 414 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 416 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Return value */

/* 418 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 420 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 422 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RUnlockServiceDatabase */

/* 424 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 426 */	NdrFcLong( 0x0 ),	/* 0 */
/* 430 */	NdrFcShort( 0x8 ),	/* 8 */
/* 432 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 434 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* Ctxt flags:  via ptr, in, out, */
/* 436 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 438 */	0x1,		/* 1 */
			0x0,		/* 0 */
/* 440 */	NdrFcShort( 0x38 ),	/* 56 */
/* 442 */	NdrFcShort( 0x40 ),	/* 64 */
/* 444 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 446 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 454 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Lock */

/* 456 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 458 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 460 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 462 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 464 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 466 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RNotifyBootConfigStatus */

/* 468 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 470 */	NdrFcLong( 0x0 ),	/* 0 */
/* 474 */	NdrFcShort( 0x9 ),	/* 9 */
/* 476 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 478 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 480 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 482 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 484 */	NdrFcShort( 0x8 ),	/* 8 */
/* 486 */	NdrFcShort( 0x8 ),	/* 8 */
/* 488 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 490 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 498 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lpMachineName */

/* 500 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 502 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 504 */	NdrFcShort( 0x7e ),	/* Type Offset=126 */

	/* Parameter BootAcceptable */

/* 506 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 508 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 510 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 512 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 514 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 516 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum10NotUsedOnWire */

/* 518 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 520 */	NdrFcLong( 0x0 ),	/* 0 */
/* 524 */	NdrFcShort( 0xa ),	/* 10 */
/* 526 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 528 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 530 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 536 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 538 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 546 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RChangeServiceConfigW */

/* 548 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 550 */	NdrFcLong( 0x0 ),	/* 0 */
/* 554 */	NdrFcShort( 0xb ),	/* 11 */
/* 556 */	NdrFcShort( 0x70 ),	/* X64 Stack size/offset = 112 */
/* 558 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 560 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 562 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 564 */	NdrFcShort( 0x68 ),	/* 104 */
/* 566 */	NdrFcShort( 0x24 ),	/* 36 */
/* 568 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0xe,		/* 14 */
/* 570 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 574 */	NdrFcShort( 0x1 ),	/* 1 */
/* 576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 578 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hService */

/* 580 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 582 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 584 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter dwServiceType */

/* 586 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 588 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 590 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwStartType */

/* 592 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 594 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 596 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwErrorControl */

/* 598 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 600 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 602 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpBinaryPathName */

/* 604 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 606 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 608 */	NdrFcShort( 0x90 ),	/* Type Offset=144 */

	/* Parameter lpLoadOrderGroup */

/* 610 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 612 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 614 */	NdrFcShort( 0xa2 ),	/* Type Offset=162 */

	/* Parameter lpdwTagId */

/* 616 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 618 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 620 */	NdrFcShort( 0xb4 ),	/* Type Offset=180 */

	/* Parameter lpDependencies */

/* 622 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 624 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 626 */	NdrFcShort( 0xb8 ),	/* Type Offset=184 */

	/* Parameter dwDependSize */

/* 628 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 630 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 632 */	NdrFcShort( 0xd2 ),	/* 210 */

	/* Parameter lpServiceStartName */

/* 634 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 636 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 638 */	NdrFcShort( 0xdc ),	/* Type Offset=220 */

	/* Parameter lpPassword */

/* 640 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 642 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 644 */	NdrFcShort( 0xee ),	/* Type Offset=238 */

	/* Parameter dwPwSize */

/* 646 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 648 */	NdrFcShort( 0x58 ),	/* X64 Stack size/offset = 88 */
/* 650 */	NdrFcShort( 0x108 ),	/* 264 */

	/* Parameter lpDisplayName */

/* 652 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 654 */	NdrFcShort( 0x60 ),	/* X64 Stack size/offset = 96 */
/* 656 */	NdrFcShort( 0x112 ),	/* Type Offset=274 */

	/* Return value */

/* 658 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 660 */	NdrFcShort( 0x68 ),	/* X64 Stack size/offset = 104 */
/* 662 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RCreateServiceW */

/* 664 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 666 */	NdrFcLong( 0x0 ),	/* 0 */
/* 670 */	NdrFcShort( 0xc ),	/* 12 */
/* 672 */	NdrFcShort( 0x88 ),	/* X64 Stack size/offset = 136 */
/* 674 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 676 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 678 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 680 */	NdrFcShort( 0x70 ),	/* 112 */
/* 682 */	NdrFcShort( 0x5c ),	/* 92 */
/* 684 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x11,		/* 17 */
/* 686 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 690 */	NdrFcShort( 0x1 ),	/* 1 */
/* 692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 694 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSCManager */

/* 696 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 698 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 700 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter lpServiceName */

/* 702 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 704 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 706 */	NdrFcShort( 0x124 ),	/* Type Offset=292 */

	/* Parameter lpDisplayName */

/* 708 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 710 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 712 */	NdrFcShort( 0x136 ),	/* Type Offset=310 */

	/* Parameter dwDesiredAccess */

/* 714 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 716 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwServiceType */

/* 720 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 722 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 724 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwStartType */

/* 726 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 728 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 730 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwErrorControl */

/* 732 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 734 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpBinaryPathName */

/* 738 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 740 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 742 */	NdrFcShort( 0x148 ),	/* Type Offset=328 */

	/* Parameter lpLoadOrderGroup */

/* 744 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 746 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 748 */	NdrFcShort( 0x15a ),	/* Type Offset=346 */

	/* Parameter lpdwTagId */

/* 750 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 752 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 754 */	NdrFcShort( 0xb4 ),	/* Type Offset=180 */

	/* Parameter lpDependencies */

/* 756 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 758 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 760 */	NdrFcShort( 0x16c ),	/* Type Offset=364 */

	/* Parameter dwDependSize */

/* 762 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 764 */	NdrFcShort( 0x58 ),	/* X64 Stack size/offset = 88 */
/* 766 */	NdrFcShort( 0x186 ),	/* 390 */

	/* Parameter lpServiceStartName */

/* 768 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 770 */	NdrFcShort( 0x60 ),	/* X64 Stack size/offset = 96 */
/* 772 */	NdrFcShort( 0x190 ),	/* Type Offset=400 */

	/* Parameter lpPassword */

/* 774 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 776 */	NdrFcShort( 0x68 ),	/* X64 Stack size/offset = 104 */
/* 778 */	NdrFcShort( 0x1a2 ),	/* Type Offset=418 */

	/* Parameter dwPwSize */

/* 780 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 782 */	NdrFcShort( 0x70 ),	/* X64 Stack size/offset = 112 */
/* 784 */	NdrFcShort( 0x1bc ),	/* 444 */

	/* Parameter lpServiceHandle */

/* 786 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 788 */	NdrFcShort( 0x78 ),	/* X64 Stack size/offset = 120 */
/* 790 */	NdrFcShort( 0x1ca ),	/* Type Offset=458 */

	/* Return value */

/* 792 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 794 */	NdrFcShort( 0x80 ),	/* X64 Stack size/offset = 128 */
/* 796 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure REnumDependentServicesW */

/* 798 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 800 */	NdrFcLong( 0x0 ),	/* 0 */
/* 804 */	NdrFcShort( 0xd ),	/* 13 */
/* 806 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 808 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 810 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 812 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 814 */	NdrFcShort( 0x34 ),	/* 52 */
/* 816 */	NdrFcShort( 0x40 ),	/* 64 */
/* 818 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x7,		/* 7 */
/* 820 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 822 */	NdrFcShort( 0x1 ),	/* 1 */
/* 824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 828 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hService */

/* 830 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 832 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 834 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter dwServiceState */

/* 836 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 838 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 840 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpServices */

/* 842 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 844 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 846 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Parameter cbBufSize */

/* 848 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 850 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 852 */	NdrFcShort( 0x1ce ),	/* 462 */

	/* Parameter pcbBytesNeeded */

/* 854 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 856 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 858 */	NdrFcShort( 0x1dc ),	/* Type Offset=476 */

	/* Parameter lpServicesReturned */

/* 860 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 862 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 864 */	NdrFcShort( 0x1ea ),	/* Type Offset=490 */

	/* Return value */

/* 866 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 868 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 870 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure REnumServicesStatusW */

/* 872 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 874 */	NdrFcLong( 0x0 ),	/* 0 */
/* 878 */	NdrFcShort( 0xe ),	/* 14 */
/* 880 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 882 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 884 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 886 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 888 */	NdrFcShort( 0x58 ),	/* 88 */
/* 890 */	NdrFcShort( 0x5c ),	/* 92 */
/* 892 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x9,		/* 9 */
/* 894 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 896 */	NdrFcShort( 0x1 ),	/* 1 */
/* 898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 900 */	NdrFcShort( 0x0 ),	/* 0 */
/* 902 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSCManager */

/* 904 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 906 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 908 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter dwServiceType */

/* 910 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 912 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 914 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwServiceState */

/* 916 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 918 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 920 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpBuffer */

/* 922 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 924 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 926 */	NdrFcShort( 0x1f8 ),	/* Type Offset=504 */

	/* Parameter cbBufSize */

/* 928 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 930 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 932 */	NdrFcShort( 0x20e ),	/* 526 */

	/* Parameter pcbBytesNeeded */

/* 934 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 936 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 938 */	NdrFcShort( 0x21c ),	/* Type Offset=540 */

	/* Parameter lpServicesReturned */

/* 940 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 942 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 944 */	NdrFcShort( 0x22a ),	/* Type Offset=554 */

	/* Parameter lpResumeIndex */

/* 946 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 948 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 950 */	NdrFcShort( 0x234 ),	/* Type Offset=564 */

	/* Return value */

/* 952 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 954 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 956 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ROpenSCManagerW */

/* 958 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 960 */	NdrFcLong( 0x0 ),	/* 0 */
/* 964 */	NdrFcShort( 0xf ),	/* 15 */
/* 966 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 968 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 970 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 972 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 974 */	NdrFcShort( 0x8 ),	/* 8 */
/* 976 */	NdrFcShort( 0x40 ),	/* 64 */
/* 978 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 980 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 988 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lpMachineName */

/* 990 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 992 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 994 */	NdrFcShort( 0x242 ),	/* Type Offset=578 */

	/* Parameter lpDatabaseName */

/* 996 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 998 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1000 */	NdrFcShort( 0x254 ),	/* Type Offset=596 */

	/* Parameter dwDesiredAccess */

/* 1002 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1004 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1006 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpScHandle */

/* 1008 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 1010 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1012 */	NdrFcShort( 0x26a ),	/* Type Offset=618 */

	/* Return value */

/* 1014 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1016 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1018 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ROpenServiceW */

/* 1020 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1022 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1026 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1028 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1030 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1032 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1034 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1036 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1038 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1040 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1042 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1050 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSCManager */

/* 1052 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1054 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1056 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter lpServiceName */

/* 1058 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1060 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1062 */	NdrFcShort( 0x26e ),	/* Type Offset=622 */

	/* Parameter dwDesiredAccess */

/* 1064 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1066 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1068 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpServiceHandle */

/* 1070 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 1072 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1074 */	NdrFcShort( 0x1ca ),	/* Type Offset=458 */

	/* Return value */

/* 1076 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1078 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1080 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RQueryServiceConfigW */

/* 1082 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1084 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1088 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1090 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1092 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1094 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1096 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1098 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1100 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1102 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 1104 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1112 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hService */

/* 1114 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1116 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1118 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter lpServiceConfig */

/* 1120 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1122 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1124 */	NdrFcShort( 0x2ca ),	/* Type Offset=714 */

	/* Parameter cbBufSize */

/* 1126 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1128 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1130 */	NdrFcShort( 0x2f2 ),	/* 754 */

	/* Parameter pcbBytesNeeded */

/* 1132 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 1134 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1136 */	NdrFcShort( 0x300 ),	/* Type Offset=768 */

	/* Return value */

/* 1138 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1140 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RQueryServiceLockStatusW */

/* 1144 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1146 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1150 */	NdrFcShort( 0x12 ),	/* 18 */
/* 1152 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1154 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1156 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1158 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1160 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1162 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1164 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 1166 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1174 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSCManager */

/* 1176 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1178 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1180 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter lpLockStatus */

/* 1182 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 1184 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1186 */	NdrFcShort( 0x31c ),	/* Type Offset=796 */

	/* Parameter cbBufSize */

/* 1188 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1190 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1192 */	NdrFcShort( 0x32e ),	/* 814 */

	/* Parameter pcbBytesNeeded */

/* 1194 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 1196 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1198 */	NdrFcShort( 0x33c ),	/* Type Offset=828 */

	/* Return value */

/* 1200 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1202 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1204 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RStartServiceW */

/* 1206 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1208 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1212 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1214 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1216 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1218 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1220 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1222 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1224 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1226 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1228 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1232 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1236 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hService */

/* 1238 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1240 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1242 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter argc */

/* 1244 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1246 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1248 */	NdrFcShort( 0x346 ),	/* 838 */

	/* Parameter argv */

/* 1250 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1252 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1254 */	NdrFcShort( 0x350 ),	/* Type Offset=848 */

	/* Return value */

/* 1256 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1258 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1260 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RGetServiceDisplayNameW */

/* 1262 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1264 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1268 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1270 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1272 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1274 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1276 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1278 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1280 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1282 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1284 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1286 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1292 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSCManager */

/* 1294 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1296 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1298 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter lpServiceName */

/* 1300 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1302 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1304 */	NdrFcShort( 0x39a ),	/* Type Offset=922 */

	/* Parameter lpDisplayName */

/* 1306 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1308 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1310 */	NdrFcShort( 0x3b0 ),	/* Type Offset=944 */

	/* Parameter lpcchBuffer */

/* 1312 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 1314 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1316 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1318 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1320 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1322 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RGetServiceKeyNameW */

/* 1324 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1326 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1330 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1332 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1334 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1336 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1338 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1340 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1342 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1344 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1346 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1348 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1354 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSCManager */

/* 1356 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1358 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1360 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter lpDisplayName */

/* 1362 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1364 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1366 */	NdrFcShort( 0x3c6 ),	/* Type Offset=966 */

	/* Parameter lpServiceName */

/* 1368 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1370 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1372 */	NdrFcShort( 0x3dc ),	/* Type Offset=988 */

	/* Parameter lpcchBuffer */

/* 1374 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 1376 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1378 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1380 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1382 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1384 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum22NotUsedOnWire */

/* 1386 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1388 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1392 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1394 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1396 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1398 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1404 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1406 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1414 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RChangeServiceConfigA */

/* 1416 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1418 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1422 */	NdrFcShort( 0x17 ),	/* 23 */
/* 1424 */	NdrFcShort( 0x70 ),	/* X64 Stack size/offset = 112 */
/* 1426 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1428 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1430 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1432 */	NdrFcShort( 0x68 ),	/* 104 */
/* 1434 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1436 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0xe,		/* 14 */
/* 1438 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1442 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1446 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hService */

/* 1448 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1450 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1452 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter dwServiceType */

/* 1454 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1456 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1458 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwStartType */

/* 1460 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1462 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1464 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwErrorControl */

/* 1466 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1468 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1470 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpBinaryPathName */

/* 1472 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1474 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1476 */	NdrFcShort( 0x3ee ),	/* Type Offset=1006 */

	/* Parameter lpLoadOrderGroup */

/* 1478 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1480 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1482 */	NdrFcShort( 0x400 ),	/* Type Offset=1024 */

	/* Parameter lpdwTagId */

/* 1484 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 1486 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1488 */	NdrFcShort( 0xb4 ),	/* Type Offset=180 */

	/* Parameter lpDependencies */

/* 1490 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1492 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1494 */	NdrFcShort( 0xb8 ),	/* Type Offset=184 */

	/* Parameter dwDependSize */

/* 1496 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1498 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 1500 */	NdrFcShort( 0x412 ),	/* 1042 */

	/* Parameter lpServiceStartName */

/* 1502 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1504 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 1506 */	NdrFcShort( 0x41c ),	/* Type Offset=1052 */

	/* Parameter lpPassword */

/* 1508 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1510 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 1512 */	NdrFcShort( 0xee ),	/* Type Offset=238 */

	/* Parameter dwPwSize */

/* 1514 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1516 */	NdrFcShort( 0x58 ),	/* X64 Stack size/offset = 88 */
/* 1518 */	NdrFcShort( 0x42e ),	/* 1070 */

	/* Parameter lpDisplayName */

/* 1520 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1522 */	NdrFcShort( 0x60 ),	/* X64 Stack size/offset = 96 */
/* 1524 */	NdrFcShort( 0x438 ),	/* Type Offset=1080 */

	/* Return value */

/* 1526 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1528 */	NdrFcShort( 0x68 ),	/* X64 Stack size/offset = 104 */
/* 1530 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RCreateServiceA */

/* 1532 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1534 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1538 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1540 */	NdrFcShort( 0x88 ),	/* X64 Stack size/offset = 136 */
/* 1542 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1544 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1546 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1548 */	NdrFcShort( 0x70 ),	/* 112 */
/* 1550 */	NdrFcShort( 0x5c ),	/* 92 */
/* 1552 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x11,		/* 17 */
/* 1554 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1558 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1562 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSCManager */

/* 1564 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1566 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1568 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter lpServiceName */

/* 1570 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1572 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1574 */	NdrFcShort( 0x44a ),	/* Type Offset=1098 */

	/* Parameter lpDisplayName */

/* 1576 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1578 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1580 */	NdrFcShort( 0x45c ),	/* Type Offset=1116 */

	/* Parameter dwDesiredAccess */

/* 1582 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1584 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1586 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwServiceType */

/* 1588 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1590 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1592 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwStartType */

/* 1594 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1596 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwErrorControl */

/* 1600 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1602 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpBinaryPathName */

/* 1606 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1608 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1610 */	NdrFcShort( 0x46e ),	/* Type Offset=1134 */

	/* Parameter lpLoadOrderGroup */

/* 1612 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1614 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 1616 */	NdrFcShort( 0x480 ),	/* Type Offset=1152 */

	/* Parameter lpdwTagId */

/* 1618 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 1620 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 1622 */	NdrFcShort( 0xb4 ),	/* Type Offset=180 */

	/* Parameter lpDependencies */

/* 1624 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1626 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 1628 */	NdrFcShort( 0x16c ),	/* Type Offset=364 */

	/* Parameter dwDependSize */

/* 1630 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1632 */	NdrFcShort( 0x58 ),	/* X64 Stack size/offset = 88 */
/* 1634 */	NdrFcShort( 0x492 ),	/* 1170 */

	/* Parameter lpServiceStartName */

/* 1636 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1638 */	NdrFcShort( 0x60 ),	/* X64 Stack size/offset = 96 */
/* 1640 */	NdrFcShort( 0x49c ),	/* Type Offset=1180 */

	/* Parameter lpPassword */

/* 1642 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1644 */	NdrFcShort( 0x68 ),	/* X64 Stack size/offset = 104 */
/* 1646 */	NdrFcShort( 0x1a2 ),	/* Type Offset=418 */

	/* Parameter dwPwSize */

/* 1648 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1650 */	NdrFcShort( 0x70 ),	/* X64 Stack size/offset = 112 */
/* 1652 */	NdrFcShort( 0x4ae ),	/* 1198 */

	/* Parameter lpServiceHandle */

/* 1654 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 1656 */	NdrFcShort( 0x78 ),	/* X64 Stack size/offset = 120 */
/* 1658 */	NdrFcShort( 0x1ca ),	/* Type Offset=458 */

	/* Return value */

/* 1660 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1662 */	NdrFcShort( 0x80 ),	/* X64 Stack size/offset = 128 */
/* 1664 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure REnumDependentServicesA */

/* 1666 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1668 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1672 */	NdrFcShort( 0x19 ),	/* 25 */
/* 1674 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1676 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1678 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1680 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1682 */	NdrFcShort( 0x34 ),	/* 52 */
/* 1684 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1686 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x7,		/* 7 */
/* 1688 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1690 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1696 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hService */

/* 1698 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1700 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1702 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter dwServiceState */

/* 1704 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1706 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1708 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpServices */

/* 1710 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1712 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1714 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Parameter cbBufSize */

/* 1716 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1718 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1720 */	NdrFcShort( 0x4b8 ),	/* 1208 */

	/* Parameter pcbBytesNeeded */

/* 1722 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 1724 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1726 */	NdrFcShort( 0x4c6 ),	/* Type Offset=1222 */

	/* Parameter lpServicesReturned */

/* 1728 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 1730 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1732 */	NdrFcShort( 0x4d4 ),	/* Type Offset=1236 */

	/* Return value */

/* 1734 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1736 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1738 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure REnumServicesStatusA */

/* 1740 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1742 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1746 */	NdrFcShort( 0x1a ),	/* 26 */
/* 1748 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 1750 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1752 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1754 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1756 */	NdrFcShort( 0x58 ),	/* 88 */
/* 1758 */	NdrFcShort( 0x5c ),	/* 92 */
/* 1760 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x9,		/* 9 */
/* 1762 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1764 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1770 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSCManager */

/* 1772 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1774 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1776 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter dwServiceType */

/* 1778 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1780 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1782 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwServiceState */

/* 1784 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1786 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1788 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpBuffer */

/* 1790 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1792 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1794 */	NdrFcShort( 0x1f8 ),	/* Type Offset=504 */

	/* Parameter cbBufSize */

/* 1796 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1798 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1800 */	NdrFcShort( 0x4de ),	/* 1246 */

	/* Parameter pcbBytesNeeded */

/* 1802 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 1804 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1806 */	NdrFcShort( 0x4ec ),	/* Type Offset=1260 */

	/* Parameter lpServicesReturned */

/* 1808 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 1810 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1812 */	NdrFcShort( 0x4fa ),	/* Type Offset=1274 */

	/* Parameter lpResumeIndex */

/* 1814 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 1816 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1818 */	NdrFcShort( 0x504 ),	/* Type Offset=1284 */

	/* Return value */

/* 1820 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1822 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 1824 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ROpenSCManagerA */

/* 1826 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1828 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1832 */	NdrFcShort( 0x1b ),	/* 27 */
/* 1834 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1836 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 1838 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1840 */	0x1,		/* 1 */
			0x5c,		/* FC_PAD */
/* 1842 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1844 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1846 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1848 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1856 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lpMachineName */

/* 1858 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1860 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1862 */	NdrFcShort( 0x512 ),	/* Type Offset=1298 */

	/* Parameter lpDatabaseName */

/* 1864 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1866 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1868 */	NdrFcShort( 0x524 ),	/* Type Offset=1316 */

	/* Parameter dwDesiredAccess */

/* 1870 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1872 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1874 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpScHandle */

/* 1876 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 1878 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1880 */	NdrFcShort( 0x26a ),	/* Type Offset=618 */

	/* Return value */

/* 1882 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1884 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1886 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ROpenServiceA */

/* 1888 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1890 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1894 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1896 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1898 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1900 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1902 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1904 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1906 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1908 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1910 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1916 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1918 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSCManager */

/* 1920 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1922 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1924 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter lpServiceName */

/* 1926 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1928 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1930 */	NdrFcShort( 0x536 ),	/* Type Offset=1334 */

	/* Parameter dwDesiredAccess */

/* 1932 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1934 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1936 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpServiceHandle */

/* 1938 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 1940 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1942 */	NdrFcShort( 0x1ca ),	/* Type Offset=458 */

	/* Return value */

/* 1944 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1946 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1948 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RQueryServiceConfigA */

/* 1950 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1952 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1956 */	NdrFcShort( 0x1d ),	/* 29 */
/* 1958 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1960 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1962 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1964 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1966 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1968 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1970 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 1972 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1980 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hService */

/* 1982 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1984 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1986 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter lpServiceConfig */

/* 1988 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1990 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1992 */	NdrFcShort( 0x592 ),	/* Type Offset=1426 */

	/* Parameter cbBufSize */

/* 1994 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1996 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1998 */	NdrFcShort( 0x5ba ),	/* 1466 */

	/* Parameter pcbBytesNeeded */

/* 2000 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 2002 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2004 */	NdrFcShort( 0x5c8 ),	/* Type Offset=1480 */

	/* Return value */

/* 2006 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2008 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2010 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RQueryServiceLockStatusA */

/* 2012 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2014 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2018 */	NdrFcShort( 0x1e ),	/* 30 */
/* 2020 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2022 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2024 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2026 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2028 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2030 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2032 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 2034 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2042 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSCManager */

/* 2044 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2046 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2048 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter lpLockStatus */

/* 2050 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 2052 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2054 */	NdrFcShort( 0x5e4 ),	/* Type Offset=1508 */

	/* Parameter cbBufSize */

/* 2056 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 2058 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2060 */	NdrFcShort( 0x5f6 ),	/* 1526 */

	/* Parameter pcbBytesNeeded */

/* 2062 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 2064 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2066 */	NdrFcShort( 0x604 ),	/* Type Offset=1540 */

	/* Return value */

/* 2068 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2070 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RStartServiceA */

/* 2074 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2076 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2080 */	NdrFcShort( 0x1f ),	/* 31 */
/* 2082 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2084 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2086 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2088 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2090 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2092 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2094 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2096 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2100 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2104 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hService */

/* 2106 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2108 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2110 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter argc */

/* 2112 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 2114 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2116 */	NdrFcShort( 0x60e ),	/* 1550 */

	/* Parameter argv */

/* 2118 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2120 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2122 */	NdrFcShort( 0x618 ),	/* Type Offset=1560 */

	/* Return value */

/* 2124 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2126 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2128 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RGetServiceDisplayNameA */

/* 2130 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2132 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2136 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2138 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2140 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2142 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2144 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2146 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2148 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2150 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2152 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 2154 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2160 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSCManager */

/* 2162 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2164 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2166 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter lpServiceName */

/* 2168 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2170 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2172 */	NdrFcShort( 0x662 ),	/* Type Offset=1634 */

	/* Parameter lpDisplayName */

/* 2174 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 2176 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2178 */	NdrFcShort( 0x678 ),	/* Type Offset=1656 */

	/* Parameter lpcchBuffer */

/* 2180 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 2182 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2184 */	NdrFcShort( 0x68e ),	/* Type Offset=1678 */

	/* Return value */

/* 2186 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2188 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RGetServiceKeyNameA */

/* 2192 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2194 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2198 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2200 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2202 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2204 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2206 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2208 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2210 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2212 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2214 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 2216 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2222 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSCManager */

/* 2224 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2226 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2228 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter lpDisplayName */

/* 2230 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2232 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2234 */	NdrFcShort( 0x698 ),	/* Type Offset=1688 */

	/* Parameter lpKeyName */

/* 2236 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 2238 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2240 */	NdrFcShort( 0x6ae ),	/* Type Offset=1710 */

	/* Parameter lpcchBuffer */

/* 2242 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 2244 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2246 */	NdrFcShort( 0x6c4 ),	/* Type Offset=1732 */

	/* Return value */

/* 2248 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2250 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2252 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum34NotUsedOnWire */

/* 2254 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2256 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2260 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2262 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2264 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2266 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2272 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2274 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2282 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure REnumServiceGroupW */

/* 2284 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2286 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2290 */	NdrFcShort( 0x23 ),	/* 35 */
/* 2292 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 2294 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2296 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2298 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2300 */	NdrFcShort( 0x58 ),	/* 88 */
/* 2302 */	NdrFcShort( 0x5c ),	/* 92 */
/* 2304 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xa,		/* 10 */
/* 2306 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 2308 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2314 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSCManager */

/* 2316 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2318 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2320 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter dwServiceType */

/* 2322 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2324 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2326 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwServiceState */

/* 2328 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2330 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2332 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpBuffer */

/* 2334 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 2336 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2338 */	NdrFcShort( 0x1f8 ),	/* Type Offset=504 */

	/* Parameter cbBufSize */

/* 2340 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 2342 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2344 */	NdrFcShort( 0x6ce ),	/* 1742 */

	/* Parameter pcbBytesNeeded */

/* 2346 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 2348 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2350 */	NdrFcShort( 0x6dc ),	/* Type Offset=1756 */

	/* Parameter lpServicesReturned */

/* 2352 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 2354 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2356 */	NdrFcShort( 0x6ea ),	/* Type Offset=1770 */

	/* Parameter lpResumeIndex */

/* 2358 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 2360 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 2362 */	NdrFcShort( 0x6f4 ),	/* Type Offset=1780 */

	/* Parameter pszGroupName */

/* 2364 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2366 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 2368 */	NdrFcShort( 0x702 ),	/* Type Offset=1794 */

	/* Return value */

/* 2370 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2372 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 2374 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RChangeServiceConfig2A */

/* 2376 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2378 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2382 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2384 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2386 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2388 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2390 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2392 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2394 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2396 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2398 */	0xa,		/* 10 */
			0xc5,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance has big byval param */
/* 2400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2402 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2406 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hService */

/* 2408 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2410 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2412 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter Info */

/* 2414 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2416 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2418 */	NdrFcShort( 0x8f8 ),	/* Type Offset=2296 */

	/* Return value */

/* 2420 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2422 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2424 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RChangeServiceConfig2W */

/* 2426 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2428 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2432 */	NdrFcShort( 0x25 ),	/* 37 */
/* 2434 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2436 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2438 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2440 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2442 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2444 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2446 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2448 */	0xa,		/* 10 */
			0xc5,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance has big byval param */
/* 2450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2452 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2456 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hService */

/* 2458 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2460 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2462 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter Info */

/* 2464 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2466 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2468 */	NdrFcShort( 0x9b8 ),	/* Type Offset=2488 */

	/* Return value */

/* 2470 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2472 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2474 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RQueryServiceConfig2A */

/* 2476 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2478 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2482 */	NdrFcShort( 0x26 ),	/* 38 */
/* 2484 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2486 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2488 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2490 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2492 */	NdrFcShort( 0x34 ),	/* 52 */
/* 2494 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2496 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 2498 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 2500 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2506 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hService */

/* 2508 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2510 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2512 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter dwInfoLevel */

/* 2514 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2516 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2518 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpBuffer */

/* 2520 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 2522 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2524 */	NdrFcShort( 0x9cc ),	/* Type Offset=2508 */

	/* Parameter cbBufSize */

/* 2526 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 2528 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2530 */	NdrFcShort( 0x9e2 ),	/* 2530 */

	/* Parameter pcbBytesNeeded */

/* 2532 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 2534 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2536 */	NdrFcShort( 0x9f0 ),	/* Type Offset=2544 */

	/* Return value */

/* 2538 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2540 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2542 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RQueryServiceConfig2W */

/* 2544 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2546 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2550 */	NdrFcShort( 0x27 ),	/* 39 */
/* 2552 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2554 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2556 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2558 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2560 */	NdrFcShort( 0x34 ),	/* 52 */
/* 2562 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2564 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 2566 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 2568 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2574 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hService */

/* 2576 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2578 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2580 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter dwInfoLevel */

/* 2582 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2584 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2586 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpBuffer */

/* 2588 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 2590 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2592 */	NdrFcShort( 0x9cc ),	/* Type Offset=2508 */

	/* Parameter cbBufSize */

/* 2594 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 2596 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2598 */	NdrFcShort( 0x9fa ),	/* 2554 */

	/* Parameter pcbBytesNeeded */

/* 2600 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 2602 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2604 */	NdrFcShort( 0xa08 ),	/* Type Offset=2568 */

	/* Return value */

/* 2606 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2608 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RQueryServiceStatusEx */

/* 2612 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2614 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2618 */	NdrFcShort( 0x28 ),	/* 40 */
/* 2620 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2622 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2624 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2626 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2628 */	NdrFcShort( 0x34 ),	/* 52 */
/* 2630 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2632 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 2634 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 2636 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2642 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hService */

/* 2644 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2646 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2648 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter InfoLevel */

/* 2650 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2652 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2654 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter lpBuffer */

/* 2656 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 2658 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2660 */	NdrFcShort( 0x9cc ),	/* Type Offset=2508 */

	/* Parameter cbBufSize */

/* 2662 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 2664 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2666 */	NdrFcShort( 0xa12 ),	/* 2578 */

	/* Parameter pcbBytesNeeded */

/* 2668 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 2670 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2672 */	NdrFcShort( 0xa20 ),	/* Type Offset=2592 */

	/* Return value */

/* 2674 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2676 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2678 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure REnumServicesStatusExA */

/* 2680 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2682 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2686 */	NdrFcShort( 0x29 ),	/* 41 */
/* 2688 */	NdrFcShort( 0x58 ),	/* X64 Stack size/offset = 88 */
/* 2690 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2692 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2694 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2696 */	NdrFcShort( 0x60 ),	/* 96 */
/* 2698 */	NdrFcShort( 0x5c ),	/* 92 */
/* 2700 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xb,		/* 11 */
/* 2702 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 2704 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2710 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSCManager */

/* 2712 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2714 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2716 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter InfoLevel */

/* 2718 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2720 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2722 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter dwServiceType */

/* 2724 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2726 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2728 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwServiceState */

/* 2730 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2732 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2734 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpBuffer */

/* 2736 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 2738 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2740 */	NdrFcShort( 0xa2e ),	/* Type Offset=2606 */

	/* Parameter cbBufSize */

/* 2742 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 2744 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2746 */	NdrFcShort( 0xa44 ),	/* 2628 */

	/* Parameter pcbBytesNeeded */

/* 2748 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 2750 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2752 */	NdrFcShort( 0xa52 ),	/* Type Offset=2642 */

	/* Parameter lpServicesReturned */

/* 2754 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 2756 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 2758 */	NdrFcShort( 0xa60 ),	/* Type Offset=2656 */

	/* Parameter lpResumeIndex */

/* 2760 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 2762 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 2764 */	NdrFcShort( 0xa6a ),	/* Type Offset=2666 */

	/* Parameter pszGroupName */

/* 2766 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2768 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 2770 */	NdrFcShort( 0xa78 ),	/* Type Offset=2680 */

	/* Return value */

/* 2772 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2774 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 2776 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure REnumServicesStatusExW */

/* 2778 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2780 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2784 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2786 */	NdrFcShort( 0x58 ),	/* X64 Stack size/offset = 88 */
/* 2788 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2790 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2792 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2794 */	NdrFcShort( 0x60 ),	/* 96 */
/* 2796 */	NdrFcShort( 0x5c ),	/* 92 */
/* 2798 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xb,		/* 11 */
/* 2800 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 2802 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2808 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSCManager */

/* 2810 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2812 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2814 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter InfoLevel */

/* 2816 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2818 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2820 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter dwServiceType */

/* 2822 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2824 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwServiceState */

/* 2828 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2830 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2832 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpBuffer */

/* 2834 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 2836 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2838 */	NdrFcShort( 0xa2e ),	/* Type Offset=2606 */

	/* Parameter cbBufSize */

/* 2840 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 2842 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2844 */	NdrFcShort( 0xa8a ),	/* 2698 */

	/* Parameter pcbBytesNeeded */

/* 2846 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 2848 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2850 */	NdrFcShort( 0xa98 ),	/* Type Offset=2712 */

	/* Parameter lpServicesReturned */

/* 2852 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 2854 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 2856 */	NdrFcShort( 0xaa6 ),	/* Type Offset=2726 */

	/* Parameter lpResumeIndex */

/* 2858 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 2860 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 2862 */	NdrFcShort( 0xab0 ),	/* Type Offset=2736 */

	/* Parameter pszGroupName */

/* 2864 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2866 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 2868 */	NdrFcShort( 0xabe ),	/* Type Offset=2750 */

	/* Return value */

/* 2870 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2872 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 2874 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum43NotUsedOnWire */

/* 2876 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2878 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2882 */	NdrFcShort( 0x2b ),	/* 43 */
/* 2884 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2886 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2888 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2894 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2896 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2900 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2904 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RCreateServiceWOW64A */

/* 2906 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2908 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2912 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2914 */	NdrFcShort( 0x88 ),	/* X64 Stack size/offset = 136 */
/* 2916 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2918 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2920 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2922 */	NdrFcShort( 0x70 ),	/* 112 */
/* 2924 */	NdrFcShort( 0x5c ),	/* 92 */
/* 2926 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x11,		/* 17 */
/* 2928 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2932 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2936 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSCManager */

/* 2938 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2940 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2942 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter lpServiceName */

/* 2944 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2946 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2948 */	NdrFcShort( 0xad0 ),	/* Type Offset=2768 */

	/* Parameter lpDisplayName */

/* 2950 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2952 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2954 */	NdrFcShort( 0xae2 ),	/* Type Offset=2786 */

	/* Parameter dwDesiredAccess */

/* 2956 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2958 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2960 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwServiceType */

/* 2962 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2964 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2966 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwStartType */

/* 2968 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2970 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2972 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwErrorControl */

/* 2974 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2976 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2978 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpBinaryPathName */

/* 2980 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2982 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 2984 */	NdrFcShort( 0xaf4 ),	/* Type Offset=2804 */

	/* Parameter lpLoadOrderGroup */

/* 2986 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2988 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 2990 */	NdrFcShort( 0xb06 ),	/* Type Offset=2822 */

	/* Parameter lpdwTagId */

/* 2992 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 2994 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 2996 */	NdrFcShort( 0xb4 ),	/* Type Offset=180 */

	/* Parameter lpDependencies */

/* 2998 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3000 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 3002 */	NdrFcShort( 0x16c ),	/* Type Offset=364 */

	/* Parameter dwDependSize */

/* 3004 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 3006 */	NdrFcShort( 0x58 ),	/* X64 Stack size/offset = 88 */
/* 3008 */	NdrFcShort( 0xb18 ),	/* 2840 */

	/* Parameter lpServiceStartName */

/* 3010 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3012 */	NdrFcShort( 0x60 ),	/* X64 Stack size/offset = 96 */
/* 3014 */	NdrFcShort( 0xb22 ),	/* Type Offset=2850 */

	/* Parameter lpPassword */

/* 3016 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3018 */	NdrFcShort( 0x68 ),	/* X64 Stack size/offset = 104 */
/* 3020 */	NdrFcShort( 0x1a2 ),	/* Type Offset=418 */

	/* Parameter dwPwSize */

/* 3022 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 3024 */	NdrFcShort( 0x70 ),	/* X64 Stack size/offset = 112 */
/* 3026 */	NdrFcShort( 0xb34 ),	/* 2868 */

	/* Parameter lpServiceHandle */

/* 3028 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 3030 */	NdrFcShort( 0x78 ),	/* X64 Stack size/offset = 120 */
/* 3032 */	NdrFcShort( 0x1ca ),	/* Type Offset=458 */

	/* Return value */

/* 3034 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3036 */	NdrFcShort( 0x80 ),	/* X64 Stack size/offset = 128 */
/* 3038 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RCreateServiceWOW64W */

/* 3040 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3042 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3046 */	NdrFcShort( 0x2d ),	/* 45 */
/* 3048 */	NdrFcShort( 0x88 ),	/* X64 Stack size/offset = 136 */
/* 3050 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3052 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3054 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3056 */	NdrFcShort( 0x70 ),	/* 112 */
/* 3058 */	NdrFcShort( 0x5c ),	/* 92 */
/* 3060 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x11,		/* 17 */
/* 3062 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3066 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3070 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSCManager */

/* 3072 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3074 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3076 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter lpServiceName */

/* 3078 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3080 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3082 */	NdrFcShort( 0xb3e ),	/* Type Offset=2878 */

	/* Parameter lpDisplayName */

/* 3084 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3086 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3088 */	NdrFcShort( 0xb50 ),	/* Type Offset=2896 */

	/* Parameter dwDesiredAccess */

/* 3090 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3092 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3094 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwServiceType */

/* 3096 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3098 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwStartType */

/* 3102 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3104 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwErrorControl */

/* 3108 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3110 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 3112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpBinaryPathName */

/* 3114 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3116 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 3118 */	NdrFcShort( 0xb62 ),	/* Type Offset=2914 */

	/* Parameter lpLoadOrderGroup */

/* 3120 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3122 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 3124 */	NdrFcShort( 0xb74 ),	/* Type Offset=2932 */

	/* Parameter lpdwTagId */

/* 3126 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 3128 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 3130 */	NdrFcShort( 0xb4 ),	/* Type Offset=180 */

	/* Parameter lpDependencies */

/* 3132 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3134 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 3136 */	NdrFcShort( 0x16c ),	/* Type Offset=364 */

	/* Parameter dwDependSize */

/* 3138 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 3140 */	NdrFcShort( 0x58 ),	/* X64 Stack size/offset = 88 */
/* 3142 */	NdrFcShort( 0xb86 ),	/* 2950 */

	/* Parameter lpServiceStartName */

/* 3144 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3146 */	NdrFcShort( 0x60 ),	/* X64 Stack size/offset = 96 */
/* 3148 */	NdrFcShort( 0xb90 ),	/* Type Offset=2960 */

	/* Parameter lpPassword */

/* 3150 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3152 */	NdrFcShort( 0x68 ),	/* X64 Stack size/offset = 104 */
/* 3154 */	NdrFcShort( 0x1a2 ),	/* Type Offset=418 */

	/* Parameter dwPwSize */

/* 3156 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 3158 */	NdrFcShort( 0x70 ),	/* X64 Stack size/offset = 112 */
/* 3160 */	NdrFcShort( 0xba2 ),	/* 2978 */

	/* Parameter lpServiceHandle */

/* 3162 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 3164 */	NdrFcShort( 0x78 ),	/* X64 Stack size/offset = 120 */
/* 3166 */	NdrFcShort( 0x1ca ),	/* Type Offset=458 */

	/* Return value */

/* 3168 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3170 */	NdrFcShort( 0x80 ),	/* X64 Stack size/offset = 128 */
/* 3172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum46NotUsedOnWire */

/* 3174 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3176 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3180 */	NdrFcShort( 0x2e ),	/* 46 */
/* 3182 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3184 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3186 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3192 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3194 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3202 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RNotifyServiceStatusChange */

/* 3204 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3206 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3210 */	NdrFcShort( 0x2f ),	/* 47 */
/* 3212 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 3214 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3216 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3218 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3220 */	NdrFcShort( 0x68 ),	/* 104 */
/* 3222 */	NdrFcShort( 0xa0 ),	/* 160 */
/* 3224 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 3226 */	0xa,		/* 10 */
			0xc5,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance has big byval param */
/* 3228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3230 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3234 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hService */

/* 3236 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3238 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3240 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter NotifyParams */

/* 3242 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3244 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3246 */	NdrFcShort( 0xc36 ),	/* Type Offset=3126 */

	/* Parameter pClientProcessGuid */

/* 3248 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 3250 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3252 */	NdrFcShort( 0x834 ),	/* Type Offset=2100 */

	/* Parameter pSCMProcessGuid */

/* 3254 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 3256 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3258 */	NdrFcShort( 0x834 ),	/* Type Offset=2100 */

	/* Parameter pfCreateRemoteQueue */

/* 3260 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3262 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3264 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter phNotify */

/* 3266 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 3268 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3270 */	NdrFcShort( 0xc56 ),	/* Type Offset=3158 */

	/* Return value */

/* 3272 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3274 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 3276 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RGetNotifyResults */

/* 3278 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3280 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3284 */	NdrFcShort( 0x30 ),	/* 48 */
/* 3286 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3288 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3290 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3292 */	0x2,		/* 2 */
			0x0,		/* 0 */
/* 3294 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3296 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3298 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3300 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 3302 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3308 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hNotify */

/* 3310 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3312 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3314 */	NdrFcShort( 0xc5a ),	/* Type Offset=3162 */

	/* Parameter ppNotifyParams */

/* 3316 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 3318 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3320 */	NdrFcShort( 0xc5e ),	/* Type Offset=3166 */

	/* Return value */

/* 3322 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3324 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3326 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure RCloseNotifyHandle */

/* 3328 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3330 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3334 */	NdrFcShort( 0x31 ),	/* 49 */
/* 3336 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3338 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* Ctxt flags:  via ptr, in, out, */
/* 3340 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3342 */	0x2,		/* 2 */
			0x0,		/* 0 */
/* 3344 */	NdrFcShort( 0x38 ),	/* 56 */
/* 3346 */	NdrFcShort( 0x5c ),	/* 92 */
/* 3348 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3350 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3358 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phNotify */

/* 3360 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 3362 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3364 */	NdrFcShort( 0xca0 ),	/* Type Offset=3232 */

	/* Parameter pfApcFired */

/* 3366 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3368 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3370 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3372 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3374 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3376 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RControlServiceExA */

/* 3378 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3380 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3384 */	NdrFcShort( 0x32 ),	/* 50 */
/* 3386 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 3388 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3390 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3392 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3394 */	NdrFcShort( 0x34 ),	/* 52 */
/* 3396 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3398 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 3400 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 3402 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3404 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3408 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hService */

/* 3410 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3412 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3414 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter dwControl */

/* 3416 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3418 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3420 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwInfoLevel */

/* 3422 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3424 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pControlInParams */

/* 3428 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3430 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3432 */	NdrFcShort( 0xca8 ),	/* Type Offset=3240 */

	/* Parameter pControlOutParams */

/* 3434 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3436 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3438 */	NdrFcShort( 0xcee ),	/* Type Offset=3310 */

	/* Return value */

/* 3440 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3442 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3444 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RControlServiceExW */

/* 3446 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3448 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3452 */	NdrFcShort( 0x33 ),	/* 51 */
/* 3454 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 3456 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3458 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3460 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3462 */	NdrFcShort( 0x34 ),	/* 52 */
/* 3464 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3466 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 3468 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 3470 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3472 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3476 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hService */

/* 3478 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3480 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3482 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter dwControl */

/* 3484 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3486 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3488 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwInfoLevel */

/* 3490 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3492 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3494 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pControlInParams */

/* 3496 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3498 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3500 */	NdrFcShort( 0xd20 ),	/* Type Offset=3360 */

	/* Parameter pControlOutParams */

/* 3502 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3504 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3506 */	NdrFcShort( 0xd66 ),	/* Type Offset=3430 */

	/* Return value */

/* 3508 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3510 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3512 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum52NotUsedOnWire */

/* 3514 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3516 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3520 */	NdrFcShort( 0x34 ),	/* 52 */
/* 3522 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3524 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3526 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3532 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3534 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3542 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum53NotUsedOnWire */

/* 3544 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3546 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3550 */	NdrFcShort( 0x35 ),	/* 53 */
/* 3552 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3554 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3556 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3562 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3564 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3572 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum54NotUsedOnWire */

/* 3574 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3576 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3580 */	NdrFcShort( 0x36 ),	/* 54 */
/* 3582 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3584 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3586 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3592 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3594 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3602 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum55NotUsedOnWire */

/* 3604 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3606 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3610 */	NdrFcShort( 0x37 ),	/* 55 */
/* 3612 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3614 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3616 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3622 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3624 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3632 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RQueryServiceConfigEx */

/* 3634 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3636 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3640 */	NdrFcShort( 0x38 ),	/* 56 */
/* 3642 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3644 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3646 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3648 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3650 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3652 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3654 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 3656 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 3658 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3664 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hService */

/* 3666 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3668 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3670 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter dwInfoLevel */

/* 3672 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3674 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3676 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pInfo */

/* 3678 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 3680 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3682 */	NdrFcShort( 0x9b8 ),	/* Type Offset=2488 */

	/* Return value */

/* 3684 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3686 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

const svcctl_MIDL_TYPE_FORMAT_STRING svcctl__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/*  4 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6) */
/*  6 */	0x30,		/* FC_BIND_CONTEXT */
			0xe1,		/* Ctxt flags:  via ptr, in, out, can't be null */
/*  8 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 10 */	0x30,		/* FC_BIND_CONTEXT */
			0x41,		/* Ctxt flags:  in, can't be null */
/* 12 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 14 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 16 */	NdrFcShort( 0x2 ),	/* Offset= 2 (18) */
/* 18 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 20 */	NdrFcShort( 0x1c ),	/* 28 */
/* 22 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 24 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 26 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 28 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 30 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 32 */	NdrFcShort( 0x2 ),	/* Offset= 2 (34) */
/* 34 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* Ctxt flags:  via ptr, out, */
/* 36 */	0x1,		/* 1 */
			0x1,		/* 1 */
/* 38 */	
			0x11, 0x0,	/* FC_RP */
/* 40 */	NdrFcShort( 0x2 ),	/* Offset= 2 (42) */
/* 42 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 44 */	NdrFcShort( 0x1 ),	/* 1 */
/* 46 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 48 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 50 */	NdrFcShort( 0x10 ),	/* Corr flags:  */
/* 52 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 54 */	NdrFcLong( 0x0 ),	/* 0 */
/* 58 */	NdrFcLong( 0x40000 ),	/* 262144 */
/* 62 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 64 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 66 */	NdrFcLong( 0x0 ),	/* 0 */
/* 70 */	NdrFcLong( 0x40000 ),	/* 262144 */
/* 74 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 76 */	NdrFcShort( 0x2 ),	/* Offset= 2 (78) */
/* 78 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 80 */	NdrFcLong( 0x0 ),	/* 0 */
/* 84 */	NdrFcLong( 0x40000 ),	/* 262144 */
/* 88 */	
			0x11, 0x0,	/* FC_RP */
/* 90 */	NdrFcShort( 0x2 ),	/* Offset= 2 (92) */
/* 92 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 94 */	NdrFcShort( 0x1 ),	/* 1 */
/* 96 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 98 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 100 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 102 */	0x0 , 
			0x0,		/* 0 */
/* 104 */	NdrFcLong( 0x0 ),	/* 0 */
/* 108 */	NdrFcLong( 0x0 ),	/* 0 */
/* 112 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 114 */	
			0x11, 0x0,	/* FC_RP */
/* 116 */	NdrFcShort( 0xff9e ),	/* Offset= -98 (18) */
/* 118 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 120 */	NdrFcShort( 0x2 ),	/* Offset= 2 (122) */
/* 122 */	0x30,		/* FC_BIND_CONTEXT */
			0xe1,		/* Ctxt flags:  via ptr, in, out, can't be null */
/* 124 */	0x1,		/* 1 */
			0x0,		/* 0 */
/* 126 */	
			0x12, 0x0,	/* FC_UP */
/* 128 */	NdrFcShort( 0x2 ),	/* Offset= 2 (130) */
/* 130 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x25,		/* FC_C_WSTRING */
/* 132 */	NdrFcShort( 0xa ),	/* Offset= 10 (142) */
/* 134 */	NdrFcLong( 0x0 ),	/* 0 */
/* 138 */	NdrFcLong( 0x400 ),	/* 1024 */
/* 142 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 144 */	
			0x12, 0x0,	/* FC_UP */
/* 146 */	NdrFcShort( 0x2 ),	/* Offset= 2 (148) */
/* 148 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x25,		/* FC_C_WSTRING */
/* 150 */	NdrFcShort( 0xa ),	/* Offset= 10 (160) */
/* 152 */	NdrFcLong( 0x0 ),	/* 0 */
/* 156 */	NdrFcLong( 0x8000 ),	/* 32768 */
/* 160 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 162 */	
			0x12, 0x0,	/* FC_UP */
/* 164 */	NdrFcShort( 0x2 ),	/* Offset= 2 (166) */
/* 166 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x25,		/* FC_C_WSTRING */
/* 168 */	NdrFcShort( 0xa ),	/* Offset= 10 (178) */
/* 170 */	NdrFcLong( 0x0 ),	/* 0 */
/* 174 */	NdrFcLong( 0x101 ),	/* 257 */
/* 178 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 180 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 182 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 184 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 186 */	NdrFcShort( 0x2 ),	/* Offset= 2 (188) */
/* 188 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 190 */	NdrFcShort( 0x1 ),	/* 1 */
/* 192 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 194 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 196 */	NdrFcShort( 0x10 ),	/* Corr flags:  */
/* 198 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 200 */	NdrFcLong( 0x0 ),	/* 0 */
/* 204 */	NdrFcLong( 0x1000 ),	/* 4096 */
/* 208 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 210 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 212 */	NdrFcLong( 0x0 ),	/* 0 */
/* 216 */	NdrFcLong( 0x1000 ),	/* 4096 */
/* 220 */	
			0x12, 0x0,	/* FC_UP */
/* 222 */	NdrFcShort( 0x2 ),	/* Offset= 2 (224) */
/* 224 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x25,		/* FC_C_WSTRING */
/* 226 */	NdrFcShort( 0xa ),	/* Offset= 10 (236) */
/* 228 */	NdrFcLong( 0x0 ),	/* 0 */
/* 232 */	NdrFcLong( 0x800 ),	/* 2048 */
/* 236 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 238 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 240 */	NdrFcShort( 0x2 ),	/* Offset= 2 (242) */
/* 242 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 244 */	NdrFcShort( 0x1 ),	/* 1 */
/* 246 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 248 */	NdrFcShort( 0x58 ),	/* X64 Stack size/offset = 88 */
/* 250 */	NdrFcShort( 0x10 ),	/* Corr flags:  */
/* 252 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 254 */	NdrFcLong( 0x0 ),	/* 0 */
/* 258 */	NdrFcLong( 0x202 ),	/* 514 */
/* 262 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 264 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 266 */	NdrFcLong( 0x0 ),	/* 0 */
/* 270 */	NdrFcLong( 0x202 ),	/* 514 */
/* 274 */	
			0x12, 0x0,	/* FC_UP */
/* 276 */	NdrFcShort( 0x2 ),	/* Offset= 2 (278) */
/* 278 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x25,		/* FC_C_WSTRING */
/* 280 */	NdrFcShort( 0xa ),	/* Offset= 10 (290) */
/* 282 */	NdrFcLong( 0x0 ),	/* 0 */
/* 286 */	NdrFcLong( 0x101 ),	/* 257 */
/* 290 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 292 */	
			0x11, 0x0,	/* FC_RP */
/* 294 */	NdrFcShort( 0x2 ),	/* Offset= 2 (296) */
/* 296 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x25,		/* FC_C_WSTRING */
/* 298 */	NdrFcShort( 0xa ),	/* Offset= 10 (308) */
/* 300 */	NdrFcLong( 0x0 ),	/* 0 */
/* 304 */	NdrFcLong( 0x101 ),	/* 257 */
/* 308 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 310 */	
			0x12, 0x0,	/* FC_UP */
/* 312 */	NdrFcShort( 0x2 ),	/* Offset= 2 (314) */
/* 314 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x25,		/* FC_C_WSTRING */
/* 316 */	NdrFcShort( 0xa ),	/* Offset= 10 (326) */
/* 318 */	NdrFcLong( 0x0 ),	/* 0 */
/* 322 */	NdrFcLong( 0x101 ),	/* 257 */
/* 326 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 328 */	
			0x11, 0x0,	/* FC_RP */
/* 330 */	NdrFcShort( 0x2 ),	/* Offset= 2 (332) */
/* 332 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x25,		/* FC_C_WSTRING */
/* 334 */	NdrFcShort( 0xa ),	/* Offset= 10 (344) */
/* 336 */	NdrFcLong( 0x0 ),	/* 0 */
/* 340 */	NdrFcLong( 0x8000 ),	/* 32768 */
/* 344 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 346 */	
			0x12, 0x0,	/* FC_UP */
/* 348 */	NdrFcShort( 0x2 ),	/* Offset= 2 (350) */
/* 350 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x25,		/* FC_C_WSTRING */
/* 352 */	NdrFcShort( 0xa ),	/* Offset= 10 (362) */
/* 354 */	NdrFcLong( 0x0 ),	/* 0 */
/* 358 */	NdrFcLong( 0x101 ),	/* 257 */
/* 362 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 364 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 366 */	NdrFcShort( 0x2 ),	/* Offset= 2 (368) */
/* 368 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 370 */	NdrFcShort( 0x1 ),	/* 1 */
/* 372 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 374 */	NdrFcShort( 0x58 ),	/* X64 Stack size/offset = 88 */
/* 376 */	NdrFcShort( 0x10 ),	/* Corr flags:  */
/* 378 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 380 */	NdrFcLong( 0x0 ),	/* 0 */
/* 384 */	NdrFcLong( 0x1000 ),	/* 4096 */
/* 388 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 390 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 392 */	NdrFcLong( 0x0 ),	/* 0 */
/* 396 */	NdrFcLong( 0x1000 ),	/* 4096 */
/* 400 */	
			0x12, 0x0,	/* FC_UP */
/* 402 */	NdrFcShort( 0x2 ),	/* Offset= 2 (404) */
/* 404 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x25,		/* FC_C_WSTRING */
/* 406 */	NdrFcShort( 0xa ),	/* Offset= 10 (416) */
/* 408 */	NdrFcLong( 0x0 ),	/* 0 */
/* 412 */	NdrFcLong( 0x800 ),	/* 2048 */
/* 416 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 418 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 420 */	NdrFcShort( 0x2 ),	/* Offset= 2 (422) */
/* 422 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 424 */	NdrFcShort( 0x1 ),	/* 1 */
/* 426 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 428 */	NdrFcShort( 0x70 ),	/* X64 Stack size/offset = 112 */
/* 430 */	NdrFcShort( 0x10 ),	/* Corr flags:  */
/* 432 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 434 */	NdrFcLong( 0x0 ),	/* 0 */
/* 438 */	NdrFcLong( 0x202 ),	/* 514 */
/* 442 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 444 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 446 */	NdrFcLong( 0x0 ),	/* 0 */
/* 450 */	NdrFcLong( 0x202 ),	/* 514 */
/* 454 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 456 */	NdrFcShort( 0x2 ),	/* Offset= 2 (458) */
/* 458 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* Ctxt flags:  via ptr, out, */
/* 460 */	0x0,		/* 0 */
			0x1,		/* 1 */
/* 462 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 464 */	NdrFcLong( 0x0 ),	/* 0 */
/* 468 */	NdrFcLong( 0x40000 ),	/* 262144 */
/* 472 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 474 */	NdrFcShort( 0x2 ),	/* Offset= 2 (476) */
/* 476 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 478 */	NdrFcLong( 0x0 ),	/* 0 */
/* 482 */	NdrFcLong( 0x40000 ),	/* 262144 */
/* 486 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 488 */	NdrFcShort( 0x2 ),	/* Offset= 2 (490) */
/* 490 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 492 */	NdrFcLong( 0x0 ),	/* 0 */
/* 496 */	NdrFcLong( 0x40000 ),	/* 262144 */
/* 500 */	
			0x11, 0x0,	/* FC_RP */
/* 502 */	NdrFcShort( 0x2 ),	/* Offset= 2 (504) */
/* 504 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 506 */	NdrFcShort( 0x1 ),	/* 1 */
/* 508 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 510 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 512 */	NdrFcShort( 0x10 ),	/* Corr flags:  */
/* 514 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 516 */	NdrFcLong( 0x0 ),	/* 0 */
/* 520 */	NdrFcLong( 0x40000 ),	/* 262144 */
/* 524 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 526 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 528 */	NdrFcLong( 0x0 ),	/* 0 */
/* 532 */	NdrFcLong( 0x40000 ),	/* 262144 */
/* 536 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 538 */	NdrFcShort( 0x2 ),	/* Offset= 2 (540) */
/* 540 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 542 */	NdrFcLong( 0x0 ),	/* 0 */
/* 546 */	NdrFcLong( 0x40000 ),	/* 262144 */
/* 550 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 552 */	NdrFcShort( 0x2 ),	/* Offset= 2 (554) */
/* 554 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 556 */	NdrFcLong( 0x0 ),	/* 0 */
/* 560 */	NdrFcLong( 0x40000 ),	/* 262144 */
/* 564 */	
			0x12, 0x0,	/* FC_UP */
/* 566 */	NdrFcShort( 0x2 ),	/* Offset= 2 (568) */
/* 568 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 570 */	NdrFcLong( 0x0 ),	/* 0 */
/* 574 */	NdrFcLong( 0x40000 ),	/* 262144 */
/* 578 */	
			0x12, 0x0,	/* FC_UP */
/* 580 */	NdrFcShort( 0x2 ),	/* Offset= 2 (582) */
/* 582 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x25,		/* FC_C_WSTRING */
/* 584 */	NdrFcShort( 0xa ),	/* Offset= 10 (594) */
/* 586 */	NdrFcLong( 0x0 ),	/* 0 */
/* 590 */	NdrFcLong( 0x400 ),	/* 1024 */
/* 594 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 596 */	
			0x12, 0x0,	/* FC_UP */
/* 598 */	NdrFcShort( 0x2 ),	/* Offset= 2 (600) */
/* 600 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x25,		/* FC_C_WSTRING */
/* 602 */	NdrFcShort( 0xa ),	/* Offset= 10 (612) */
/* 604 */	NdrFcLong( 0x0 ),	/* 0 */
/* 608 */	NdrFcLong( 0x101 ),	/* 257 */
/* 612 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 614 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 616 */	NdrFcShort( 0x2 ),	/* Offset= 2 (618) */
/* 618 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* Ctxt flags:  via ptr, out, */
/* 620 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 622 */	
			0x11, 0x0,	/* FC_RP */
/* 624 */	NdrFcShort( 0x2 ),	/* Offset= 2 (626) */
/* 626 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x25,		/* FC_C_WSTRING */
/* 628 */	NdrFcShort( 0xa ),	/* Offset= 10 (638) */
/* 630 */	NdrFcLong( 0x0 ),	/* 0 */
/* 634 */	NdrFcLong( 0x101 ),	/* 257 */
/* 638 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 640 */	
			0x11, 0x0,	/* FC_RP */
/* 642 */	NdrFcShort( 0x48 ),	/* Offset= 72 (714) */
/* 644 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x25,		/* FC_C_WSTRING */
/* 646 */	NdrFcShort( 0xa ),	/* Offset= 10 (656) */
/* 648 */	NdrFcLong( 0x0 ),	/* 0 */
/* 652 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 656 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 658 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x25,		/* FC_C_WSTRING */
/* 660 */	NdrFcShort( 0xa ),	/* Offset= 10 (670) */
/* 662 */	NdrFcLong( 0x0 ),	/* 0 */
/* 666 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 670 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 672 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x25,		/* FC_C_WSTRING */
/* 674 */	NdrFcShort( 0xa ),	/* Offset= 10 (684) */
/* 676 */	NdrFcLong( 0x0 ),	/* 0 */
/* 680 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 684 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 686 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x25,		/* FC_C_WSTRING */
/* 688 */	NdrFcShort( 0xa ),	/* Offset= 10 (698) */
/* 690 */	NdrFcLong( 0x0 ),	/* 0 */
/* 694 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 698 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 700 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x25,		/* FC_C_WSTRING */
/* 702 */	NdrFcShort( 0xa ),	/* Offset= 10 (712) */
/* 704 */	NdrFcLong( 0x0 ),	/* 0 */
/* 708 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 712 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 714 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 716 */	NdrFcShort( 0x40 ),	/* 64 */
/* 718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 720 */	NdrFcShort( 0xe ),	/* Offset= 14 (734) */
/* 722 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 724 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 726 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 728 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 730 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 732 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 734 */	
			0x12, 0x0,	/* FC_UP */
/* 736 */	NdrFcShort( 0xffa4 ),	/* Offset= -92 (644) */
/* 738 */	
			0x12, 0x0,	/* FC_UP */
/* 740 */	NdrFcShort( 0xffae ),	/* Offset= -82 (658) */
/* 742 */	
			0x12, 0x0,	/* FC_UP */
/* 744 */	NdrFcShort( 0xffb8 ),	/* Offset= -72 (672) */
/* 746 */	
			0x12, 0x0,	/* FC_UP */
/* 748 */	NdrFcShort( 0xffc2 ),	/* Offset= -62 (686) */
/* 750 */	
			0x12, 0x0,	/* FC_UP */
/* 752 */	NdrFcShort( 0xffcc ),	/* Offset= -52 (700) */
/* 754 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 756 */	NdrFcLong( 0x0 ),	/* 0 */
/* 760 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 764 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 766 */	NdrFcShort( 0x2 ),	/* Offset= 2 (768) */
/* 768 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 770 */	NdrFcLong( 0x0 ),	/* 0 */
/* 774 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 778 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 780 */	NdrFcShort( 0x10 ),	/* Offset= 16 (796) */
/* 782 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x25,		/* FC_C_WSTRING */
/* 784 */	NdrFcShort( 0xa ),	/* Offset= 10 (794) */
/* 786 */	NdrFcLong( 0x0 ),	/* 0 */
/* 790 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 794 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 796 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 798 */	NdrFcShort( 0x18 ),	/* 24 */
/* 800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 802 */	NdrFcShort( 0x8 ),	/* Offset= 8 (810) */
/* 804 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 806 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 808 */	0x40,		/* FC_STRUCTPAD4 */
			0x5b,		/* FC_END */
/* 810 */	
			0x12, 0x0,	/* FC_UP */
/* 812 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (782) */
/* 814 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 816 */	NdrFcLong( 0x0 ),	/* 0 */
/* 820 */	NdrFcLong( 0x1000 ),	/* 4096 */
/* 824 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 826 */	NdrFcShort( 0x2 ),	/* Offset= 2 (828) */
/* 828 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 830 */	NdrFcLong( 0x0 ),	/* 0 */
/* 834 */	NdrFcLong( 0x1000 ),	/* 4096 */
/* 838 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 840 */	NdrFcLong( 0x0 ),	/* 0 */
/* 844 */	NdrFcLong( 0x400 ),	/* 1024 */
/* 848 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 850 */	NdrFcShort( 0x1e ),	/* Offset= 30 (880) */
/* 852 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x25,		/* FC_C_WSTRING */
/* 854 */	NdrFcShort( 0xa ),	/* Offset= 10 (864) */
/* 856 */	NdrFcLong( 0x0 ),	/* 0 */
/* 860 */	NdrFcLong( 0x400 ),	/* 1024 */
/* 864 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 866 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 868 */	NdrFcShort( 0x8 ),	/* 8 */
/* 870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 872 */	NdrFcShort( 0x4 ),	/* Offset= 4 (876) */
/* 874 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 876 */	
			0x12, 0x0,	/* FC_UP */
/* 878 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (852) */
/* 880 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 884 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 886 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 888 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 890 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 892 */	NdrFcLong( 0x0 ),	/* 0 */
/* 896 */	NdrFcLong( 0x400 ),	/* 1024 */
/* 900 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 904 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 906 */	0x0 , 
			0x0,		/* 0 */
/* 908 */	NdrFcLong( 0x0 ),	/* 0 */
/* 912 */	NdrFcLong( 0x0 ),	/* 0 */
/* 916 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 918 */	NdrFcShort( 0xffcc ),	/* Offset= -52 (866) */
/* 920 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 922 */	
			0x11, 0x0,	/* FC_RP */
/* 924 */	NdrFcShort( 0x2 ),	/* Offset= 2 (926) */
/* 926 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x25,		/* FC_C_WSTRING */
/* 928 */	NdrFcShort( 0xa ),	/* Offset= 10 (938) */
/* 930 */	NdrFcLong( 0x0 ),	/* 0 */
/* 934 */	NdrFcLong( 0x101 ),	/* 257 */
/* 938 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 940 */	
			0x11, 0x0,	/* FC_RP */
/* 942 */	NdrFcShort( 0x2 ),	/* Offset= 2 (944) */
/* 944 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 946 */	0x20,		/* Corr desc:  parameter,  */
			0x5d,		/* FC_EXPR */
/* 948 */	NdrFcShort( 0x0 ),	/* 0 */
/* 950 */	NdrFcShort( 0x10 ),	/* Corr flags:  */
/* 952 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 954 */	NdrFcLong( 0x1 ),	/* 1 */
/* 958 */	NdrFcLong( 0x1001 ),	/* 4097 */
/* 962 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 964 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 966 */	
			0x11, 0x0,	/* FC_RP */
/* 968 */	NdrFcShort( 0x2 ),	/* Offset= 2 (970) */
/* 970 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x25,		/* FC_C_WSTRING */
/* 972 */	NdrFcShort( 0xa ),	/* Offset= 10 (982) */
/* 974 */	NdrFcLong( 0x0 ),	/* 0 */
/* 978 */	NdrFcLong( 0x101 ),	/* 257 */
/* 982 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 984 */	
			0x11, 0x0,	/* FC_RP */
/* 986 */	NdrFcShort( 0x2 ),	/* Offset= 2 (988) */
/* 988 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 990 */	0x20,		/* Corr desc:  parameter,  */
			0x5d,		/* FC_EXPR */
/* 992 */	NdrFcShort( 0x1 ),	/* 1 */
/* 994 */	NdrFcShort( 0x10 ),	/* Corr flags:  */
/* 996 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 998 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1002 */	NdrFcLong( 0x1001 ),	/* 4097 */
/* 1006 */	
			0x12, 0x0,	/* FC_UP */
/* 1008 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1010) */
/* 1010 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x22,		/* FC_C_CSTRING */
/* 1012 */	NdrFcShort( 0xa ),	/* Offset= 10 (1022) */
/* 1014 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1018 */	NdrFcLong( 0x8000 ),	/* 32768 */
/* 1022 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 1024 */	
			0x12, 0x0,	/* FC_UP */
/* 1026 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1028) */
/* 1028 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x22,		/* FC_C_CSTRING */
/* 1030 */	NdrFcShort( 0xa ),	/* Offset= 10 (1040) */
/* 1032 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1036 */	NdrFcLong( 0x101 ),	/* 257 */
/* 1040 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 1042 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1044 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1048 */	NdrFcLong( 0x1000 ),	/* 4096 */
/* 1052 */	
			0x12, 0x0,	/* FC_UP */
/* 1054 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1056) */
/* 1056 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x22,		/* FC_C_CSTRING */
/* 1058 */	NdrFcShort( 0xa ),	/* Offset= 10 (1068) */
/* 1060 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1064 */	NdrFcLong( 0x800 ),	/* 2048 */
/* 1068 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 1070 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1072 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1076 */	NdrFcLong( 0x202 ),	/* 514 */
/* 1080 */	
			0x12, 0x0,	/* FC_UP */
/* 1082 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1084) */
/* 1084 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x22,		/* FC_C_CSTRING */
/* 1086 */	NdrFcShort( 0xa ),	/* Offset= 10 (1096) */
/* 1088 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1092 */	NdrFcLong( 0x101 ),	/* 257 */
/* 1096 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 1098 */	
			0x11, 0x0,	/* FC_RP */
/* 1100 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1102) */
/* 1102 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x22,		/* FC_C_CSTRING */
/* 1104 */	NdrFcShort( 0xa ),	/* Offset= 10 (1114) */
/* 1106 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1110 */	NdrFcLong( 0x101 ),	/* 257 */
/* 1114 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 1116 */	
			0x12, 0x0,	/* FC_UP */
/* 1118 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1120) */
/* 1120 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x22,		/* FC_C_CSTRING */
/* 1122 */	NdrFcShort( 0xa ),	/* Offset= 10 (1132) */
/* 1124 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1128 */	NdrFcLong( 0x101 ),	/* 257 */
/* 1132 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 1134 */	
			0x11, 0x0,	/* FC_RP */
/* 1136 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1138) */
/* 1138 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x22,		/* FC_C_CSTRING */
/* 1140 */	NdrFcShort( 0xa ),	/* Offset= 10 (1150) */
/* 1142 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1146 */	NdrFcLong( 0x8000 ),	/* 32768 */
/* 1150 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 1152 */	
			0x12, 0x0,	/* FC_UP */
/* 1154 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1156) */
/* 1156 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x22,		/* FC_C_CSTRING */
/* 1158 */	NdrFcShort( 0xa ),	/* Offset= 10 (1168) */
/* 1160 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1164 */	NdrFcLong( 0x101 ),	/* 257 */
/* 1168 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 1170 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1172 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1176 */	NdrFcLong( 0x1000 ),	/* 4096 */
/* 1180 */	
			0x12, 0x0,	/* FC_UP */
/* 1182 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1184) */
/* 1184 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x22,		/* FC_C_CSTRING */
/* 1186 */	NdrFcShort( 0xa ),	/* Offset= 10 (1196) */
/* 1188 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1192 */	NdrFcLong( 0x800 ),	/* 2048 */
/* 1196 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 1198 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1200 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1204 */	NdrFcLong( 0x202 ),	/* 514 */
/* 1208 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1210 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1214 */	NdrFcLong( 0x40000 ),	/* 262144 */
/* 1218 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1220 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1222) */
/* 1222 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1224 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1228 */	NdrFcLong( 0x40000 ),	/* 262144 */
/* 1232 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1234 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1236) */
/* 1236 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1238 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1242 */	NdrFcLong( 0x40000 ),	/* 262144 */
/* 1246 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1248 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1252 */	NdrFcLong( 0x40000 ),	/* 262144 */
/* 1256 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1258 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1260) */
/* 1260 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1262 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1266 */	NdrFcLong( 0x40000 ),	/* 262144 */
/* 1270 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1272 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1274) */
/* 1274 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1276 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1280 */	NdrFcLong( 0x40000 ),	/* 262144 */
/* 1284 */	
			0x12, 0x0,	/* FC_UP */
/* 1286 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1288) */
/* 1288 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1290 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1294 */	NdrFcLong( 0x40000 ),	/* 262144 */
/* 1298 */	
			0x12, 0x0,	/* FC_UP */
/* 1300 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1302) */
/* 1302 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x22,		/* FC_C_CSTRING */
/* 1304 */	NdrFcShort( 0xa ),	/* Offset= 10 (1314) */
/* 1306 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1310 */	NdrFcLong( 0x400 ),	/* 1024 */
/* 1314 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 1316 */	
			0x12, 0x0,	/* FC_UP */
/* 1318 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1320) */
/* 1320 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x22,		/* FC_C_CSTRING */
/* 1322 */	NdrFcShort( 0xa ),	/* Offset= 10 (1332) */
/* 1324 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1328 */	NdrFcLong( 0x101 ),	/* 257 */
/* 1332 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 1334 */	
			0x11, 0x0,	/* FC_RP */
/* 1336 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1338) */
/* 1338 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x22,		/* FC_C_CSTRING */
/* 1340 */	NdrFcShort( 0xa ),	/* Offset= 10 (1350) */
/* 1342 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1346 */	NdrFcLong( 0x101 ),	/* 257 */
/* 1350 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 1352 */	
			0x11, 0x0,	/* FC_RP */
/* 1354 */	NdrFcShort( 0x48 ),	/* Offset= 72 (1426) */
/* 1356 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x22,		/* FC_C_CSTRING */
/* 1358 */	NdrFcShort( 0xa ),	/* Offset= 10 (1368) */
/* 1360 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1364 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 1368 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 1370 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x22,		/* FC_C_CSTRING */
/* 1372 */	NdrFcShort( 0xa ),	/* Offset= 10 (1382) */
/* 1374 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1378 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 1382 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 1384 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x22,		/* FC_C_CSTRING */
/* 1386 */	NdrFcShort( 0xa ),	/* Offset= 10 (1396) */
/* 1388 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1392 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 1396 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 1398 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x22,		/* FC_C_CSTRING */
/* 1400 */	NdrFcShort( 0xa ),	/* Offset= 10 (1410) */
/* 1402 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1406 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 1410 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 1412 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x22,		/* FC_C_CSTRING */
/* 1414 */	NdrFcShort( 0xa ),	/* Offset= 10 (1424) */
/* 1416 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1420 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 1424 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 1426 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1428 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1432 */	NdrFcShort( 0xe ),	/* Offset= 14 (1446) */
/* 1434 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1436 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1438 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1440 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1442 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1444 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1446 */	
			0x12, 0x0,	/* FC_UP */
/* 1448 */	NdrFcShort( 0xffa4 ),	/* Offset= -92 (1356) */
/* 1450 */	
			0x12, 0x0,	/* FC_UP */
/* 1452 */	NdrFcShort( 0xffae ),	/* Offset= -82 (1370) */
/* 1454 */	
			0x12, 0x0,	/* FC_UP */
/* 1456 */	NdrFcShort( 0xffb8 ),	/* Offset= -72 (1384) */
/* 1458 */	
			0x12, 0x0,	/* FC_UP */
/* 1460 */	NdrFcShort( 0xffc2 ),	/* Offset= -62 (1398) */
/* 1462 */	
			0x12, 0x0,	/* FC_UP */
/* 1464 */	NdrFcShort( 0xffcc ),	/* Offset= -52 (1412) */
/* 1466 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1468 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1472 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 1476 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1478 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1480) */
/* 1480 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1482 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1486 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 1490 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1492 */	NdrFcShort( 0x10 ),	/* Offset= 16 (1508) */
/* 1494 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x22,		/* FC_C_CSTRING */
/* 1496 */	NdrFcShort( 0xa ),	/* Offset= 10 (1506) */
/* 1498 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1502 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 1506 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 1508 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1510 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1514 */	NdrFcShort( 0x8 ),	/* Offset= 8 (1522) */
/* 1516 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1518 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1520 */	0x40,		/* FC_STRUCTPAD4 */
			0x5b,		/* FC_END */
/* 1522 */	
			0x12, 0x0,	/* FC_UP */
/* 1524 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (1494) */
/* 1526 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1528 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1532 */	NdrFcLong( 0x1000 ),	/* 4096 */
/* 1536 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1538 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1540) */
/* 1540 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1542 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1546 */	NdrFcLong( 0x1000 ),	/* 4096 */
/* 1550 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1552 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1556 */	NdrFcLong( 0x400 ),	/* 1024 */
/* 1560 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1562 */	NdrFcShort( 0x1e ),	/* Offset= 30 (1592) */
/* 1564 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x22,		/* FC_C_CSTRING */
/* 1566 */	NdrFcShort( 0xa ),	/* Offset= 10 (1576) */
/* 1568 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1572 */	NdrFcLong( 0x400 ),	/* 1024 */
/* 1576 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 1578 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1580 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1584 */	NdrFcShort( 0x4 ),	/* Offset= 4 (1588) */
/* 1586 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1588 */	
			0x12, 0x0,	/* FC_UP */
/* 1590 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1564) */
/* 1592 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1596 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1598 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1600 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 1602 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 1604 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1608 */	NdrFcLong( 0x400 ),	/* 1024 */
/* 1612 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1616 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1618 */	0x0 , 
			0x0,		/* 0 */
/* 1620 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1624 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1628 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1630 */	NdrFcShort( 0xffcc ),	/* Offset= -52 (1578) */
/* 1632 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1634 */	
			0x11, 0x0,	/* FC_RP */
/* 1636 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1638) */
/* 1638 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x22,		/* FC_C_CSTRING */
/* 1640 */	NdrFcShort( 0xa ),	/* Offset= 10 (1650) */
/* 1642 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1646 */	NdrFcLong( 0x101 ),	/* 257 */
/* 1650 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 1652 */	
			0x11, 0x0,	/* FC_RP */
/* 1654 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1656) */
/* 1656 */	
			0x22,		/* FC_C_CSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 1658 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 1660 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1662 */	NdrFcShort( 0x10 ),	/* Corr flags:  */
/* 1664 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 1666 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1670 */	NdrFcLong( 0x1000 ),	/* 4096 */
/* 1674 */	
			0x11, 0x0,	/* FC_RP */
/* 1676 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1678) */
/* 1678 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1680 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1684 */	NdrFcLong( 0x1000 ),	/* 4096 */
/* 1688 */	
			0x11, 0x0,	/* FC_RP */
/* 1690 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1692) */
/* 1692 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x22,		/* FC_C_CSTRING */
/* 1694 */	NdrFcShort( 0xa ),	/* Offset= 10 (1704) */
/* 1696 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1700 */	NdrFcLong( 0x101 ),	/* 257 */
/* 1704 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 1706 */	
			0x11, 0x0,	/* FC_RP */
/* 1708 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1710) */
/* 1710 */	
			0x22,		/* FC_C_CSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 1712 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 1714 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1716 */	NdrFcShort( 0x10 ),	/* Corr flags:  */
/* 1718 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 1720 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1724 */	NdrFcLong( 0x1000 ),	/* 4096 */
/* 1728 */	
			0x11, 0x0,	/* FC_RP */
/* 1730 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1732) */
/* 1732 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1734 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1738 */	NdrFcLong( 0x1000 ),	/* 4096 */
/* 1742 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1744 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1748 */	NdrFcLong( 0x40000 ),	/* 262144 */
/* 1752 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1754 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1756) */
/* 1756 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1758 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1762 */	NdrFcLong( 0x40000 ),	/* 262144 */
/* 1766 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1768 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1770) */
/* 1770 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1772 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1776 */	NdrFcLong( 0x40000 ),	/* 262144 */
/* 1780 */	
			0x12, 0x0,	/* FC_UP */
/* 1782 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1784) */
/* 1784 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1786 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1790 */	NdrFcLong( 0x40000 ),	/* 262144 */
/* 1794 */	
			0x12, 0x0,	/* FC_UP */
/* 1796 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1798) */
/* 1798 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x25,		/* FC_C_WSTRING */
/* 1800 */	NdrFcShort( 0xa ),	/* Offset= 10 (1810) */
/* 1802 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1806 */	NdrFcLong( 0x101 ),	/* 257 */
/* 1810 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1812 */	
			0x11, 0x0,	/* FC_RP */
/* 1814 */	NdrFcShort( 0x1e2 ),	/* Offset= 482 (2296) */
/* 1816 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 1818 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 1820 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 1822 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1824 */	0x0 , 
			0x0,		/* 0 */
/* 1826 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1830 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1834 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1836) */
/* 1836 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1838 */	NdrFcShort( 0x3009 ),	/* 12297 */
/* 1840 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1844 */	NdrFcShort( 0x34 ),	/* Offset= 52 (1896) */
/* 1846 */	NdrFcLong( 0x2 ),	/* 2 */
/* 1850 */	NdrFcShort( 0x4e ),	/* Offset= 78 (1928) */
/* 1852 */	NdrFcLong( 0x3 ),	/* 3 */
/* 1856 */	NdrFcShort( 0xb6 ),	/* Offset= 182 (2038) */
/* 1858 */	NdrFcLong( 0x4 ),	/* 4 */
/* 1862 */	NdrFcShort( 0xb0 ),	/* Offset= 176 (2038) */
/* 1864 */	NdrFcLong( 0x5 ),	/* 5 */
/* 1868 */	NdrFcShort( 0xaa ),	/* Offset= 170 (2038) */
/* 1870 */	NdrFcLong( 0x6 ),	/* 6 */
/* 1874 */	NdrFcShort( 0xae ),	/* Offset= 174 (2048) */
/* 1876 */	NdrFcLong( 0x7 ),	/* 7 */
/* 1880 */	NdrFcShort( 0x9e ),	/* Offset= 158 (2038) */
/* 1882 */	NdrFcLong( 0x8 ),	/* 8 */
/* 1886 */	NdrFcShort( 0xcc ),	/* Offset= 204 (2090) */
/* 1888 */	NdrFcLong( 0x9 ),	/* 9 */
/* 1892 */	NdrFcShort( 0x184 ),	/* Offset= 388 (2280) */
/* 1894 */	NdrFcShort( 0xffff ),	/* Offset= -1 (1893) */
/* 1896 */	
			0x12, 0x0,	/* FC_UP */
/* 1898 */	NdrFcShort( 0x10 ),	/* Offset= 16 (1914) */
/* 1900 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x22,		/* FC_C_CSTRING */
/* 1902 */	NdrFcShort( 0xa ),	/* Offset= 10 (1912) */
/* 1904 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1908 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 1912 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 1914 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1916 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1920 */	NdrFcShort( 0x4 ),	/* Offset= 4 (1924) */
/* 1922 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1924 */	
			0x12, 0x0,	/* FC_UP */
/* 1926 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1900) */
/* 1928 */	
			0x12, 0x0,	/* FC_UP */
/* 1930 */	NdrFcShort( 0x50 ),	/* Offset= 80 (2010) */
/* 1932 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x22,		/* FC_C_CSTRING */
/* 1934 */	NdrFcShort( 0xa ),	/* Offset= 10 (1944) */
/* 1936 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1940 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 1944 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 1946 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x22,		/* FC_C_CSTRING */
/* 1948 */	NdrFcShort( 0xa ),	/* Offset= 10 (1958) */
/* 1950 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1954 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 1958 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 1960 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1962 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1964 */	0xe,		/* FC_ENUM32 */
			0x8,		/* FC_LONG */
/* 1966 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1968 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1972 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1974 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1976 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 1978 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 1980 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1984 */	NdrFcLong( 0x400 ),	/* 1024 */
/* 1988 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1992 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1994 */	0x0 , 
			0x0,		/* 0 */
/* 1996 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2000 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2004 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2006 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (1960) */
/* 2008 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2010 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2012 */	NdrFcShort( 0x28 ),	/* 40 */
/* 2014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2016 */	NdrFcShort( 0xa ),	/* Offset= 10 (2026) */
/* 2018 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2020 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 2022 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2024 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2026 */	
			0x12, 0x0,	/* FC_UP */
/* 2028 */	NdrFcShort( 0xffa0 ),	/* Offset= -96 (1932) */
/* 2030 */	
			0x12, 0x0,	/* FC_UP */
/* 2032 */	NdrFcShort( 0xffaa ),	/* Offset= -86 (1946) */
/* 2034 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2036 */	NdrFcShort( 0xffbc ),	/* Offset= -68 (1968) */
/* 2038 */	
			0x12, 0x0,	/* FC_UP */
/* 2040 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2042) */
/* 2042 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 2044 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2046 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2048 */	
			0x12, 0x0,	/* FC_UP */
/* 2050 */	NdrFcShort( 0x18 ),	/* Offset= 24 (2074) */
/* 2052 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 2054 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2056 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2060 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 2062 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 2064 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2068 */	NdrFcLong( 0x1000 ),	/* 4096 */
/* 2072 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 2074 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2076 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2078 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2080 */	NdrFcShort( 0x6 ),	/* Offset= 6 (2086) */
/* 2082 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2084 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2086 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2088 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (2052) */
/* 2090 */	
			0x12, 0x0,	/* FC_UP */
/* 2092 */	NdrFcShort( 0xa6 ),	/* Offset= 166 (2258) */
/* 2094 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 2096 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2098 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 2100 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 2102 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2104 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 2106 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2108 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (2094) */
			0x5b,		/* FC_END */
/* 2112 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 2114 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2116 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2118 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2120 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 2122 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 2124 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2128 */	NdrFcLong( 0x400 ),	/* 1024 */
/* 2132 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 2134 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2136 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2140 */	NdrFcShort( 0x6 ),	/* Offset= 6 (2146) */
/* 2142 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2144 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2146 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2148 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (2112) */
/* 2150 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 2152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2154 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2156 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2158 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 2160 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 2162 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2166 */	NdrFcLong( 0x40 ),	/* 64 */
/* 2170 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 2174 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2176 */	0x0 , 
			0x0,		/* 0 */
/* 2178 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2182 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2186 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2188 */	NdrFcShort( 0xffca ),	/* Offset= -54 (2134) */
/* 2190 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2192 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2194 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2198 */	NdrFcShort( 0xa ),	/* Offset= 10 (2208) */
/* 2200 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2202 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 2204 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 2206 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2208 */	
			0x12, 0x0,	/* FC_UP */
/* 2210 */	NdrFcShort( 0xff92 ),	/* Offset= -110 (2100) */
/* 2212 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2214 */	NdrFcShort( 0xffc0 ),	/* Offset= -64 (2150) */
/* 2216 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 2218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2220 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2224 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 2226 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 2228 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2232 */	NdrFcLong( 0x40 ),	/* 64 */
/* 2236 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 2240 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2242 */	0x0 , 
			0x0,		/* 0 */
/* 2244 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2248 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2252 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2254 */	NdrFcShort( 0xffc2 ),	/* Offset= -62 (2192) */
/* 2256 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2258 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2260 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2264 */	NdrFcShort( 0x8 ),	/* Offset= 8 (2272) */
/* 2266 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2268 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 2270 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2272 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2274 */	NdrFcShort( 0xffc6 ),	/* Offset= -58 (2216) */
/* 2276 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2278 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 2280 */	
			0x12, 0x0,	/* FC_UP */
/* 2282 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2284) */
/* 2284 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x1,		/* 1 */
/* 2286 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2290 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2290) */
/* 2292 */	0x6,		/* FC_SHORT */
			0x2,		/* FC_CHAR */
/* 2294 */	0x3d,		/* FC_STRUCTPAD1 */
			0x5b,		/* FC_END */
/* 2296 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2298 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2302 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2302) */
/* 2304 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2306 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2308 */	NdrFcShort( 0xfe14 ),	/* Offset= -492 (1816) */
/* 2310 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2312 */	
			0x11, 0x0,	/* FC_RP */
/* 2314 */	NdrFcShort( 0xae ),	/* Offset= 174 (2488) */
/* 2316 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 2318 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 2320 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 2322 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2324 */	0x0 , 
			0x0,		/* 0 */
/* 2326 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2330 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2334 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2336) */
/* 2336 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2338 */	NdrFcShort( 0x3009 ),	/* 12297 */
/* 2340 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2344 */	NdrFcShort( 0x34 ),	/* Offset= 52 (2396) */
/* 2346 */	NdrFcLong( 0x2 ),	/* 2 */
/* 2350 */	NdrFcShort( 0x4e ),	/* Offset= 78 (2428) */
/* 2352 */	NdrFcLong( 0x3 ),	/* 3 */
/* 2356 */	NdrFcShort( 0xfec2 ),	/* Offset= -318 (2038) */
/* 2358 */	NdrFcLong( 0x4 ),	/* 4 */
/* 2362 */	NdrFcShort( 0xfebc ),	/* Offset= -324 (2038) */
/* 2364 */	NdrFcLong( 0x5 ),	/* 5 */
/* 2368 */	NdrFcShort( 0xfeb6 ),	/* Offset= -330 (2038) */
/* 2370 */	NdrFcLong( 0x6 ),	/* 6 */
/* 2374 */	NdrFcShort( 0xfeba ),	/* Offset= -326 (2048) */
/* 2376 */	NdrFcLong( 0x7 ),	/* 7 */
/* 2380 */	NdrFcShort( 0xfeaa ),	/* Offset= -342 (2038) */
/* 2382 */	NdrFcLong( 0x8 ),	/* 8 */
/* 2386 */	NdrFcShort( 0xfed8 ),	/* Offset= -296 (2090) */
/* 2388 */	NdrFcLong( 0x9 ),	/* 9 */
/* 2392 */	NdrFcShort( 0xff90 ),	/* Offset= -112 (2280) */
/* 2394 */	NdrFcShort( 0xffff ),	/* Offset= -1 (2393) */
/* 2396 */	
			0x12, 0x0,	/* FC_UP */
/* 2398 */	NdrFcShort( 0x10 ),	/* Offset= 16 (2414) */
/* 2400 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x25,		/* FC_C_WSTRING */
/* 2402 */	NdrFcShort( 0xa ),	/* Offset= 10 (2412) */
/* 2404 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2408 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 2412 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2414 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2416 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2420 */	NdrFcShort( 0x4 ),	/* Offset= 4 (2424) */
/* 2422 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2424 */	
			0x12, 0x0,	/* FC_UP */
/* 2426 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (2400) */
/* 2428 */	
			0x12, 0x0,	/* FC_UP */
/* 2430 */	NdrFcShort( 0x1e ),	/* Offset= 30 (2460) */
/* 2432 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x25,		/* FC_C_WSTRING */
/* 2434 */	NdrFcShort( 0xa ),	/* Offset= 10 (2444) */
/* 2436 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2440 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 2444 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2446 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x25,		/* FC_C_WSTRING */
/* 2448 */	NdrFcShort( 0xa ),	/* Offset= 10 (2458) */
/* 2450 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2454 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 2458 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2460 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2462 */	NdrFcShort( 0x28 ),	/* 40 */
/* 2464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2466 */	NdrFcShort( 0xa ),	/* Offset= 10 (2476) */
/* 2468 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2470 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 2472 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2474 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2476 */	
			0x12, 0x0,	/* FC_UP */
/* 2478 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (2432) */
/* 2480 */	
			0x12, 0x0,	/* FC_UP */
/* 2482 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (2446) */
/* 2484 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2486 */	NdrFcShort( 0xfdfa ),	/* Offset= -518 (1968) */
/* 2488 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2490 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2494 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2494) */
/* 2496 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2498 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2500 */	NdrFcShort( 0xff48 ),	/* Offset= -184 (2316) */
/* 2502 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2504 */	
			0x11, 0x0,	/* FC_RP */
/* 2506 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2508) */
/* 2508 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 2510 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2512 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 2514 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2516 */	NdrFcShort( 0x10 ),	/* Corr flags:  */
/* 2518 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 2520 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2524 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 2528 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 2530 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2532 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2536 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 2540 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 2542 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2544) */
/* 2544 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2546 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2550 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 2554 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2556 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2560 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 2564 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 2566 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2568) */
/* 2568 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2570 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2574 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 2578 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2580 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2584 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 2588 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 2590 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2592) */
/* 2592 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2594 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2598 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 2602 */	
			0x11, 0x0,	/* FC_RP */
/* 2604 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2606) */
/* 2606 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 2608 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2610 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 2612 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2614 */	NdrFcShort( 0x10 ),	/* Corr flags:  */
/* 2616 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 2618 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2622 */	NdrFcLong( 0x40000 ),	/* 262144 */
/* 2626 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 2628 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2630 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2634 */	NdrFcLong( 0x40000 ),	/* 262144 */
/* 2638 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 2640 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2642) */
/* 2642 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2644 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2648 */	NdrFcLong( 0x40000 ),	/* 262144 */
/* 2652 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 2654 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2656) */
/* 2656 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2658 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2662 */	NdrFcLong( 0x40000 ),	/* 262144 */
/* 2666 */	
			0x12, 0x0,	/* FC_UP */
/* 2668 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2670) */
/* 2670 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2672 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2676 */	NdrFcLong( 0x40000 ),	/* 262144 */
/* 2680 */	
			0x12, 0x0,	/* FC_UP */
/* 2682 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2684) */
/* 2684 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x22,		/* FC_C_CSTRING */
/* 2686 */	NdrFcShort( 0xa ),	/* Offset= 10 (2696) */
/* 2688 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2692 */	NdrFcLong( 0x101 ),	/* 257 */
/* 2696 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 2698 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2700 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2704 */	NdrFcLong( 0x40000 ),	/* 262144 */
/* 2708 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 2710 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2712) */
/* 2712 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2714 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2718 */	NdrFcLong( 0x40000 ),	/* 262144 */
/* 2722 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 2724 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2726) */
/* 2726 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2728 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2732 */	NdrFcLong( 0x40000 ),	/* 262144 */
/* 2736 */	
			0x12, 0x0,	/* FC_UP */
/* 2738 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2740) */
/* 2740 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2742 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2746 */	NdrFcLong( 0x40000 ),	/* 262144 */
/* 2750 */	
			0x12, 0x0,	/* FC_UP */
/* 2752 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2754) */
/* 2754 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x25,		/* FC_C_WSTRING */
/* 2756 */	NdrFcShort( 0xa ),	/* Offset= 10 (2766) */
/* 2758 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2762 */	NdrFcLong( 0x101 ),	/* 257 */
/* 2766 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2768 */	
			0x11, 0x0,	/* FC_RP */
/* 2770 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2772) */
/* 2772 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x22,		/* FC_C_CSTRING */
/* 2774 */	NdrFcShort( 0xa ),	/* Offset= 10 (2784) */
/* 2776 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2780 */	NdrFcLong( 0x101 ),	/* 257 */
/* 2784 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 2786 */	
			0x12, 0x0,	/* FC_UP */
/* 2788 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2790) */
/* 2790 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x22,		/* FC_C_CSTRING */
/* 2792 */	NdrFcShort( 0xa ),	/* Offset= 10 (2802) */
/* 2794 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2798 */	NdrFcLong( 0x101 ),	/* 257 */
/* 2802 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 2804 */	
			0x11, 0x0,	/* FC_RP */
/* 2806 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2808) */
/* 2808 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x22,		/* FC_C_CSTRING */
/* 2810 */	NdrFcShort( 0xa ),	/* Offset= 10 (2820) */
/* 2812 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2816 */	NdrFcLong( 0x8000 ),	/* 32768 */
/* 2820 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 2822 */	
			0x12, 0x0,	/* FC_UP */
/* 2824 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2826) */
/* 2826 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x22,		/* FC_C_CSTRING */
/* 2828 */	NdrFcShort( 0xa ),	/* Offset= 10 (2838) */
/* 2830 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2834 */	NdrFcLong( 0x101 ),	/* 257 */
/* 2838 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 2840 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2842 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2846 */	NdrFcLong( 0x1000 ),	/* 4096 */
/* 2850 */	
			0x12, 0x0,	/* FC_UP */
/* 2852 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2854) */
/* 2854 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x22,		/* FC_C_CSTRING */
/* 2856 */	NdrFcShort( 0xa ),	/* Offset= 10 (2866) */
/* 2858 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2862 */	NdrFcLong( 0x800 ),	/* 2048 */
/* 2866 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 2868 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2870 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2874 */	NdrFcLong( 0x202 ),	/* 514 */
/* 2878 */	
			0x11, 0x0,	/* FC_RP */
/* 2880 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2882) */
/* 2882 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x25,		/* FC_C_WSTRING */
/* 2884 */	NdrFcShort( 0xa ),	/* Offset= 10 (2894) */
/* 2886 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2890 */	NdrFcLong( 0x101 ),	/* 257 */
/* 2894 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2896 */	
			0x12, 0x0,	/* FC_UP */
/* 2898 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2900) */
/* 2900 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x25,		/* FC_C_WSTRING */
/* 2902 */	NdrFcShort( 0xa ),	/* Offset= 10 (2912) */
/* 2904 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2908 */	NdrFcLong( 0x101 ),	/* 257 */
/* 2912 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2914 */	
			0x11, 0x0,	/* FC_RP */
/* 2916 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2918) */
/* 2918 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x25,		/* FC_C_WSTRING */
/* 2920 */	NdrFcShort( 0xa ),	/* Offset= 10 (2930) */
/* 2922 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2926 */	NdrFcLong( 0x8000 ),	/* 32768 */
/* 2930 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2932 */	
			0x12, 0x0,	/* FC_UP */
/* 2934 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2936) */
/* 2936 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x25,		/* FC_C_WSTRING */
/* 2938 */	NdrFcShort( 0xa ),	/* Offset= 10 (2948) */
/* 2940 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2944 */	NdrFcLong( 0x101 ),	/* 257 */
/* 2948 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2950 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2952 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2956 */	NdrFcLong( 0x1000 ),	/* 4096 */
/* 2960 */	
			0x12, 0x0,	/* FC_UP */
/* 2962 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2964) */
/* 2964 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x25,		/* FC_C_WSTRING */
/* 2966 */	NdrFcShort( 0xa ),	/* Offset= 10 (2976) */
/* 2968 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2972 */	NdrFcLong( 0x800 ),	/* 2048 */
/* 2976 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2978 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2980 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2984 */	NdrFcLong( 0x202 ),	/* 514 */
/* 2988 */	
			0x11, 0x0,	/* FC_RP */
/* 2990 */	NdrFcShort( 0x88 ),	/* Offset= 136 (3126) */
/* 2992 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 2994 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 2996 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 2998 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3000 */	0x0 , 
			0x0,		/* 0 */
/* 3002 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3006 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3010 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3012) */
/* 3012 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3014 */	NdrFcShort( 0x3002 ),	/* 12290 */
/* 3016 */	NdrFcLong( 0x1 ),	/* 1 */
/* 3020 */	NdrFcShort( 0xa ),	/* Offset= 10 (3030) */
/* 3022 */	NdrFcLong( 0x2 ),	/* 2 */
/* 3026 */	NdrFcShort( 0x32 ),	/* Offset= 50 (3076) */
/* 3028 */	NdrFcShort( 0xffff ),	/* Offset= -1 (3027) */
/* 3030 */	
			0x12, 0x0,	/* FC_UP */
/* 3032 */	NdrFcShort( 0x16 ),	/* Offset= 22 (3054) */
/* 3034 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 3036 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3038 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 3040 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 3042 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3044 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3046 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3048 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3050 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3052 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 3054 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 3056 */	NdrFcShort( 0x58 ),	/* 88 */
/* 3058 */	0xb,		/* FC_HYPER */
			0x8,		/* FC_LONG */
/* 3060 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3062 */	NdrFcShort( 0xffe4 ),	/* Offset= -28 (3034) */
/* 3064 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3066 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (3034) */
/* 3068 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3070 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (3040) */
/* 3072 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3074 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3076 */	
			0x12, 0x0,	/* FC_UP */
/* 3078 */	NdrFcShort( 0x10 ),	/* Offset= 16 (3094) */
/* 3080 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x25,		/* FC_C_WSTRING */
/* 3082 */	NdrFcShort( 0xa ),	/* Offset= 10 (3092) */
/* 3084 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3088 */	NdrFcLong( 0x10000 ),	/* 65536 */
/* 3092 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3094 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 3096 */	NdrFcShort( 0x68 ),	/* 104 */
/* 3098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3100 */	NdrFcShort( 0x16 ),	/* Offset= 22 (3122) */
/* 3102 */	0xb,		/* FC_HYPER */
			0x8,		/* FC_LONG */
/* 3104 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3106 */	NdrFcShort( 0xffb8 ),	/* Offset= -72 (3034) */
/* 3108 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3110 */	NdrFcShort( 0xffb4 ),	/* Offset= -76 (3034) */
/* 3112 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3114 */	NdrFcShort( 0xffb6 ),	/* Offset= -74 (3040) */
/* 3116 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3118 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 3120 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 3122 */	
			0x12, 0x0,	/* FC_UP */
/* 3124 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (3080) */
/* 3126 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3128 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3132 */	NdrFcShort( 0x0 ),	/* Offset= 0 (3132) */
/* 3134 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 3136 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3138 */	NdrFcShort( 0xff6e ),	/* Offset= -146 (2992) */
/* 3140 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3142 */	
			0x11, 0x0,	/* FC_RP */
/* 3144 */	NdrFcShort( 0xfbec ),	/* Offset= -1044 (2100) */
/* 3146 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 3148 */	NdrFcShort( 0xfbe8 ),	/* Offset= -1048 (2100) */
/* 3150 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 3152 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 3154 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 3156 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3158) */
/* 3158 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* Ctxt flags:  via ptr, out, */
/* 3160 */	0x2,		/* 2 */
			0x1,		/* 1 */
/* 3162 */	0x30,		/* FC_BIND_CONTEXT */
			0x41,		/* Ctxt flags:  in, can't be null */
/* 3164 */	0x2,		/* 2 */
			0x0,		/* 0 */
/* 3166 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 3168 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3170) */
/* 3170 */	
			0x12, 0x0,	/* FC_UP */
/* 3172 */	NdrFcShort( 0x2c ),	/* Offset= 44 (3216) */
/* 3174 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 3176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3178 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 3180 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 3182 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 3184 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 3186 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3190 */	NdrFcLong( 0x1000 ),	/* 4096 */
/* 3194 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 3198 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3200 */	0x0 , 
			0x0,		/* 0 */
/* 3202 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3206 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3210 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3212 */	NdrFcShort( 0xffaa ),	/* Offset= -86 (3126) */
/* 3214 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3216 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3218 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3220 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (3174) */
/* 3222 */	NdrFcShort( 0x0 ),	/* Offset= 0 (3222) */
/* 3224 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 3226 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3228 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 3230 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3232) */
/* 3232 */	0x30,		/* FC_BIND_CONTEXT */
			0xe1,		/* Ctxt flags:  via ptr, in, out, can't be null */
/* 3234 */	0x2,		/* 2 */
			0x0,		/* 0 */
/* 3236 */	
			0x11, 0x0,	/* FC_RP */
/* 3238 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3240) */
/* 3240 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 3242 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 3244 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3246 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3248 */	0x0 , 
			0x0,		/* 0 */
/* 3250 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3254 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3258 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3260) */
/* 3260 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3262 */	NdrFcShort( 0x3001 ),	/* 12289 */
/* 3264 */	NdrFcLong( 0x1 ),	/* 1 */
/* 3268 */	NdrFcShort( 0x4 ),	/* Offset= 4 (3272) */
/* 3270 */	NdrFcShort( 0xffff ),	/* Offset= -1 (3269) */
/* 3272 */	
			0x12, 0x0,	/* FC_UP */
/* 3274 */	NdrFcShort( 0x10 ),	/* Offset= 16 (3290) */
/* 3276 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x22,		/* FC_C_CSTRING */
/* 3278 */	NdrFcShort( 0xa ),	/* Offset= 10 (3288) */
/* 3280 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3284 */	NdrFcLong( 0x80 ),	/* 128 */
/* 3288 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 3290 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3292 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3296 */	NdrFcShort( 0x6 ),	/* Offset= 6 (3302) */
/* 3298 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 3300 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 3302 */	
			0x12, 0x0,	/* FC_UP */
/* 3304 */	NdrFcShort( 0xffe4 ),	/* Offset= -28 (3276) */
/* 3306 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 3308 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3310) */
/* 3310 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 3312 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 3314 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3316 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3318 */	0x0 , 
			0x0,		/* 0 */
/* 3320 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3324 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3328 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3330) */
/* 3330 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3332 */	NdrFcShort( 0x3001 ),	/* 12289 */
/* 3334 */	NdrFcLong( 0x1 ),	/* 1 */
/* 3338 */	NdrFcShort( 0x4 ),	/* Offset= 4 (3342) */
/* 3340 */	NdrFcShort( 0xffff ),	/* Offset= -1 (3339) */
/* 3342 */	
			0x12, 0x0,	/* FC_UP */
/* 3344 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3346) */
/* 3346 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 3348 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3350 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3352 */	NdrFcShort( 0xfec8 ),	/* Offset= -312 (3040) */
/* 3354 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3356 */	
			0x11, 0x0,	/* FC_RP */
/* 3358 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3360) */
/* 3360 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 3362 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 3364 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3366 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3368 */	0x0 , 
			0x0,		/* 0 */
/* 3370 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3374 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3378 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3380) */
/* 3380 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3382 */	NdrFcShort( 0x3001 ),	/* 12289 */
/* 3384 */	NdrFcLong( 0x1 ),	/* 1 */
/* 3388 */	NdrFcShort( 0x4 ),	/* Offset= 4 (3392) */
/* 3390 */	NdrFcShort( 0xffff ),	/* Offset= -1 (3389) */
/* 3392 */	
			0x12, 0x0,	/* FC_UP */
/* 3394 */	NdrFcShort( 0x10 ),	/* Offset= 16 (3410) */
/* 3396 */	0xb6,		/* FC_SUPPLEMENT */
			
			0x25,		/* FC_C_WSTRING */
/* 3398 */	NdrFcShort( 0xa ),	/* Offset= 10 (3408) */
/* 3400 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3404 */	NdrFcLong( 0x80 ),	/* 128 */
/* 3408 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3410 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3412 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3416 */	NdrFcShort( 0x6 ),	/* Offset= 6 (3422) */
/* 3418 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 3420 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 3422 */	
			0x12, 0x0,	/* FC_UP */
/* 3424 */	NdrFcShort( 0xffe4 ),	/* Offset= -28 (3396) */
/* 3426 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 3428 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3430) */
/* 3430 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 3432 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 3434 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3436 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3438 */	0x0 , 
			0x0,		/* 0 */
/* 3440 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3444 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3448 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3450) */
/* 3450 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3452 */	NdrFcShort( 0x3001 ),	/* 12289 */
/* 3454 */	NdrFcLong( 0x1 ),	/* 1 */
/* 3458 */	NdrFcShort( 0xff8c ),	/* Offset= -116 (3342) */
/* 3460 */	NdrFcShort( 0xffff ),	/* Offset= -1 (3459) */
/* 3462 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 3464 */	NdrFcShort( 0xfc30 ),	/* Offset= -976 (2488) */

			0x0
        }
    };

const svcctl_MIDL_EXPR_FORMAT_STRING svcctl__MIDL_ExprFormatString =
    {
        0,
        {
			0x4,		/* FC_EXPR_OPER */
			0xe,		/* OP_PLUS */
/*  2 */	0x0,		/*  */
			0x0,		/* 0 */
/*  4 */	0x4,		/* FC_EXPR_OPER */
			0x5,		/* OP_UNARY_INDIRECTION */
/*  6 */	0x9,		/* FC_ULONG */
			0x0,		/* 0 */
/*  8 */	0x3,		/* FC_EXPR_VAR */
			0xb,		/* FC_HYPER */
/* 10 */	NdrFcShort( 0x18 ),	/* 24 */
/* 12 */	0x1,		/* FC_EXPR_CONST32 */
			0x8,		/* FC_LONG */
/* 14 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16 */	NdrFcLong( 0x1 ),	/* 1 */
/* 20 */	0x4,		/* FC_EXPR_OPER */
			0xe,		/* OP_PLUS */
/* 22 */	0x0,		/*  */
			0x0,		/* 0 */
/* 24 */	0x4,		/* FC_EXPR_OPER */
			0x5,		/* OP_UNARY_INDIRECTION */
/* 26 */	0x9,		/* FC_ULONG */
			0x0,		/* 0 */
/* 28 */	0x3,		/* FC_EXPR_VAR */
			0xb,		/* FC_HYPER */
/* 30 */	NdrFcShort( 0x18 ),	/* 24 */
/* 32 */	0x1,		/* FC_EXPR_CONST32 */
			0x8,		/* FC_LONG */
/* 34 */	NdrFcShort( 0x0 ),	/* 0 */
/* 36 */	NdrFcLong( 0x1 ),	/* 1 */

			0x0
        }
    };


XFG_BIND_TRAMPOLINES(unsigned long long, SVCCTL_HANDLEW)
XFG_BIND_TRAMPOLINES(unsigned long long, SVCCTL_HANDLEA)

//const GENERIC_BINDING_ROUTINE_PAIR BindingRoutines[GENERIC_BINDING_TABLE_SIZE] =
//	{
//	{
//		(GENERIC_BINDING_ROUTINE)XFG_TRAMPOLINE_FPTR(SVCCTL_HANDLEW_bind),
//		(GENERIC_UNBIND_ROUTINE)XFG_TRAMPOLINE_FPTR(SVCCTL_HANDLEW_unbind)
//	 }
//	,{
//		(GENERIC_BINDING_ROUTINE)XFG_TRAMPOLINE_FPTR(SVCCTL_HANDLEA_bind),
//		(GENERIC_UNBIND_ROUTINE)XFG_TRAMPOLINE_FPTR(SVCCTL_HANDLEA_unbind)
//	 }
//
//	};

const unsigned short svcctl__MIDL_ExprFormatStringOffsetTable[] =
{
0,
20,
};

const NDR_EXPR_DESC  svcctl_ExprDesc = 
 {
svcctl__MIDL_ExprFormatStringOffsetTable,
svcctl__MIDL_ExprFormatString.Format
};

const unsigned short svcctl_FormatStringOffsetTable[] =
    {
    0,
    44,
    100,
    144,
    194,
    262,
    324,
    374,
    424,
    468,
    518,
    548,
    664,
    798,
    872,
    958,
    1020,
    1082,
    1144,
    1206,
    1262,
    1324,
    1386,
    1416,
    1532,
    1666,
    1740,
    1826,
    1888,
    1950,
    2012,
    2074,
    2130,
    2192,
    2254,
    2284,
    2376,
    2426,
    2476,
    2544,
    2612,
    2680,
    2778,
    2876,
    2906,
    3040,
    3174,
    3204,
    3278,
    3328,
    3378,
    3446,
    3514,
    3544,
    3574,
    3604,
    3634
    };


//const MIDL_STUB_DESC svcctl_StubDesc = 
//    {
//    (void *)& svcctl___RpcClientInterface,
//    MIDL_user_allocate,
//    MIDL_user_free,
//    &svcctl__MIDL_AutoBindHandle,
//    0,
//    BindingRoutines,
//    0,
//    0,
//    svcctl__MIDL_TypeFormatString.Format,
//    1, /* -error bounds_check flag */
//    0x60001, /* Ndr library version */
//    0,
//    0x8010272, /* MIDL Version 8.1.626 */
//    0,
//    0,
//    0,  /* notify & notify_flag routine table */
//    0x1, /* MIDL flag */
//    0, /* cs routines */
//    0,   /* proxy/server info */
//    &svcctl_ExprDesc
//    };
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

