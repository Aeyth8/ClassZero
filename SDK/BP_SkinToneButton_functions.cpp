#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SkinToneButton

#include "Basic.hpp"

#include "BP_SkinToneButton_classes.hpp"
#include "BP_SkinToneButton_parameters.hpp"


namespace SDK
{

// Function BP_SkinToneButton.BP_SkinToneButton_C.ExecuteUbergraph_BP_SkinToneButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SkinToneButton_C::ExecuteUbergraph_BP_SkinToneButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkinToneButton_C", "ExecuteUbergraph_BP_SkinToneButton");

	Params::BP_SkinToneButton_C_ExecuteUbergraph_BP_SkinToneButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkinToneButton.BP_SkinToneButton_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UBP_SkinToneButton_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkinToneButton_C", "OnRemovedFromFocusPath");

	Params::BP_SkinToneButton_C_OnRemovedFromFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkinToneButton.BP_SkinToneButton_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UBP_SkinToneButton_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkinToneButton_C", "OnAddedToFocusPath");

	Params::BP_SkinToneButton_C_OnAddedToFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkinToneButton.BP_SkinToneButton_C.BndEvt__SkinToneButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_SkinToneButton_C::BndEvt__SkinToneButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkinToneButton_C", "BndEvt__SkinToneButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkinToneButton.BP_SkinToneButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_SkinToneButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkinToneButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

