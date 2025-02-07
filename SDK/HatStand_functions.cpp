#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HatStand

#include "Basic.hpp"

#include "HatStand_classes.hpp"
#include "HatStand_parameters.hpp"


namespace SDK
{

// Function HatStand.HatStand_C.ExecuteUbergraph_HatStand
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHatStand_C::ExecuteUbergraph_HatStand(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HatStand_C", "ExecuteUbergraph_HatStand");

	Params::HatStand_C_ExecuteUbergraph_HatStand Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HatStand.HatStand_C.Picked up
// (BlueprintCallable, BlueprintEvent)

void AHatStand_C::Picked_up()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HatStand_C", "Picked up");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HatStand.HatStand_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AHatStand_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HatStand_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HatStand.HatStand_C.Rotation__UpdateFunc
// (BlueprintEvent)

void AHatStand_C::Rotation__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HatStand_C", "Rotation__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HatStand.HatStand_C.Rotation__FinishedFunc
// (BlueprintEvent)

void AHatStand_C::Rotation__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HatStand_C", "Rotation__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HatStand.HatStand_C.Location__UpdateFunc
// (BlueprintEvent)

void AHatStand_C::Location__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HatStand_C", "Location__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HatStand.HatStand_C.Location__FinishedFunc
// (BlueprintEvent)

void AHatStand_C::Location__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HatStand_C", "Location__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

}

