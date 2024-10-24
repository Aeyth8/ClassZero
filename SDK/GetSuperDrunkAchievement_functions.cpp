#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GetSuperDrunkAchievement

#include "Basic.hpp"

#include "GetSuperDrunkAchievement_classes.hpp"
#include "GetSuperDrunkAchievement_parameters.hpp"


namespace SDK
{

// Function GetSuperDrunkAchievement.GetSuperDrunkAchievement_C.ExecuteUbergraph_GetSuperDrunkAchievement
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGetSuperDrunkAchievement_C::ExecuteUbergraph_GetSuperDrunkAchievement(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GetSuperDrunkAchievement_C", "ExecuteUbergraph_GetSuperDrunkAchievement");

	Params::GetSuperDrunkAchievement_C_ExecuteUbergraph_GetSuperDrunkAchievement Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GetSuperDrunkAchievement.GetSuperDrunkAchievement_C.On Drink Consumed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*                Controller_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGetSuperDrunkAchievement_C::On_Drink_Consumed(class APlayerController* Controller_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GetSuperDrunkAchievement_C", "On Drink Consumed");

	Params::GetSuperDrunkAchievement_C_On_Drink_Consumed Parms{};

	Parms.Controller_0 = Controller_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GetSuperDrunkAchievement.GetSuperDrunkAchievement_C.K2_Initialize
// (Event, Public, BlueprintEvent)

void UGetSuperDrunkAchievement_C::K2_Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GetSuperDrunkAchievement_C", "K2_Initialize");

	UObject::ProcessEvent(Func, nullptr);
}

}

