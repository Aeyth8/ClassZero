#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CarryCorpseGA

#include "Basic.hpp"

#include "CarryCorpseGA_classes.hpp"
#include "CarryCorpseGA_parameters.hpp"


namespace SDK
{

// Function CarryCorpseGA.CarryCorpseGA_C.On_ReleaseCorpse__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterSCTBP_C*                CarriedCorpse_0                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCarryCorpseGA_C::On_ReleaseCorpse__DelegateSignature(class ACharacterSCTBP_C* CarriedCorpse_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CarryCorpseGA_C", "On_ReleaseCorpse__DelegateSignature");

	Params::CarryCorpseGA_C_On_ReleaseCorpse__DelegateSignature Parms{};

	Parms.CarriedCorpse_0 = CarriedCorpse_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CarryCorpseGA.CarryCorpseGA_C.ExecuteUbergraph_CarryCorpseGA
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCarryCorpseGA_C::ExecuteUbergraph_CarryCorpseGA(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CarryCorpseGA_C", "ExecuteUbergraph_CarryCorpseGA");

	Params::CarryCorpseGA_C_ExecuteUbergraph_CarryCorpseGA Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CarryCorpseGA.CarryCorpseGA_C.OnDestroyed_Carried
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DestroyedActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCarryCorpseGA_C::OnDestroyed_Carried(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CarryCorpseGA_C", "OnDestroyed_Carried");

	Params::CarryCorpseGA_C_OnDestroyed_Carried Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CarryCorpseGA.CarryCorpseGA_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UCarryCorpseGA_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CarryCorpseGA_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CarryCorpseGA.CarryCorpseGA_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCarryCorpseGA_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CarryCorpseGA_C", "K2_OnEndAbility");

	Params::CarryCorpseGA_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CarryCorpseGA.CarryCorpseGA_C.ReleaseCorpse
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterSCTBP_C*                CarriedCorpse_0                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector_NetQuantize              ReleaseLocation                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FVector_NetQuantize              ReleaseRotation                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FVector_NetQuantize              ReleaseVelocity                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UCarryCorpseGA_C::ReleaseCorpse(class ACharacterSCTBP_C* CarriedCorpse_0, const struct FVector_NetQuantize& ReleaseLocation, const struct FVector_NetQuantize& ReleaseRotation, const struct FVector_NetQuantize& ReleaseVelocity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CarryCorpseGA_C", "ReleaseCorpse");

	Params::CarryCorpseGA_C_ReleaseCorpse Parms{};

	Parms.CarriedCorpse_0 = CarriedCorpse_0;
	Parms.ReleaseLocation = std::move(ReleaseLocation);
	Parms.ReleaseRotation = std::move(ReleaseRotation);
	Parms.ReleaseVelocity = std::move(ReleaseVelocity);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CarryCorpseGA.CarryCorpseGA_C.CarryAll
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterSCTBP_C*                CarriedCorpse_0                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacterSCTBP_C*                OwningCharacter_0                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCarryCorpseGA_C::CarryAll(class ACharacterSCTBP_C* CarriedCorpse_0, class ACharacterSCTBP_C* OwningCharacter_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CarryCorpseGA_C", "CarryAll");

	Params::CarryCorpseGA_C_CarryAll Parms{};

	Parms.CarriedCorpse_0 = CarriedCorpse_0;
	Parms.OwningCharacter_0 = OwningCharacter_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CarryCorpseGA.CarryCorpseGA_C.NetQuantizeVector
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Vector                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector_NetQuantize              QuantizedVector                                        (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UCarryCorpseGA_C::NetQuantizeVector(const struct FVector& Vector, struct FVector_NetQuantize* QuantizedVector)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CarryCorpseGA_C", "NetQuantizeVector");

	Params::CarryCorpseGA_C_NetQuantizeVector Parms{};

	Parms.Vector = std::move(Vector);

	UObject::ProcessEvent(Func, &Parms);

	if (QuantizedVector != nullptr)
		*QuantizedVector = std::move(Parms.QuantizedVector);
}


// Function CarryCorpseGA.CarryCorpseGA_C.RagdollWhenNot
// (Public, BlueprintCallable, BlueprintEvent)

void UCarryCorpseGA_C::RagdollWhenNot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CarryCorpseGA_C", "RagdollWhenNot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CarryCorpseGA.CarryCorpseGA_C.GetInactiveContextDescription
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UCarryCorpseGA_C::GetInactiveContextDescription()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CarryCorpseGA_C", "GetInactiveContextDescription");

	Params::CarryCorpseGA_C_GetInactiveContextDescription Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function CarryCorpseGA.CarryCorpseGA_C.ReattachBodyToCapsule
// (Public, BlueprintCallable, BlueprintEvent)

void UCarryCorpseGA_C::ReattachBodyToCapsule()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CarryCorpseGA_C", "ReattachBodyToCapsule");

	UObject::ProcessEvent(Func, nullptr);
}

}
