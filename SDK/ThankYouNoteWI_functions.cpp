#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ThankYouNoteWI

#include "Basic.hpp"

#include "ThankYouNoteWI_classes.hpp"
#include "ThankYouNoteWI_parameters.hpp"


namespace SDK
{

// Function ThankYouNoteWI.ThankYouNoteWI_C.ExecuteUbergraph_ThankYouNoteWI
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UThankYouNoteWI_C::ExecuteUbergraph_ThankYouNoteWI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ThankYouNoteWI_C", "ExecuteUbergraph_ThankYouNoteWI");

	Params::ThankYouNoteWI_C_ExecuteUbergraph_ThankYouNoteWI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ThankYouNoteWI.ThankYouNoteWI_C.Animate Out
// (BlueprintCallable, BlueprintEvent)

void UThankYouNoteWI_C::Animate_Out()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ThankYouNoteWI_C", "Animate Out");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ThankYouNoteWI.ThankYouNoteWI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UThankYouNoteWI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ThankYouNoteWI_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ThankYouNoteWI.ThankYouNoteWI_C.Animate In
// (BlueprintCallable, BlueprintEvent)

void UThankYouNoteWI_C::Animate_In()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ThankYouNoteWI_C", "Animate In");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ThankYouNoteWI.ThankYouNoteWI_C.Reset Cooldown
// (BlueprintCallable, BlueprintEvent)

void UThankYouNoteWI_C::Reset_Cooldown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ThankYouNoteWI_C", "Reset Cooldown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ThankYouNoteWI.ThankYouNoteWI_C.BndEvt__ButtonExpand_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UThankYouNoteWI_C::BndEvt__ButtonExpand_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ThankYouNoteWI_C", "BndEvt__ButtonExpand_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ThankYouNoteWI.ThankYouNoteWI_C.SaveNoteHiddenByUser
// (Public, BlueprintCallable, BlueprintEvent)

void UThankYouNoteWI_C::SaveNoteHiddenByUser()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ThankYouNoteWI_C", "SaveNoteHiddenByUser");

	UObject::ProcessEvent(Func, nullptr);
}

}
