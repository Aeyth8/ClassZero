#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AchievementPanel

#include "Basic.hpp"

#include "BP_AchievementPanel_classes.hpp"
#include "BP_AchievementPanel_parameters.hpp"


namespace SDK
{

// Function BP_AchievementPanel.BP_AchievementPanel_C.Initialize__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFCTAchievement*                  Achievement                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AchievementPanel_C::Initialize__DelegateSignature(class UFCTAchievement* Achievement)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AchievementPanel_C", "Initialize__DelegateSignature");

	Params::BP_AchievementPanel_C_Initialize__DelegateSignature Parms{};

	Parms.Achievement = Achievement;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AchievementPanel.BP_AchievementPanel_C.ExecuteUbergraph_BP_AchievementPanel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AchievementPanel_C::ExecuteUbergraph_BP_AchievementPanel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AchievementPanel_C", "ExecuteUbergraph_BP_AchievementPanel");

	Params::BP_AchievementPanel_C_ExecuteUbergraph_BP_AchievementPanel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AchievementPanel.BP_AchievementPanel_C.IconCreated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*                Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AchievementPanel_C::IconCreated(class UTexture2DDynamic* Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AchievementPanel_C", "IconCreated");

	Params::BP_AchievementPanel_C_IconCreated Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AchievementPanel.BP_AchievementPanel_C.Initialize_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFCTAchievement*                  Achievement                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AchievementPanel_C::Initialize_Event(class UFCTAchievement* Achievement)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AchievementPanel_C", "Initialize_Event");

	Params::BP_AchievementPanel_C_Initialize_Event Parms{};

	Parms.Achievement = Achievement;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AchievementPanel.BP_AchievementPanel_C.BP_AchievementPanel_AutoGenFunc
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AchievementPanel_C::BP_AchievementPanel_AutoGenFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AchievementPanel_C", "BP_AchievementPanel_AutoGenFunc");

	UObject::ProcessEvent(Func, nullptr);
}

}
