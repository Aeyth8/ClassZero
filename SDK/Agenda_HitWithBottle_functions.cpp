#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Agenda_HitWithBottle

#include "Basic.hpp"

#include "Agenda_HitWithBottle_classes.hpp"
#include "Agenda_HitWithBottle_parameters.hpp"


namespace SDK
{

// Function Agenda_HitWithBottle.Agenda_HitWithBottle_C.ExecuteUbergraph_Agenda_HitWithBottle
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAgenda_HitWithBottle_C::ExecuteUbergraph_Agenda_HitWithBottle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Agenda_HitWithBottle_C", "ExecuteUbergraph_Agenda_HitWithBottle");

	Params::Agenda_HitWithBottle_C_ExecuteUbergraph_Agenda_HitWithBottle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Agenda_HitWithBottle.Agenda_HitWithBottle_C.K2_Initialize
// (Event, Public, BlueprintEvent)

void UAgenda_HitWithBottle_C::K2_Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Agenda_HitWithBottle_C", "K2_Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Agenda_HitWithBottle.Agenda_HitWithBottle_C.OnHitEventRaised
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*                Instigator                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*                Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           Power                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAgenda_HitWithBottle_C::OnHitEventRaised(class APlayerController* Instigator, class APlayerController* Target, class UClass* Power)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Agenda_HitWithBottle_C", "OnHitEventRaised");

	Params::Agenda_HitWithBottle_C_OnHitEventRaised Parms{};

	Parms.Instigator = Instigator;
	Parms.Target = Target;
	Parms.Power = Power;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Agenda_HitWithBottle.Agenda_HitWithBottle_C.IncrementHit
// (Public, BlueprintCallable, BlueprintEvent)

void UAgenda_HitWithBottle_C::IncrementHit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Agenda_HitWithBottle_C", "IncrementHit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Agenda_HitWithBottle.Agenda_HitWithBottle_C.GetDescription
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UAgenda_HitWithBottle_C::GetDescription() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Agenda_HitWithBottle_C", "GetDescription");

	Params::Agenda_HitWithBottle_C_GetDescription Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Agenda_HitWithBottle.Agenda_HitWithBottle_C.GetProgression
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UAgenda_HitWithBottle_C::GetProgression() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Agenda_HitWithBottle_C", "GetProgression");

	Params::Agenda_HitWithBottle_C_GetProgression Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Agenda_HitWithBottle.Agenda_HitWithBottle_C.IsValid
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APlayerController*                Instigator                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           Power                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UAgenda_HitWithBottle_C::IsValid(class APlayerController* Instigator, class UClass* Power) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Agenda_HitWithBottle_C", "IsValid");

	Params::Agenda_HitWithBottle_C_IsValid Parms{};

	Parms.Instigator = Instigator;
	Parms.Power = Power;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

