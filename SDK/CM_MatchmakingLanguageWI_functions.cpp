#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CM_MatchmakingLanguageWI

#include "Basic.hpp"

#include "CM_MatchmakingLanguageWI_classes.hpp"
#include "CM_MatchmakingLanguageWI_parameters.hpp"


namespace SDK
{

// Function CM_MatchmakingLanguageWI.CM_MatchmakingLanguageWI_C.ExecuteUbergraph_CM_MatchmakingLanguageWI
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCM_MatchmakingLanguageWI_C::ExecuteUbergraph_CM_MatchmakingLanguageWI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_MatchmakingLanguageWI_C", "ExecuteUbergraph_CM_MatchmakingLanguageWI");

	Params::CM_MatchmakingLanguageWI_C_ExecuteUbergraph_CM_MatchmakingLanguageWI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CM_MatchmakingLanguageWI.CM_MatchmakingLanguageWI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCM_MatchmakingLanguageWI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_MatchmakingLanguageWI_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CM_MatchmakingLanguageWI.CM_MatchmakingLanguageWI_C.BndEvt__CM_LanguageWI_ComboBoxString_Language_K2Node_ComponentBoundEvent_4_OnOpeningEvent__DelegateSignature
// (BlueprintEvent)

void UCM_MatchmakingLanguageWI_C::BndEvt__CM_LanguageWI_ComboBoxString_Language_K2Node_ComponentBoundEvent_4_OnOpeningEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_MatchmakingLanguageWI_C", "BndEvt__CM_LanguageWI_ComboBoxString_Language_K2Node_ComponentBoundEvent_4_OnOpeningEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CM_MatchmakingLanguageWI.CM_MatchmakingLanguageWI_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCM_MatchmakingLanguageWI_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_MatchmakingLanguageWI_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CM_MatchmakingLanguageWI.CM_MatchmakingLanguageWI_C.BndEvt__CM_MatchmakingLanguageWI_LanguageRestrictedMatchmakingComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCM_MatchmakingLanguageWI_C::BndEvt__CM_MatchmakingLanguageWI_LanguageRestrictedMatchmakingComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_MatchmakingLanguageWI_C", "BndEvt__CM_MatchmakingLanguageWI_LanguageRestrictedMatchmakingComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");

	Params::CM_MatchmakingLanguageWI_C_BndEvt__CM_MatchmakingLanguageWI_LanguageRestrictedMatchmakingComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CM_MatchmakingLanguageWI.CM_MatchmakingLanguageWI_C.K2_EventOnSetNormalCosmetics
// (Event, Public, BlueprintEvent)

void UCM_MatchmakingLanguageWI_C::K2_EventOnSetNormalCosmetics()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_MatchmakingLanguageWI_C", "K2_EventOnSetNormalCosmetics");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CM_MatchmakingLanguageWI.CM_MatchmakingLanguageWI_C.K2_EventOnSetHoveredCosmetics
// (Event, Public, BlueprintEvent)

void UCM_MatchmakingLanguageWI_C::K2_EventOnSetHoveredCosmetics()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_MatchmakingLanguageWI_C", "K2_EventOnSetHoveredCosmetics");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CM_MatchmakingLanguageWI.CM_MatchmakingLanguageWI_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCM_MatchmakingLanguageWI_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_MatchmakingLanguageWI_C", "OnMouseLeave");

	Params::CM_MatchmakingLanguageWI_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CM_MatchmakingLanguageWI.CM_MatchmakingLanguageWI_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCM_MatchmakingLanguageWI_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_MatchmakingLanguageWI_C", "OnMouseEnter");

	Params::CM_MatchmakingLanguageWI_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CM_MatchmakingLanguageWI.CM_MatchmakingLanguageWI_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UCM_MatchmakingLanguageWI_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_MatchmakingLanguageWI_C", "OnRemovedFromFocusPath");

	Params::CM_MatchmakingLanguageWI_C_OnRemovedFromFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CM_MatchmakingLanguageWI.CM_MatchmakingLanguageWI_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UCM_MatchmakingLanguageWI_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_MatchmakingLanguageWI_C", "OnAddedToFocusPath");

	Params::CM_MatchmakingLanguageWI_C_OnAddedToFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CM_MatchmakingLanguageWI.CM_MatchmakingLanguageWI_C.On Matchmaker Language Redraw
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           UpdatedLanguage                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCM_MatchmakingLanguageWI_C::On_Matchmaker_Language_Redraw(const class FString& UpdatedLanguage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_MatchmakingLanguageWI_C", "On Matchmaker Language Redraw");

	Params::CM_MatchmakingLanguageWI_C_On_Matchmaker_Language_Redraw Parms{};

	Parms.UpdatedLanguage = std::move(UpdatedLanguage);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CM_MatchmakingLanguageWI.CM_MatchmakingLanguageWI_C.OnInitialLoadComplete
// (BlueprintCallable, BlueprintEvent)

void UCM_MatchmakingLanguageWI_C::OnInitialLoadComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_MatchmakingLanguageWI_C", "OnInitialLoadComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CM_MatchmakingLanguageWI.CM_MatchmakingLanguageWI_C.GetSpecialOptions
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Ubp_SpecialOptionsSave_C*         SpecialOptions                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCM_MatchmakingLanguageWI_C::GetSpecialOptions(class Ubp_SpecialOptionsSave_C** SpecialOptions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_MatchmakingLanguageWI_C", "GetSpecialOptions");

	Params::CM_MatchmakingLanguageWI_C_GetSpecialOptions Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SpecialOptions != nullptr)
		*SpecialOptions = Parms.SpecialOptions;
}


