#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EquipablePower_Hat

#include "Basic.hpp"

#include "EquipablePower_Hat_classes.hpp"
#include "EquipablePower_Hat_parameters.hpp"


namespace SDK
{

// Function EquipablePower_Hat.EquipablePower_Hat_C.ExecuteUbergraph_EquipablePower_Hat
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEquipablePower_Hat_C::ExecuteUbergraph_EquipablePower_Hat(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipablePower_Hat_C", "ExecuteUbergraph_EquipablePower_Hat");

	Params::EquipablePower_Hat_C_ExecuteUbergraph_EquipablePower_Hat Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipablePower_Hat.EquipablePower_Hat_C.On Character Destiny
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDestiny                         UltimateDestiny                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                                    IsPersonoid                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEquipablePower_Hat_C::On_Character_Destiny(const struct FDestiny& UltimateDestiny, bool IsPersonoid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipablePower_Hat_C", "On Character Destiny");

	Params::EquipablePower_Hat_C_On_Character_Destiny Parms{};

	Parms.UltimateDestiny = std::move(UltimateDestiny);
	Parms.IsPersonoid = IsPersonoid;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipablePower_Hat.EquipablePower_Hat_C.Initialize
// (Event, Protected, BlueprintEvent)

void AEquipablePower_Hat_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipablePower_Hat_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipablePower_Hat.EquipablePower_Hat_C.Activate
// (Event, Public, BlueprintEvent)

void AEquipablePower_Hat_C::Activate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipablePower_Hat_C", "Activate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipablePower_Hat.EquipablePower_Hat_C.OnRep_HatID
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void AEquipablePower_Hat_C::OnRep_HatID()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipablePower_Hat_C", "OnRep_HatID");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipablePower_Hat.EquipablePower_Hat_C.SetHatModel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*                      NewMesh                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEquipablePower_Hat_C::SetHatModel(class UStaticMesh* NewMesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipablePower_Hat_C", "SetHatModel");

	Params::EquipablePower_Hat_C_SetHatModel Parms{};

	Parms.NewMesh = NewMesh;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipablePower_Hat.EquipablePower_Hat_C.UpdateTransforms
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             SocketName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       RelativeTransform                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)

void AEquipablePower_Hat_C::UpdateTransforms(class FName SocketName, const struct FTransform& RelativeTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipablePower_Hat_C", "UpdateTransforms");

	Params::EquipablePower_Hat_C_UpdateTransforms Parms{};

	Parms.SocketName = SocketName;
	Parms.RelativeTransform = std::move(RelativeTransform);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipablePower_Hat.EquipablePower_Hat_C.OnRep_HatHiddenInGame
// (BlueprintCallable, BlueprintEvent)

void AEquipablePower_Hat_C::OnRep_HatHiddenInGame()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipablePower_Hat_C", "OnRep_HatHiddenInGame");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipablePower_Hat.EquipablePower_Hat_C.GetHatID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   OutputPin                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEquipablePower_Hat_C::GetHatID(int32* OutputPin) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipablePower_Hat_C", "GetHatID");

	Params::EquipablePower_Hat_C_GetHatID Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutputPin != nullptr)
		*OutputPin = Parms.OutputPin;
}


// Function EquipablePower_Hat.EquipablePower_Hat_C.GetPlayerID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   Return_Value                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEquipablePower_Hat_C::GetPlayerID(int32* Return_Value) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipablePower_Hat_C", "GetPlayerID");

	Params::EquipablePower_Hat_C_GetPlayerID Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;
}

}

