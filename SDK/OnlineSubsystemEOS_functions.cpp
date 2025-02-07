#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OnlineSubsystemEOS

#include "Basic.hpp"

#include "OnlineSubsystemEOS_classes.hpp"
#include "OnlineSubsystemEOS_parameters.hpp"


namespace SDK
{

// Function OnlineSubsystemEOS.EOSGetPlayerAvatar.GetPlayerAvatar
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContextObject_0                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   LocalUserNum_0                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl                 UserId_0                                               (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*                       DefaultAvatar_0                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEOSGetPlayerAvatar*              ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UEOSGetPlayerAvatar* UEOSGetPlayerAvatar::GetPlayerAvatar(const class UObject* WorldContextObject_0, int32 LocalUserNum_0, const struct FUniqueNetIdRepl& UserId_0, class UTexture2D* DefaultAvatar_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("EOSGetPlayerAvatar", "GetPlayerAvatar");

	Params::EOSGetPlayerAvatar_GetPlayerAvatar Parms{};

	Parms.WorldContextObject_0 = WorldContextObject_0;
	Parms.LocalUserNum_0 = LocalUserNum_0;
	Parms.UserId_0 = std::move(UserId_0);
	Parms.DefaultAvatar_0 = DefaultAvatar_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function OnlineSubsystemEOS.EOSUserInterface_EnterDevicePinCode_Context.CancelLogin
// (Native, Public, BlueprintCallable)

void UEOSUserInterface_EnterDevicePinCode_Context::CancelLogin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EOSUserInterface_EnterDevicePinCode_Context", "CancelLogin");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function OnlineSubsystemEOS.EOSUserInterface_EnterDevicePinCode.SetupUserInterface
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEOSUserInterface_EnterDevicePinCode_Context*Context                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           VerificationUrl                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           PinCode                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IEOSUserInterface_EnterDevicePinCode::SetupUserInterface(class UEOSUserInterface_EnterDevicePinCode_Context* Context, const class FString& VerificationUrl, const class FString& PinCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EOSUserInterface_EnterDevicePinCode", "SetupUserInterface");

	Params::EOSUserInterface_EnterDevicePinCode_SetupUserInterface Parms{};

	Parms.Context = Context;
	Parms.VerificationUrl = std::move(VerificationUrl);
	Parms.PinCode = std::move(PinCode);

	UObject::ProcessEvent(Func, &Parms);
}


// Function OnlineSubsystemEOS.EOSUserInterface_LinkEOSAccountsAgainstEAS_Context.SelectedCandidates
// (Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FEOSUserInterface_CandidateEOSAccount>SelectedCandidates_0                                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEOSUserInterface_LinkEOSAccountsAgainstEAS_Context::SelectedCandidates(const TArray<struct FEOSUserInterface_CandidateEOSAccount>& SelectedCandidates_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EOSUserInterface_LinkEOSAccountsAgainstEAS_Context", "SelectedCandidates");

	Params::EOSUserInterface_LinkEOSAccountsAgainstEAS_Context_SelectedCandidates Parms{};

	Parms.SelectedCandidates_0 = std::move(SelectedCandidates_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function OnlineSubsystemEOS.EOSUserInterface_LinkEOSAccountsAgainstEAS.SetupUserInterface
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEOSUserInterface_LinkEOSAccountsAgainstEAS_Context*Context                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FEOSUserInterface_CandidateEOSAccount>AvailableCandidates                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void IEOSUserInterface_LinkEOSAccountsAgainstEAS::SetupUserInterface(class UEOSUserInterface_LinkEOSAccountsAgainstEAS_Context* Context, const TArray<struct FEOSUserInterface_CandidateEOSAccount>& AvailableCandidates)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EOSUserInterface_LinkEOSAccountsAgainstEAS", "SetupUserInterface");

	Params::EOSUserInterface_LinkEOSAccountsAgainstEAS_SetupUserInterface Parms{};

	Parms.Context = Context;
	Parms.AvailableCandidates = std::move(AvailableCandidates);

	UObject::ProcessEvent(Func, &Parms);
}


// Function OnlineSubsystemEOS.EOSUserInterface_SelectEOSAccount_Context.SelectCandidate
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FEOSUserInterface_CandidateEOSAccountSelectedCandidate                                      (Parm, NativeAccessSpecifierPublic)

void UEOSUserInterface_SelectEOSAccount_Context::SelectCandidate(const struct FEOSUserInterface_CandidateEOSAccount& SelectedCandidate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EOSUserInterface_SelectEOSAccount_Context", "SelectCandidate");

	Params::EOSUserInterface_SelectEOSAccount_Context_SelectCandidate Parms{};

	Parms.SelectedCandidate = std::move(SelectedCandidate);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function OnlineSubsystemEOS.EOSUserInterface_SelectEOSAccount.SetupUserInterface
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEOSUserInterface_SelectEOSAccount_Context*Context                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FEOSUserInterface_CandidateEOSAccount>AvailableCandidates                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void IEOSUserInterface_SelectEOSAccount::SetupUserInterface(class UEOSUserInterface_SelectEOSAccount_Context* Context, const TArray<struct FEOSUserInterface_CandidateEOSAccount>& AvailableCandidates)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EOSUserInterface_SelectEOSAccount", "SetupUserInterface");

	Params::EOSUserInterface_SelectEOSAccount_SetupUserInterface Parms{};

	Parms.Context = Context;
	Parms.AvailableCandidates = std::move(AvailableCandidates);

	UObject::ProcessEvent(Func, &Parms);
}


// Function OnlineSubsystemEOS.EOSUserInterface_SwitchToEASAccount_Context.SelectChoice
// (Native, Public, BlueprintCallable)
// Parameters:
// EEOSUserInterface_SwitchToEASAccount_ChoiceSelectedChoice                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEOSUserInterface_SwitchToEASAccount_Context::SelectChoice(EEOSUserInterface_SwitchToEASAccount_Choice SelectedChoice)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EOSUserInterface_SwitchToEASAccount_Context", "SelectChoice");

	Params::EOSUserInterface_SwitchToEASAccount_Context_SelectChoice Parms{};

	Parms.SelectedChoice = SelectedChoice;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function OnlineSubsystemEOS.EOSUserInterface_SwitchToEASAccount.SetupUserInterface
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEOSUserInterface_SwitchToEASAccount_Context*Context                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           EpicAccountName                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IEOSUserInterface_SwitchToEASAccount::SetupUserInterface(class UEOSUserInterface_SwitchToEASAccount_Context* Context, const class FString& EpicAccountName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EOSUserInterface_SwitchToEASAccount", "SetupUserInterface");

	Params::EOSUserInterface_SwitchToEASAccount_SetupUserInterface Parms{};

	Parms.Context = Context;
	Parms.EpicAccountName = std::move(EpicAccountName);

	UObject::ProcessEvent(Func, &Parms);
}

}

