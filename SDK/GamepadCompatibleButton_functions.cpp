#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GamepadCompatibleButton

#include "Basic.hpp"

#include "GamepadCompatibleButton_classes.hpp"
#include "GamepadCompatibleButton_parameters.hpp"


namespace SDK
{

// Function GamepadCompatibleButton.GamepadCompatibleButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UGamepadCompatibleButton_C::OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GamepadCompatibleButton_C", "OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GamepadCompatibleButton.GamepadCompatibleButton_C.OnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UGamepadCompatibleButton_C::OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GamepadCompatibleButton_C", "OnPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GamepadCompatibleButton.GamepadCompatibleButton_C.OnReleased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UGamepadCompatibleButton_C::OnReleased__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GamepadCompatibleButton_C", "OnReleased__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GamepadCompatibleButton.GamepadCompatibleButton_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UGamepadCompatibleButton_C::OnHovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GamepadCompatibleButton_C", "OnHovered__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GamepadCompatibleButton.GamepadCompatibleButton_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UGamepadCompatibleButton_C::OnUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GamepadCompatibleButton_C", "OnUnhovered__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GamepadCompatibleButton.GamepadCompatibleButton_C.ExecuteUbergraph_GamepadCompatibleButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadCompatibleButton_C::ExecuteUbergraph_GamepadCompatibleButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GamepadCompatibleButton_C", "ExecuteUbergraph_GamepadCompatibleButton");

	Params::GamepadCompatibleButton_C_ExecuteUbergraph_GamepadCompatibleButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GamepadCompatibleButton.GamepadCompatibleButton_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGamepadCompatibleButton_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GamepadCompatibleButton_C", "OnMouseLeave");

	Params::GamepadCompatibleButton_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GamepadCompatibleButton.GamepadCompatibleButton_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UGamepadCompatibleButton_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GamepadCompatibleButton_C", "OnRemovedFromFocusPath");

	Params::GamepadCompatibleButton_C_OnRemovedFromFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GamepadCompatibleButton.GamepadCompatibleButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGamepadCompatibleButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GamepadCompatibleButton_C", "PreConstruct");

	Params::GamepadCompatibleButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GamepadCompatibleButton.GamepadCompatibleButton_C.BndEvt__GamepadButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UGamepadCompatibleButton_C::BndEvt__GamepadButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GamepadCompatibleButton_C", "BndEvt__GamepadButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GamepadCompatibleButton.GamepadCompatibleButton_C.BndEvt__GamepadButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UGamepadCompatibleButton_C::BndEvt__GamepadButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GamepadCompatibleButton_C", "BndEvt__GamepadButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GamepadCompatibleButton.GamepadCompatibleButton_C.BndEvt__GamepadButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UGamepadCompatibleButton_C::BndEvt__GamepadButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GamepadCompatibleButton_C", "BndEvt__GamepadButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GamepadCompatibleButton.GamepadCompatibleButton_C.BndEvt__GamepadButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UGamepadCompatibleButton_C::BndEvt__GamepadButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GamepadCompatibleButton_C", "BndEvt__GamepadButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GamepadCompatibleButton.GamepadCompatibleButton_C.BndEvt__GamepadButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UGamepadCompatibleButton_C::BndEvt__GamepadButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GamepadCompatibleButton_C", "BndEvt__GamepadButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GamepadCompatibleButton.GamepadCompatibleButton_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UGamepadCompatibleButton_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GamepadCompatibleButton_C", "OnAddedToFocusPath");

	Params::GamepadCompatibleButton_C_OnAddedToFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GamepadCompatibleButton.GamepadCompatibleButton_C.SetMouseToFocus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGamepadCompatibleButton_C::SetMouseToFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GamepadCompatibleButton_C", "SetMouseToFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GamepadCompatibleButton.GamepadCompatibleButton_C.UpdateFocusHandler
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGamepadCompatibleButton_C::UpdateFocusHandler()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GamepadCompatibleButton_C", "UpdateFocusHandler");

	UObject::ProcessEvent(Func, nullptr);
}

}

