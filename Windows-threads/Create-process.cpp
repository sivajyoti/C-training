//Create Process flow

#include <Windows.h>
#include <iostream>

int main()

{
	PROCESS_INFORMATION pi;
	STARTUPINFO si = { sizeof(si) };
	TCHAR name[] = (L"notepad");
	BOOL success = CreateProcess(nullptr, name, nullptr, nullptr, FALSE, 0, nullptr, nullptr, &si, &pi);

	if (success)
	{
		std::cout << "PID: " << pi.dwProcessId << std::endl;
		std::cout << " hProcess: " << pi.hProcess;

		WaitForSingleObject(pi.hProcess, INFINITE);
		DWORD code;
		GetExitCodeProcess(pi.hProcess, &code);

		std::cout << " Notepad has exited. Exit code=" << code << std::endl;
	}
	else
	{
		std::cout << GetLastError() << std::endl;
	}
	return 0;
}
