#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SM_Christmas_glass_ball_01

#include "Basic.hpp"

#include "BP_SM_Christmas_glass_ball_01_classes.hpp"
#include "BP_SM_Christmas_glass_ball_01_parameters.hpp"


namespace SDK
{

// Function BP_SM_Christmas_glass_ball_01.BP_SM_Christmas_glass_ball_01_C.ExecuteUbergraph_BP_SM_Christmas_glass_ball_01
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SM_Christmas_glass_ball_01_C::ExecuteUbergraph_BP_SM_Christmas_glass_ball_01(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SM_Christmas_glass_ball_01_C", "ExecuteUbergraph_BP_SM_Christmas_glass_ball_01");

	Params::BP_SM_Christmas_glass_ball_01_C_ExecuteUbergraph_BP_SM_Christmas_glass_ball_01 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SM_Christmas_glass_ball_01.BP_SM_Christmas_glass_ball_01_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SM_Christmas_glass_ball_01_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SM_Christmas_glass_ball_01_C", "ReceiveTick");

	Params::BP_SM_Christmas_glass_ball_01_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

