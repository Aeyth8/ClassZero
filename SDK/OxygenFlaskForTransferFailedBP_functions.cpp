#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OxygenFlaskForTransferFailedBP

#include "Basic.hpp"

#include "OxygenFlaskForTransferFailedBP_classes.hpp"
#include "OxygenFlaskForTransferFailedBP_parameters.hpp"


namespace SDK
{

// Function OxygenFlaskForTransferFailedBP.OxygenFlaskForTransferFailedBP_C.ExecuteUbergraph_OxygenFlaskForTransferFailedBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AOxygenFlaskForTransferFailedBP_C::ExecuteUbergraph_OxygenFlaskForTransferFailedBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OxygenFlaskForTransferFailedBP_C", "ExecuteUbergraph_OxygenFlaskForTransferFailedBP");

	Params::OxygenFlaskForTransferFailedBP_C_ExecuteUbergraph_OxygenFlaskForTransferFailedBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OxygenFlaskForTransferFailedBP.OxygenFlaskForTransferFailedBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AOxygenFlaskForTransferFailedBP_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OxygenFlaskForTransferFailedBP_C", "ReceiveTick");

	Params::OxygenFlaskForTransferFailedBP_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OxygenFlaskForTransferFailedBP.OxygenFlaskForTransferFailedBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AOxygenFlaskForTransferFailedBP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OxygenFlaskForTransferFailedBP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
