#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SCTPlayerController_MatchBP

#include "Basic.hpp"

#include "SCTPlayerController_MatchBP_classes.hpp"
#include "SCTPlayerController_MatchBP_parameters.hpp"


namespace SDK
{

// Function SCTPlayerController_MatchBP.SCTPlayerController_MatchBP_C.On_RightTriggerPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ASCTPlayerController_MatchBP_C::On_RightTriggerPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTPlayerController_MatchBP_C", "On_RightTriggerPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SCTPlayerController_MatchBP.SCTPlayerController_MatchBP_C.On_LeftTriggerPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ASCTPlayerController_MatchBP_C::On_LeftTriggerPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTPlayerController_MatchBP_C", "On_LeftTriggerPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SCTPlayerController_MatchBP.SCTPlayerController_MatchBP_C.On_RightFaceButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ASCTPlayerController_MatchBP_C::On_RightFaceButtonPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTPlayerController_MatchBP_C", "On_RightFaceButtonPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SCTPlayerController_MatchBP.SCTPlayerController_MatchBP_C.On_TopFaceButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ASCTPlayerController_MatchBP_C::On_TopFaceButtonPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTPlayerController_MatchBP_C", "On_TopFaceButtonPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SCTPlayerController_MatchBP.SCTPlayerController_MatchBP_C.On_LeftFaceButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ASCTPlayerController_MatchBP_C::On_LeftFaceButtonPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTPlayerController_MatchBP_C", "On_LeftFaceButtonPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SCTPlayerController_MatchBP.SCTPlayerController_MatchBP_C.ExecuteUbergraph_SCTPlayerController_MatchBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASCTPlayerController_MatchBP_C::ExecuteUbergraph_SCTPlayerController_MatchBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTPlayerController_MatchBP_C", "ExecuteUbergraph_SCTPlayerController_MatchBP");

