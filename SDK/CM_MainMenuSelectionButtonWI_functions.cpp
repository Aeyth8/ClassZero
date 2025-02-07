#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CM_MainMenuSelectionButtonWI

#include "Basic.hpp"

#include "CM_MainMenuSelectionButtonWI_classes.hpp"
#include "CM_MainMenuSelectionButtonWI_parameters.hpp"


namespace SDK
{

// Function CM_MainMenuSelectionButtonWI.CM_MainMenuSelectionButtonWI_C.ExecuteUbergraph_CM_MainMenuSelectionButtonWI
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCM_MainMenuSelectionButtonWI_C::ExecuteUbergraph_CM_MainMenuSelectionButtonWI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_MainMenuSelectionButtonWI_C", "ExecuteUbergraph_CM_MainMenuSelectionButtonWI");

	Params::CM_MainMenuSelectionButtonWI_C_ExecuteUbergraph_CM_MainMenuSelectionButtonWI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CM_MainMenuSelectionButtonWI.CM_MainMenuSelectionButtonWI_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCM_MainMenuSelectionButtonWI_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_MainMenuSelectionButtonWI_C", "PreConstruct");

	Params::CM_MainMenuSelectionButtonWI_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CM_MainMenuSelectionButtonWI.CM_MainMenuSelectionButtonWI_C.GamepadButtonPressed
// (Public, BlueprintCallable, BlueprintEvent)

void UCM_MainMenuSelectionButtonWI_C::GamepadButtonPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_MainMenuSelectionButtonWI_C", "GamepadButtonPressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CM_MainMenuSelectionButtonWI.CM_MainMenuSelectionButtonWI_C.GamepadButtonReleased
// (Public, BlueprintCallable, BlueprintEvent)

void UCM_MainMenuSelectionButtonWI_C::GamepadButtonReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_MainMenuSelectionButtonWI_C", "GamepadButtonReleased");

	UObject::ProcessEvent(Func, nullptr);
}

}

