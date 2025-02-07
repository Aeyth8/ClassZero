#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VruumbaProjectile

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AkAudio_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function VruumbaProjectile.VruumbaProjectile_C.ExecuteUbergraph_VruumbaProjectile
// 0x0290 (0x0290 - 0x0000)
struct VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_ComponentBoundEvent_ImpactResult;           // 0x0010(0x008C)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x009D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E[0x2];                                       // 0x009E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x00A8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x00B4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x00C0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x00CC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0100(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x010C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_121[0x7];                                      // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_CustomEvent_Actor;                          // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActorComponent*                        K2Node_CustomEvent_Component;                      // 0x0130(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x013C(0x0010)(ConstParm, ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAkExternalSourceInfo>          Temp_struct_Variable;                              // 0x0150(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_PostAkEvent_ReturnValue;                  // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_164[0x4];                                      // 0x0164(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue_1;               // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_171[0x7];                                      // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHumanoidCharacter*                     K2Node_DynamicCast_AsHumanoid_Character;           // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_181[0x3];                                      // 0x0181(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0188(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x01A0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x01AC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EObjectTypeQuery>                      K2Node_MakeArray_Array;                            // 0x01B8(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x01C8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x01D4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue_2;               // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E1[0x7];                                      // 0x01E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             K2Node_DynamicCast_AsCharacter;                    // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F9[0x7];                                      // 0x01F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AVruumbaSCTBP_C*                        K2Node_DynamicCast_AsVruumba_SCTBP;                // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_209[0x7];                                      // 0x0209(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_2;                   // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_MakeArray_Array_1;                          // 0x0218(0x0010)(ConstParm, ReferenceParm)
	TArray<class AActor*>                         CallFunc_SphereOverlapActors_OutActors;            // 0x0228(0x0010)(ReferenceParm)
	bool                                          CallFunc_SphereOverlapActors_ReturnValue;          // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_239[0x7];                                      // 0x0239(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AHatPickup_C*>                   CallFunc_GetAllActorsOfClass_OutActors;            // 0x0240(0x0010)(ReferenceParm)
	class AHatPickup_C*                           CallFunc_Array_Get_Item;                           // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHatPickup_C*                           CallFunc_Array_Get_Item_1;                         // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Check_for_new_flagholder_NewHolder;       // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_261[0x3];                                      // 0x0261(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0264(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_269[0x7];                                      // 0x0269(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item_2;                         // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARoombaCharacter*                       K2Node_DynamicCast_AsRoomba_Character;             // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0280(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_281[0x3];                                      // 0x0281(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0284(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0289(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile) == 0x000008, "Wrong alignment on VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile");
