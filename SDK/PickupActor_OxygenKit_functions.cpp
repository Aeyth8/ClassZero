#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PickupActor_OxygenKit

#include "Basic.hpp"

#include "PickupActor_OxygenKit_classes.hpp"
#include "PickupActor_OxygenKit_parameters.hpp"


namespace SDK
{

// Function PickupActor_OxygenKit.PickupActor_OxygenKit_C.ExecuteUbergraph_PickupActor_OxygenKit
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APickupActor_OxygenKit_C::ExecuteUbergraph_PickupActor_OxygenKit(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PickupActor_OxygenKit_C", "ExecuteUbergraph_PickupActor_OxygenKit");

	Params::PickupActor_OxygenKit_C_ExecuteUbergraph_PickupActor_OxygenKit Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PickupActor_OxygenKit.PickupActor_OxygenKit_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APickupActor_OxygenKit_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PickupActor_OxygenKit_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PickupActor_OxygenKit.PickupActor_OxygenKit_C.IsCloseToGround
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Close                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void APickupActor_OxygenKit_C::IsCloseToGround(bool* Close)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PickupActor_OxygenKit_C", "IsCloseToGround");

	Params::PickupActor_OxygenKit_C_IsCloseToGround Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Close != nullptr)
		*Close = Parms.Close;
}


// Function PickupActor_OxygenKit.PickupActor_OxygenKit_C.OnRep_WallMounted
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void APickupActor_OxygenKit_C::OnRep_WallMounted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PickupActor_OxygenKit_C", "OnRep_WallMounted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PickupActor_OxygenKit.PickupActor_OxygenKit_C.Picked up
// (BlueprintCallable, BlueprintEvent)

void APickupActor_OxygenKit_C::Picked_up()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PickupActor_OxygenKit_C", "Picked up");

	UObject::ProcessEvent(Func, nullptr);
}

}
