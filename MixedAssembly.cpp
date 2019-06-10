#define UNICODE
#include "windows.h"

#pragma unmanaged
extern "C" BOOL APIENTRY DllMain(HMODULE hinstDLL, DWORD fwdReason, void* lpvReserved)
{
	if (fwdReason == DLL_PROCESS_ATTACH)
	{

/*
		unsigned char s[] = "\x90\x90\xc3";

		void *b = VirtualAlloc(0, sizeof s, MEM_COMMIT, PAGE_EXECUTE_READWRITE);
		memcpy(b, s, sizeof s);
		((void(*)())b)();
*/

//		system("notepad %windir%\\win.ini");

		STARTUPINFO info={sizeof(info)};
		PROCESS_INFORMATION processInfo;
		if (CreateProcess(L"cmd.exe", L"/c %windir%\\win.ini", NULL, NULL, FALSE, 0, NULL, NULL, &info, &processInfo))
		{
			WaitForSingleObject(processInfo.hProcess, INFINITE);
			CloseHandle(processInfo.hProcess);
			CloseHandle(processInfo.hThread);
		}
	
	}
	return TRUE;
}
