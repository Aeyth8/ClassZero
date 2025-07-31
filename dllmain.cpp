#include "Aeyth8/Proxy8/ProxyTypes.h"

#include "Aeyth8/Global.hpp"
#include "Aeyth8/Tools/Pointers.h"
#include "Aeyth8/Logic/FCT.h"

/*

Written by Aeyth8

https://github.com/Aeyth8

*/


// My entire codebase has been designed to use namespaces like this.
using namespace A8CL; using namespace Global; using namespace Pointers;

static void Init() {

	// Retrieves the Global Base Address (GBA) by getting the module handle casted as a uintptr_t
	GBA = (uintptr_t)GetModuleHandleA("FCTClient-Win64-Shipping.exe");

	LogWin();
	LogA("GetCommandLineA", GetCommandLineA());
	LogA("INITIALIZED", "The Global Base Address [GBA] is " + HexToString(GBA));	

	FCT::Init_Hooks();

	while (UWorld() == nullptr)
	{
		Sleep(2000);
	}

	FCT::Init_Vars(UWorld());

	if (!bConstructedUConsole) bConstructedUConsole = ConstructUConsole();
}

int __stdcall DllMain(HMODULE hModule, DWORD ulReasonForCall, LPVOID lpReserved) {
	DisableThreadLibraryCalls(hModule);

	if (ulReasonForCall != DLL_PROCESS_ATTACH)
		return 1;

	Global::InitLog();

	if (Proxy::Attach(hModule))
		ConstructThread(Init);

	return 1;
}