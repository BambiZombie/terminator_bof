

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __svcctl_h_h__
#define __svcctl_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if _CONTROL_FLOW_GUARD_XFG
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

/* header files for imported files */
#include "ms-dtyp_h.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __svcctl_INTERFACE_DEFINED__
#define __svcctl_INTERFACE_DEFINED__

/* interface svcctl */
/* [unique][ms_union][version][uuid] */ 

#define	MAX_SERVICE_NAME_LENGTH	( 256 )

#define	SC_MAX_DEPEND_SIZE	( ( 4 * 1024 )  )

#define	SC_MAX_NAME_LENGTH	( ( MAX_SERVICE_NAME_LENGTH + 1 )  )

#define	SC_MAX_PATH_LENGTH	( ( 32 * 1024 )  )

#define	SC_MAX_PWD_SIZE	( 514 )

#define	SC_MAX_COMPUTER_NAME_LENGTH	( 1024 )

#define	SC_MAX_ACCOUNT_NAME_LENGTH	( ( 2 * 1024 )  )

#define	SC_MAX_COMMENT_LENGTH	( 128 )

#define	SC_MAX_ARGUMENT_LENGTH	( 1024 )

#define	SC_MAX_ARGUMENTS	( 1024 )

typedef /* [handle] */ wchar_t *SVCCTL_HANDLEW;

typedef /* [handle] */ LPSTR SVCCTL_HANDLEA;

typedef /* [context_handle] */ PVOID SC_RPC_HANDLE;

typedef /* [context_handle] */ PVOID SC_RPC_LOCK;

typedef /* [context_handle] */ PVOID SC_NOTIFY_RPC_HANDLE;

typedef SC_RPC_HANDLE *LPSC_RPC_HANDLE;

typedef SC_RPC_LOCK *LPSC_RPC_LOCK;

typedef SC_NOTIFY_RPC_HANDLE *LPSC_NOTIFY_RPC_HANDLE;

typedef struct _STRING_PTRSA
    {
    /* [range][string] */ LPSTR StringPtr;
    } 	STRING_PTRSA;

typedef struct _STRING_PTRSA *PSTRING_PTRSA;

typedef struct _STRING_PTRSA *LPSTRING_PTRSA;

typedef struct _STRING_PTRSW
    {
    /* [range][string] */ wchar_t *StringPtr;
    } 	STRING_PTRSW;

typedef struct _STRING_PTRSW *PSTRING_PTRSW;

typedef struct _STRING_PTRSW *LPSTRING_PTRSW;

typedef /* [range] */ DWORD BOUNDED_DWORD_4K;

typedef BOUNDED_DWORD_4K *LPBOUNDED_DWORD_4K;

typedef /* [range] */ DWORD BOUNDED_DWORD_8K;

typedef BOUNDED_DWORD_8K *LPBOUNDED_DWORD_8K;

typedef /* [range] */ DWORD BOUNDED_DWORD_256K;

typedef BOUNDED_DWORD_256K *LPBOUNDED_DWORD_256K;

typedef ULONG SECURITY_INFORMATION;

typedef ULONG *PSECURITY_INFORMATION;

typedef struct _SERVICE_DESCRIPTION_WOW64
    {
    DWORD dwDescriptionOffset;
    } 	SERVICE_DESCRIPTION_WOW64;

typedef struct _SERVICE_DESCRIPTION_WOW64 *LPSERVICE_DESCRIPTION_WOW64;

typedef struct _SERVICE_FAILURE_ACTIONS_WOW64
    {
    DWORD dwResetPeriod;
    DWORD dwRebootMsgOffset;
    DWORD dwCommandOffset;
    DWORD cActions;
    DWORD dwsaActionsOffset;
    } 	SERVICE_FAILURE_ACTIONS_WOW64;

typedef struct _SERVICE_FAILURE_ACTIONS_WOW64 *LPSERVICE_FAILURE_ACTIONS_WOW64;

typedef struct _SERVICE_REQUIRED_PRIVILEGES_INFO_WOW64
    {
    DWORD dwRequiredPrivilegesOffset;
    } 	SERVICE_REQUIRED_PRIVILEGES_INFO_WOW64;

