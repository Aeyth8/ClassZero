#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GenericProgressBarWI_TempFix

#include "Basic.hpp"

#include "GenericProgressBarWI_TempFix_classes.hpp"
#include "GenericProgressBarWI_TempFix_parameters.hpp"


namespace SDK
{

// Function GenericProgressBarWI_TempFix.GenericProgressBarWI_TempFix_C.ExecuteUbergraph_GenericProgressBarWI_TempFix
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGenericProgressBarWI_TempFix_C::ExecuteUbergraph_GenericProgressBarWI_TempFix(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GenericProgressBarWI_TempFix_C", "ExecuteUbergraph_GenericProgressBarWI_TempFix");

	Params::GenericProgressBarWI_TempFix_C_ExecuteUbergraph_GenericProgressBarWI_TempFix Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GenericProgressBarWI_TempFix.GenericProgressBarWI_TempFix_C.WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)

void UGenericProgressBarWI_TempFix_C::WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GenericProgressBarWI_TempFix_C", "WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GenericProgressBarWI_TempFix.GenericProgressBarWI_TempFix_C.ProgressStop
// (BlueprintCallable, BlueprintEvent)

void UGenericProgressBarWI_TempFix_C::ProgressStop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GenericProgressBarWI_TempFix_C", "ProgressStop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GenericProgressBarWI_TempFix.GenericProgressBarWI_TempFix_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGenericProgressBarWI_TempFix_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GenericProgressBarWI_TempFix_C", "PreConstruct");

	Params::GenericProgressBarWI_TempFix_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GenericProgressBarWI_TempFix.GenericProgressBarWI_TempFix_C.StartProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Duration_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           OptionalDescriptor                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    Reverse_0                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGenericProgressBarWI_TempFix_C::StartProgress(float Duration_0, const class FString& OptionalDescriptor, bool Reverse_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GenericProgressBarWI_TempFix_C", "StartProgress");

	Params::GenericProgressBarWI_TempFix_C_StartProgress Parms{};

	Parms.Duration_0 = Duration_0;
	Parms.OptionalDescriptor = std::move(OptionalDescriptor);
	Parms.Reverse_0 = Reverse_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GenericProgressBarWI_TempFix.GenericProgressBarWI_TempFix_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGenericProgressBarWI_TempFix_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GenericProgressBarWI_TempFix_C", "Tick");

	Params::GenericProgressBarWI_TempFix_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GenericProgressBarWI_TempFix.GenericProgressBarWI_TempFix_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGenericProgressBarWI_TempFix_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GenericProgressBarWI_TempFix_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GenericProgressBarWI_TempFix.GenericProgressBarWI_TempFix_C.CalculateProgress
// (Public, BlueprintCallable, BlueprintEvent)

void UGenericProgressBarWI_TempFix_C::CalculateProgress()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GenericProgressBarWI_TempFix_C", "CalculateProgress");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GenericProgressBarWI_TempFix.GenericProgressBarWI_TempFix_C.CalculateProgressReverse
// (Public, BlueprintCallable, BlueprintEvent)

void UGenericProgressBarWI_TempFix_C::CalculateProgressReverse()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GenericProgressBarWI_TempFix_C", "CalculateProgressReverse");

	UObject::ProcessEvent(Func, nullptr);
}

}
