#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemWheelV2EntryWI

#include "Basic.hpp"

#include "ItemWheelV2EntryWI_classes.hpp"
#include "ItemWheelV2EntryWI_parameters.hpp"


namespace SDK
{

// Function ItemWheelV2EntryWI.ItemWheelV2EntryWI_C.ExecuteUbergraph_ItemWheelV2EntryWI
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemWheelV2EntryWI_C::ExecuteUbergraph_ItemWheelV2EntryWI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemWheelV2EntryWI_C", "ExecuteUbergraph_ItemWheelV2EntryWI");

	Params::ItemWheelV2EntryWI_C_ExecuteUbergraph_ItemWheelV2EntryWI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemWheelV2EntryWI.ItemWheelV2EntryWI_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemWheelV2EntryWI_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemWheelV2EntryWI_C", "PreConstruct");

	Params::ItemWheelV2EntryWI_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemWheelV2EntryWI.ItemWheelV2EntryWI_C.UpdateDataOfV3Slot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemWheelV2EntryWI_C::UpdateDataOfV3Slot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemWheelV2EntryWI_C", "UpdateDataOfV3Slot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemWheelV2EntryWI.ItemWheelV2EntryWI_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItem*                            Item_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemWheelV2EntryWI_C::Initialize(class UItem* Item_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemWheelV2EntryWI_C", "Initialize");

	Params::ItemWheelV2EntryWI_C_Initialize Parms{};

	Parms.Item_0 = Item_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemWheelV2EntryWI.ItemWheelV2EntryWI_C.Rebuild
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_ItemSlotStates                        Selection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemWheelV2EntryWI_C::Rebuild(E_ItemSlotStates Selection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemWheelV2EntryWI_C", "Rebuild");

	Params::ItemWheelV2EntryWI_C_Rebuild Parms{};

	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);
}

}
