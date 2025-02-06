#include "pch.h"




static void Init() {

	// Retrieves the Global Base Address (GBA) by getting the module handle typedefined as a uintptr_t
	GBA = (uintptr_t)GetModuleHandleA("FCTClient-Win64-Shipping.exe");

	LogWin();
	Logger::Init();

	Log("GAME INITIALIZED\nGlobal Base Address = " + HexToString(GBA));

	// Allocates local pointers
	Engine = UEngine(); World = UWorld(); KismetSys = UKismetSys();


	ConstructUConsole();

	// These pointers should remain the same across the entirety of an instance's runtime.
	FCT::Instance = static_cast<SDK::UFCTGameInstanceBP_C*>(World->OwningGameInstance);
	
	Hooks::Init();
	Hooks::CreateAndEnableAllHooks({2});
}


int __stdcall DllMain(HMODULE hModule, DWORD  ulReasonForCall, LPVOID lpReserved) {
	DisableThreadLibraryCalls(hModule);

	if (ulReasonForCall != DLL_PROCESS_ATTACH)
		return 1;

	HANDLE hThread = CreateThread(nullptr, 0,
		(LPTHREAD_START_ROUTINE)Init, hModule, 0, 0);
	if (hThread != nullptr)
		CloseHandle(hThread);

	return 1;
}

static void ProcessEnd() {
	Hooks::DisableAllHooks();
	Hooks::Uninit();
	Logger::Close();
}

void PreExit() {
	ConstructThread(ProcessEnd);
	UFunctions::PTR::FC_AppPreExit();
}
