#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CameraWallSCTBP

#include "Basic.hpp"

#include "CameraWallSCTBP_classes.hpp"
#include "CameraWallSCTBP_parameters.hpp"


namespace SDK
{

// Function CameraWallSCTBP.CameraWallSCTBP_C.ExecuteUbergraph_CameraWallSCTBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACameraWallSCTBP_C::ExecuteUbergraph_CameraWallSCTBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraWallSCTBP_C", "ExecuteUbergraph_CameraWallSCTBP");

	Params::CameraWallSCTBP_C_ExecuteUbergraph_CameraWallSCTBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CameraWallSCTBP.CameraWallSCTBP_C.Audio Switch Camera
// (BlueprintCallable, BlueprintEvent)

void ACameraWallSCTBP_C::Audio_Switch_Camera()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraWallSCTBP_C", "Audio Switch Camera");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CameraWallSCTBP.CameraWallSCTBP_C.TakePictureReroute
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       CaptureTargetTransform                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)

void ACameraWallSCTBP_C::TakePictureReroute(const struct FTransform& CaptureTargetTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraWallSCTBP_C", "TakePictureReroute");

	Params::CameraWallSCTBP_C_TakePictureReroute Parms{};

	Parms.CaptureTargetTransform = std::move(CaptureTargetTransform);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CameraWallSCTBP.CameraWallSCTBP_C.EndFullScreenMulticast
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                       Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACameraWallSCTBP_C::EndFullScreenMulticast(class ACharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraWallSCTBP_C", "EndFullScreenMulticast");

	Params::CameraWallSCTBP_C_EndFullScreenMulticast Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CameraWallSCTBP.CameraWallSCTBP_C.EndFullScreenReroute
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                       Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACameraWallSCTBP_C::EndFullScreenReroute(class ACharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraWallSCTBP_C", "EndFullScreenReroute");

	Params::CameraWallSCTBP_C_EndFullScreenReroute Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CameraWallSCTBP.CameraWallSCTBP_C.StartFullScreenMulticast
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                       Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACameraWallSCTBP_C::StartFullScreenMulticast(class ACharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraWallSCTBP_C", "StartFullScreenMulticast");

	Params::CameraWallSCTBP_C_StartFullScreenMulticast Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CameraWallSCTBP.CameraWallSCTBP_C.StartFullScreenServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                       InteractingCharacter                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACameraWallSCTBP_C::StartFullScreenServer(class ACharacter* InteractingCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraWallSCTBP_C", "StartFullScreenServer");

	Params::CameraWallSCTBP_C_StartFullScreenServer Parms{};

	Parms.InteractingCharacter = InteractingCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CameraWallSCTBP.CameraWallSCTBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACameraWallSCTBP_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraWallSCTBP_C", "ReceiveTick");

	Params::CameraWallSCTBP_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CameraWallSCTBP.CameraWallSCTBP_C.BndEvt__Interaction_K2Node_ComponentBoundEvent_2_InteractionDelegate__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// struct FInteractionPayload              Payload                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)

void ACameraWallSCTBP_C::BndEvt__Interaction_K2Node_ComponentBoundEvent_2_InteractionDelegate__DelegateSignature(const struct FInteractionPayload& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraWallSCTBP_C", "BndEvt__Interaction_K2Node_ComponentBoundEvent_2_InteractionDelegate__DelegateSignature");

	Params::CameraWallSCTBP_C_BndEvt__Interaction_K2Node_ComponentBoundEvent_2_InteractionDelegate__DelegateSignature Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CameraWallSCTBP.CameraWallSCTBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ACameraWallSCTBP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraWallSCTBP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CameraWallSCTBP.CameraWallSCTBP_C.BndEvt__RenderCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACameraWallSCTBP_C::BndEvt__RenderCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraWallSCTBP_C", "BndEvt__RenderCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	Params::CameraWallSCTBP_C_BndEvt__RenderCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CameraWallSCTBP.CameraWallSCTBP_C.BndEvt__RenderCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ACameraWallSCTBP_C::BndEvt__RenderCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraWallSCTBP_C", "BndEvt__RenderCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::CameraWallSCTBP_C_BndEvt__RenderCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CameraWallSCTBP.CameraWallSCTBP_C.StopLocalRender
// (BlueprintCallable, BlueprintEvent)

void ACameraWallSCTBP_C::StopLocalRender()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraWallSCTBP_C", "StopLocalRender");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CameraWallSCTBP.CameraWallSCTBP_C.StartLocalRender
// (BlueprintCallable, BlueprintEvent)

void ACameraWallSCTBP_C::StartLocalRender()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraWallSCTBP_C", "StartLocalRender");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CameraWallSCTBP.CameraWallSCTBP_C.SwitchCameraServer
// (BlueprintCallable, BlueprintEvent)

void ACameraWallSCTBP_C::SwitchCameraServer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraWallSCTBP_C", "SwitchCameraServer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CameraWallSCTBP.CameraWallSCTBP_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ACameraWallSCTBP_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraWallSCTBP_C", "InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_0");

	Params::CameraWallSCTBP_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_0 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CameraWallSCTBP.CameraWallSCTBP_C.InpActEvt_F_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ACameraWallSCTBP_C::InpActEvt_F_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraWallSCTBP_C", "InpActEvt_F_K2Node_InputKeyEvent_1");

	Params::CameraWallSCTBP_C_InpActEvt_F_K2Node_InputKeyEvent_1 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CameraWallSCTBP.CameraWallSCTBP_C.InpActEvt_A_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ACameraWallSCTBP_C::InpActEvt_A_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraWallSCTBP_C", "InpActEvt_A_K2Node_InputKeyEvent_2");

	Params::CameraWallSCTBP_C_InpActEvt_A_K2Node_InputKeyEvent_2 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CameraWallSCTBP.CameraWallSCTBP_C.InpActEvt_D_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ACameraWallSCTBP_C::InpActEvt_D_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraWallSCTBP_C", "InpActEvt_D_K2Node_InputKeyEvent_3");

	Params::CameraWallSCTBP_C_InpActEvt_D_K2Node_InputKeyEvent_3 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CameraWallSCTBP.CameraWallSCTBP_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ACameraWallSCTBP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraWallSCTBP_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CameraWallSCTBP.CameraWallSCTBP_C.OnRep_ActiveCamera
// (BlueprintCallable, BlueprintEvent)

void ACameraWallSCTBP_C::OnRep_ActiveCamera()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraWallSCTBP_C", "OnRep_ActiveCamera");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CameraWallSCTBP.CameraWallSCTBP_C.SwitchCamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    SetCameraActive                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACameraWallSCTBP_C::SwitchCamera(bool SetCameraActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraWallSCTBP_C", "SwitchCamera");

	Params::CameraWallSCTBP_C_SwitchCamera Parms{};

	Parms.SetCameraActive = SetCameraActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CameraWallSCTBP.CameraWallSCTBP_C.UpdateViewTarget
// (Public, BlueprintCallable, BlueprintEvent)

void ACameraWallSCTBP_C::UpdateViewTarget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraWallSCTBP_C", "UpdateViewTarget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CameraWallSCTBP.CameraWallSCTBP_C.UpdateViewIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Increment                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACameraWallSCTBP_C::UpdateViewIndex(int32 Increment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraWallSCTBP_C", "UpdateViewIndex");

	Params::CameraWallSCTBP_C_UpdateViewIndex Parms{};

	Parms.Increment = Increment;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CameraWallSCTBP.CameraWallSCTBP_C.LocalEndFullScreen
// (Public, BlueprintCallable, BlueprintEvent)

void ACameraWallSCTBP_C::LocalEndFullScreen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraWallSCTBP_C", "LocalEndFullScreen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CameraWallSCTBP.CameraWallSCTBP_C.ServerEndFullScreen
// (Public, BlueprintCallable, BlueprintEvent)

void ACameraWallSCTBP_C::ServerEndFullScreen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraWallSCTBP_C", "ServerEndFullScreen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CameraWallSCTBP.CameraWallSCTBP_C.ServerTakePicture
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ACameraWallSCTBP_C::ServerTakePicture()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraWallSCTBP_C", "ServerTakePicture");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CameraWallSCTBP.CameraWallSCTBP_C.OnRep_PictureTransform
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ACameraWallSCTBP_C::OnRep_PictureTransform()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraWallSCTBP_C", "OnRep_PictureTransform");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CameraWallSCTBP.CameraWallSCTBP_C.SetActiveCamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Active                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACameraWallSCTBP_C::SetActiveCamera(uint8 Index_0, bool Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraWallSCTBP_C", "SetActiveCamera");

	Params::CameraWallSCTBP_C_SetActiveCamera Parms{};

	Parms.Index_0 = Index_0;
	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CameraWallSCTBP.CameraWallSCTBP_C.CanShowDot
// (Public, BlueprintCallable, BlueprintEvent)

void ACameraWallSCTBP_C::CanShowDot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraWallSCTBP_C", "CanShowDot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CameraWallSCTBP.CameraWallSCTBP_C.CanHideDot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ACameraWallSCTBP_C::CanHideDot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraWallSCTBP_C", "CanHideDot");

	UObject::ProcessEvent(Func, nullptr);
}

}
