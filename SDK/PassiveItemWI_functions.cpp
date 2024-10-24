#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PassiveItemWI

#include "Basic.hpp"

#include "PassiveItemWI_classes.hpp"
#include "PassiveItemWI_parameters.hpp"


namespace SDK
{

// Function PassiveItemWI.PassiveItemWI_C.ExecuteUbergraph_PassiveItemWI
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPassiveItemWI_C::ExecuteUbergraph_PassiveItemWI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassiveItemWI_C", "ExecuteUbergraph_PassiveItemWI");

	Params::PassiveItemWI_C_ExecuteUbergraph_PassiveItemWI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PassiveItemWI.PassiveItemWI_C.OnPowerRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPower*                           PowerChanged                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPassiveItemWI_C::OnPowerRemoved(class UPower* PowerChanged)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassiveItemWI_C", "OnPowerRemoved");

	Params::PassiveItemWI_C_OnPowerRemoved Parms{};

	Parms.PowerChanged = PowerChanged;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PassiveItemWI.PassiveItemWI_C.OnNewPowerAdded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPower*                           PowerChanged                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NewStackSize                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPassiveItemWI_C::OnNewPowerAdded(class UPower* PowerChanged, int32 NewStackSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassiveItemWI_C", "OnNewPowerAdded");

	Params::PassiveItemWI_C_OnNewPowerAdded Parms{};

	Parms.PowerChanged = PowerChanged;
	Parms.NewStackSize = NewStackSize;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PassiveItemWI.PassiveItemWI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPassiveItemWI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassiveItemWI_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PassiveItemWI.PassiveItemWI_C.New Passive Power Added
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPower*                           Power                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPassiveItemWI_C::New_Passive_Power_Added(class UPower* Power)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassiveItemWI_C", "New Passive Power Added");

	Params::PassiveItemWI_C_New_Passive_Power_Added Parms{};

	Parms.Power = Power;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PassiveItemWI.PassiveItemWI_C.PassivePowerRemoved
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPower*                           Power                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPassiveItemWI_C::PassivePowerRemoved(class UPower* Power)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassiveItemWI_C", "PassivePowerRemoved");

	Params::PassiveItemWI_C_PassivePowerRemoved Parms{};

	Parms.Power = Power;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PassiveItemWI.PassiveItemWI_C.Get Is Passive Item
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UItem*                            Item_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsPassive                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPassiveItemWI_C::Get_Is_Passive_Item(class UItem* Item_0, bool* IsPassive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassiveItemWI_C", "Get Is Passive Item");

	Params::PassiveItemWI_C_Get_Is_Passive_Item Parms{};

	Parms.Item_0 = Item_0;

	UObject::ProcessEvent(Func, &Parms);

	if (IsPassive != nullptr)
		*IsPassive = Parms.IsPassive;
}


// Function PassiveItemWI.PassiveItemWI_C.Add Item Entries On New Level
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPassiveItemWI_C::Add_Item_Entries_On_New_Level()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassiveItemWI_C", "Add Item Entries On New Level");

	UObject::ProcessEvent(Func, nullptr);
}

}

