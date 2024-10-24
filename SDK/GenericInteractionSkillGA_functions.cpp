#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GenericInteractionSkillGA

#include "Basic.hpp"

#include "GenericInteractionSkillGA_classes.hpp"
#include "GenericInteractionSkillGA_parameters.hpp"


namespace SDK
{

// Function GenericInteractionSkillGA.GenericInteractionSkillGA_C.ExecuteUbergraph_GenericInteractionSkillGA
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGenericInteractionSkillGA_C::ExecuteUbergraph_GenericInteractionSkillGA(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GenericInteractionSkillGA_C", "ExecuteUbergraph_GenericInteractionSkillGA");

	Params::GenericInteractionSkillGA_C_ExecuteUbergraph_GenericInteractionSkillGA Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GenericInteractionSkillGA.GenericInteractionSkillGA_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGenericInteractionSkillGA_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GenericInteractionSkillGA_C", "K2_OnEndAbility");

	Params::GenericInteractionSkillGA_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GenericInteractionSkillGA.GenericInteractionSkillGA_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGenericInteractionSkillGA_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GenericInteractionSkillGA_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GenericInteractionSkillGA.GenericInteractionSkillGA_C.GetOwenerSCTAnimBP
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAnimBpSCT_C*                     AsAnim_Bp_SCT                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGenericInteractionSkillGA_C::GetOwenerSCTAnimBP(class UAnimBpSCT_C** AsAnim_Bp_SCT)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GenericInteractionSkillGA_C", "GetOwenerSCTAnimBP");

	Params::GenericInteractionSkillGA_C_GetOwenerSCTAnimBP Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AsAnim_Bp_SCT != nullptr)
		*AsAnim_Bp_SCT = Parms.AsAnim_Bp_SCT;
}


// Function GenericInteractionSkillGA.GenericInteractionSkillGA_C.GetContextDescription
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UGenericInteractionSkillGA_C::GetContextDescription()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GenericInteractionSkillGA_C", "GetContextDescription");

	Params::GenericInteractionSkillGA_C_GetContextDescription Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GenericInteractionSkillGA.GenericInteractionSkillGA_C.K2_CanUseContextSpec
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FContextSpec                     Spec                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGenericInteractionSkillGA_C::K2_CanUseContextSpec(const struct FContextSpec& Spec) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GenericInteractionSkillGA_C", "K2_CanUseContextSpec");

	Params::GenericInteractionSkillGA_C_K2_CanUseContextSpec Parms{};

	Parms.Spec = std::move(Spec);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

