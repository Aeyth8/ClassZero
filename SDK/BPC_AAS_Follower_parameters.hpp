#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPC_AAS_Follower

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BPC_AAS_Follower.BPC_AAS_Follower_C.OnDidUpdate__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BPC_AAS_Follower_C_OnDidUpdate__DelegateSignature final
{
public:
	class UBPC_AAS_Follower_C*                    Follower;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPC_AAS_Follower_C_OnDidUpdate__DelegateSignature) == 0x000008, "Wrong alignment on BPC_AAS_Follower_C_OnDidUpdate__DelegateSignature");
static_assert(sizeof(BPC_AAS_Follower_C_OnDidUpdate__DelegateSignature) == 0x000008, "Wrong size on BPC_AAS_Follower_C_OnDidUpdate__DelegateSignature");
static_assert(offsetof(BPC_AAS_Follower_C_OnDidUpdate__DelegateSignature, Follower) == 0x000000, "Member 'BPC_AAS_Follower_C_OnDidUpdate__DelegateSignature::Follower' has a wrong offset!");

// Function BPC_AAS_Follower.BPC_AAS_Follower_C.ExecuteUbergraph_BPC_AAS_Follower
// 0x00D0 (0x00D0 - 0x0000)
struct BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_AAS_V2Base_C*>               CallFunc_Get_All_AAS_System_Actors_System_Actors;  // 0x0018(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E[0x2];                                       // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_AAS_V2Base_C*                       CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0050(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x005C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_2;                   // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x0070(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x007C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_AAS_V2Base_C*>               CallFunc_Get_All_AAS_System_Actors_System_Actors_1; // 0x0088(0x0010)(ReferenceParm)
	float                                         CallFunc_VSize_ReturnValue;                        // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C[0x4];                                       // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_AAS_V2Base_C*                       CallFunc_Array_Get_Item_1;                         // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A9[0x3];                                       // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B1[0x3];                                       // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x00B4(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_C4[0x4];                                       // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x00C8(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower) == 0x000008, "Wrong alignment on BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower");
static_assert(sizeof(BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower) == 0x0000D0, "Wrong size on BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower");
static_assert(offsetof(BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower, EntryPoint) == 0x000000, "Member 'BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower::EntryPoint' has a wrong offset!");
static_assert(offsetof(BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower, Temp_int_Loop_Counter_Variable_1) == 0x00000C, "Member 'BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower, CallFunc_Add_IntInt_ReturnValue_1) == 0x000010, "Member 'BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower, Temp_int_Array_Index_Variable) == 0x000014, "Member 'BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower, CallFunc_Get_All_AAS_System_Actors_System_Actors) == 0x000018, "Member 'BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower::CallFunc_Get_All_AAS_System_Actors_System_Actors' has a wrong offset!");
static_assert(offsetof(BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower, K2Node_Event_EndPlayReason) == 0x00002C, "Member 'BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower, CallFunc_Less_IntInt_ReturnValue) == 0x00002D, "Member 'BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower, Temp_int_Array_Index_Variable_1) == 0x000030, "Member 'BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower, CallFunc_Array_Get_Item) == 0x000038, "Member 'BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower, CallFunc_GetOwner_ReturnValue) == 0x000040, "Member 'BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower, CallFunc_GetOwner_ReturnValue_1) == 0x000048, "Member 'BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000050, "Member 'BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x00005C, "Member 'BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower, CallFunc_GetOwner_ReturnValue_2) == 0x000068, "Member 'BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower::CallFunc_GetOwner_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x000070, "Member 'BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower, CallFunc_Subtract_VectorVector_ReturnValue) == 0x00007C, "Member 'BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower, CallFunc_Get_All_AAS_System_Actors_System_Actors_1) == 0x000088, "Member 'BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower::CallFunc_Get_All_AAS_System_Actors_System_Actors_1' has a wrong offset!");
static_assert(offsetof(BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower, CallFunc_VSize_ReturnValue) == 0x000098, "Member 'BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower, CallFunc_Array_Get_Item_1) == 0x0000A0, "Member 'BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x0000A8, "Member 'BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower, CallFunc_Array_Length_ReturnValue_1) == 0x0000AC, "Member 'BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000B0, "Member 'BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower, K2Node_CreateDelegate_OutputDelegate) == 0x0000B4, "Member 'BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x0000C8, "Member 'BPC_AAS_Follower_C_ExecuteUbergraph_BPC_AAS_Follower::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");

// Function BPC_AAS_Follower.BPC_AAS_Follower_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BPC_AAS_Follower_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPC_AAS_Follower_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BPC_AAS_Follower_C_ReceiveEndPlay");
static_assert(sizeof(BPC_AAS_Follower_C_ReceiveEndPlay) == 0x000001, "Wrong size on BPC_AAS_Follower_C_ReceiveEndPlay");
static_assert(offsetof(BPC_AAS_Follower_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BPC_AAS_Follower_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BPC_AAS_Follower.BPC_AAS_Follower_C.GetLocation
// 0x000C (0x000C - 0x0000)
struct BPC_AAS_Follower_C_GetLocation final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPC_AAS_Follower_C_GetLocation) == 0x000004, "Wrong alignment on BPC_AAS_Follower_C_GetLocation");
static_assert(sizeof(BPC_AAS_Follower_C_GetLocation) == 0x00000C, "Wrong size on BPC_AAS_Follower_C_GetLocation");
static_assert(offsetof(BPC_AAS_Follower_C_GetLocation, Location) == 0x000000, "Member 'BPC_AAS_Follower_C_GetLocation::Location' has a wrong offset!");

}

