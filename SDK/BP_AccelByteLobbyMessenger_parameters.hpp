#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AccelByteLobbyMessenger

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_AccelByteLobbyMessenger.BP_AccelByteLobbyMessenger_C.OnPositionMessenger__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct BP_AccelByteLobbyMessenger_C_OnPositionMessenger__DelegateSignature final
{
public:
	float                                         TargetY;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AccelByteLobbyMessenger_C_OnPositionMessenger__DelegateSignature) == 0x000004, "Wrong alignment on BP_AccelByteLobbyMessenger_C_OnPositionMessenger__DelegateSignature");
static_assert(sizeof(BP_AccelByteLobbyMessenger_C_OnPositionMessenger__DelegateSignature) == 0x000004, "Wrong size on BP_AccelByteLobbyMessenger_C_OnPositionMessenger__DelegateSignature");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_OnPositionMessenger__DelegateSignature, TargetY) == 0x000000, "Member 'BP_AccelByteLobbyMessenger_C_OnPositionMessenger__DelegateSignature::TargetY' has a wrong offset!");

// Function BP_AccelByteLobbyMessenger.BP_AccelByteLobbyMessenger_C.ExecuteUbergraph_BP_AccelByteLobbyMessenger
// 0x01A0 (0x01A0 - 0x0000)
struct BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetWorldDeltaSeconds_ReturnValue_1;       // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Distance2D_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_AccelByteLobbyMessengerEntry_C*     CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_2;               // 0x0034(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Vector2DInterpTo_ReturnValue;             // 0x003C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_3;               // 0x0044(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0050(0x0018)()
	float                                         CallFunc_Distance2D_ReturnValue_1;                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue_1;            // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_82[0x6];                                       // 0x0082(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetUserDisplayName_ReturnValue;           // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_AccelByteLobbyMessengerEntry_C*     CallFunc_Create_ReturnValue_1;                     // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_1;                   // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetUserDisplayName_ReturnValue_1;         // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_4;               // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Vector2DInterpTo_ReturnValue_1;           // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   K2Node_ComponentBoundEvent_Text;                   // 0x0100(0x0018)(ConstParm)
	ETextCommit                                   K2Node_ComponentBoundEvent_CommitMethod;           // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x011A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x011B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x011C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x012C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_12D[0x3];                                      // 0x012D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_135[0x3];                                      // 0x0135(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_5;               // 0x013C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_144[0x4];                                      // 0x0144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0148(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0158(0x0010)(ZeroConstructor, NoDestructor)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0168(0x0018)()
	float                                         CallFunc_GetWorldDeltaSeconds_ReturnValue_2;       // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_184[0x4];                                      // 0x0184(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0188(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetWorldDeltaSeconds_ReturnValue_3;       // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_194[0x4];                                      // 0x0194(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x0198(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger) == 0x000008, "Wrong alignment on BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger");
