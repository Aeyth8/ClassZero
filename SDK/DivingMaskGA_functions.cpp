#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DivingMaskGA

#include "Basic.hpp"

#include "DivingMaskGA_classes.hpp"
#include "DivingMaskGA_parameters.hpp"


namespace SDK
{

// Function DivingMaskGA.DivingMaskGA_C.ExecuteUbergraph_DivingMaskGA
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDivingMaskGA_C::ExecuteUbergraph_DivingMaskGA(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DivingMaskGA_C", "ExecuteUbergraph_DivingMaskGA");

	Params::DivingMaskGA_C_ExecuteUbergraph_DivingMaskGA Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DivingMaskGA.DivingMaskGA_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UDivingMaskGA_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DivingMaskGA_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

}

