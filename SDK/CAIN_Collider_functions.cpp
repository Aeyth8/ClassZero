#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CAIN_Collider

#include "Basic.hpp"

#include "CAIN_Collider_classes.hpp"
#include "CAIN_Collider_parameters.hpp"


namespace SDK
{

// Function CAIN_Collider.CAIN_Collider_C.OnEnoughPlayers__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ACAIN_Collider_C::OnEnoughPlayers__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CAIN_Collider_C", "OnEnoughPlayers__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CAIN_Collider.CAIN_Collider_C.GetOverlappingCharacters
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Amount                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACAIN_Collider_C::GetOverlappingCharacters(int32* Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CAIN_Collider_C", "GetOverlappingCharacters");

	Params::CAIN_Collider_C_GetOverlappingCharacters Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Amount != nullptr)
		*Amount = Parms.Amount;
}

}
