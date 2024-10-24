#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_MenuCarousel

#include "Basic.hpp"

#include "WI_MenuCarousel_classes.hpp"
#include "WI_MenuCarousel_parameters.hpp"


namespace SDK
{

// Function WI_MenuCarousel.WI_MenuCarousel_C.AllServiceMessagesLoaded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWI_MenuCarousel_C::AllServiceMessagesLoaded__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_MenuCarousel_C", "AllServiceMessagesLoaded__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_MenuCarousel.WI_MenuCarousel_C.ExecuteUbergraph_WI_MenuCarousel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_MenuCarousel_C::ExecuteUbergraph_WI_MenuCarousel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_MenuCarousel_C", "ExecuteUbergraph_WI_MenuCarousel");

	Params::WI_MenuCarousel_C_ExecuteUbergraph_WI_MenuCarousel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_MenuCarousel.WI_MenuCarousel_C.OnConnectionFailed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   StatusCode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Reason                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    WasClean                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWI_MenuCarousel_C::OnConnectionFailed(int32 StatusCode, const class FString& Reason, bool WasClean)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_MenuCarousel_C", "OnConnectionFailed");

	Params::WI_MenuCarousel_C_OnConnectionFailed Parms{};

	Parms.StatusCode = StatusCode;
	Parms.Reason = std::move(Reason);
	Parms.WasClean = WasClean;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_MenuCarousel.WI_MenuCarousel_C.OnDotClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   DotIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_MenuCarousel_C::OnDotClicked(int32 DotIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_MenuCarousel_C", "OnDotClicked");

	Params::WI_MenuCarousel_C_OnDotClicked Parms{};

	Parms.DotIndex = DotIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_MenuCarousel.WI_MenuCarousel_C.OnGamepadPressed
// (BlueprintCallable, BlueprintEvent)

void UWI_MenuCarousel_C::OnGamepadPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_MenuCarousel_C", "OnGamepadPressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_MenuCarousel.WI_MenuCarousel_C.FirstBrushSet
// (BlueprintCallable, BlueprintEvent)

void UWI_MenuCarousel_C::FirstBrushSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_MenuCarousel_C", "FirstBrushSet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_MenuCarousel.WI_MenuCarousel_C.OnClientLoggedIn
// (BlueprintCallable, BlueprintEvent)

void UWI_MenuCarousel_C::OnClientLoggedIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_MenuCarousel_C", "OnClientLoggedIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_MenuCarousel.WI_MenuCarousel_C.BndEvt__WI_MenuCarousel_ActiveLink_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWI_MenuCarousel_C::BndEvt__WI_MenuCarousel_ActiveLink_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_MenuCarousel_C", "BndEvt__WI_MenuCarousel_ActiveLink_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_MenuCarousel.WI_MenuCarousel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWI_MenuCarousel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_MenuCarousel_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_MenuCarousel.WI_MenuCarousel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWI_MenuCarousel_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_MenuCarousel_C", "PreConstruct");

	Params::WI_MenuCarousel_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_MenuCarousel.WI_MenuCarousel_C.OnSuccess_6179390042E29A628F440C96606BBEAF
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFCTServiceMessage>       AllServiceMessages                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   Code                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Message                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWI_MenuCarousel_C::OnSuccess_6179390042E29A628F440C96606BBEAF(const TArray<struct FFCTServiceMessage>& AllServiceMessages, int32 Code, const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_MenuCarousel_C", "OnSuccess_6179390042E29A628F440C96606BBEAF");

	Params::WI_MenuCarousel_C_OnSuccess_6179390042E29A628F440C96606BBEAF Parms{};

	Parms.AllServiceMessages = std::move(AllServiceMessages);
	Parms.Code = Code;
	Parms.Message = std::move(Message);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_MenuCarousel.WI_MenuCarousel_C.OnError_6179390042E29A628F440C96606BBEAF
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFCTServiceMessage>       AllServiceMessages                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   Code                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Message                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWI_MenuCarousel_C::OnError_6179390042E29A628F440C96606BBEAF(const TArray<struct FFCTServiceMessage>& AllServiceMessages, int32 Code, const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_MenuCarousel_C", "OnError_6179390042E29A628F440C96606BBEAF");

	Params::WI_MenuCarousel_C_OnError_6179390042E29A628F440C96606BBEAF Parms{};

	Parms.AllServiceMessages = std::move(AllServiceMessages);
	Parms.Code = Code;
	Parms.Message = std::move(Message);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_MenuCarousel.WI_MenuCarousel_C.ChangeToNextServiceMessage
// (Public, BlueprintCallable, BlueprintEvent)

void UWI_MenuCarousel_C::ChangeToNextServiceMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_MenuCarousel_C", "ChangeToNextServiceMessage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_MenuCarousel.WI_MenuCarousel_C.GetSelectedItemDot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWI_MenuCarousel_Item_Dot_C*      Output                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_MenuCarousel_C::GetSelectedItemDot(class UWI_MenuCarousel_Item_Dot_C** Output)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_MenuCarousel_C", "GetSelectedItemDot");

	Params::WI_MenuCarousel_C_GetSelectedItemDot Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = Parms.Output;
}


// Function WI_MenuCarousel.WI_MenuCarousel_C.ChangeToPreviousServiceMessage
// (Public, BlueprintCallable, BlueprintEvent)

void UWI_MenuCarousel_C::ChangeToPreviousServiceMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_MenuCarousel_C", "ChangeToPreviousServiceMessage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_MenuCarousel.WI_MenuCarousel_C.SetSelectedItem
// (Public, BlueprintCallable, BlueprintEvent)

void UWI_MenuCarousel_C::SetSelectedItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_MenuCarousel_C", "SetSelectedItem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_MenuCarousel.WI_MenuCarousel_C.SetAutoSwapTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWI_MenuCarousel_C::SetAutoSwapTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_MenuCarousel_C", "SetAutoSwapTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_MenuCarousel.WI_MenuCarousel_C.ValidateAndClearTimer
// (Public, BlueprintCallable, BlueprintEvent)

void UWI_MenuCarousel_C::ValidateAndClearTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_MenuCarousel_C", "ValidateAndClearTimer");

	UObject::ProcessEvent(Func, nullptr);
}

}

