#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WinTexts

#include "Basic.hpp"

#include "WinTexts_classes.hpp"
#include "WinTexts_parameters.hpp"


namespace SDK
{

// Function WinTexts.WinTexts_C.ExecuteUbergraph_WinTexts
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWinTexts_C::ExecuteUbergraph_WinTexts(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WinTexts_C", "ExecuteUbergraph_WinTexts");

	Params::WinTexts_C_ExecuteUbergraph_WinTexts Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WinTexts.WinTexts_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWinTexts_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WinTexts_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
