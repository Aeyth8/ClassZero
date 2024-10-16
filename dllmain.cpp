#include "global.h"

SDK::UEngine* Engine;
SDK::UWorld* World;
SDK::APlayerController* Player0;
SDK::UIpNetDriver* NetDriver;
SDK::UKismetSystemLibrary* Kismet;
uintptr_t GBA = 0;

namespace SDK {

};

void Init() {
	AllocConsole();
	FILE* Dummy;
	freopen_s(&Dummy, "CONOUT$", "w", stdout);
	freopen_s(&Dummy, "CONIN$", "r", stdin);

	SDK::UInputSettings::GetDefaultObj()->ConsoleKeys[0].KeyName = SDK::UKismetStringLibrary::Conv_StringToName(L"Tilde");
	SDK::UObject* NewObject = SDK::UGameplayStatics::SpawnObject(Engine->ConsoleClass, Engine->GameViewport);
	Engine->GameViewport->ViewportConsole = static_cast<SDK::UConsole*>(NewObject);

}

void InitVars() {
	GBA = (uintptr_t)GetModuleHandleA("FCTClient-Win64-Shipping.exe");
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

