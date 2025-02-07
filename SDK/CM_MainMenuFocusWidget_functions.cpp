#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CM_MainMenuFocusWidget

#include "Basic.hpp"

#include "CM_MainMenuFocusWidget_classes.hpp"
#include "CM_MainMenuFocusWidget_parameters.hpp"


namespace SDK
{

// Function CM_MainMenuFocusWidget.CM_MainMenuFocusWidget_C.GetLastFocusedWidget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UCM_MainMenuFocusWidget_C::GetLastFocusedWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_MainMenuFocusWidget_C", "GetLastFocusedWidget");

	Params::CM_MainMenuFocusWidget_C_GetLastFocusedWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

