#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ISolveable

#include "Basic.hpp"

#include "ISolveable_classes.hpp"
#include "ISolveable_parameters.hpp"


namespace SDK
{

// Function ISolveable.ISolveable_C.CorrectlySolved
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                     SolvingPlayerPlayerState                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IISolveable_C::CorrectlySolved(class APlayerState* SolvingPlayerPlayerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ISolveable_C", "CorrectlySolved");

	Params::ISolveable_C_CorrectlySolved Parms{};

	Parms.SolvingPlayerPlayerState = SolvingPlayerPlayerState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ISolveable.ISolveable_C.IncorrectlySolved
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                     SolvingPlayerPlayerState                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IISolveable_C::IncorrectlySolved(class APlayerState* SolvingPlayerPlayerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ISolveable_C", "IncorrectlySolved");

	Params::ISolveable_C_IncorrectlySolved Parms{};

	Parms.SolvingPlayerPlayerState = SolvingPlayerPlayerState;

	UObject::ProcessEvent(Func, &Parms);
}

}