typedef struct _SERVICE_REQUIRED_PRIVILEGES_INFO_WOW64 *LPSERVICE_REQUIRED_PRIVILEGES_INFO_WOW64;

DWORD RCloseServiceHandle( 
    /* [out][in] */ LPSC_RPC_HANDLE hSCObject);

DWORD RQueryServiceStatus( 
    /* [in] */ SC_RPC_HANDLE hService,
    /* [out] */ LPSERVICE_STATUS lpServiceStatus);

DWORD RCreateServiceW( 
    /* [in] */ SC_RPC_HANDLE hSCManager,
    /* [range][string][in] */ wchar_t *lpServiceName,
    /* [range][unique][string][in] */ wchar_t *lpDisplayName,
    /* [in] */ DWORD dwDesiredAccess,
    /* [in] */ DWORD dwServiceType,
    /* [in] */ DWORD dwStartType,
    /* [in] */ DWORD dwErrorControl,
    /* [range][string][in] */ wchar_t *lpBinaryPathName,
    /* [range][unique][string][in] */ wchar_t *lpLoadOrderGroup,
    /* [unique][out][in] */ LPDWORD lpdwTagId,
    /* [size_is][unique][in] */ LPBYTE lpDependencies,
    /* [range][in] */ DWORD dwDependSize,
    /* [range][unique][string][in] */ wchar_t *lpServiceStartName,
    /* [size_is][unique][in] */ LPBYTE lpPassword,
    /* [range][in] */ DWORD dwPwSize,
    /* [out] */ LPSC_RPC_HANDLE lpServiceHandle);

DWORD ROpenSCManagerW( 
    /* [range][unique][string][in] */ SVCCTL_HANDLEW lpMachineName,
    /* [range][unique][string][in] */ wchar_t *lpDatabaseName,
    /* [in] */ DWORD dwDesiredAccess,
    /* [out] */ LPSC_RPC_HANDLE lpScHandle);

DWORD ROpenServiceW( 
    /* [in] */ SC_RPC_HANDLE hSCManager,
    /* [range][string][in] */ wchar_t *lpServiceName,
    /* [in] */ DWORD dwDesiredAccess,
    /* [out] */ LPSC_RPC_HANDLE lpServiceHandle);

DWORD RStartServiceW( 
    /* [in] */ SC_RPC_HANDLE hService,
    /* [range][in] */ DWORD argc,
    /* [size_is][unique][in] */ LPSTRING_PTRSW argv);


typedef struct _SERVICE_RPC_REQUIRED_PRIVILEGES_INFO
    {
    /* [range] */ DWORD cbRequiredPrivileges;
    /* [size_is] */ PBYTE pRequiredPrivileges;
    } 	SERVICE_RPC_REQUIRED_PRIVILEGES_INFO;

typedef struct _SERVICE_RPC_REQUIRED_PRIVILEGES_INFO *LPSERVICE_RPC_REQUIRED_PRIVILEGES_INFO;

typedef struct _SC_RPC_CONFIG_INFOA
    {
    DWORD dwInfoLevel;
    /* [switch_is] */ /* [switch_type] */ union 
        {
        /* [case()] */ LPSERVICE_DESCRIPTIONA psd;
        /* [case()] */ LPSERVICE_FAILURE_ACTIONSA psfa;
        /* [case()] */ LPSERVICE_DELAYED_AUTO_START_INFO psda;
        /* [case()] */ LPSERVICE_FAILURE_ACTIONS_FLAG psfaf;
        /* [case()] */ LPSERVICE_SID_INFO pssid;
        /* [case()] */ LPSERVICE_RPC_REQUIRED_PRIVILEGES_INFO psrp;
        /* [case()] */ LPSERVICE_PRESHUTDOWN_INFO psps;
        /* [case()] */ PSERVICE_TRIGGER_INFO psti;
        /* [case()] */ LPSERVICE_PREFERRED_NODE_INFO pspn;
        } 	;
    } 	SC_RPC_CONFIG_INFOA;

