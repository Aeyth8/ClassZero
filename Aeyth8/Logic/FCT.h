#pragma once


/*

Written by Aeyth8

https://github.com/Aeyth8

*/


namespace SDK
{
	class UEngine;
	class UWorld;
	class UBlueprintFunctionLibrary;
	
	class USCTGameInstance;

	// All game specific subclasses of UBlueprintFunctionLibrary
	class UFCTPlatformBlueprintFunctionLibrary;
	class UMyBlueprintFunctionLibrary;
	class UBPUser;
	class UAccelByteBlueprintsSettings;
	class UAccelByteBlueprintsAchievement;
	class UABMultiRegistry;
	class UAccelByteBlueprintsGroup;
	class UServerMultiRegistry;
	class UAccelByteBlueprintsCategory;
	class UAccelByteBlueprintsCloudStorage;
	class UAccelByteBlueprintsCredentials;
	class UAccelByteBlueprintsReward;
	class UAccelByteBlueprintsCurrency;
	class UAccelByteBlueprintsEntitlement;
	class UAccelByteBlueprintsGameProfile;
	class UAccelByteBlueprintsItem;
	class UAccelByteBlueprintsLobby;
	class UAccelByteBlueprintsOrder;
	class UAccelByteBlueprintsServerCredentials;
	class UAccelByteBlueprintsServerSettings;
	class UAccelByteBlueprintsStatistic;
	class UAccelByteBlueprintsUserProfile;
	class UAccelByteBlueprintsWallet;


	class ASCTPlayerController;
	class ACharacterSCT;
	class AHumanoidCharacter;
}

namespace A8CL
{
namespace FCT
{
	// -- Vars

	extern SDK::USCTGameInstance* GameInstance;

	// -- Initialization

	void Init_Hooks();
	void Init_Engine();
	void Init_Vars(SDK::UWorld* GWorld);

	// -- Pointers

	SDK::UEngine* const& GEngine(const bool bLog = false);
	SDK::UWorld* const& GWorld(const bool bLog = false);
	SDK::UBlueprintFunctionLibrary* const& BlueprintFunctionLibrary();

	SDK::ASCTPlayerController* Player(const int& Index = 0);
	SDK::AHumanoidCharacter* Character(const int& Index = 0);

	template <class Subclass>
	Subclass* const& GetBlueprintClass()
	{
		return static_cast<Subclass*>(BlueprintFunctionLibrary());
	}	
}
}