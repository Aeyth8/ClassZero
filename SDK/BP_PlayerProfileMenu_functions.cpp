#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerProfileMenu

#include "Basic.hpp"

#include "BP_PlayerProfileMenu_classes.hpp"
#include "BP_PlayerProfileMenu_parameters.hpp"


namespace SDK
{

// Function BP_PlayerProfileMenu.BP_PlayerProfileMenu_C.OnFindGame__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    SearchingForGame_0                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerProfileMenu_C::OnFindGame__DelegateSignature(bool SearchingForGame_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerProfileMenu_C", "OnFindGame__DelegateSignature");

	Params::BP_PlayerProfileMenu_C_OnFindGame__DelegateSignature Parms{};

	Parms.SearchingForGame_0 = SearchingForGame_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerProfileMenu.BP_PlayerProfileMenu_C.OnInviteFriends__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_PlayerProfileMenu_C::OnInviteFriends__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerProfileMenu_C", "OnInviteFriends__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerProfileMenu.BP_PlayerProfileMenu_C.OnCustomize__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_PlayerProfileMenu_C::OnCustomize__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerProfileMenu_C", "OnCustomize__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerProfileMenu.BP_PlayerProfileMenu_C.OnLeaveLobby__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_PlayerProfileMenu_C::OnLeaveLobby__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerProfileMenu_C", "OnLeaveLobby__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerProfileMenu.BP_PlayerProfileMenu_C.OnGoToMainMenu__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_PlayerProfileMenu_C::OnGoToMainMenu__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerProfileMenu_C", "OnGoToMainMenu__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerProfileMenu.BP_PlayerProfileMenu_C.OnRefreshDisplayName__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_PlayerProfileMenu_C::OnRefreshDisplayName__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerProfileMenu_C", "OnRefreshDisplayName__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerProfileMenu.BP_PlayerProfileMenu_C.OnRefreshLevel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_PlayerProfileMenu_C::OnRefreshLevel__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerProfileMenu_C", "OnRefreshLevel__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerProfileMenu.BP_PlayerProfileMenu_C.ExecuteUbergraph_BP_PlayerProfileMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerProfileMenu_C::ExecuteUbergraph_BP_PlayerProfileMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerProfileMenu_C", "ExecuteUbergraph_BP_PlayerProfileMenu");

