#pragma once
#include "../../pch.h" // Make sure that MinHook.h is included in pch.h, or directly included here.
#include "UFunctions.hpp"


class Hooks
{
private:
	struct HookStructure { uintptr_t Offset; LPVOID DetourFunction; LPVOID FunctionCall{0}; const std::string& HookName;  uintptr_t CalculatedAddress{0}; };
	inline static HookStructure Instance[] =
	{
		{0x2F51E20, UFunctions::UConsole, &UFunctions::PTR::FC_UConsole, "UConsole"},
		{0x2F8A4C0, Net::WorldGetNetMode, &Net::FC_WorldGetNetMode, "WorldGetNetMode"},
		{0x28B8090, Net::ActorGetNetMode, &Net::FC_ActorGetNetMode, "ActorGetNetMode"},
		{0x076DA60, PreExit, &UFunctions::PTR::FC_AppPreExit, "AppPreExit"},
		{0x2F24200, UFunctions::Browse, &UFunctions::PTR::FC_Browse, "Browse"},
	};

	// Handles the log messages and behavior for CreateAndEnableAllHooks()
	inline static bool HookStatus(MH_STATUS& Status, std::string HookName, int Message, LPVOID FunctionCall = 0) { if (Status == MH_STATUS::MH_ERROR_NOT_INITIALIZED) { Log("MinHook not initialized!"); return false; }
		if (Status == MH_OK) {
			if (Message == 0) Log("Successfully created a hook for " + HookName + ".");
			else if (Message == 1) { Log("Successfully enabled a hook for " + HookName + ". Pointer = " + HexToString(reinterpret_cast<uintptr_t>(FunctionCall))); }
			else { Log("Successfully disabled hook for" + HookName + "."); }
			return true;
		}
		else { 
			if (Message == 0) Log("Failed to create a hook for " + HookName + ".");
			else if (Message == 1) { Log("Failed to enable a hook for " + HookName + "."); }
			else { Log("Failed to disable hook for" + HookName + "."); }
			return false;
		}
	}

	// Idiot proofing.
	inline static bool MH_INIT{false};

	// Used in CreateAndEnableHook()
	inline static int NamelessIteration{0};
	
public:

	// Must be called only once before any hooks are initiated.
	inline static void Init() {
		if (MH_INIT) return;
		MH_STATUS Status = MH_Initialize();

		if (Status != MH_STATUS::MH_OK && Status != MH_STATUS::MH_ERROR_ALREADY_INITIALIZED) {
			ErrorBox(L"! FATAL ERROR !", L"MinHook has failed to initialize! Please restart the game and try again.\nIf the problem persists, try restarting your computer, refer to the source code, or ask me by filing an issue on my GitHub (Aeyth8)", MB_OK);
		}

		Log("MinHook has been initialized.");
		MH_INIT = true;
	}

	// "Must" be called only once at the end of the program after all hooks are disabled. I haven't been doing this for a long time so I doubt it truly matters.
	inline static void Uninit() {
		if (!MH_INIT) return;
		MH_STATUS Status = MH_Uninitialize();

		if (Status != MH_STATUS::MH_OK && Status != MH_STATUS::MH_ERROR_NOT_INITIALIZED) { Log("Failed to uninitialize MinHook, this isn't too important so don't worry about it."); return; }
		Log("MinHook has been uninitialized.");
		MH_INIT = false;
	}

	// Manually create and enable any hook. 
	inline static bool CreateAndEnableHook(uintptr_t TargetAddress, LPVOID DetourFunction, LPVOID OriginalFunction, std::string HookName = "") {
		if (HookName == "") { HookName = "NO_NAME_" + std::to_string(NamelessIteration); NamelessIteration++; }
		
		MH_STATUS Status = MH_CreateHook(reinterpret_cast<LPVOID*>(TargetAddress), DetourFunction, reinterpret_cast<LPVOID*>(OriginalFunction));
		if (!HookStatus(Status, HookName, 0)) return false;
		
		Status = MH_EnableHook(reinterpret_cast<LPVOID*>(TargetAddress));
		
		if (HookStatus(Status, HookName, 1, OriginalFunction)) return true;
	}

	// Main hooking function which iterates through all hooks, creating and enabling them while handling errors.
	// > Contains an optional int vector to exclude certain hooks specified by the iterator within HookStructure Instance[] 
	// Example : CreateAndEnableAllHooks({0, 5, 6});
	inline static void CreateAndEnableAllHooks(const std::vector<int>& ExceptFor = {}) {
		for (int i{0}; i < std::size(Instance); ++i) {
			// If an exception list was provided, it will make sure to skip it.
			if (!ExceptFor.empty() && std::find(ExceptFor.begin(), ExceptFor.end(), i) != ExceptFor.end()) continue;

			// Calculate all addresses to be dynamically used. 
			Instance[i].CalculatedAddress = (GBA + Instance[i].Offset);

			MH_STATUS Status = MH_CreateHook(reinterpret_cast<LPVOID>(Instance[i].CalculatedAddress), Instance[i].DetourFunction, reinterpret_cast<LPVOID*>(Instance[i].FunctionCall));

			if (!HookStatus(Status, Instance[i].HookName, 0, Instance[i].FunctionCall)) continue;

			Status = MH_EnableHook(reinterpret_cast<LPVOID>(Instance[i].CalculatedAddress));

			HookStatus(Status, Instance[i].HookName, 1, Instance[i].FunctionCall);
		}
	}

	// Manually disable certain hooks.
	inline static bool DisableHook(uintptr_t TargetAddress, std::string HookName) {
		MH_STATUS Status = MH_DisableHook(reinterpret_cast<LPVOID*>(TargetAddress));
		if (HookStatus(Status, HookName, 2)) return true;
		return false;
	}

	// Disable everything, for end of runtime.
	inline static void DisableAllHooks() { MH_DisableHook(MH_ALL_HOOKS); Log("Disabled all hooks."); }

};

// Custom hooks and function calls for engine debugging.
class Debug
{
public:
	inline static bool HookWorldGetNetMode(Net::ENetMode HookMode = Net::ENetMode::Passthrough, uintptr_t OverrideOffset = Net::UWorldGetNetMode) {
		Net::WorldHookMode = HookMode;
		return Hooks::CreateAndEnableHook((GBA + OverrideOffset), Net::WorldGetNetMode, &Net::FC_WorldGetNetMode, "WorldGetNetMode");
	}

	inline static bool HookActorGetNetMode(Net::ENetMode HookMode = Net::ENetMode::Passthrough, uintptr_t OverrideOffset = Net::AActorGetNetMode) {
		Net::ActorHookMode = HookMode;
		return Hooks::CreateAndEnableHook((GBA + OverrideOffset), Net::ActorGetNetMode, &Net::FC_ActorGetNetMode, "ActorGetNetMode");
	}

	template <typename UClass>
	inline static void SpawnActor(SDK::UClass* Class = UClass::StaticClass(), SDK::FVector Location = Player0()->K2_GetActorLocation()) {
		static __int64 (*Function)(SDK::UWorld* World, SDK::UClass* Class, SDK::FVector Location, SDK::FRotator Rotation, FActorSpawnParameters SpawnParameters) = decltype(Function)(GBA + 0x2C16BF0);
		FActorSpawnParameters SpawnParameters{};
		SpawnParameters.SpawnCollisionHandlingOverride = SDK::ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		Function(UWorld(), Class, Location, SDK::FRotator(), SpawnParameters);
	}


};




