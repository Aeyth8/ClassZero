#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LootBox_CrateBP

#include "Basic.hpp"

#include "LootBox_CrateBP_classes.hpp"
#include "LootBox_CrateBP_parameters.hpp"


namespace SDK
{

// Function LootBox_CrateBP.LootBox_CrateBP_C.ExecuteUbergraph_LootBox_CrateBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALootBox_CrateBP_C::ExecuteUbergraph_LootBox_CrateBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LootBox_CrateBP_C", "ExecuteUbergraph_LootBox_CrateBP");

	Params::LootBox_CrateBP_C_ExecuteUbergraph_LootBox_CrateBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LootBox_CrateBP.LootBox_CrateBP_C.OpenStart_Cosmetic
// (BlueprintCallable, BlueprintEvent)

void ALootBox_CrateBP_C::OpenStart_Cosmetic()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LootBox_CrateBP_C", "OpenStart_Cosmetic");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LootBox_CrateBP.LootBox_CrateBP_C.OpenUpdate_Cosmetic
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Alpha                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALootBox_CrateBP_C::OpenUpdate_Cosmetic(float Alpha)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LootBox_CrateBP_C", "OpenUpdate_Cosmetic");

	Params::LootBox_CrateBP_C_OpenUpdate_Cosmetic Parms{};

	Parms.Alpha = Alpha;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LootBox_CrateBP.LootBox_CrateBP_C.GetOutlineMeshes
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UPrimitiveComponent*>      Meshes                                                 (Parm, OutParm, ContainsInstancedReference)

void ALootBox_CrateBP_C::GetOutlineMeshes(TArray<class UPrimitiveComponent*>* Meshes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LootBox_CrateBP_C", "GetOutlineMeshes");

	Params::LootBox_CrateBP_C_GetOutlineMeshes Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Meshes != nullptr)
		*Meshes = std::move(Parms.Meshes);
}

}