	Params::BP_PlayerProfileMenu_C_ExecuteUbergraph_BP_PlayerProfileMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerProfileMenu.BP_PlayerProfileMenu_C.BndEvt__BP_StatisticsAndAchievementView_K2Node_ComponentBoundEvent_14_OnAchievementsQueried__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FFCTAchievementList              AchievementList_0                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_PlayerProfileMenu_C::BndEvt__BP_StatisticsAndAchievementView_K2Node_ComponentBoundEvent_14_OnAchievementsQueried__DelegateSignature(const struct FFCTAchievementList& AchievementList_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerProfileMenu_C", "BndEvt__BP_StatisticsAndAchievementView_K2Node_ComponentBoundEvent_14_OnAchievementsQueried__DelegateSignature");

	Params::BP_PlayerProfileMenu_C_BndEvt__BP_StatisticsAndAchievementView_K2Node_ComponentBoundEvent_14_OnAchievementsQueried__DelegateSignature Parms{};

	Parms.AchievementList_0 = std::move(AchievementList_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerProfileMenu.BP_PlayerProfileMenu_C.BndEvt__BP_AccelByteRedeemCodeWidget_K2Node_ComponentBoundEvent_13_OnRefreshPlayerProfile__DelegateSignature
// (BlueprintEvent)

void UBP_PlayerProfileMenu_C::BndEvt__BP_AccelByteRedeemCodeWidget_K2Node_ComponentBoundEvent_13_OnRefreshPlayerProfile__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerProfileMenu_C", "BndEvt__BP_AccelByteRedeemCodeWidget_K2Node_ComponentBoundEvent_13_OnRefreshPlayerProfile__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerProfileMenu.BP_PlayerProfileMenu_C.BndEvt__BP_AccelByteRedeemCodeWidget_K2Node_ComponentBoundEvent_11_OnExitMenu__DelegateSignature
// (BlueprintEvent)

void UBP_PlayerProfileMenu_C::BndEvt__BP_AccelByteRedeemCodeWidget_K2Node_ComponentBoundEvent_11_OnExitMenu__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerProfileMenu_C", "BndEvt__BP_AccelByteRedeemCodeWidget_K2Node_ComponentBoundEvent_11_OnExitMenu__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerProfileMenu.BP_PlayerProfileMenu_C.BndEvt__RedeemCodeButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_PlayerProfileMenu_C::BndEvt__RedeemCodeButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerProfileMenu_C", "BndEvt__RedeemCodeButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerProfileMenu.BP_PlayerProfileMenu_C.BndEvt__bp_wi_EnterAvatarName_K2Node_ComponentBoundEvent_9_OnCancelChangeName__DelegateSignature
// (BlueprintEvent)

void UBP_PlayerProfileMenu_C::BndEvt__bp_wi_EnterAvatarName_K2Node_ComponentBoundEvent_9_OnCancelChangeName__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerProfileMenu_C", "BndEvt__bp_wi_EnterAvatarName_K2Node_ComponentBoundEvent_9_OnCancelChangeName__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerProfileMenu.BP_PlayerProfileMenu_C.BndEvt__bp_wi_EnterAvatarName_K2Node_ComponentBoundEvent_8_OnDisplayNameSuccess__DelegateSignature
// (BlueprintEvent)

void UBP_PlayerProfileMenu_C::BndEvt__bp_wi_EnterAvatarName_K2Node_ComponentBoundEvent_8_OnDisplayNameSuccess__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerProfileMenu_C", "BndEvt__bp_wi_EnterAvatarName_K2Node_ComponentBoundEvent_8_OnDisplayNameSuccess__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerProfileMenu.BP_PlayerProfileMenu_C.BndEvt__MenuButton_Appearance_1_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_PlayerProfileMenu_C::BndEvt__MenuButton_Appearance_1_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerProfileMenu_C", "BndEvt__MenuButton_Appearance_1_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerProfileMenu.BP_PlayerProfileMenu_C.OnSentToFriendLobby
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerProfileMenu_C::OnSentToFriendLobby()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerProfileMenu_C", "OnSentToFriendLobby");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerProfileMenu.BP_PlayerProfileMenu_C.BndEvt__WI_TrophyCustomization_K2Node_ComponentBoundEvent_6_OnBackCalled__DelegateSignature
// (BlueprintEvent)

void UBP_PlayerProfileMenu_C::BndEvt__WI_TrophyCustomization_K2Node_ComponentBoundEvent_6_OnBackCalled__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerProfileMenu_C", "BndEvt__WI_TrophyCustomization_K2Node_ComponentBoundEvent_6_OnBackCalled__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerProfileMenu.BP_PlayerProfileMenu_C.BndEvt__MenuButton_Appearance_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_PlayerProfileMenu_C::BndEvt__MenuButton_Appearance_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerProfileMenu_C", "BndEvt__MenuButton_Appearance_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerProfileMenu.BP_PlayerProfileMenu_C.BndEvt__MenuButton_Exit_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_PlayerProfileMenu_C::BndEvt__MenuButton_Exit_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerProfileMenu_C", "BndEvt__MenuButton_Exit_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerProfileMenu.BP_PlayerProfileMenu_C.BndEvt__MenuButton_ViewTrophies_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_PlayerProfileMenu_C::BndEvt__MenuButton_ViewTrophies_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerProfileMenu_C", "BndEvt__MenuButton_ViewTrophies_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerProfileMenu.BP_PlayerProfileMenu_C.BndEvt__MenuButton_Achievements_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_PlayerProfileMenu_C::BndEvt__MenuButton_Achievements_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerProfileMenu_C", "BndEvt__MenuButton_Achievements_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerProfileMenu.BP_PlayerProfileMenu_C.BndEvt__BP_StatisticsAndAchievementView_K2Node_ComponentBoundEvent_1_OnExitAchievements__DelegateSignature
// (BlueprintEvent)

void UBP_PlayerProfileMenu_C::BndEvt__BP_StatisticsAndAchievementView_K2Node_ComponentBoundEvent_1_OnExitAchievements__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerProfileMenu_C", "BndEvt__BP_StatisticsAndAchievementView_K2Node_ComponentBoundEvent_1_OnExitAchievements__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerProfileMenu.BP_PlayerProfileMenu_C.BndEvt__BP_CustomizationMenu_K2Node_ComponentBoundEvent_0_OnBackClicked__DelegateSignature
// (BlueprintEvent)

void UBP_PlayerProfileMenu_C::BndEvt__BP_CustomizationMenu_K2Node_ComponentBoundEvent_0_OnBackClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerProfileMenu_C", "BndEvt__BP_CustomizationMenu_K2Node_ComponentBoundEvent_0_OnBackClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}
