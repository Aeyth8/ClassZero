#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: bp_wi_PlayTutorial

#include "Basic.hpp"

#include "bp_wi_PlayTutorial_classes.hpp"
#include "bp_wi_PlayTutorial_parameters.hpp"


namespace SDK
{

// Function bp_wi_PlayTutorial.bp_wi_PlayTutorial_C.OnBackClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Ubp_wi_PlayTutorial_C::OnBackClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("bp_wi_PlayTutorial_C", "OnBackClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function bp_wi_PlayTutorial.bp_wi_PlayTutorial_C.ExecuteUbergraph_bp_wi_PlayTutorial
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubp_wi_PlayTutorial_C::ExecuteUbergraph_bp_wi_PlayTutorial(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("bp_wi_PlayTutorial_C", "ExecuteUbergraph_bp_wi_PlayTutorial");

	Params::bp_wi_PlayTutorial_C_ExecuteUbergraph_bp_wi_PlayTutorial Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function bp_wi_PlayTutorial.bp_wi_PlayTutorial_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubp_wi_PlayTutorial_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("bp_wi_PlayTutorial_C", "PreConstruct");

	Params::bp_wi_PlayTutorial_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function bp_wi_PlayTutorial.bp_wi_PlayTutorial_C.BndEvt__Footer_WI_K2Node_ComponentBoundEvent_3_OnBackButtonPressed__DelegateSignature
// (BlueprintEvent)

void Ubp_wi_PlayTutorial_C::BndEvt__Footer_WI_K2Node_ComponentBoundEvent_3_OnBackButtonPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("bp_wi_PlayTutorial_C", "BndEvt__Footer_WI_K2Node_ComponentBoundEvent_3_OnBackButtonPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function bp_wi_PlayTutorial.bp_wi_PlayTutorial_C.BndEvt__Footer_WI_K2Node_ComponentBoundEvent_2_OnFooterMainButtonPressed__DelegateSignature
// (BlueprintEvent)

void Ubp_wi_PlayTutorial_C::BndEvt__Footer_WI_K2Node_ComponentBoundEvent_2_OnFooterMainButtonPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("bp_wi_PlayTutorial_C", "BndEvt__Footer_WI_K2Node_ComponentBoundEvent_2_OnFooterMainButtonPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}
