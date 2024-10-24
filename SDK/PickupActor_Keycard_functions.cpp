#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PickupActor_Keycard

#include "Basic.hpp"

#include "PickupActor_Keycard_classes.hpp"
#include "PickupActor_Keycard_parameters.hpp"


namespace SDK
{

// Function PickupActor_Keycard.PickupActor_Keycard_C.ExecuteUbergraph_PickupActor_Keycard
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APickupActor_Keycard_C::ExecuteUbergraph_PickupActor_Keycard(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PickupActor_Keycard_C", "ExecuteUbergraph_PickupActor_Keycard");

	Params::PickupActor_Keycard_C_ExecuteUbergraph_PickupActor_Keycard Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PickupActor_Keycard.PickupActor_Keycard_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APickupActor_Keycard_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PickupActor_Keycard_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PickupActor_Keycard.PickupActor_Keycard_C.ASC Has Tag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            TagContainer                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool APickupActor_Keycard_C::ASC_Has_Tag(class AActor* Actor, const struct FGameplayTagContainer& TagContainer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PickupActor_Keycard_C", "ASC Has Tag");

	Params::PickupActor_Keycard_C_ASC_Has_Tag Parms{};

	Parms.Actor = Actor;
	Parms.TagContainer = std::move(TagContainer);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

