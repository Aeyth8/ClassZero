#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AirlockVoteEntryWI

#include "Basic.hpp"

#include "AirlockVoteEntryWI_classes.hpp"
#include "AirlockVoteEntryWI_parameters.hpp"


namespace SDK
{

// Function AirlockVoteEntryWI.AirlockVoteEntryWI_C.ExecuteUbergraph_AirlockVoteEntryWI
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAirlockVoteEntryWI_C::ExecuteUbergraph_AirlockVoteEntryWI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AirlockVoteEntryWI_C", "ExecuteUbergraph_AirlockVoteEntryWI");

	Params::AirlockVoteEntryWI_C_ExecuteUbergraph_AirlockVoteEntryWI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AirlockVoteEntryWI.AirlockVoteEntryWI_C.Audio Vote Button
// (BlueprintCallable, BlueprintEvent)

void UAirlockVoteEntryWI_C::Audio_Vote_Button()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AirlockVoteEntryWI_C", "Audio Vote Button");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AirlockVoteEntryWI.AirlockVoteEntryWI_C.BndEvt__VoteButton_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAirlockVoteEntryWI_C::BndEvt__VoteButton_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AirlockVoteEntryWI_C", "BndEvt__VoteButton_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::AirlockVoteEntryWI_C_BndEvt__VoteButton_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AirlockVoteEntryWI.AirlockVoteEntryWI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAirlockVoteEntryWI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AirlockVoteEntryWI_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AirlockVoteEntryWI.AirlockVoteEntryWI_C.LockButton
// (Public, BlueprintCallable, BlueprintEvent)

void UAirlockVoteEntryWI_C::LockButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AirlockVoteEntryWI_C", "LockButton");

	UObject::ProcessEvent(Func, nullptr);
}

}

