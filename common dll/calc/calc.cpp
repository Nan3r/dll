// calc1.cpp : Defines the entry point for the DLL application.
//

#include "stdafx.h"
#pragma comment(linker,"/OPT:nowin98")
BOOL APIENTRY DllMain( HANDLE hModule, 
                       DWORD  ul_reason_for_call, 
                       LPVOID lpReserved
					 )
{
    switch (ul_reason_for_call)
	{
		case DLL_PROCESS_ATTACH:
			WinExec("calc.exe",SW_SHOWNORMAL);
		case DLL_THREAD_ATTACH:
		case DLL_THREAD_DETACH:
		case DLL_PROCESS_DETACH:
			break;
    }return TRUE;
}