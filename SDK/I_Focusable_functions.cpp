#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: I_Focusable

#include "Basic.hpp"

#include "I_Focusable_classes.hpp"


namespace SDK
{

// Function I_Focusable.I_Focusable_C.ActivateWidget
// (Public, BlueprintCallable, BlueprintEvent)

void II_Focusable_C::ActivateWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("I_Focusable_C", "ActivateWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function I_Focusable.I_Focusable_C.DeactivateWidget
// (Public, BlueprintCallable, BlueprintEvent)

void II_Focusable_C::DeactivateWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("I_Focusable_C", "DeactivateWidget");

	UObject::ProcessEvent(Func, nullptr);
}

}

