#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HatGA

#include "Basic.hpp"

#include "HatGA_classes.hpp"
#include "HatGA_parameters.hpp"


namespace SDK
{

// Function HatGA.HatGA_C.ExecuteUbergraph_HatGA
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHatGA_C::ExecuteUbergraph_HatGA(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HatGA_C", "ExecuteUbergraph_HatGA");

	Params::HatGA_C_ExecuteUbergraph_HatGA Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HatGA.HatGA_C.OnAdded
// (Event, Public, BlueprintEvent)

void UHatGA_C::OnAdded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HatGA_C", "OnAdded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HatGA.HatGA_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UHatGA_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HatGA_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HatGA.HatGA_C.K2_OnRep_EquipablePower
// (Event, Protected, BlueprintEvent)

void UHatGA_C::K2_OnRep_EquipablePower()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HatGA_C", "K2_OnRep_EquipablePower");

	UObject::ProcessEvent(Func, nullptr);
}

}