typedef struct _SC_RPC_CONFIG_INFOW
    {
    DWORD dwInfoLevel;
    /* [switch_is] */ /* [switch_type] */ union 
        {
        /* [case()] */ LPSERVICE_DESCRIPTIONW psd;
        /* [case()] */ LPSERVICE_FAILURE_ACTIONSW psfa;
        /* [case()] */ LPSERVICE_DELAYED_AUTO_START_INFO psda;
        /* [case()] */ LPSERVICE_FAILURE_ACTIONS_FLAG psfaf;
        /* [case()] */ LPSERVICE_SID_INFO pssid;
        /* [case()] */ LPSERVICE_RPC_REQUIRED_PRIVILEGES_INFO psrp;
        /* [case()] */ LPSERVICE_PRESHUTDOWN_INFO psps;
        /* [case()] */ PSERVICE_TRIGGER_INFO psti;
        /* [case()] */ LPSERVICE_PREFERRED_NODE_INFO pspn;
        } 	;
    } 	SC_RPC_CONFIG_INFOW;

typedef struct _SERVICE_NOTIFY_STATUS_CHANGE_PARAMS_1
    {
    ULONGLONG ullThreadId;
    DWORD dwNotifyMask;
    UCHAR CallbackAddressArray[ 16 ];
    UCHAR CallbackParamAddressArray[ 16 ];
    SERVICE_STATUS_PROCESS ServiceStatus;
    DWORD dwNotificationStatus;
    DWORD dwSequence;
    } 	SERVICE_NOTIFY_STATUS_CHANGE_PARAMS_1;

typedef struct _SERVICE_NOTIFY_STATUS_CHANGE_PARAMS_1 *PSERVICE_NOTIFY_STATUS_CHANGE_PARAMS_1;

typedef struct _SERVICE_NOTIFY_STATUS_CHANGE_PARAMS_2
    {
    ULONGLONG ullThreadId;
    DWORD dwNotifyMask;
    UCHAR CallbackAddressArray[ 16 ];
    UCHAR CallbackParamAddressArray[ 16 ];
    SERVICE_STATUS_PROCESS ServiceStatus;
    DWORD dwNotificationStatus;
    DWORD dwSequence;
    DWORD dwNotificationTriggered;
    /* [range][string] */ PWSTR pszServiceNames;
    } 	SERVICE_NOTIFY_STATUS_CHANGE_PARAMS_2;

typedef struct _SERVICE_NOTIFY_STATUS_CHANGE_PARAMS_2 *PSERVICE_NOTIFY_STATUS_CHANGE_PARAMS_2;

typedef SERVICE_NOTIFY_STATUS_CHANGE_PARAMS_2 SERVICE_NOTIFY_STATUS_CHANGE_PARAMS;

typedef SERVICE_NOTIFY_STATUS_CHANGE_PARAMS_2 *PSERVICE_NOTIFY_STATUS_CHANGE_PARAMS;

typedef struct _SC_RPC_NOTIFY_PARAMS
    {
    DWORD dwInfoLevel;
    /* [switch_is] */ /* [switch_type] */ union 
        {
        /* [case()] */ PSERVICE_NOTIFY_STATUS_CHANGE_PARAMS_1 pStatusChangeParam1;
        /* [case()] */ PSERVICE_NOTIFY_STATUS_CHANGE_PARAMS_2 pStatusChangeParams;
        } 	;
    } 	SC_RPC_NOTIFY_PARAMS;

typedef struct _SC_RPC_NOTIFY_PARAMS_LIST
    {
    BOUNDED_DWORD_4K cElements;
    /* [size_is] */ SC_RPC_NOTIFY_PARAMS NotifyParamsArray[ 1 ];
    } 	SC_RPC_NOTIFY_PARAMS_LIST;

typedef struct _SC_RPC_NOTIFY_PARAMS_LIST *PSC_RPC_NOTIFY_PARAMS_LIST;

typedef struct _SERVICE_CONTROL_STATUS_REASON_IN_PARAMSA
    {
    DWORD dwReason;
    /* [range][string] */ LPSTR pszComment;
    } 	SERVICE_CONTROL_STATUS_REASON_IN_PARAMSA;

typedef struct _SERVICE_CONTROL_STATUS_REASON_IN_PARAMSA *PSERVICE_CONTROL_STATUS_REASON_IN_PARAMSA;

typedef struct _SERVICE_CONTROL_STATUS_REASON_OUT_PARAMS
    {
    SERVICE_STATUS_PROCESS ServiceStatus;
    } 	SERVICE_CONTROL_STATUS_REASON_OUT_PARAMS;

