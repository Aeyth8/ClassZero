#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CM_PartyJoinFailedCrossPlay

#include "Basic.hpp"

#include "CM_PartyJoinFailedCrossPlay_classes.hpp"
#include "CM_PartyJoinFailedCrossPlay_parameters.hpp"


namespace SDK
{

// Function CM_PartyJoinFailedCrossPlay.CM_PartyJoinFailedCrossPlay_C.ExecuteUbergraph_CM_PartyJoinFailedCrossPlay
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCM_PartyJoinFailedCrossPlay_C::ExecuteUbergraph_CM_PartyJoinFailedCrossPlay(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_PartyJoinFailedCrossPlay_C", "ExecuteUbergraph_CM_PartyJoinFailedCrossPlay");

	Params::CM_PartyJoinFailedCrossPlay_C_ExecuteUbergraph_CM_PartyJoinFailedCrossPlay Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CM_PartyJoinFailedCrossPlay.CM_PartyJoinFailedCrossPlay_C.BndEvt__CM_PartyJoinFailedCrossPlay_Button_125_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UCM_PartyJoinFailedCrossPlay_C::BndEvt__CM_PartyJoinFailedCrossPlay_Button_125_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_PartyJoinFailedCrossPlay_C", "BndEvt__CM_PartyJoinFailedCrossPlay_Button_125_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CM_PartyJoinFailedCrossPlay.CM_PartyJoinFailedCrossPlay_C.BndEvt__CM_PartyFullContentDialog_ConfirmButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
// (BlueprintEvent)

void UCM_PartyJoinFailedCrossPlay_C::BndEvt__CM_PartyFullContentDialog_ConfirmButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_PartyJoinFailedCrossPlay_C", "BndEvt__CM_PartyFullContentDialog_ConfirmButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CM_PartyJoinFailedCrossPlay.CM_PartyJoinFailedCrossPlay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCM_PartyJoinFailedCrossPlay_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_PartyJoinFailedCrossPlay_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