	Params::SCTPlayerController_MatchBP_C_ExecuteUbergraph_SCTPlayerController_MatchBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SCTPlayerController_MatchBP.SCTPlayerController_MatchBP_C.OnXboxUserLogOut
// (BlueprintCallable, BlueprintEvent)

void ASCTPlayerController_MatchBP_C::OnXboxUserLogOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTPlayerController_MatchBP_C", "OnXboxUserLogOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SCTPlayerController_MatchBP.SCTPlayerController_MatchBP_C.OnConsoleLaunchMultiplayerIntent
// (BlueprintCallable, BlueprintEvent)

void ASCTPlayerController_MatchBP_C::OnConsoleLaunchMultiplayerIntent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTPlayerController_MatchBP_C", "OnConsoleLaunchMultiplayerIntent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SCTPlayerController_MatchBP.SCTPlayerController_MatchBP_C.OnConsoleLaunchIntent
// (BlueprintCallable, BlueprintEvent)

void ASCTPlayerController_MatchBP_C::OnConsoleLaunchIntent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTPlayerController_MatchBP_C", "OnConsoleLaunchIntent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SCTPlayerController_MatchBP.SCTPlayerController_MatchBP_C.OnAcceptConsoleInvite
// (BlueprintCallable, BlueprintEvent)

void ASCTPlayerController_MatchBP_C::OnAcceptConsoleInvite()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTPlayerController_MatchBP_C", "OnAcceptConsoleInvite");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SCTPlayerController_MatchBP.SCTPlayerController_MatchBP_C.OwningClockSync
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   ServerTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASCTPlayerController_MatchBP_C::OwningClockSync(float ServerTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTPlayerController_MatchBP_C", "OwningClockSync");

	Params::SCTPlayerController_MatchBP_C_OwningClockSync Parms{};

	Parms.ServerTime = ServerTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SCTPlayerController_MatchBP.SCTPlayerController_MatchBP_C.StartServerClockSync
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ASCTPlayerController_MatchBP_C::StartServerClockSync()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTPlayerController_MatchBP_C", "StartServerClockSync");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SCTPlayerController_MatchBP.SCTPlayerController_MatchBP_C.SetKarmaUI
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void ASCTPlayerController_MatchBP_C::SetKarmaUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTPlayerController_MatchBP_C", "SetKarmaUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SCTPlayerController_MatchBP.SCTPlayerController_MatchBP_C.ServerReroutePlayerLoaded
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ASCTPlayerController_MatchBP_C::ServerReroutePlayerLoaded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTPlayerController_MatchBP_C", "ServerReroutePlayerLoaded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SCTPlayerController_MatchBP.SCTPlayerController_MatchBP_C.ReroutePlayerLoaded
// (BlueprintCallable, BlueprintEvent)

void ASCTPlayerController_MatchBP_C::ReroutePlayerLoaded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTPlayerController_MatchBP_C", "ReroutePlayerLoaded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SCTPlayerController_MatchBP.SCTPlayerController_MatchBP_C.ReceiveUnPossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                            UnpossessedPawn                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASCTPlayerController_MatchBP_C::ReceiveUnPossess(class APawn* UnpossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTPlayerController_MatchBP_C", "ReceiveUnPossess");

	Params::SCTPlayerController_MatchBP_C_ReceiveUnPossess Parms{};

	Parms.UnpossessedPawn = UnpossessedPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SCTPlayerController_MatchBP.SCTPlayerController_MatchBP_C.BindAndWaitForClientPlayerStateSync
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ASCTPlayerController_MatchBP_C::BindAndWaitForClientPlayerStateSync()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTPlayerController_MatchBP_C", "BindAndWaitForClientPlayerStateSync");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SCTPlayerController_MatchBP.SCTPlayerController_MatchBP_C.PlayerStateReceivedOnClient
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASCTPlayerState*                  PlayerState_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASCTPlayerController_MatchBP_C::PlayerStateReceivedOnClient(class ASCTPlayerState* PlayerState_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTPlayerController_MatchBP_C", "PlayerStateReceivedOnClient");

	Params::SCTPlayerController_MatchBP_C_PlayerStateReceivedOnClient Parms{};

	Parms.PlayerState_0 = PlayerState_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SCTPlayerController_MatchBP.SCTPlayerController_MatchBP_C.K2_OnGrantedPassengerLogInformation
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPassengerLogInformation         LogInformation                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ASCTPlayerController_MatchBP_C::K2_OnGrantedPassengerLogInformation(const struct FPassengerLogInformation& LogInformation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTPlayerController_MatchBP_C", "K2_OnGrantedPassengerLogInformation");

	Params::SCTPlayerController_MatchBP_C_K2_OnGrantedPassengerLogInformation Parms{};

	Parms.LogInformation = std::move(LogInformation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SCTPlayerController_MatchBP.SCTPlayerController_MatchBP_C.K2_PreClientTravel
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                           PendingURL                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ETravelType                             TravelType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsSeamlessTravel                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASCTPlayerController_MatchBP_C::K2_PreClientTravel(const class FString& PendingURL, ETravelType TravelType, bool bIsSeamlessTravel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTPlayerController_MatchBP_C", "K2_PreClientTravel");

	Params::SCTPlayerController_MatchBP_C_K2_PreClientTravel Parms{};

	Parms.PendingURL = std::move(PendingURL);
	Parms.TravelType = TravelType;
	Parms.bIsSeamlessTravel = bIsSeamlessTravel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SCTPlayerController_MatchBP.SCTPlayerController_MatchBP_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                            PossessedPawn                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASCTPlayerController_MatchBP_C::ReceivePossess(class APawn* PossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTPlayerController_MatchBP_C", "ReceivePossess");

	Params::SCTPlayerController_MatchBP_C_ReceivePossess Parms{};

	Parms.PossessedPawn = PossessedPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SCTPlayerController_MatchBP.SCTPlayerController_MatchBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASCTPlayerController_MatchBP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTPlayerController_MatchBP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SCTPlayerController_MatchBP.SCTPlayerController_MatchBP_C.InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ASCTPlayerController_MatchBP_C::InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTPlayerController_MatchBP_C", "InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_0");

	Params::SCTPlayerController_MatchBP_C_InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_0 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SCTPlayerController_MatchBP.SCTPlayerController_MatchBP_C.InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ASCTPlayerController_MatchBP_C::InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTPlayerController_MatchBP_C", "InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_1");

	Params::SCTPlayerController_MatchBP_C_InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_1 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SCTPlayerController_MatchBP.SCTPlayerController_MatchBP_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ASCTPlayerController_MatchBP_C::InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTPlayerController_MatchBP_C", "InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_2");

	Params::SCTPlayerController_MatchBP_C_InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_2 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SCTPlayerController_MatchBP.SCTPlayerController_MatchBP_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ASCTPlayerController_MatchBP_C::InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTPlayerController_MatchBP_C", "InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_3");

	Params::SCTPlayerController_MatchBP_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_3 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SCTPlayerController_MatchBP.SCTPlayerController_MatchBP_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ASCTPlayerController_MatchBP_C::InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTPlayerController_MatchBP_C", "InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_4");

	Params::SCTPlayerController_MatchBP_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_4 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SCTPlayerController_MatchBP.SCTPlayerController_MatchBP_C.InpActEvt_EscapeAMenu_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ASCTPlayerController_MatchBP_C::InpActEvt_EscapeAMenu_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTPlayerController_MatchBP_C", "InpActEvt_EscapeAMenu_K2Node_InputActionEvent_0");

	Params::SCTPlayerController_MatchBP_C_InpActEvt_EscapeAMenu_K2Node_InputActionEvent_0 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SCTPlayerController_MatchBP.SCTPlayerController_MatchBP_C.InpActEvt_ToggleAllChat_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ASCTPlayerController_MatchBP_C::InpActEvt_ToggleAllChat_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTPlayerController_MatchBP_C", "InpActEvt_ToggleAllChat_K2Node_InputActionEvent_1");

	Params::SCTPlayerController_MatchBP_C_InpActEvt_ToggleAllChat_K2Node_InputActionEvent_1 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SCTPlayerController_MatchBP.SCTPlayerController_MatchBP_C.InpActEvt_TogglePersonoidChat_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ASCTPlayerController_MatchBP_C::InpActEvt_TogglePersonoidChat_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTPlayerController_MatchBP_C", "InpActEvt_TogglePersonoidChat_K2Node_InputActionEvent_2");

	Params::SCTPlayerController_MatchBP_C_InpActEvt_TogglePersonoidChat_K2Node_InputActionEvent_2 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SCTPlayerController_MatchBP.SCTPlayerController_MatchBP_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ASCTPlayerController_MatchBP_C::InpActEvt_AnyKey_K2Node_InputKeyEvent_5(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTPlayerController_MatchBP_C", "InpActEvt_AnyKey_K2Node_InputKeyEvent_5");

	Params::SCTPlayerController_MatchBP_C_InpActEvt_AnyKey_K2Node_InputKeyEvent_5 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SCTPlayerController_MatchBP.SCTPlayerController_MatchBP_C.OnSuccess_BF79541D42FA83C06A3992A2DDDDA7C0
// (BlueprintCallable, BlueprintEvent)

void ASCTPlayerController_MatchBP_C::OnSuccess_BF79541D42FA83C06A3992A2DDDDA7C0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTPlayerController_MatchBP_C", "OnSuccess_BF79541D42FA83C06A3992A2DDDDA7C0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SCTPlayerController_MatchBP.SCTPlayerController_MatchBP_C.OnFail_BF79541D42FA83C06A3992A2DDDDA7C0
// (BlueprintCallable, BlueprintEvent)

void ASCTPlayerController_MatchBP_C::OnFail_BF79541D42FA83C06A3992A2DDDDA7C0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTPlayerController_MatchBP_C", "OnFail_BF79541D42FA83C06A3992A2DDDDA7C0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SCTPlayerController_MatchBP.SCTPlayerController_MatchBP_C.OnSuccess_BF79541D42FA83C06A3992A20EBCD041
// (BlueprintCallable, BlueprintEvent)

void ASCTPlayerController_MatchBP_C::OnSuccess_BF79541D42FA83C06A3992A20EBCD041()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTPlayerController_MatchBP_C", "OnSuccess_BF79541D42FA83C06A3992A20EBCD041");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SCTPlayerController_MatchBP.SCTPlayerController_MatchBP_C.OnFail_BF79541D42FA83C06A3992A20EBCD041
// (BlueprintCallable, BlueprintEvent)

void ASCTPlayerController_MatchBP_C::OnFail_BF79541D42FA83C06A3992A20EBCD041()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTPlayerController_MatchBP_C", "OnFail_BF79541D42FA83C06A3992A20EBCD041");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SCTPlayerController_MatchBP.SCTPlayerController_MatchBP_C.OnSuccess_AD49ED624DB5C71E7B2FE5B562F55E77
// (BlueprintCallable, BlueprintEvent)

void ASCTPlayerController_MatchBP_C::OnSuccess_AD49ED624DB5C71E7B2FE5B562F55E77()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTPlayerController_MatchBP_C", "OnSuccess_AD49ED624DB5C71E7B2FE5B562F55E77");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SCTPlayerController_MatchBP.SCTPlayerController_MatchBP_C.OnFail_AD49ED624DB5C71E7B2FE5B562F55E77
// (BlueprintCallable, BlueprintEvent)

void ASCTPlayerController_MatchBP_C::OnFail_AD49ED624DB5C71E7B2FE5B562F55E77()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTPlayerController_MatchBP_C", "OnFail_AD49ED624DB5C71E7B2FE5B562F55E77");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SCTPlayerController_MatchBP.SCTPlayerController_MatchBP_C.OnSuccess_AD49ED624DB5C71E7B2FE5B5CDC208F8
// (BlueprintCallable, BlueprintEvent)

void ASCTPlayerController_MatchBP_C::OnSuccess_AD49ED624DB5C71E7B2FE5B5CDC208F8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTPlayerController_MatchBP_C", "OnSuccess_AD49ED624DB5C71E7B2FE5B5CDC208F8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SCTPlayerController_MatchBP.SCTPlayerController_MatchBP_C.OnFail_AD49ED624DB5C71E7B2FE5B5CDC208F8
// (BlueprintCallable, BlueprintEvent)

void ASCTPlayerController_MatchBP_C::OnFail_AD49ED624DB5C71E7B2FE5B5CDC208F8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTPlayerController_MatchBP_C", "OnFail_AD49ED624DB5C71E7B2FE5B5CDC208F8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SCTPlayerController_MatchBP.SCTPlayerController_MatchBP_C.OnSuccess_AD49ED624DB5C71E7B2FE5B533ED3CDD
// (BlueprintCallable, BlueprintEvent)

void ASCTPlayerController_MatchBP_C::OnSuccess_AD49ED624DB5C71E7B2FE5B533ED3CDD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTPlayerController_MatchBP_C", "OnSuccess_AD49ED624DB5C71E7B2FE5B533ED3CDD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SCTPlayerController_MatchBP.SCTPlayerController_MatchBP_C.OnFail_AD49ED624DB5C71E7B2FE5B533ED3CDD
// (BlueprintCallable, BlueprintEvent)

void ASCTPlayerController_MatchBP_C::OnFail_AD49ED624DB5C71E7B2FE5B533ED3CDD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTPlayerController_MatchBP_C", "OnFail_AD49ED624DB5C71E7B2FE5B533ED3CDD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SCTPlayerController_MatchBP.SCTPlayerController_MatchBP_C.SetGameInstanceReference
// (Public, BlueprintCallable, BlueprintEvent)

void ASCTPlayerController_MatchBP_C::SetGameInstanceReference()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTPlayerController_MatchBP_C", "SetGameInstanceReference");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SCTPlayerController_MatchBP.SCTPlayerController_MatchBP_C.OnRep_bIsPlayerStateAvailableOnClient
// (BlueprintCallable, BlueprintEvent)

void ASCTPlayerController_MatchBP_C::OnRep_bIsPlayerStateAvailableOnClient()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTPlayerController_MatchBP_C", "OnRep_bIsPlayerStateAvailableOnClient");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SCTPlayerController_MatchBP.SCTPlayerController_MatchBP_C.Add Karma System Widget To Ingame UI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASCTPlayerController_MatchBP_C::Add_Karma_System_Widget_To_Ingame_UI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTPlayerController_MatchBP_C", "Add Karma System Widget To Ingame UI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SCTPlayerController_MatchBP.SCTPlayerController_MatchBP_C.CalculateSyncedDelay
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   ServerTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ClockOffset                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASCTPlayerController_MatchBP_C::CalculateSyncedDelay(float ServerTime, float* ClockOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTPlayerController_MatchBP_C", "CalculateSyncedDelay");

	Params::SCTPlayerController_MatchBP_C_CalculateSyncedDelay Parms{};

	Parms.ServerTime = ServerTime;

	UObject::ProcessEvent(Func, &Parms);

	if (ClockOffset != nullptr)
		*ClockOffset = Parms.ClockOffset;
}


// Function SCTPlayerController_MatchBP.SCTPlayerController_MatchBP_C.SyncNetworkClock
// (Public, BlueprintCallable, BlueprintEvent)

void ASCTPlayerController_MatchBP_C::SyncNetworkClock()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTPlayerController_MatchBP_C", "SyncNetworkClock");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SCTPlayerController_MatchBP.SCTPlayerController_MatchBP_C.GetJoystickDirection
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EJoystickTypes                          Stick                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        StickInput                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASCTPlayerController_MatchBP_C::GetJoystickDirection(EJoystickTypes Stick, struct FVector2D* StickInput)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTPlayerController_MatchBP_C", "GetJoystickDirection");

	Params::SCTPlayerController_MatchBP_C_GetJoystickDirection Parms{};

	Parms.Stick = Stick;

	UObject::ProcessEvent(Func, &Parms);

	if (StickInput != nullptr)
		*StickInput = std::move(Parms.StickInput);
}

}

