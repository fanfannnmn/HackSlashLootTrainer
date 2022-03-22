#pragma once
#include <windows.h>	// Windows API functions (see MSDN)
#include <TlHelp32.h>	// PROCESSENTRY32 struct (see GetProcId())
#include <Shlwapi.h>	// Case-insensitive string search (StrStrI())
#include <stdio.h>
#pragma comment (lib, "Shlwapi.lib")

enum TRAINER_ERRORS
{
	TERROR_SUCCESS,
	TERROR_PID_LOOKUP_FAILED,
	TERROR_OPENPROC_FAILED,
	TERROR_GET_BASE_ADDR_FAILED,
	TERROR_MODIFY_WHATEVER_FAILED,
};

// Helpers
int GetProcId(wchar_t* procName);
int GetBaseAddress(wchar_t* procName, int targetPid);
void ClearConsole(void);
void PrintBanner(void);
void PrintWhatEverOptions(void);

// Menu options
int ModifyWhatEver(HANDLE hTarget, void* playerStatsPointer, unsigned int selection);
