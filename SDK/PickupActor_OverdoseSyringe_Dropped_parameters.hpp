#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PickupActor_OverdoseSyringe_Dropped

#include "Basic.hpp"


namespace SDK::Params
{

// Function PickupActor_OverdoseSyringe_Dropped.PickupActor_OverdoseSyringe_Dropped_C.ExecuteUbergraph_PickupActor_OverdoseSyringe_Dropped
// 0x0008 (0x0008 - 0x0000)
struct PickupActor_OverdoseSyringe_Dropped_C_ExecuteUbergraph_PickupActor_OverdoseSyringe_Dropped final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PickupActor_OverdoseSyringe_Dropped_C_ExecuteUbergraph_PickupActor_OverdoseSyringe_Dropped) == 0x000004, "Wrong alignment on PickupActor_OverdoseSyringe_Dropped_C_ExecuteUbergraph_PickupActor_OverdoseSyringe_Dropped");
static_assert(sizeof(PickupActor_OverdoseSyringe_Dropped_C_ExecuteUbergraph_PickupActor_OverdoseSyringe_Dropped) == 0x000008, "Wrong size on PickupActor_OverdoseSyringe_Dropped_C_ExecuteUbergraph_PickupActor_OverdoseSyringe_Dropped");
static_assert(offsetof(PickupActor_OverdoseSyringe_Dropped_C_ExecuteUbergraph_PickupActor_OverdoseSyringe_Dropped, EntryPoint) == 0x000000, "Member 'PickupActor_OverdoseSyringe_Dropped_C_ExecuteUbergraph_PickupActor_OverdoseSyringe_Dropped::EntryPoint' has a wrong offset!");
static_assert(offsetof(PickupActor_OverdoseSyringe_Dropped_C_ExecuteUbergraph_PickupActor_OverdoseSyringe_Dropped, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'PickupActor_OverdoseSyringe_Dropped_C_ExecuteUbergraph_PickupActor_OverdoseSyringe_Dropped::K2Node_Event_DeltaSeconds' has a wrong offset!");

// Function PickupActor_OverdoseSyringe_Dropped.PickupActor_OverdoseSyringe_Dropped_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct PickupActor_OverdoseSyringe_Dropped_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PickupActor_OverdoseSyringe_Dropped_C_ReceiveTick) == 0x000004, "Wrong alignment on PickupActor_OverdoseSyringe_Dropped_C_ReceiveTick");
static_assert(sizeof(PickupActor_OverdoseSyringe_Dropped_C_ReceiveTick) == 0x000004, "Wrong size on PickupActor_OverdoseSyringe_Dropped_C_ReceiveTick");
static_assert(offsetof(PickupActor_OverdoseSyringe_Dropped_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'PickupActor_OverdoseSyringe_Dropped_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function PickupActor_OverdoseSyringe_Dropped.PickupActor_OverdoseSyringe_Dropped_C.ShowPickUpWidget
// 0x0048 (0x0048 - 0x0000)
struct PickupActor_OverdoseSyringe_Dropped_C_ShowPickUpWidget final
{
public:
	class APlayerController*                      OwningPlayer;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPickupComponentBC_C*                   PickupComponent;                                   // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UContextStaticMeshComponent*            ContextStaticMesh_0;                               // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 InString;                                          // 0x0018(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UPickUpItemWI_C*                        CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0030(0x0018)()
};
static_assert(alignof(PickupActor_OverdoseSyringe_Dropped_C_ShowPickUpWidget) == 0x000008, "Wrong alignment on PickupActor_OverdoseSyringe_Dropped_C_ShowPickUpWidget");
static_assert(sizeof(PickupActor_OverdoseSyringe_Dropped_C_ShowPickUpWidget) == 0x000048, "Wrong size on PickupActor_OverdoseSyringe_Dropped_C_ShowPickUpWidget");
static_assert(offsetof(PickupActor_OverdoseSyringe_Dropped_C_ShowPickUpWidget, OwningPlayer) == 0x000000, "Member 'PickupActor_OverdoseSyringe_Dropped_C_ShowPickUpWidget::OwningPlayer' has a wrong offset!");
static_assert(offsetof(PickupActor_OverdoseSyringe_Dropped_C_ShowPickUpWidget, PickupComponent) == 0x000008, "Member 'PickupActor_OverdoseSyringe_Dropped_C_ShowPickUpWidget::PickupComponent' has a wrong offset!");
static_assert(offsetof(PickupActor_OverdoseSyringe_Dropped_C_ShowPickUpWidget, ContextStaticMesh_0) == 0x000010, "Member 'PickupActor_OverdoseSyringe_Dropped_C_ShowPickUpWidget::ContextStaticMesh_0' has a wrong offset!");
static_assert(offsetof(PickupActor_OverdoseSyringe_Dropped_C_ShowPickUpWidget, InString) == 0x000018, "Member 'PickupActor_OverdoseSyringe_Dropped_C_ShowPickUpWidget::InString' has a wrong offset!");
static_assert(offsetof(PickupActor_OverdoseSyringe_Dropped_C_ShowPickUpWidget, CallFunc_Create_ReturnValue) == 0x000028, "Member 'PickupActor_OverdoseSyringe_Dropped_C_ShowPickUpWidget::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(PickupActor_OverdoseSyringe_Dropped_C_ShowPickUpWidget, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'PickupActor_OverdoseSyringe_Dropped_C_ShowPickUpWidget::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

