#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CustomizationMaterialSlot

#include "Basic.hpp"

#include "BP_CustomizationMaterialSlot_classes.hpp"
#include "BP_CustomizationMaterialSlot_parameters.hpp"


namespace SDK
{

// Function BP_CustomizationMaterialSlot.BP_CustomizationMaterialSlot_C.OnUpdateMaterial__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   MaterialIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*                MaterialOption_0                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CustomizationMaterialSlot_C::OnUpdateMaterial__DelegateSignature(int32 MaterialIndex, class UMaterialInstance* MaterialOption_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CustomizationMaterialSlot_C", "OnUpdateMaterial__DelegateSignature");

	Params::BP_CustomizationMaterialSlot_C_OnUpdateMaterial__DelegateSignature Parms{};

	Parms.MaterialIndex = MaterialIndex;
	Parms.MaterialOption_0 = MaterialOption_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CustomizationMaterialSlot.BP_CustomizationMaterialSlot_C.OnSetDefaultMaterial__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_CustomizationMaterialSlot_C::OnSetDefaultMaterial__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CustomizationMaterialSlot_C", "OnSetDefaultMaterial__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CustomizationMaterialSlot.BP_CustomizationMaterialSlot_C.ExecuteUbergraph_BP_CustomizationMaterialSlot
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CustomizationMaterialSlot_C::ExecuteUbergraph_BP_CustomizationMaterialSlot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CustomizationMaterialSlot_C", "ExecuteUbergraph_BP_CustomizationMaterialSlot");

	Params::BP_CustomizationMaterialSlot_C_ExecuteUbergraph_BP_CustomizationMaterialSlot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CustomizationMaterialSlot.BP_CustomizationMaterialSlot_C.OnSetDefaultMaterial_Event
// (BlueprintCallable, BlueprintEvent)

void UBP_CustomizationMaterialSlot_C::OnSetDefaultMaterial_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CustomizationMaterialSlot_C", "OnSetDefaultMaterial_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CustomizationMaterialSlot.BP_CustomizationMaterialSlot_C.BndEvt__Select_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_CustomizationMaterialSlot_C::BndEvt__Select_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CustomizationMaterialSlot_C", "BndEvt__Select_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}
