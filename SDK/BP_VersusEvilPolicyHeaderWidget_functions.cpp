#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VersusEvilPolicyHeaderWidget

#include "Basic.hpp"

#include "BP_VersusEvilPolicyHeaderWidget_classes.hpp"
#include "BP_VersusEvilPolicyHeaderWidget_parameters.hpp"


namespace SDK
{

// Function BP_VersusEvilPolicyHeaderWidget.BP_VersusEvilPolicyHeaderWidget_C.ExecuteUbergraph_BP_VersusEvilPolicyHeaderWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VersusEvilPolicyHeaderWidget_C::ExecuteUbergraph_BP_VersusEvilPolicyHeaderWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VersusEvilPolicyHeaderWidget_C", "ExecuteUbergraph_BP_VersusEvilPolicyHeaderWidget");

	Params::BP_VersusEvilPolicyHeaderWidget_C_ExecuteUbergraph_BP_VersusEvilPolicyHeaderWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VersusEvilPolicyHeaderWidget.BP_VersusEvilPolicyHeaderWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_VersusEvilPolicyHeaderWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VersusEvilPolicyHeaderWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VersusEvilPolicyHeaderWidget.BP_VersusEvilPolicyHeaderWidget_C.Highlight
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_VersusEvilPolicyHeaderWidget_C::Highlight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VersusEvilPolicyHeaderWidget_C", "Highlight");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VersusEvilPolicyHeaderWidget.BP_VersusEvilPolicyHeaderWidget_C.Dim
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_VersusEvilPolicyHeaderWidget_C::Dim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VersusEvilPolicyHeaderWidget_C", "Dim");

	UObject::ProcessEvent(Func, nullptr);
}

}