// Function CM_MatchmakingLanguageWI.CM_MatchmakingLanguageWI_C.Set Selected Index Visually Only
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCM_MatchmakingLanguageWI_C::Set_Selected_Index_Visually_Only(int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_MatchmakingLanguageWI_C", "Set Selected Index Visually Only");

	Params::CM_MatchmakingLanguageWI_C_Set_Selected_Index_Visually_Only Parms{};

	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CM_MatchmakingLanguageWI.CM_MatchmakingLanguageWI_C.OnSelectionChangedSound
// (Protected, BlueprintCallable, BlueprintEvent)

void UCM_MatchmakingLanguageWI_C::OnSelectionChangedSound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_MatchmakingLanguageWI_C", "OnSelectionChangedSound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CM_MatchmakingLanguageWI.CM_MatchmakingLanguageWI_C.SaveSelectedOption
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Option                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCM_MatchmakingLanguageWI_C::SaveSelectedOption(const class FString& Option)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_MatchmakingLanguageWI_C", "SaveSelectedOption");

	Params::CM_MatchmakingLanguageWI_C_SaveSelectedOption Parms{};

	Parms.Option = std::move(Option);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CM_MatchmakingLanguageWI.CM_MatchmakingLanguageWI_C.TriggerGameInstanceDelegate
// (Protected, BlueprintCallable, BlueprintEvent)

void UCM_MatchmakingLanguageWI_C::TriggerGameInstanceDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_MatchmakingLanguageWI_C", "TriggerGameInstanceDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CM_MatchmakingLanguageWI.CM_MatchmakingLanguageWI_C.Create Matmaker Language Options
// (Public, BlueprintCallable, BlueprintEvent)

void UCM_MatchmakingLanguageWI_C::Create_Matmaker_Language_Options()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_MatchmakingLanguageWI_C", "Create Matmaker Language Options");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CM_MatchmakingLanguageWI.CM_MatchmakingLanguageWI_C.GetCachedMatchmakerLanguage
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FString                           Matchmaker_Language                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UCM_MatchmakingLanguageWI_C::GetCachedMatchmakerLanguage(class FString* Matchmaker_Language) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_MatchmakingLanguageWI_C", "GetCachedMatchmakerLanguage");

	Params::CM_MatchmakingLanguageWI_C_GetCachedMatchmakerLanguage Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Matchmaker_Language != nullptr)
		*Matchmaker_Language = std::move(Parms.Matchmaker_Language);
}

}