static_assert(sizeof(BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger) == 0x0001A0, "Wrong size on BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger, EntryPoint) == 0x000000, "Member 'BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x000004, "Member 'BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger, CallFunc_MakeVector2D_ReturnValue) == 0x000008, "Member 'BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger, CallFunc_MakeVector2D_ReturnValue_1) == 0x000010, "Member 'BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger, CallFunc_GetWorldDeltaSeconds_ReturnValue_1) == 0x000018, "Member 'BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger::CallFunc_GetWorldDeltaSeconds_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger, CallFunc_Distance2D_ReturnValue) == 0x00001C, "Member 'BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger::CallFunc_Distance2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger, CallFunc_Less_FloatFloat_ReturnValue) == 0x000020, "Member 'BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger, CallFunc_Create_ReturnValue) == 0x000028, "Member 'BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger, K2Node_Event_IsDesignTime) == 0x000030, "Member 'BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger, CallFunc_MakeVector2D_ReturnValue_2) == 0x000034, "Member 'BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger::CallFunc_MakeVector2D_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger, CallFunc_Vector2DInterpTo_ReturnValue) == 0x00003C, "Member 'BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger::CallFunc_Vector2DInterpTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger, CallFunc_MakeVector2D_ReturnValue_3) == 0x000044, "Member 'BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger::CallFunc_MakeVector2D_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger, CallFunc_GetText_ReturnValue) == 0x000050, "Member 'BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger, CallFunc_Distance2D_ReturnValue_1) == 0x000068, "Member 'BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger::CallFunc_Distance2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger, CallFunc_Conv_TextToString_ReturnValue) == 0x000070, "Member 'BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger, CallFunc_Less_FloatFloat_ReturnValue_1) == 0x000080, "Member 'BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger::CallFunc_Less_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000081, "Member 'BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger, CallFunc_GetUserDisplayName_ReturnValue) == 0x000088, "Member 'BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger::CallFunc_GetUserDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger, CallFunc_Concat_StrStr_ReturnValue) == 0x000098, "Member 'BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger, CallFunc_AddChild_ReturnValue) == 0x0000A8, "Member 'BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger, CallFunc_Create_ReturnValue_1) == 0x0000B0, "Member 'BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger, CallFunc_AddChild_ReturnValue_1) == 0x0000B8, "Member 'BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger::CallFunc_AddChild_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger, CallFunc_GetUserDisplayName_ReturnValue_1) == 0x0000C0, "Member 'BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger::CallFunc_GetUserDisplayName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger, CallFunc_MakeVector2D_ReturnValue_4) == 0x0000D0, "Member 'BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger::CallFunc_MakeVector2D_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000D8, "Member 'BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger, CallFunc_Vector2DInterpTo_ReturnValue_1) == 0x0000E8, "Member 'BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger::CallFunc_Vector2DInterpTo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0000F0, "Member 'BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger, K2Node_ComponentBoundEvent_Text) == 0x000100, "Member 'BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger::K2Node_ComponentBoundEvent_Text' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger, K2Node_ComponentBoundEvent_CommitMethod) == 0x000118, "Member 'BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger::K2Node_ComponentBoundEvent_CommitMethod' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger, K2Node_SwitchEnum_CmpSuccess) == 0x000119, "Member 'BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger, CallFunc_Not_PreBool_ReturnValue) == 0x00011A, "Member 'BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger, CallFunc_BooleanAND_ReturnValue) == 0x00011B, "Member 'BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger, K2Node_CreateDelegate_OutputDelegate) == 0x00011C, "Member 'BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger, CallFunc_Not_PreBool_ReturnValue_1) == 0x00012C, "Member 'BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger, Temp_int_Variable) == 0x000130, "Member 'BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000134, "Member 'BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger, CallFunc_Add_IntInt_ReturnValue) == 0x000138, "Member 'BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger, CallFunc_MakeVector2D_ReturnValue_5) == 0x00013C, "Member 'BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger::CallFunc_MakeVector2D_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger, CallFunc_Conv_IntToString_ReturnValue) == 0x000148, "Member 'BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger, K2Node_CreateDelegate_OutputDelegate_1) == 0x000158, "Member 'BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger, CallFunc_Conv_StringToText_ReturnValue) == 0x000168, "Member 'BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger, CallFunc_GetWorldDeltaSeconds_ReturnValue_2) == 0x000180, "Member 'BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger::CallFunc_GetWorldDeltaSeconds_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000188, "Member 'BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger, CallFunc_GetWorldDeltaSeconds_ReturnValue_3) == 0x000190, "Member 'BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger::CallFunc_GetWorldDeltaSeconds_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x000198, "Member 'BP_AccelByteLobbyMessenger_C_ExecuteUbergraph_BP_AccelByteLobbyMessenger::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");

