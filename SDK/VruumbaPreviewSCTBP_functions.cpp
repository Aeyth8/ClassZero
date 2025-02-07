#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VruumbaPreviewSCTBP

#include "Basic.hpp"

#include "VruumbaPreviewSCTBP_classes.hpp"
#include "VruumbaPreviewSCTBP_parameters.hpp"


namespace SDK
{

// Function VruumbaPreviewSCTBP.VruumbaPreviewSCTBP_C.ExecuteUbergraph_VruumbaPreviewSCTBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVruumbaPreviewSCTBP_C::ExecuteUbergraph_VruumbaPreviewSCTBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VruumbaPreviewSCTBP_C", "ExecuteUbergraph_VruumbaPreviewSCTBP");

	Params::VruumbaPreviewSCTBP_C_ExecuteUbergraph_VruumbaPreviewSCTBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VruumbaPreviewSCTBP.VruumbaPreviewSCTBP_C.K2_OnSetCustomization
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                           PlayerAccelByteID                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AVruumbaPreviewSCTBP_C::K2_OnSetCustomization(const class FString& PlayerAccelByteID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VruumbaPreviewSCTBP_C", "K2_OnSetCustomization");

	Params::VruumbaPreviewSCTBP_C_K2_OnSetCustomization Parms{};

	Parms.PlayerAccelByteID = std::move(PlayerAccelByteID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function VruumbaPreviewSCTBP.VruumbaPreviewSCTBP_C.EmptyFunction
// (Public, BlueprintCallable, BlueprintEvent)

void AVruumbaPreviewSCTBP_C::EmptyFunction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VruumbaPreviewSCTBP_C", "EmptyFunction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VruumbaPreviewSCTBP.VruumbaPreviewSCTBP_C.StartHover
// (Public, BlueprintCallable, BlueprintEvent)

void AVruumbaPreviewSCTBP_C::StartHover()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VruumbaPreviewSCTBP_C", "StartHover");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VruumbaPreviewSCTBP.VruumbaPreviewSCTBP_C.StopHover
// (Public, BlueprintCallable, BlueprintEvent)

void AVruumbaPreviewSCTBP_C::StopHover()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VruumbaPreviewSCTBP_C", "StopHover");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VruumbaPreviewSCTBP.VruumbaPreviewSCTBP_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*                      NewController                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVruumbaPreviewSCTBP_C::ReceivePossessed(class AController* NewController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VruumbaPreviewSCTBP_C", "ReceivePossessed");

	Params::VruumbaPreviewSCTBP_C_ReceivePossessed Parms{};

	Parms.NewController = NewController;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VruumbaPreviewSCTBP.VruumbaPreviewSCTBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AVruumbaPreviewSCTBP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VruumbaPreviewSCTBP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VruumbaPreviewSCTBP.VruumbaPreviewSCTBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVruumbaPreviewSCTBP_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VruumbaPreviewSCTBP_C", "ReceiveTick");

	Params::VruumbaPreviewSCTBP_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VruumbaPreviewSCTBP.VruumbaPreviewSCTBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AVruumbaPreviewSCTBP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VruumbaPreviewSCTBP_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

