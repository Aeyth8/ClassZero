#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AgendaStateIconWI

#include "Basic.hpp"

#include "AgendaStateIconWI_classes.hpp"
#include "AgendaStateIconWI_parameters.hpp"


namespace SDK
{

// Function AgendaStateIconWI.AgendaStateIconWI_C.ExecuteUbergraph_AgendaStateIconWI
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAgendaStateIconWI_C::ExecuteUbergraph_AgendaStateIconWI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AgendaStateIconWI_C", "ExecuteUbergraph_AgendaStateIconWI");

	Params::AgendaStateIconWI_C_ExecuteUbergraph_AgendaStateIconWI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AgendaStateIconWI.AgendaStateIconWI_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAgendaStateIconWI_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AgendaStateIconWI_C", "PreConstruct");

	Params::AgendaStateIconWI_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AgendaStateIconWI.AgendaStateIconWI_C.SetState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAgendaObjectState                      State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAgendaStateIconWI_C::SetState(EAgendaObjectState State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AgendaStateIconWI_C", "SetState");

	Params::AgendaStateIconWI_C_SetState Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);
}

}
