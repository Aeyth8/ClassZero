#include "global.h"
#include <SDK/Engine_parameters.hpp>

#include "MinHook/MinHook.h"

#if defined _M_X64
#pragma comment(lib, "libMinHook.x64.lib")
#endif

SDK::UEngine* Engine;
SDK::UWorld* World;
SDK::APlayerController* Player0;
SDK::UIpNetDriver* NetDriver;
SDK::UKismetSystemLibrary* Kismet;
uintptr_t GBA = 0;
uintptr_t Crash1;
uintptr_t Crash1Ass;

namespace SDK {

};

typedef void* (__thiscall* StupidCrash1)(__int64* param1, __int64* param2);
void* AntiCrash1(__int64* param1, __int64* param2) {
	return nullptr;
}

typedef bool* (__thiscall* Crash1Assistor)(int* param1, char* param2);
bool AntiAssistor(int* param1, char* param2) {
	return true;
}

void Hook() {
	bool Hooked = MH_Initialize();
	StupidCrash1 No_Crash1 = (StupidCrash1)Crash1;
	Hooked = MH_CreateHook(No_Crash1, &AntiCrash1, reinterpret_cast<LPVOID*>(&Crash1));
	Hooked = MH_EnableHook(No_Crash1);

	Crash1Assistor No_Help1 = (Crash1Assistor)Crash1Ass;
	Hooked = MH_CreateHook(No_Help1, &AntiAssistor, reinterpret_cast<LPVOID*>(&Crash1Ass));
	Hooked = MH_EnableHook(No_Help1);
}

void Init() {
	AllocConsole();
	FILE* Dummy;
	freopen_s(&Dummy, "CONOUT$", "w", stdout);
	freopen_s(&Dummy, "CONIN$", "r", stdin);

	SDK::UInputSettings::GetDefaultObj()->ConsoleKeys[0].KeyName = SDK::UKismetStringLibrary::Conv_StringToName(L"Tilde");
	SDK::UObject* NewObject = SDK::UGameplayStatics::SpawnObject(Engine->ConsoleClass, Engine->GameViewport);
	Engine->GameViewport->ViewportConsole = static_cast<SDK::UConsole*>(NewObject);
	//SDK::Params::GameMode_ReadyToStartMatch(false);
	Hook();
}

void InitVars() {
	GBA = (uintptr_t)GetModuleHandleA("FCTClient-Win64-Shipping.exe");
	Crash1 = GBA + 0x11B6FAC;
	Crash1Ass = GBA + 0x11B6F9F;
	Engine = SDK::UEngine::GetEngine();
	World = SDK::UWorld::GetWorld();
	Player0 = World->OwningGameInstance->LocalPlayers[0]->PlayerController;

	//NetDriver = World->NetDriver;
	Kismet = SDK::UKismetSystemLibrary::GetDefaultObj();
	Init();
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ulReasonForCall, LPVOID lpReserved) {
	DisableThreadLibraryCalls(hModule);

	if (ulReasonForCall != DLL_PROCESS_ATTACH)
		return TRUE;

	HANDLE hThread = CreateThread(nullptr, 0,
		(LPTHREAD_START_ROUTINE)InitVars, hModule, 0, 0);
	if (hThread != nullptr)
		CloseHandle(hThread);


	return TRUE;
}

