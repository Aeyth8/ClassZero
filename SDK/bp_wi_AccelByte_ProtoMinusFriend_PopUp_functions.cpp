#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: bp_wi_AccelByte_ProtoMinusFriend_PopUp

#include "Basic.hpp"

#include "bp_wi_AccelByte_ProtoMinusFriend_PopUp_classes.hpp"
#include "bp_wi_AccelByte_ProtoMinusFriend_PopUp_parameters.hpp"


namespace SDK
{

// Function bp_wi_AccelByte_Proto-Friend_PopUp.bp_wi_AccelByte_Proto-Friend_PopUp_C.ExecuteUbergraph_bp_wi_AccelByte_Proto-Friend_PopUp
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubp_wi_AccelByte_ProtoMinusFriend_PopUp_C::ExecuteUbergraph_bp_wi_AccelByte_ProtoMinusFriend_PopUp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("bp_wi_AccelByte_Proto-Friend_PopUp_C", "ExecuteUbergraph_bp_wi_AccelByte_Proto-Friend_PopUp");

	Params::bp_wi_AccelByte_ProtoMinusFriend_PopUp_C_ExecuteUbergraph_bp_wi_AccelByte_ProtoMinusFriend_PopUp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function bp_wi_AccelByte_Proto-Friend_PopUp.bp_wi_AccelByte_Proto-Friend_PopUp_C.BndEvt__Btn_Confirm_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Ubp_wi_AccelByte_ProtoMinusFriend_PopUp_C::BndEvt__Btn_Confirm_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("bp_wi_AccelByte_Proto-Friend_PopUp_C", "BndEvt__Btn_Confirm_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function bp_wi_AccelByte_Proto-Friend_PopUp.bp_wi_AccelByte_Proto-Friend_PopUp_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Ubp_wi_AccelByte_ProtoMinusFriend_PopUp_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("bp_wi_AccelByte_Proto-Friend_PopUp_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
