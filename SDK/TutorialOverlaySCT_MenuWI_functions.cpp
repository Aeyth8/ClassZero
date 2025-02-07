#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TutorialOverlaySCT_MenuWI

#include "Basic.hpp"

#include "TutorialOverlaySCT_MenuWI_classes.hpp"
#include "TutorialOverlaySCT_MenuWI_parameters.hpp"


namespace SDK
{

// Function TutorialOverlaySCT_MenuWI.TutorialOverlaySCT_MenuWI_C.ExecuteUbergraph_TutorialOverlaySCT_MenuWI
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTutorialOverlaySCT_MenuWI_C::ExecuteUbergraph_TutorialOverlaySCT_MenuWI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TutorialOverlaySCT_MenuWI_C", "ExecuteUbergraph_TutorialOverlaySCT_MenuWI");

	Params::TutorialOverlaySCT_MenuWI_C_ExecuteUbergraph_TutorialOverlaySCT_MenuWI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TutorialOverlaySCT_MenuWI.TutorialOverlaySCT_MenuWI_C.Remove
// (BlueprintCallable, BlueprintEvent)

void UTutorialOverlaySCT_MenuWI_C::Remove()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TutorialOverlaySCT_MenuWI_C", "Remove");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TutorialOverlaySCT_MenuWI.TutorialOverlaySCT_MenuWI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTutorialOverlaySCT_MenuWI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TutorialOverlaySCT_MenuWI_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TutorialOverlaySCT_MenuWI.TutorialOverlaySCT_MenuWI_C.Set Images And
// (BlueprintCallable, BlueprintEvent)

void UTutorialOverlaySCT_MenuWI_C::Set_Images_And()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TutorialOverlaySCT_MenuWI_C", "Set Images And");

	UObject::ProcessEvent(Func, nullptr);
}

}

