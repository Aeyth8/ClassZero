#include "pch.h"

#if defined _M_X64
#pragma comment(lib, "libMinHook.x64.lib")
#endif

SDK::UEngine* Engine;
SDK::UWorld* World;
SDK::ASCTPlayerState* SCT_State;
SDK::APlayerController* Player0;
SDK::UIpNetDriver* NetDriver;
SDK::UKismetSystemLibrary* Kismet;

uintptr_t GBA = 0;
uintptr_t Crash1;
uintptr_t Crash1Ass;


template<typename T>
static std::vector<T*> FindObjects()
{
	std::vector<T*> ret;
	auto v = T::StaticClass();
	for (int i = 0; i < SDK::UObject::GObjects->Num(); ++i)
	{
		auto Obj = SDK::UObject::GObjects->GetByIndex(i);

		if (!Obj)
			continue;

		if (Obj->IsA(v))
			ret.push_back(static_cast<T*>(Obj));
	}
	return ret;
}

template <typename T>
T* GetLastOf() {
	return FindObjects<T>().back();
}


std::string Name = "";
std::string SteamID = "";
std::string PSNID = "";
std::string SessionID = "";
std::string UserID = "";
std::string Paste;
int Flag{0};
std::string Ident[] = {"Username: ", "SteamID: ", "PSNID: ", "SessionID: ", "UserID: "};
std::string* Identifier[] = {&Name, &SteamID, &PSNID, &SessionID, &UserID};

void Log(const std::string &msg) {
	std::cout << msg << std::endl;
}

bool IfChanged(std::string &CachedString, const std::string &UpdatedString) {
	bool Result;
	UpdatedString != CachedString ? CachedString = UpdatedString, Result = true : Result = false;
	return Result;
}

void PIDs() {
	
	for (SDK::ASCTPlayerState* States : FindObjects<SDK::ASCTPlayerState>()) {
		Name = States->PlayerNamePrivate.ToString();
		SteamID = States->SteamUserID.ToString();
		PSNID = States->PSNID.ToString();
		SessionID = States->SessionID.ToString();
		UserID = States->ABUserID.ToString();

		//Paste = "\n\nUsername: " + Name + "\n\nSteamID: " + SteamID + "\n\nPSNID: " + PSNID + "\n\nSession ID: " + SessionID + "\n\nUserID: " + UserID + "\n\n";
		for (int i = 0; i < 5; ++i) {
			*Identifier[i] != "" ? Paste += Ident[i] + *Identifier[i] + "\n\n" : "", Flag++;
		}
		if (Flag != 5) {
			std::cout << Paste << std::endl;
		}
		Paste = "";
		
		/*States->PlayerNamePrivate.ToString() != "" ? Name = "Username: " + States->PlayerNamePrivate.ToString() + "\n" : "";
		States->SteamUserID.ToString() != "" ? SteamID = "SteamID: " + States->SteamUserID.ToString() + "\n" : "";
		States->PSNID.ToString() != "" ? PSNID = "PSNID: " + States->PSNID.ToString() + "\n" : "";
		States->SessionID.ToString() != "" ? SessionID = "SessionID: " + States->SessionID.ToString() + "\n" : "";
		States->ABUserID.ToString() != "" ? UserID = "UserID: " + States->ABUserID.ToString() + "\n" : "";
		std::cout << Name << SteamID << PSNID << SessionID << UserID << std::endl;*/
		/*if (IfChanged(Name, States->PlayerNamePrivate.ToString()) && IfChanged(SteamID, States->SteamUserID.ToString()) && IfChanged(PSNID, States->PSNID.ToString()) && IfChanged(SessionID, States->SessionID.ToString()) && IfChanged(UserID, States->ABUserID.ToString())) {
			std::cout << "\n\nUsername: " + Name + "\n\nSteamID: " + SteamID + "\n\nPSNID: " + PSNID + "\n\nSession ID: " + SessionID + "\n\nUserID: " + UserID << std::endl;
		}*/

	}
}

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

void CreateMainWindow();

void InitVars() {
	GBA = (uintptr_t)GetModuleHandleA("FCTClient-Win64-Shipping.exe");
	Crash1 = GBA + 0x11B6FAC;
	Crash1Ass = GBA + 0x11B6F9F;
	Engine = SDK::UEngine::GetEngine();
	World = SDK::UWorld::GetWorld();
	Player0 = World->OwningGameInstance->LocalPlayers[0]->PlayerController;
	Kismet = SDK::UKismetSystemLibrary::GetDefaultObj();
	Init();
	//SCT = SDK::APlayerState::GetDefaultObj();
	//SCT = CG::CoreUObject::UObject::FindObjects<SDK::ACharacterSCT>().back();
	//SCT_State = FindObjects<SDK::ASCTPlayerState>().back();
	CreateMainWindow();
	//NetDriver = World->NetDriver;
	
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// GUI Toolkit

void InitGUI(HWND hWnd) {
	CreateWindow(L"BUTTON", L"Print All Player IDs", WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON, 10, 60, 250, 50, hWnd, (HMENU)1, GetModuleHandle(NULL), NULL);
	

}

LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam) {
	switch (message) {
	case WM_COMMAND:
		if (HIWORD(wParam) == BN_CLICKED) {
			int id = LOWORD(wParam);
			switch (id) {
			case 1:
				Log("Called PlayerIDs");
				PIDs();
				break;
			}
		}
		break;
	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	default:
		return DefWindowProc(hWnd, message, wParam, lParam);
	}
	return 0;
}

void CreateMainWindow() {
	const wchar_t CLASS_NAME[] = L"SampleWindowClass";

	WNDCLASS wc = {};
	wc.lpfnWndProc = WndProc;
	wc.hInstance = GetModuleHandle(NULL);
	wc.lpszClassName = CLASS_NAME;

	RegisterClass(&wc);

	HWND hWnd = CreateWindowEx(
		0, CLASS_NAME, L"FCT Toolkit",
		WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, 1000, 600,
		NULL, NULL, wc.hInstance, NULL
	);

	ShowWindow(hWnd, SW_SHOW);
	UpdateWindow(hWnd);

	InitGUI(hWnd);

	MSG msg;
	while (GetMessage(&msg, NULL, 0, 0)) {
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
}