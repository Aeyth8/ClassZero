#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ShieldGA

#include "Basic.hpp"

#include "ShieldGA_classes.hpp"
#include "ShieldGA_parameters.hpp"


namespace SDK
{

// Function ShieldGA.ShieldGA_C.ExecuteUbergraph_ShieldGA
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShieldGA_C::ExecuteUbergraph_ShieldGA(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShieldGA_C", "ExecuteUbergraph_ShieldGA");

	Params::ShieldGA_C_ExecuteUbergraph_ShieldGA Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShieldGA.ShieldGA_C.OnAdded
// (Event, Public, BlueprintEvent)

void UShieldGA_C::OnAdded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShieldGA_C", "OnAdded");

	UObject::ProcessEvent(Func, nullptr);
}

}
