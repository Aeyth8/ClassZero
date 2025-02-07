#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EmergencyEventWI

#include "Basic.hpp"

#include "EmergencyEventWI_classes.hpp"
#include "EmergencyEventWI_parameters.hpp"


namespace SDK
{

// Function EmergencyEventWI.EmergencyEventWI_C.ExecuteUbergraph_EmergencyEventWI
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEmergencyEventWI_C::ExecuteUbergraph_EmergencyEventWI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmergencyEventWI_C", "ExecuteUbergraph_EmergencyEventWI");

	Params::EmergencyEventWI_C_ExecuteUbergraph_EmergencyEventWI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EmergencyEventWI.EmergencyEventWI_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEmergencyEventWI_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmergencyEventWI_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EmergencyEventWI.EmergencyEventWI_C.NULL
// (BlueprintCallable, BlueprintEvent)

void UEmergencyEventWI_C::NULLL()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmergencyEventWI_C", "NULL");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EmergencyEventWI.EmergencyEventWI_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEmergencyEventWI_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmergencyEventWI_C", "Tick");

	Params::EmergencyEventWI_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EmergencyEventWI.EmergencyEventWI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEmergencyEventWI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmergencyEventWI_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

