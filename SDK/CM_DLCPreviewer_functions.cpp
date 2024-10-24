#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CM_DLCPreviewer

#include "Basic.hpp"

#include "CM_DLCPreviewer_classes.hpp"
#include "CM_DLCPreviewer_parameters.hpp"


namespace SDK
{

// Function CM_DLCPreviewer.CM_DLCPreviewer_C.OnGoBack__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCM_DLCPreviewer_C::OnGoBack__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_DLCPreviewer_C", "OnGoBack__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CM_DLCPreviewer.CM_DLCPreviewer_C.ExecuteUbergraph_CM_DLCPreviewer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCM_DLCPreviewer_C::ExecuteUbergraph_CM_DLCPreviewer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_DLCPreviewer_C", "ExecuteUbergraph_CM_DLCPreviewer");

	Params::CM_DLCPreviewer_C_ExecuteUbergraph_CM_DLCPreviewer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CM_DLCPreviewer.CM_DLCPreviewer_C.BndEvt__CM_DLCPreviewer_CM_ClickableSubTitleWI_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
// (BlueprintEvent)

void UCM_DLCPreviewer_C::BndEvt__CM_DLCPreviewer_CM_ClickableSubTitleWI_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_DLCPreviewer_C", "BndEvt__CM_DLCPreviewer_CM_ClickableSubTitleWI_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CM_DLCPreviewer.CM_DLCPreviewer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCM_DLCPreviewer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_DLCPreviewer_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CM_DLCPreviewer.CM_DLCPreviewer_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCM_DLCPreviewer_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_DLCPreviewer_C", "PreConstruct");

	Params::CM_DLCPreviewer_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CM_DLCPreviewer.CM_DLCPreviewer_C.InitializePreviewer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InStoreId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FPlayerCustomizationItemTableRow InItems                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UCM_DLCPreviewer_C::InitializePreviewer(const class FString& InStoreId, const struct FPlayerCustomizationItemTableRow& InItems)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_DLCPreviewer_C", "InitializePreviewer");

	Params::CM_DLCPreviewer_C_InitializePreviewer Parms{};

	Parms.InStoreId = std::move(InStoreId);
	Parms.InItems = std::move(InItems);

	UObject::ProcessEvent(Func, &Parms);
}

}

