#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KeycardGA

#include "Basic.hpp"

#include "KeycardGA_classes.hpp"
#include "KeycardGA_parameters.hpp"


namespace SDK
{

// Function KeycardGA.KeycardGA_C.ExecuteUbergraph_KeycardGA
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeycardGA_C::ExecuteUbergraph_KeycardGA(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeycardGA_C", "ExecuteUbergraph_KeycardGA");

	Params::KeycardGA_C_ExecuteUbergraph_KeycardGA Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeycardGA.KeycardGA_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UKeycardGA_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeycardGA_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeycardGA.KeycardGA_C.OnRemoved
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UKeycardGA_C::OnRemoved()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeycardGA_C", "OnRemoved");

	UObject::ProcessEvent(Func, nullptr);
}

}