static_assert(sizeof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile) == 0x000290, "Wrong size on VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, EntryPoint) == 0x000000, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::EntryPoint' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, Temp_int_Array_Index_Variable) == 0x000004, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, K2Node_ComponentBoundEvent_ImpactResult) == 0x000010, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::K2Node_ComponentBoundEvent_ImpactResult' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, CallFunc_BreakHitResult_bBlockingHit) == 0x00009C, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, CallFunc_BreakHitResult_bInitialOverlap) == 0x00009D, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, CallFunc_BreakHitResult_Time) == 0x0000A0, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, CallFunc_BreakHitResult_Distance) == 0x0000A4, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, CallFunc_BreakHitResult_Location) == 0x0000A8, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, CallFunc_BreakHitResult_ImpactPoint) == 0x0000B4, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, CallFunc_BreakHitResult_Normal) == 0x0000C0, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, CallFunc_BreakHitResult_ImpactNormal) == 0x0000CC, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, CallFunc_BreakHitResult_PhysMat) == 0x0000D8, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, CallFunc_BreakHitResult_HitActor) == 0x0000E0, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, CallFunc_BreakHitResult_HitComponent) == 0x0000E8, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, CallFunc_BreakHitResult_HitBoneName) == 0x0000F0, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, CallFunc_BreakHitResult_HitItem) == 0x0000F8, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, CallFunc_BreakHitResult_FaceIndex) == 0x0000FC, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, CallFunc_BreakHitResult_TraceStart) == 0x000100, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, CallFunc_BreakHitResult_TraceEnd) == 0x00010C, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, CallFunc_GetOwner_ReturnValue) == 0x000118, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, CallFunc_HasAuthority_ReturnValue) == 0x000120, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, K2Node_CustomEvent_Actor) == 0x000128, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::K2Node_CustomEvent_Actor' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, K2Node_CustomEvent_Component) == 0x000130, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::K2Node_CustomEvent_Component' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, Temp_int_Variable) == 0x000138, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, Temp_delegate_Variable) == 0x00013C, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, CallFunc_Add_IntInt_ReturnValue_1) == 0x00014C, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, Temp_struct_Variable) == 0x000150, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, CallFunc_PostAkEvent_ReturnValue) == 0x000160, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::CallFunc_PostAkEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000168, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, CallFunc_HasAuthority_ReturnValue_1) == 0x000170, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::CallFunc_HasAuthority_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, K2Node_DynamicCast_AsHumanoid_Character) == 0x000178, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::K2Node_DynamicCast_AsHumanoid_Character' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, K2Node_DynamicCast_bSuccess) == 0x000180, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, K2Node_Event_DeltaSeconds) == 0x000184, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, CallFunc_GetActorForwardVector_ReturnValue) == 0x000188, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, CallFunc_BreakVector_X) == 0x000194, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, CallFunc_BreakVector_Y) == 0x000198, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, CallFunc_BreakVector_Z) == 0x00019C, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0001A0, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, CallFunc_MakeVector_ReturnValue) == 0x0001AC, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, K2Node_MakeArray_Array) == 0x0001B8, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, CallFunc_Normal_ReturnValue) == 0x0001C8, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0001D4, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, CallFunc_HasAuthority_ReturnValue_2) == 0x0001E0, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::CallFunc_HasAuthority_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, CallFunc_GetOwner_ReturnValue_1) == 0x0001E8, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, K2Node_DynamicCast_AsCharacter) == 0x0001F0, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::K2Node_DynamicCast_AsCharacter' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, K2Node_DynamicCast_bSuccess_1) == 0x0001F8, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, K2Node_DynamicCast_AsVruumba_SCTBP) == 0x000200, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::K2Node_DynamicCast_AsVruumba_SCTBP' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, K2Node_DynamicCast_bSuccess_2) == 0x000208, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, CallFunc_GetOwner_ReturnValue_2) == 0x000210, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::CallFunc_GetOwner_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, K2Node_MakeArray_Array_1) == 0x000218, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, CallFunc_SphereOverlapActors_OutActors) == 0x000228, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::CallFunc_SphereOverlapActors_OutActors' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, CallFunc_SphereOverlapActors_ReturnValue) == 0x000238, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::CallFunc_SphereOverlapActors_ReturnValue' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, CallFunc_GetAllActorsOfClass_OutActors) == 0x000240, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, CallFunc_Array_Get_Item) == 0x000250, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, CallFunc_Array_Get_Item_1) == 0x000258, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, CallFunc_Check_for_new_flagholder_NewHolder) == 0x000260, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::CallFunc_Check_for_new_flagholder_NewHolder' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, CallFunc_Array_Length_ReturnValue) == 0x000264, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, CallFunc_Less_IntInt_ReturnValue) == 0x000268, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, CallFunc_Array_Get_Item_2) == 0x000270, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, K2Node_DynamicCast_AsRoomba_Character) == 0x000278, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::K2Node_DynamicCast_AsRoomba_Character' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, K2Node_DynamicCast_bSuccess_3) == 0x000280, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, CallFunc_Array_Length_ReturnValue_1) == 0x000284, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, CallFunc_Less_IntInt_ReturnValue_1) == 0x000288, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000289, "Member 'VruumbaProjectile_C_ExecuteUbergraph_VruumbaProjectile::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function VruumbaProjectile.VruumbaProjectile_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct VruumbaProjectile_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(VruumbaProjectile_C_ReceiveTick) == 0x000004, "Wrong alignment on VruumbaProjectile_C_ReceiveTick");
static_assert(sizeof(VruumbaProjectile_C_ReceiveTick) == 0x000004, "Wrong size on VruumbaProjectile_C_ReceiveTick");
static_assert(offsetof(VruumbaProjectile_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'VruumbaProjectile_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function VruumbaProjectile.VruumbaProjectile_C.Audio Impact
// 0x0010 (0x0010 - 0x0000)
struct VruumbaProjectile_C_Audio_Impact final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActorComponent*                        Component;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(VruumbaProjectile_C_Audio_Impact) == 0x000008, "Wrong alignment on VruumbaProjectile_C_Audio_Impact");
static_assert(sizeof(VruumbaProjectile_C_Audio_Impact) == 0x000010, "Wrong size on VruumbaProjectile_C_Audio_Impact");
static_assert(offsetof(VruumbaProjectile_C_Audio_Impact, Actor) == 0x000000, "Member 'VruumbaProjectile_C_Audio_Impact::Actor' has a wrong offset!");
static_assert(offsetof(VruumbaProjectile_C_Audio_Impact, Component) == 0x000008, "Member 'VruumbaProjectile_C_Audio_Impact::Component' has a wrong offset!");

// Function VruumbaProjectile.VruumbaProjectile_C.BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature
// 0x008C (0x008C - 0x0000)
struct VruumbaProjectile_C_BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature final
{
public:
	struct FHitResult                             ImpactResult;                                      // 0x0000(0x008C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(VruumbaProjectile_C_BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature) == 0x000004, "Wrong alignment on VruumbaProjectile_C_BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature");
static_assert(sizeof(VruumbaProjectile_C_BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature) == 0x00008C, "Wrong size on VruumbaProjectile_C_BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature");
static_assert(offsetof(VruumbaProjectile_C_BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature, ImpactResult) == 0x000000, "Member 'VruumbaProjectile_C_BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature::ImpactResult' has a wrong offset!");

}

