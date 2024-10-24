#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AccelByteRegisterConfirmedWidget

#include "Basic.hpp"

#include "BP_AccelByteRegisterConfirmedWidget_classes.hpp"
#include "BP_AccelByteRegisterConfirmedWidget_parameters.hpp"


namespace SDK
{

// Function BP_AccelByteRegisterConfirmedWidget.BP_AccelByteRegisterConfirmedWidget_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_AccelByteRegisterConfirmedWidget_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AccelByteRegisterConfirmedWidget_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AccelByteRegisterConfirmedWidget.BP_AccelByteRegisterConfirmedWidget_C.OnRegisterNewUser__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_AccelByteRegisterConfirmedWidget_C::OnRegisterNewUser__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AccelByteRegisterConfirmedWidget_C", "OnRegisterNewUser__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AccelByteRegisterConfirmedWidget.BP_AccelByteRegisterConfirmedWidget_C.ExecuteUbergraph_BP_AccelByteRegisterConfirmedWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AccelByteRegisterConfirmedWidget_C::ExecuteUbergraph_BP_AccelByteRegisterConfirmedWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AccelByteRegisterConfirmedWidget_C", "ExecuteUbergraph_BP_AccelByteRegisterConfirmedWidget");

	Params::BP_AccelByteRegisterConfirmedWidget_C_ExecuteUbergraph_BP_AccelByteRegisterConfirmedWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AccelByteRegisterConfirmedWidget.BP_AccelByteRegisterConfirmedWidget_C.Register
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Email                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           Password                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_AccelByteRegisterConfirmedWidget_C::Register(const class FString& Email, const class FString& Password)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AccelByteRegisterConfirmedWidget_C", "Register");

	Params::BP_AccelByteRegisterConfirmedWidget_C_Register Parms{};

	Parms.Email = std::move(Email);
	Parms.Password = std::move(Password);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AccelByteRegisterConfirmedWidget.BP_AccelByteRegisterConfirmedWidget_C.Login
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Email                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           Password                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_AccelByteRegisterConfirmedWidget_C::Login(const class FString& Email, const class FString& Password)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AccelByteRegisterConfirmedWidget_C", "Login");

	Params::BP_AccelByteRegisterConfirmedWidget_C_Login Parms{};

	Parms.Email = std::move(Email);
	Parms.Password = std::move(Password);

	UObject::ProcessEvent(Func, &Parms);
}

}

