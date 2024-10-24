#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Wi_Score

#include "Basic.hpp"

#include "Wi_Score_classes.hpp"
#include "Wi_Score_parameters.hpp"


namespace SDK
{

// Function wi_Score.wi_Score_C.ExecuteUbergraph_wi_Score
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWi_Score_C::ExecuteUbergraph_wi_Score(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("wi_Score_C", "ExecuteUbergraph_wi_Score");

	Params::Wi_Score_C_ExecuteUbergraph_wi_Score Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function wi_Score.wi_Score_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWi_Score_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("wi_Score_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function wi_Score.wi_Score_C.TextForNormalScore
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UWi_Score_C::TextForNormalScore()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("wi_Score_C", "TextForNormalScore");

	Params::Wi_Score_C_TextForNormalScore Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