typedef struct _SERVICE_CONTROL_STATUS_REASON_OUT_PARAMS *PSERVICE_CONTROL_STATUS_REASON_OUT_PARAMS;

typedef /* [switch_type] */ union _SC_RPC_SERVICE_CONTROL_IN_PARAMSA
    {
    /* [case()] */ PSERVICE_CONTROL_STATUS_REASON_IN_PARAMSA psrInParams;
    } 	SC_RPC_SERVICE_CONTROL_IN_PARAMSA;

typedef /* [switch_type] */ union _SC_RPC_SERVICE_CONTROL_IN_PARAMSA *PSC_RPC_SERVICE_CONTROL_IN_PARAMSA;

typedef /* [switch_type] */ union _SC_RPC_SERVICE_CONTROL_OUT_PARAMSA
    {
    /* [case()] */ PSERVICE_CONTROL_STATUS_REASON_OUT_PARAMS psrOutParams;
    } 	SC_RPC_SERVICE_CONTROL_OUT_PARAMSA;

typedef /* [switch_type] */ union _SC_RPC_SERVICE_CONTROL_OUT_PARAMSA *PSC_RPC_SERVICE_CONTROL_OUT_PARAMSA;

typedef struct _SERVICE_CONTROL_STATUS_REASON_IN_PARAMSW
    {
    DWORD dwReason;
    /* [range][string] */ LPWSTR pszComment;
    } 	SERVICE_CONTROL_STATUS_REASON_IN_PARAMSW;

typedef struct _SERVICE_CONTROL_STATUS_REASON_IN_PARAMSW *PSERVICE_CONTROL_STATUS_REASON_IN_PARAMSW;

typedef /* [switch_type] */ union _SC_RPC_SERVICE_CONTROL_IN_PARAMSW
    {
    /* [case()] */ PSERVICE_CONTROL_STATUS_REASON_IN_PARAMSW psrInParams;
    } 	SC_RPC_SERVICE_CONTROL_IN_PARAMSW;

typedef /* [switch_type] */ union _SC_RPC_SERVICE_CONTROL_IN_PARAMSW *PSC_RPC_SERVICE_CONTROL_IN_PARAMSW;

typedef /* [switch_type] */ union _SC_RPC_SERVICE_CONTROL_OUT_PARAMSW
    {
    /* [case()] */ PSERVICE_CONTROL_STATUS_REASON_OUT_PARAMS psrOutParams;
    } 	SC_RPC_SERVICE_CONTROL_OUT_PARAMSW;

typedef /* [switch_type] */ union _SC_RPC_SERVICE_CONTROL_OUT_PARAMSW *PSC_RPC_SERVICE_CONTROL_OUT_PARAMSW;

extern RPC_IF_HANDLE svcctl_v2_0_c_ifspec;
extern RPC_IF_HANDLE svcctl_v2_0_s_ifspec;
#endif /* __svcctl_INTERFACE_DEFINED__ */

/* interface __MIDL_itf_svcctl_0000_0001 */
/* [local] */ 


extern RPC_IF_HANDLE __MIDL_itf_svcctl_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_svcctl_0000_0001_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

handle_t __RPC_USER SVCCTL_HANDLEW_bind ( SVCCTL_HANDLEW );
void     __RPC_USER SVCCTL_HANDLEW_unbind( SVCCTL_HANDLEW,  handle_t );
handle_t __RPC_USER SVCCTL_HANDLEW_bind ( SVCCTL_HANDLEW );
void     __RPC_USER SVCCTL_HANDLEW_unbind( SVCCTL_HANDLEW,  handle_t );
handle_t __RPC_USER SVCCTL_HANDLEA_bind ( SVCCTL_HANDLEA );
void     __RPC_USER SVCCTL_HANDLEA_unbind( SVCCTL_HANDLEA,  handle_t );

void __RPC_USER SC_RPC_HANDLE_rundown( SC_RPC_HANDLE );
void __RPC_USER SC_RPC_LOCK_rundown( SC_RPC_LOCK );
void __RPC_USER SC_NOTIFY_RPC_HANDLE_rundown( SC_NOTIFY_RPC_HANDLE );

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