// Function BP_AccelByteLobbyMessenger.BP_AccelByteLobbyMessenger_C.BndEvt__MessageBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct BP_AccelByteLobbyMessenger_C_BndEvt__MessageBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ETextCommit                                   CommitMethod;                                      // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AccelByteLobbyMessenger_C_BndEvt__MessageBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000008, "Wrong alignment on BP_AccelByteLobbyMessenger_C_BndEvt__MessageBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(sizeof(BP_AccelByteLobbyMessenger_C_BndEvt__MessageBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000020, "Wrong size on BP_AccelByteLobbyMessenger_C_BndEvt__MessageBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_BndEvt__MessageBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature, Text) == 0x000000, "Member 'BP_AccelByteLobbyMessenger_C_BndEvt__MessageBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature::Text' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_BndEvt__MessageBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature, CommitMethod) == 0x000018, "Member 'BP_AccelByteLobbyMessenger_C_BndEvt__MessageBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature::CommitMethod' has a wrong offset!");

// Function BP_AccelByteLobbyMessenger.BP_AccelByteLobbyMessenger_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct BP_AccelByteLobbyMessenger_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_AccelByteLobbyMessenger_C_PreConstruct) == 0x000001, "Wrong alignment on BP_AccelByteLobbyMessenger_C_PreConstruct");
static_assert(sizeof(BP_AccelByteLobbyMessenger_C_PreConstruct) == 0x000001, "Wrong size on BP_AccelByteLobbyMessenger_C_PreConstruct");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'BP_AccelByteLobbyMessenger_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function BP_AccelByteLobbyMessenger.BP_AccelByteLobbyMessenger_C.Add Message
// 0x0068 (0x0068 - 0x0000)
struct BP_AccelByteLobbyMessenger_C_Add_Message final
{
public:
	class FString                                 Payload;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         CallFunc_ParseIntoArray_ReturnValue;               // 0x0018(0x0010)(ReferenceParm)
	class UBP_AccelByteLobbyMessengerEntry_C*     CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_RightChop_ReturnValue;                    // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AccelByteLobbyMessenger_C_Add_Message) == 0x000008, "Wrong alignment on BP_AccelByteLobbyMessenger_C_Add_Message");
static_assert(sizeof(BP_AccelByteLobbyMessenger_C_Add_Message) == 0x000068, "Wrong size on BP_AccelByteLobbyMessenger_C_Add_Message");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_Add_Message, Payload) == 0x000000, "Member 'BP_AccelByteLobbyMessenger_C_Add_Message::Payload' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_Add_Message, Temp_int_Variable) == 0x000010, "Member 'BP_AccelByteLobbyMessenger_C_Add_Message::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_Add_Message, CallFunc_ParseIntoArray_ReturnValue) == 0x000018, "Member 'BP_AccelByteLobbyMessenger_C_Add_Message::CallFunc_ParseIntoArray_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_Add_Message, CallFunc_Create_ReturnValue) == 0x000028, "Member 'BP_AccelByteLobbyMessenger_C_Add_Message::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_Add_Message, CallFunc_Array_Get_Item) == 0x000030, "Member 'BP_AccelByteLobbyMessenger_C_Add_Message::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_Add_Message, CallFunc_Len_ReturnValue) == 0x000040, "Member 'BP_AccelByteLobbyMessenger_C_Add_Message::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_Add_Message, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'BP_AccelByteLobbyMessenger_C_Add_Message::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_Add_Message, CallFunc_RightChop_ReturnValue) == 0x000048, "Member 'BP_AccelByteLobbyMessenger_C_Add_Message::CallFunc_RightChop_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_Add_Message, CallFunc_Add_IntInt_ReturnValue_1) == 0x000058, "Member 'BP_AccelByteLobbyMessenger_C_Add_Message::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AccelByteLobbyMessenger_C_Add_Message, CallFunc_AddChild_ReturnValue) == 0x000060, "Member 'BP_AccelByteLobbyMessenger_C_Add_Message::CallFunc_AddChild_ReturnValue' has a wrong offset!");

}
