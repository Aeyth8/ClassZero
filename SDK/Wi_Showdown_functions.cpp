#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Wi_Showdown

#include "Basic.hpp"

#include "Wi_Showdown_classes.hpp"
#include "Wi_Showdown_parameters.hpp"


namespace SDK
{

// Function wi_Showdown.wi_Showdown_C.ExecuteUbergraph_wi_Showdown
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWi_Showdown_C::ExecuteUbergraph_wi_Showdown(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("wi_Showdown_C", "ExecuteUbergraph_wi_Showdown");

	Params::Wi_Showdown_C_ExecuteUbergraph_wi_Showdown Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function wi_Showdown.wi_Showdown_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWi_Showdown_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("wi_Showdown_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function wi_Showdown.wi_Showdown_C.Set Text Amount Sabotaged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWi_Showdown_C::Set_Text_Amount_Sabotaged(const class FText& InText, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("wi_Showdown_C", "Set Text Amount Sabotaged");

	Params::Wi_Showdown_C_Set_Text_Amount_Sabotaged Parms{};

	Parms.InText = std::move(InText);
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function wi_Showdown.wi_Showdown_C.UpdateBreakpointPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   CurrentAmount                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   MaxAmount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          TextWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          LineWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWi_Showdown_C::UpdateBreakpointPosition(float CurrentAmount, float MaxAmount, class UWidget* TextWidget, class UWidget* LineWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("wi_Showdown_C", "UpdateBreakpointPosition");

	Params::Wi_Showdown_C_UpdateBreakpointPosition Parms{};

	Parms.CurrentAmount = CurrentAmount;
	Parms.MaxAmount = MaxAmount;
	Parms.TextWidget = TextWidget;
	Parms.LineWidget = LineWidget;

	UObject::ProcessEvent(Func, &Parms);
}

}

