#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VivoxMuteWI

#include "Basic.hpp"

#include "VivoxMuteWI_classes.hpp"
#include "VivoxMuteWI_parameters.hpp"


namespace SDK
{

// Function VivoxMuteWI.VivoxMuteWI_C.ExecuteUbergraph_VivoxMuteWI
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVivoxMuteWI_C::ExecuteUbergraph_VivoxMuteWI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VivoxMuteWI_C", "ExecuteUbergraph_VivoxMuteWI");

	Params::VivoxMuteWI_C_ExecuteUbergraph_VivoxMuteWI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VivoxMuteWI.VivoxMuteWI_C.BndEvt__Button_MuteToggle_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UVivoxMuteWI_C::BndEvt__Button_MuteToggle_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VivoxMuteWI_C", "BndEvt__Button_MuteToggle_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VivoxMuteWI.VivoxMuteWI_C.OnMuteChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsMuted_0                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UVivoxMuteWI_C::OnMuteChanged(bool IsMuted_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VivoxMuteWI_C", "OnMuteChanged");

	Params::VivoxMuteWI_C_OnMuteChanged Parms{};

	Parms.IsMuted_0 = IsMuted_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VivoxMuteWI.VivoxMuteWI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UVivoxMuteWI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VivoxMuteWI_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VivoxMuteWI.VivoxMuteWI_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UVivoxMuteWI_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VivoxMuteWI_C", "PreConstruct");

	Params::VivoxMuteWI_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VivoxMuteWI.VivoxMuteWI_C.SetButtonImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsMuted_0                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UVivoxMuteWI_C::SetButtonImage(bool IsMuted_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VivoxMuteWI_C", "SetButtonImage");

	Params::VivoxMuteWI_C_SetButtonImage Parms{};

	Parms.IsMuted_0 = IsMuted_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VivoxMuteWI.VivoxMuteWI_C.GetMuteImage
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                                    IsMuted_0                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture*                         Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVivoxMuteWI_C::GetMuteImage(bool IsMuted_0, class UTexture** Return) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VivoxMuteWI_C", "GetMuteImage");

	Params::VivoxMuteWI_C_GetMuteImage Parms{};

	Parms.IsMuted_0 = IsMuted_0;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}

}

