#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InteractableEntryWI

#include "Basic.hpp"

#include "InteractableEntryWI_classes.hpp"
#include "InteractableEntryWI_parameters.hpp"


namespace SDK
{

// Function InteractableEntryWI.InteractableEntryWI_C.ExecuteUbergraph_InteractableEntryWI
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInteractableEntryWI_C::ExecuteUbergraph_InteractableEntryWI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteractableEntryWI_C", "ExecuteUbergraph_InteractableEntryWI");

	Params::InteractableEntryWI_C_ExecuteUbergraph_InteractableEntryWI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InteractableEntryWI.InteractableEntryWI_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInteractableEntryWI_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteractableEntryWI_C", "Tick");

	Params::InteractableEntryWI_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InteractableEntryWI.InteractableEntryWI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInteractableEntryWI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteractableEntryWI_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InteractableEntryWI.InteractableEntryWI_C.Update Cooldown Progress Bar
// (Public, BlueprintCallable, BlueprintEvent)

void UInteractableEntryWI_C::Update_Cooldown_Progress_Bar()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteractableEntryWI_C", "Update Cooldown Progress Bar");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InteractableEntryWI.InteractableEntryWI_C.Update UI Content
// (Public, BlueprintCallable, BlueprintEvent)

void UInteractableEntryWI_C::Update_UI_Content()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteractableEntryWI_C", "Update UI Content");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InteractableEntryWI.InteractableEntryWI_C.Update Description
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UInteractableEntryWI_C::Update_Description()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteractableEntryWI_C", "Update Description");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InteractableEntryWI.InteractableEntryWI_C.Set UI Visibility
// (Public, BlueprintCallable, BlueprintEvent)

void UInteractableEntryWI_C::Set_UI_Visibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteractableEntryWI_C", "Set UI Visibility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InteractableEntryWI.InteractableEntryWI_C.PrintInvalidPowerMessage
// (Public, BlueprintCallable, BlueprintEvent)

void UInteractableEntryWI_C::PrintInvalidPowerMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteractableEntryWI_C", "PrintInvalidPowerMessage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InteractableEntryWI.InteractableEntryWI_C.SetColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UInteractableEntryWI_C::SetColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteractableEntryWI_C", "SetColor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InteractableEntryWI.InteractableEntryWI_C.IsPersonoidPower
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UInteractableEntryWI_C::IsPersonoidPower() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteractableEntryWI_C", "IsPersonoidPower");

	Params::InteractableEntryWI_C_IsPersonoidPower Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function InteractableEntryWI.InteractableEntryWI_C.IsPretendPower
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UInteractableEntryWI_C::IsPretendPower() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteractableEntryWI_C", "IsPretendPower");

	Params::InteractableEntryWI_C_IsPretendPower Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

