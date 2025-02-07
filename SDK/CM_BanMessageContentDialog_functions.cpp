#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CM_BanMessageContentDialog

#include "Basic.hpp"

#include "CM_BanMessageContentDialog_classes.hpp"
#include "CM_BanMessageContentDialog_parameters.hpp"


namespace SDK
{

// Function CM_BanMessageContentDialog.CM_BanMessageContentDialog_C.OnUpdateTimeRemaining__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCM_BanMessageContentDialog_C::OnUpdateTimeRemaining__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_BanMessageContentDialog_C", "OnUpdateTimeRemaining__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CM_BanMessageContentDialog.CM_BanMessageContentDialog_C.ExecuteUbergraph_CM_BanMessageContentDialog
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCM_BanMessageContentDialog_C::ExecuteUbergraph_CM_BanMessageContentDialog(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_BanMessageContentDialog_C", "ExecuteUbergraph_CM_BanMessageContentDialog");

	Params::CM_BanMessageContentDialog_C_ExecuteUbergraph_CM_BanMessageContentDialog Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CM_BanMessageContentDialog.CM_BanMessageContentDialog_C.BndEvt__CM_BanMessageContentDialog_ConfirmButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
// (BlueprintEvent)

void UCM_BanMessageContentDialog_C::BndEvt__CM_BanMessageContentDialog_ConfirmButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_BanMessageContentDialog_C", "BndEvt__CM_BanMessageContentDialog_ConfirmButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CM_BanMessageContentDialog.CM_BanMessageContentDialog_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCM_BanMessageContentDialog_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_BanMessageContentDialog_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CM_BanMessageContentDialog.CM_BanMessageContentDialog_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCM_BanMessageContentDialog_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_BanMessageContentDialog_C", "Tick");

	Params::CM_BanMessageContentDialog_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CM_BanMessageContentDialog.CM_BanMessageContentDialog_C.SetUI
// (Public, BlueprintCallable, BlueprintEvent)

void UCM_BanMessageContentDialog_C::SetUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_BanMessageContentDialog_C", "SetUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CM_BanMessageContentDialog.CM_BanMessageContentDialog_C.Format Time ValueAsString
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UCM_BanMessageContentDialog_C::Format_Time_ValueAsString(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_BanMessageContentDialog_C", "Format Time ValueAsString");

	Params::CM_BanMessageContentDialog_C_Format_Time_ValueAsString Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function CM_BanMessageContentDialog.CM_BanMessageContentDialog_C.UpdateTimeRemaining
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCM_BanMessageContentDialog_C::UpdateTimeRemaining()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_BanMessageContentDialog_C", "UpdateTimeRemaining");

	UObject::ProcessEvent(Func, nullptr);
}

}

