#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OptionsCheckboxWI

#include "Basic.hpp"

#include "OptionsCheckboxWI_classes.hpp"
#include "OptionsCheckboxWI_parameters.hpp"


namespace SDK
{

// Function OptionsCheckboxWI.OptionsCheckboxWI_C.OnCheckStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsCheckboxWI_C::OnCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsCheckboxWI_C", "OnCheckStateChanged__DelegateSignature");

	Params::OptionsCheckboxWI_C_OnCheckStateChanged__DelegateSignature Parms{};

	Parms.IsChecked = IsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsCheckboxWI.OptionsCheckboxWI_C.ExecuteUbergraph_OptionsCheckboxWI
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsCheckboxWI_C::ExecuteUbergraph_OptionsCheckboxWI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsCheckboxWI_C", "ExecuteUbergraph_OptionsCheckboxWI");

	Params::OptionsCheckboxWI_C_ExecuteUbergraph_OptionsCheckboxWI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsCheckboxWI.OptionsCheckboxWI_C.BndEvt__OptionsCheckboxWI_CheckBoxOpt_K2Node_ComponentBoundEvent_1_StateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsCheckboxWI_C::BndEvt__OptionsCheckboxWI_CheckBoxOpt_K2Node_ComponentBoundEvent_1_StateChanged__DelegateSignature(bool IsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsCheckboxWI_C", "BndEvt__OptionsCheckboxWI_CheckBoxOpt_K2Node_ComponentBoundEvent_1_StateChanged__DelegateSignature");

	Params::OptionsCheckboxWI_C_BndEvt__OptionsCheckboxWI_CheckBoxOpt_K2Node_ComponentBoundEvent_1_StateChanged__DelegateSignature Parms{};

	Parms.IsChecked = IsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsCheckboxWI.OptionsCheckboxWI_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsCheckboxWI_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsCheckboxWI_C", "PreConstruct");

	Params::OptionsCheckboxWI_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsCheckboxWI.OptionsCheckboxWI_C.SetCheckedState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsChecked                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsCheckboxWI_C::SetCheckedState(bool InIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsCheckboxWI_C", "SetCheckedState");

	Params::OptionsCheckboxWI_C_SetCheckedState Parms{};

	Parms.InIsChecked = InIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}

}

