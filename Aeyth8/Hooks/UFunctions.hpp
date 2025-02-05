#pragma once
#include "../../pch.h"

class UFunctions
{
public:

	// Typedefinition and Function Call [FC]
	class PTR
	{
	public:
		typedef void(__thiscall* UConsole)(SDK::UConsole* Var, SDK::FString* Command); 
		inline static UConsole FC_UConsole{0};

		typedef void(__thiscall* PreLogin)(SDK::AGameModeBase* Var, SDK::FString* Options, SDK::FString* Address, SDK::FUniqueNetIdRepl* UniqueId, SDK::FString* ErrorMessage);
		inline static PreLogin FC_PreLogin{0};

		typedef void(__thiscall* Login)(SDK::UPlayer* NewPlayer, SDK::ENetRole* InRemoteRole, const SDK::FString& Portal, const SDK::FString& Options, const SDK::FUniqueNetIdRepl* UniqueId, SDK::FString* ErrorMessage);
		inline static Login FC_Login{0};

		typedef bool(__thiscall* Browse)(SDK::UEngine* Engine, SDK::FWorldContext& WorldContext, SDK::FURL, SDK::FString&);
		inline static Browse FC_Browse{0};

		typedef void(__thiscall* SpawnActor)(SDK::UWorld* World, SDK::UClass* Class, const SDK::FVector* Location, const SDK::FRotator* Rotation, const FActorSpawnParameters* SpawnParameters);
		inline static SpawnActor FC_SpawnActor{0};

		typedef void(__thiscall* AppPreExit)();
		inline static AppPreExit FC_AppPreExit{0};

	};

	inline static std::string UConsoleCache{""};
	inline static std::string UConsoleTemp{""};

	inline static void UConsole(SDK::UConsole* Var, SDK::FString* Command) {
		UConsoleCache = Command->ToString();
		UConsoleTemp.clear();

		Log("UConsole :: " + UConsoleCache);

		for (char Character : UConsoleCache) {
			Character = std::tolower(Character);
			UConsoleTemp.push_back(Character);
		}

		if (UConsoleTemp.rfind("?listen") != std::string::npos) {
			Log("Listen server called");
			// Add logic later to allow for InitListen
		}

		PTR::FC_UConsole(Var, Command);
	}

	
	inline static void PreLogin(SDK::AGameModeBase* Var, SDK::FString* Options, SDK::FString* Address, SDK::FUniqueNetIdRepl* UniqueId, SDK::FString* ErrorMessage) {
		Log("<FunctionHooks.hpp> / Hooks::Functions::PreLogin():: PreLogin has been called with Options =   " + Options->ToString());

		/* Authentication will be added later */
	}

	inline static SDK::APlayerController* Login(SDK::UPlayer* NewPlayer, SDK::ENetRole* InRemoteRole, const SDK::FString& Portal, const SDK::FString& Options, const SDK::FUniqueNetIdRepl* UniqueId, SDK::FString* ErrorMessage) {
		Log("<FunctionHooks.hpp> / Hooks::Functions::Login():: Login has been called.");

		/* Add custom logic here (not needed) */
		//PTR::FC_Login(NewPlayer, InRemoteRole, Portal, Options, UniqueId, ErrorMessage);
	}

	inline static int Browse(SDK::UEngine* Engine, SDK::FWorldContext& WorldContext, SDK::FURL FURL, SDK::FString& Error) {
		std::string Info;
		Log("<FunctionHooks.hpp> / Hooks::Functions::Browse():: BEGIN");
		for (size_t i{0}; i < FURL.Op.Num(); ++i) Info += FURL.Op[i].ToString();
		Log("Host: " + FURL.Host.ToString() + " | Port: " + std::to_string(FURL.Port));
		Log("Protocol: " + FURL.Protocol.ToString() + " | Map: " + FURL.Map.ToString() + " | RedirectURL: " + FURL.RedirectURL.ToString() + " | Portal: " + FURL.Portal.ToString());
		if (!Info.empty()) Log("Op: " + Info);
		if (Error.IsValid()) Log("Error: " + Error.ToString());
		Log("<FunctionHooks.hpp> / Hooks::Functions::Browse():: END");
		//return PTR::FC_Browse(Engine, WorldContext, FURL, Error);
	}

