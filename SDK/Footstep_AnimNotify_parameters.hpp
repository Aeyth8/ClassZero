#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Footstep_AnimNotify

#include "Basic.hpp"


namespace SDK::Params
{

// Function Footstep_AnimNotify.Footstep_AnimNotify_C.Received_Notify
// 0x0040 (0x0040 - 0x0000)
struct Footstep_AnimNotify_C_Received_Notify final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_GetCurrentActiveMontage_ReturnValue;      // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Montage_GetPlayRate_ReturnValue;          // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue;           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Footstep_AnimNotify_C_Received_Notify) == 0x000008, "Wrong alignment on Footstep_AnimNotify_C_Received_Notify");
static_assert(sizeof(Footstep_AnimNotify_C_Received_Notify) == 0x000040, "Wrong size on Footstep_AnimNotify_C_Received_Notify");
static_assert(offsetof(Footstep_AnimNotify_C_Received_Notify, MeshComp) == 0x000000, "Member 'Footstep_AnimNotify_C_Received_Notify::MeshComp' has a wrong offset!");
static_assert(offsetof(Footstep_AnimNotify_C_Received_Notify, Animation) == 0x000008, "Member 'Footstep_AnimNotify_C_Received_Notify::Animation' has a wrong offset!");
static_assert(offsetof(Footstep_AnimNotify_C_Received_Notify, ReturnValue) == 0x000010, "Member 'Footstep_AnimNotify_C_Received_Notify::ReturnValue' has a wrong offset!");
static_assert(offsetof(Footstep_AnimNotify_C_Received_Notify, CallFunc_IsVisible_ReturnValue) == 0x000011, "Member 'Footstep_AnimNotify_C_Received_Notify::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(Footstep_AnimNotify_C_Received_Notify, CallFunc_GetAnimInstance_ReturnValue) == 0x000018, "Member 'Footstep_AnimNotify_C_Received_Notify::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Footstep_AnimNotify_C_Received_Notify, CallFunc_GetCurrentActiveMontage_ReturnValue) == 0x000020, "Member 'Footstep_AnimNotify_C_Received_Notify::CallFunc_GetCurrentActiveMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(Footstep_AnimNotify_C_Received_Notify, CallFunc_Montage_GetPlayRate_ReturnValue) == 0x000028, "Member 'Footstep_AnimNotify_C_Received_Notify::CallFunc_Montage_GetPlayRate_ReturnValue' has a wrong offset!");
static_assert(offsetof(Footstep_AnimNotify_C_Received_Notify, CallFunc_Less_FloatFloat_ReturnValue) == 0x00002C, "Member 'Footstep_AnimNotify_C_Received_Notify::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Footstep_AnimNotify_C_Received_Notify, CallFunc_SpawnSoundAttached_ReturnValue) == 0x000030, "Member 'Footstep_AnimNotify_C_Received_Notify::CallFunc_SpawnSoundAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(Footstep_AnimNotify_C_Received_Notify, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'Footstep_AnimNotify_C_Received_Notify::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Footstep_AnimNotify_C_Received_Notify, CallFunc_Conv_ByteToInt_ReturnValue) == 0x00003C, "Member 'Footstep_AnimNotify_C_Received_Notify::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");

}
