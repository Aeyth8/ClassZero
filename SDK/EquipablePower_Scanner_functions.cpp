#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EquipablePower_Scanner

#include "Basic.hpp"

#include "EquipablePower_Scanner_classes.hpp"
#include "EquipablePower_Scanner_parameters.hpp"


namespace SDK
{

// Function EquipablePower_Scanner.EquipablePower_Scanner_C.ExecuteUbergraph_EquipablePower_Scanner
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEquipablePower_Scanner_C::ExecuteUbergraph_EquipablePower_Scanner(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipablePower_Scanner_C", "ExecuteUbergraph_EquipablePower_Scanner");

	Params::EquipablePower_Scanner_C_ExecuteUbergraph_EquipablePower_Scanner Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipablePower_Scanner.EquipablePower_Scanner_C.ItemAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// E_ItemAnimation                         ItemAnimation_0                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEquipablePower_Scanner_C::ItemAnimation(E_ItemAnimation ItemAnimation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipablePower_Scanner_C", "ItemAnimation");

	Params::EquipablePower_Scanner_C_ItemAnimation Parms{};

	Parms.ItemAnimation_0 = ItemAnimation_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipablePower_Scanner.EquipablePower_Scanner_C.Initialize
// (Event, Protected, BlueprintEvent)

void AEquipablePower_Scanner_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipablePower_Scanner_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipablePower_Scanner.EquipablePower_Scanner_C.Activate
// (Event, Public, BlueprintEvent)

void AEquipablePower_Scanner_C::Activate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipablePower_Scanner_C", "Activate");

	UObject::ProcessEvent(Func, nullptr);
}

}
