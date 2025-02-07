#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GenericDeathTimerWI

#include "Basic.hpp"

#include "GenericDeathTimerWI_classes.hpp"
#include "GenericDeathTimerWI_parameters.hpp"


namespace SDK
{

// Function GenericDeathTimerWI.GenericDeathTimerWI_C.ExecuteUbergraph_GenericDeathTimerWI
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGenericDeathTimerWI_C::ExecuteUbergraph_GenericDeathTimerWI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GenericDeathTimerWI_C", "ExecuteUbergraph_GenericDeathTimerWI");

	Params::GenericDeathTimerWI_C_ExecuteUbergraph_GenericDeathTimerWI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GenericDeathTimerWI.GenericDeathTimerWI_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGenericDeathTimerWI_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GenericDeathTimerWI_C", "Tick");

	Params::GenericDeathTimerWI_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GenericDeathTimerWI.GenericDeathTimerWI_C.WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)

void UGenericDeathTimerWI_C::WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GenericDeathTimerWI_C", "WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GenericDeathTimerWI.GenericDeathTimerWI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGenericDeathTimerWI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GenericDeathTimerWI_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GenericDeathTimerWI.GenericDeathTimerWI_C.ProgressStop
// (BlueprintCallable, BlueprintEvent)

void UGenericDeathTimerWI_C::ProgressStop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GenericDeathTimerWI_C", "ProgressStop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GenericDeathTimerWI.GenericDeathTimerWI_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGenericDeathTimerWI_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GenericDeathTimerWI_C", "PreConstruct");

	Params::GenericDeathTimerWI_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GenericDeathTimerWI.GenericDeathTimerWI_C.StartProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Duration_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           OptionalDescriptor                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                             Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UGenericDeathTimerWI_C::StartProgress(float Duration_0, const class FString& OptionalDescriptor, const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GenericDeathTimerWI_C", "StartProgress");

	Params::GenericDeathTimerWI_C_StartProgress Parms{};

	Parms.Duration_0 = Duration_0;
	Parms.OptionalDescriptor = std::move(OptionalDescriptor);
	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GenericDeathTimerWI.GenericDeathTimerWI_C.CalculateProgress
// (Public, BlueprintCallable, BlueprintEvent)

void UGenericDeathTimerWI_C::CalculateProgress()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GenericDeathTimerWI_C", "CalculateProgress");

	UObject::ProcessEvent(Func, nullptr);
}

}

