#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: bp_Champagne_Tower

#include "Basic.hpp"

#include "bp_Champagne_Tower_classes.hpp"
#include "bp_Champagne_Tower_parameters.hpp"


namespace SDK
{

// Function bp_Champagne_Tower.bp_Champagne_Tower_C.ExecuteUbergraph_bp_Champagne_Tower
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_Champagne_Tower_C::ExecuteUbergraph_bp_Champagne_Tower(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("bp_Champagne_Tower_C", "ExecuteUbergraph_bp_Champagne_Tower");

	Params::bp_Champagne_Tower_C_ExecuteUbergraph_bp_Champagne_Tower Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function bp_Champagne_Tower.bp_Champagne_Tower_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Abp_Champagne_Tower_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("bp_Champagne_Tower_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

