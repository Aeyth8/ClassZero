#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_AqiatocWorld

#include "Basic.hpp"

#include "BPI_AqiatocWorld_classes.hpp"
#include "BPI_AqiatocWorld_parameters.hpp"


namespace SDK
{

// Function BPI_AqiatocWorld.BPI_AqiatocWorld_C.OnWorldOriginChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIntVector                       Old_Origin                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntVector                       New_Origin                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_AqiatocWorld_C::OnWorldOriginChanged(const struct FIntVector& Old_Origin, const struct FIntVector& New_Origin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_AqiatocWorld_C", "OnWorldOriginChanged");

	Params::BPI_AqiatocWorld_C_OnWorldOriginChanged Parms{};

	Parms.Old_Origin = std::move(Old_Origin);
	Parms.New_Origin = std::move(New_Origin);

	UObject::ProcessEvent(Func, &Parms);
}

}

