//Create Process flow

#include <windows.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{

	PROCESS_INFORMATION pi;
	STARTUPINFO si = { sizeof(si) };

	TCHAR name[] = _T(" notepad ");
	BOOL success = CreateProcess(nullptr, name, nullptr, nullptr, FALSE, 0, nullptr, nullptr, &si, &pi);

	if (success)
	{
		cout << "PID: " << pi.dwProcessId << endl;
		cout << " hi.process " << pi.hProcess;

		WaitForSingleObject(pi.hProcess, INFINITE);
		DWORD code;
		GetExitCodeProcess(pi.hProcess, &code);
		cout << " Notepad has exited. Exit code=" << code << endl;
	}
	else
	{
		cout << GetLastError() << endl;
	}
	return 0;
}
