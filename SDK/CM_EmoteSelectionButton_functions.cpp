#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CM_EmoteSelectionButton

#include "Basic.hpp"

#include "CM_EmoteSelectionButton_classes.hpp"
#include "CM_EmoteSelectionButton_parameters.hpp"


namespace SDK
{

// Function CM_EmoteSelectionButton.CM_EmoteSelectionButton_C.OnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCM_EmoteSelectionButton_C::OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_EmoteSelectionButton_C", "OnPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CM_EmoteSelectionButton.CM_EmoteSelectionButton_C.ExecuteUbergraph_CM_EmoteSelectionButton
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCM_EmoteSelectionButton_C::ExecuteUbergraph_CM_EmoteSelectionButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_EmoteSelectionButton_C", "ExecuteUbergraph_CM_EmoteSelectionButton");

	Params::CM_EmoteSelectionButton_C_ExecuteUbergraph_CM_EmoteSelectionButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CM_EmoteSelectionButton.CM_EmoteSelectionButton_C.BndEvt__CM_EmoteSelectionButton_SelectButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UCM_EmoteSelectionButton_C::BndEvt__CM_EmoteSelectionButton_SelectButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_EmoteSelectionButton_C", "BndEvt__CM_EmoteSelectionButton_SelectButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CM_EmoteSelectionButton.CM_EmoteSelectionButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCM_EmoteSelectionButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_EmoteSelectionButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CM_EmoteSelectionButton.CM_EmoteSelectionButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCM_EmoteSelectionButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_EmoteSelectionButton_C", "PreConstruct");

	Params::CM_EmoteSelectionButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CM_EmoteSelectionButton.CM_EmoteSelectionButton_C.InitSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCM_EmoteCustomization_C*         Parent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           RowName_0                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCM_EmoteSelectionButton_C::InitSlot(class UCM_EmoteCustomization_C* Parent, const class FString& RowName_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_EmoteSelectionButton_C", "InitSlot");

	Params::CM_EmoteSelectionButton_C_InitSlot Parms{};

	Parms.Parent = Parent;
	Parms.RowName_0 = std::move(RowName_0);

	UObject::ProcessEvent(Func, &Parms);
}

}
