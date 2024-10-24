#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OxygenPotionInteractionComponent

#include "Basic.hpp"

#include "OxygenPotionInteractionComponent_classes.hpp"
#include "OxygenPotionInteractionComponent_parameters.hpp"


namespace SDK
{

// Function OxygenPotionInteractionComponent.OxygenPotionInteractionComponent_C.CanActivate
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FInteractionPayload              Payload                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UOxygenPotionInteractionComponent_C::CanActivate(const struct FInteractionPayload& Payload) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OxygenPotionInteractionComponent_C", "CanActivate");

	Params::OxygenPotionInteractionComponent_C_CanActivate Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function OxygenPotionInteractionComponent.OxygenPotionInteractionComponent_C.GetInactiveContextDescription
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FInteractionPayload              Payload                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UOxygenPotionInteractionComponent_C::GetInactiveContextDescription(const struct FInteractionPayload& Payload) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OxygenPotionInteractionComponent_C", "GetInactiveContextDescription");

	Params::OxygenPotionInteractionComponent_C_GetInactiveContextDescription Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

