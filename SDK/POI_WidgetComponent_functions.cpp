#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: POI_WidgetComponent

#include "Basic.hpp"

#include "POI_WidgetComponent_classes.hpp"
#include "POI_WidgetComponent_parameters.hpp"


namespace SDK
{

// Function POI_WidgetComponent.POI_WidgetComponent_C.ExecuteUbergraph_POI_WidgetComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPOI_WidgetComponent_C::ExecuteUbergraph_POI_WidgetComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("POI_WidgetComponent_C", "ExecuteUbergraph_POI_WidgetComponent");

	Params::POI_WidgetComponent_C_ExecuteUbergraph_POI_WidgetComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function POI_WidgetComponent.POI_WidgetComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UPOI_WidgetComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("POI_WidgetComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function POI_WidgetComponent.POI_WidgetComponent_C.K2_InitWidget
// (Event, Public, BlueprintEvent)
// Parameters:
// class UWidget*                          InitializedWidget                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPOI_WidgetComponent_C::K2_InitWidget(class UWidget* InitializedWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("POI_WidgetComponent_C", "K2_InitWidget");

	Params::POI_WidgetComponent_C_K2_InitWidget Parms{};

	Parms.InitializedWidget = InitializedWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function POI_WidgetComponent.POI_WidgetComponent_C.SetVisibilityState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visibility                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPOI_WidgetComponent_C::SetVisibilityState(bool Visibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("POI_WidgetComponent_C", "SetVisibilityState");

	Params::POI_WidgetComponent_C_SetVisibilityState Parms{};

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function POI_WidgetComponent.POI_WidgetComponent_C.SubscribeToPOIEvent
// (Public, BlueprintCallable, BlueprintEvent)

void UPOI_WidgetComponent_C::SubscribeToPOIEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("POI_WidgetComponent_C", "SubscribeToPOIEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function POI_WidgetComponent.POI_WidgetComponent_C.GetPOIState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    Visible                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPOI_WidgetComponent_C::GetPOIState(bool* Visible) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("POI_WidgetComponent_C", "GetPOIState");

	Params::POI_WidgetComponent_C_GetPOIState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Visible != nullptr)
		*Visible = Parms.Visible;
}

}
