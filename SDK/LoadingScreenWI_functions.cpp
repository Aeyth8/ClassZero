#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LoadingScreenWI

#include "Basic.hpp"

#include "LoadingScreenWI_classes.hpp"
#include "LoadingScreenWI_parameters.hpp"


namespace SDK
{

// Function LoadingScreenWI.LoadingScreenWI_C.ExecuteUbergraph_LoadingScreenWI
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoadingScreenWI_C::ExecuteUbergraph_LoadingScreenWI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadingScreenWI_C", "ExecuteUbergraph_LoadingScreenWI");

	Params::LoadingScreenWI_C_ExecuteUbergraph_LoadingScreenWI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LoadingScreenWI.LoadingScreenWI_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULoadingScreenWI_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadingScreenWI_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LoadingScreenWI.LoadingScreenWI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULoadingScreenWI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadingScreenWI_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LoadingScreenWI.LoadingScreenWI_C.Start
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                           PendingURL                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ULoadingScreenWI_C::Start(const class FString& PendingURL)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadingScreenWI_C", "Start");

	Params::LoadingScreenWI_C_Start Parms{};

	Parms.PendingURL = std::move(PendingURL);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LoadingScreenWI.LoadingScreenWI_C.ToggleSucceededLoadingTextureState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Succeeded                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoadingScreenWI_C::ToggleSucceededLoadingTextureState(bool Succeeded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadingScreenWI_C", "ToggleSucceededLoadingTextureState");

	Params::LoadingScreenWI_C_ToggleSucceededLoadingTextureState Parms{};

	Parms.Succeeded = Succeeded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LoadingScreenWI.LoadingScreenWI_C.IsLoadedTextureValid
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UTexture2D*                       Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ULoadingScreenWI_C::IsLoadedTextureValid(class UTexture2D* Texture) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadingScreenWI_C", "IsLoadedTextureValid");

	Params::LoadingScreenWI_C_IsLoadedTextureValid Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

