#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GenericTextFeedbackWI

#include "Basic.hpp"

#include "GenericTextFeedbackWI_classes.hpp"
#include "GenericTextFeedbackWI_parameters.hpp"


namespace SDK
{

// Function GenericTextFeedbackWI.GenericTextFeedbackWI_C.ExecuteUbergraph_GenericTextFeedbackWI
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGenericTextFeedbackWI_C::ExecuteUbergraph_GenericTextFeedbackWI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GenericTextFeedbackWI_C", "ExecuteUbergraph_GenericTextFeedbackWI");

	Params::GenericTextFeedbackWI_C_ExecuteUbergraph_GenericTextFeedbackWI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GenericTextFeedbackWI.GenericTextFeedbackWI_C.Add Message
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Duration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class APlayerController*                OwningPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGenericTextFeedbackWI_C::Add_Message(float Duration, const class FText& Text, class APlayerController* OwningPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GenericTextFeedbackWI_C", "Add Message");

	Params::GenericTextFeedbackWI_C_Add_Message Parms{};

	Parms.Duration = Duration;
	Parms.Text = std::move(Text);
	Parms.OwningPlayer = OwningPlayer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GenericTextFeedbackWI.GenericTextFeedbackWI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGenericTextFeedbackWI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GenericTextFeedbackWI_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