	inline static void SpawnActor(SDK::UWorld* World, SDK::UClass* Class, const SDK::FVector* Location, const SDK::FRotator* Rotation, FActorSpawnParameters* SpawnParameters) {
		SpawnParameters->SpawnCollisionHandlingOverride = static_cast<SDK::ESpawnActorCollisionHandlingMethod>(2);
		int Param = static_cast<int>(SpawnParameters->SpawnCollisionHandlingOverride);
		//Log("<FunctionHooks.hpp> / Hooks::Functions::SpawnActor():: " + Class->GetFullName() + " :: FActorSpawnParameters->SpawnCollisionHandlingOverride = " + std::to_string(Param));
		//Log("<FunctionHooks.hpp> / Hooks::Functions::SpawnActor():: Owner = " + SpawnParameters->Owner->GetFullName());
			
		//PTR::FC_SpawnActor(World, Class, Location, Rotation, SpawnParameters);
	}


};

class Net
{
public:
	/* 
		0x2F8A4C0 UWorld:: InternalGetNetMode() | AOB = 48 8B BC 24 ? ? ? ? B8 ? ? ? ? 48 81 C4 ? ? ? ? 5B C3
		0x28B8090 AActor::InternalGetNetMode()  | AOB = 48 85 FF 74 0C 48 8B 8F ? ? ? ? 48 85 C9 75 E0 | OR | 48 89 5C 24 ? 57 48 83 EC 20 48 8B 01 48 8B D9 FF 90 ? ? ? ? 48 8B 93 ? ? ? ? 48 8B C8 48 8B F8
		0x AActor::execGetRemoteRole() | AOB for both = 48 8B 42 20 45 33 C9 48 85 C0 41 0F 95 C1 4C 03 C8 4C 89 4A 20 0F B6 81 ? ? ? ? 41 88 00 C3 (RemoteRole is second to last function and LocalRole is third to last)
		0x AActor::execGetLocalRole()
	*/

	inline static uintptr_t UWorldGetNetMode = 0x2F8A4C0;
	inline static uintptr_t AActorGetNetMode = 0x28B8090;

	enum ENetMode {
		NM_Standalone,
		NM_DedicatedServer,
		NM_ListenServer,
		NM_Client,
		NM_MAX,
		Passthrough // Custom mode
	};
	enum ENetRole
	{
		ROLE_None,
		ROLE_SimulatedProxy, // Default client role
		ROLE_AutonomousProxy,
		ROLE_Authority,
		ROLE_MAX
	};

	typedef ENetMode(__thiscall* UWorldInternalGetNetMode)(SDK::UWorld* World);
	inline static UWorldInternalGetNetMode FC_WorldGetNetMode{0};

	typedef ENetMode(__thiscall* AActorInternalGetNetMode)(SDK::AActor* Actor);
	inline static AActorInternalGetNetMode FC_ActorGetNetMode{0};

	typedef ENetRole(__thiscall* RemoteRole)(__int64, __int64, BYTE*);
	inline static RemoteRole FC_RemoteRole{0};

	typedef ENetRole(__thiscall* LocalRole)(__int64, __int64, BYTE*);
	inline static LocalRole FC_LocalRole{0};

	inline static ENetMode WorldHookMode{ENetMode::NM_ListenServer};
	inline static ENetMode ActorHookMode{ENetMode::NM_ListenServer};

	inline static ENetMode WorldGetNetMode(SDK::UWorld* World) {
		if (WorldHookMode == ENetMode::Passthrough) return FC_WorldGetNetMode(World);
		return WorldHookMode;
	}

	inline static ENetMode ActorGetNetMode(SDK::AActor* Actor) {
		if (ActorHookMode == ENetMode::Passthrough) return FC_ActorGetNetMode(Actor);
		return ActorHookMode;
	}



};