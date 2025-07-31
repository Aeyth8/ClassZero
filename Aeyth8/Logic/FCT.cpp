#include "FCT.h"
#include "../Global.hpp"
#include "../Hooks/Hooks.hpp"
#include "../Offsets.h"

#include "../Tools/Pointers.h"
#include "../Tools/UFunctions.hpp"
#include "../Tools/BytePatcher.h"

#include "../../Dumper-7/SDK/SCT_classes.hpp"
#include "../../Dumper-7/SDK/FCT_classes.hpp"

/*

Written by Aeyth8

https://github.com/Aeyth8

*/


using namespace A8CL; using namespace Global;


// -- Vars

SDK::USCTGameInstance* FCT::GameInstance{nullptr};

// -- Constants

constexpr const BYTE NOP{0x90};
constexpr const BYTE RETN{0xC3};

// -- Hooks

static std::vector<Hooks::HookStructure> HookList =
{
	{OFF::UConsole, UFunctions::UConsole},
	{OFF::Browse, UFunctions::Browse},
	{OFF::AppPreExit, UFunctions::AppPreExit},
	{OFF::PreLogin, UFunctions::PreLogin},
	{OFF::FindFileInPakFiles, UFunctions::FindFileInPakFiles},
	{OFF::IsNonPakFileNameAllowed, UFunctions::IsNonPakFilenameAllowed},
};

void FCT::Init_Hooks()
{
	if (Hooks::Init())
	{
		Hooks::CreateAndEnableHooks(HookList);
	}

}

void FCT::Init_Engine()
{

}

void FCT::Init_Vars(SDK::UWorld* GWorld)
{
	if (GWorld)
	{
		FCT::GameInstance = static_cast<SDK::USCTGameInstance*>(GWorld->OwningGameInstance);
		//if (FCT::Player()) FCT::Player()->GrantAchievement(Pointers::FString2FName(L"dont-trust-thy-neighbor"));
	}
}

// -- Pointers

SDK::UEngine* const& FCT::GEngine(const bool bLog)
{
	SDK::UEngine*& Engine = *reinterpret_cast<SDK::UEngine**>(OFF::GEngine.PlusBase());
	if (bLog && IsNull(Engine))
	{
		LogA("Logic", "GEngine is a null pointer!");
	}
	return Engine;
}

SDK::UWorld* const& FCT::GWorld(const bool bLog)
{
	SDK::UWorld*& World = *reinterpret_cast<SDK::UWorld**>(OFF::GWorld.PlusBase());
	if (bLog && IsNull(World))
	{
		LogA("Logic", "GWorld is a null pointer!");
	}
	return World;
}

SDK::UBlueprintFunctionLibrary* const& FCT::BlueprintFunctionLibrary()
{
	static SDK::UBlueprintFunctionLibrary* Library{nullptr};
	if (!Library) Library = SDK::UBlueprintFunctionLibrary::GetDefaultObj();

	return Library;
}

SDK::ASCTPlayerController* FCT::Player(const int& Index)
{
	return static_cast<SDK::ASCTPlayerController*>(Pointers::Player(Index));
}

SDK::AHumanoidCharacter* FCT::Character(const int& Index)
{
	SDK::ASCTPlayerController* Player = FCT::Player(Index);
	if (!IsNull(Player))
	{
		return static_cast<SDK::AHumanoidCharacter*>(Player->Character);
	}

	return nullptr;
}