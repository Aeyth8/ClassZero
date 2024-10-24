#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: POI_OffScreenIndicatorWI

#include "Basic.hpp"

#include "POI_OffScreenIndicatorWI_classes.hpp"
#include "POI_OffScreenIndicatorWI_parameters.hpp"


namespace SDK
{

// Function POI_OffScreenIndicatorWI.POI_OffScreenIndicatorWI_C.ExecuteUbergraph_POI_OffScreenIndicatorWI
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPOI_OffScreenIndicatorWI_C::ExecuteUbergraph_POI_OffScreenIndicatorWI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("POI_OffScreenIndicatorWI_C", "ExecuteUbergraph_POI_OffScreenIndicatorWI");

	Params::POI_OffScreenIndicatorWI_C_ExecuteUbergraph_POI_OffScreenIndicatorWI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function POI_OffScreenIndicatorWI.POI_OffScreenIndicatorWI_C.Animate Pulse
// (BlueprintCallable, BlueprintEvent)

void UPOI_OffScreenIndicatorWI_C::Animate_Pulse()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("POI_OffScreenIndicatorWI_C", "Animate Pulse");

	UObject::ProcessEvent(Func, nullptr);
}


// Function POI_OffScreenIndicatorWI.POI_OffScreenIndicatorWI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPOI_OffScreenIndicatorWI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("POI_OffScreenIndicatorWI_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function POI_OffScreenIndicatorWI.POI_OffScreenIndicatorWI_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPOI_OffScreenIndicatorWI_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("POI_OffScreenIndicatorWI_C", "Tick");

	Params::POI_OffScreenIndicatorWI_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

