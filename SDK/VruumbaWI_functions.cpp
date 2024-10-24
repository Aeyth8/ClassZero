#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VruumbaWI

#include "Basic.hpp"

#include "VruumbaWI_classes.hpp"
#include "VruumbaWI_parameters.hpp"


namespace SDK
{

// Function VruumbaWI.VruumbaWI_C.ExecuteUbergraph_VruumbaWI
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVruumbaWI_C::ExecuteUbergraph_VruumbaWI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VruumbaWI_C", "ExecuteUbergraph_VruumbaWI");

	Params::VruumbaWI_C_ExecuteUbergraph_VruumbaWI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VruumbaWI.VruumbaWI_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UVruumbaWI_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VruumbaWI_C", "PreConstruct");

	Params::VruumbaWI_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VruumbaWI.VruumbaWI_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UVruumbaWI_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VruumbaWI_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VruumbaWI.VruumbaWI_C.UpdateFact
// (BlueprintCallable, BlueprintEvent)

void UVruumbaWI_C::UpdateFact()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VruumbaWI_C", "UpdateFact");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VruumbaWI.VruumbaWI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UVruumbaWI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VruumbaWI_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VruumbaWI.VruumbaWI_C.ShowAirlockUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Show                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UVruumbaWI_C::ShowAirlockUI(bool Show)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VruumbaWI_C", "ShowAirlockUI");

	Params::VruumbaWI_C_ShowAirlockUI Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VruumbaWI.VruumbaWI_C.ProjectileCD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OnCooldown                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsAvailable                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UVruumbaWI_C::ProjectileCD(bool OnCooldown, bool IsAvailable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VruumbaWI_C", "ProjectileCD");

	Params::VruumbaWI_C_ProjectileCD Parms{};

	Parms.OnCooldown = OnCooldown;
	Parms.IsAvailable = IsAvailable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VruumbaWI.VruumbaWI_C.PlayHitAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UVruumbaWI_C::PlayHitAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VruumbaWI_C", "PlayHitAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VruumbaWI.VruumbaWI_C.TeleportCD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OnCooldown                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsAvailable                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UVruumbaWI_C::TeleportCD(bool OnCooldown, bool IsAvailable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VruumbaWI_C", "TeleportCD");

	Params::VruumbaWI_C_TeleportCD Parms{};

	Parms.OnCooldown = OnCooldown;
	Parms.IsAvailable = IsAvailable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VruumbaWI.VruumbaWI_C.HooverActivate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Active                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UVruumbaWI_C::HooverActivate(bool Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VruumbaWI_C", "HooverActivate");

	Params::VruumbaWI_C_HooverActivate Parms{};

	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VruumbaWI.VruumbaWI_C.FlyActivate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Active                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UVruumbaWI_C::FlyActivate(bool Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VruumbaWI_C", "FlyActivate");

	Params::VruumbaWI_C_FlyActivate Parms{};

	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VruumbaWI.VruumbaWI_C.Teleport WI Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UVruumbaWI_C::Teleport_WI_Visibility(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VruumbaWI_C", "Teleport WI Visibility");

	Params::VruumbaWI_C_Teleport_WI_Visibility Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VruumbaWI.VruumbaWI_C.Jump Boost WI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   BoostNumber                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVruumbaWI_C::Jump_Boost_WI(int32 BoostNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VruumbaWI_C", "Jump Boost WI");

	Params::VruumbaWI_C_Jump_Boost_WI Parms{};

	Parms.BoostNumber = BoostNumber;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VruumbaWI.VruumbaWI_C.UpdateTrashCounter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   TrashProgress                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVruumbaWI_C::UpdateTrashCounter(float TrashProgress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VruumbaWI_C", "UpdateTrashCounter");

	Params::VruumbaWI_C_UpdateTrashCounter Parms{};

	Parms.TrashProgress = TrashProgress;

	UObject::ProcessEvent(Func, &Parms);
}

}

