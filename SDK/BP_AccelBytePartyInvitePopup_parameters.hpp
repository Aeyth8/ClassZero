#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AccelBytePartyInvitePopup

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_AccelBytePartyInvitePopup.BP_AccelBytePartyInvitePopup_C.ExecuteUbergraph_BP_AccelBytePartyInvitePopup
// 0x00A0 (0x00A0 - 0x0000)
struct BP_AccelBytePartyInvitePopup_C_ExecuteUbergraph_BP_AccelBytePartyInvitePopup final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFCTPartyConnectionCallbackProxy*       CallFunc_LeaveParty_ReturnValue;                   // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRenderOpacity_ReturnValue;             // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46[0x2];                                       // 0x0046(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Distance2D_ReturnValue;                   // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E[0x2];                                       // 0x004E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0050(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0060(0x0010)(ZeroConstructor, NoDestructor)
	class UFCTPartyConnectionCallbackProxy*       CallFunc_AcceptPartyInvitation_ReturnValue;        // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79[0x3];                                       // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0080(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetWorldDeltaSeconds_ReturnValue_1;       // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetWorldDeltaSeconds_ReturnValue_2;       // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRenderOpacity_ReturnValue_1;           // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FInterpTo_ReturnValue;                    // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Vector2DInterpTo_ReturnValue;             // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AccelBytePartyInvitePopup_C_ExecuteUbergraph_BP_AccelBytePartyInvitePopup) == 0x000008, "Wrong alignment on BP_AccelBytePartyInvitePopup_C_ExecuteUbergraph_BP_AccelBytePartyInvitePopup");
static_assert(sizeof(BP_AccelBytePartyInvitePopup_C_ExecuteUbergraph_BP_AccelBytePartyInvitePopup) == 0x0000A0, "Wrong size on BP_AccelBytePartyInvitePopup_C_ExecuteUbergraph_BP_AccelBytePartyInvitePopup");
static_assert(offsetof(BP_AccelBytePartyInvitePopup_C_ExecuteUbergraph_BP_AccelBytePartyInvitePopup, EntryPoint) == 0x000000, "Member 'BP_AccelBytePartyInvitePopup_C_ExecuteUbergraph_BP_AccelBytePartyInvitePopup::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyInvitePopup_C_ExecuteUbergraph_BP_AccelBytePartyInvitePopup, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_AccelBytePartyInvitePopup_C_ExecuteUbergraph_BP_AccelBytePartyInvitePopup::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyInvitePopup_C_ExecuteUbergraph_BP_AccelBytePartyInvitePopup, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'BP_AccelBytePartyInvitePopup_C_ExecuteUbergraph_BP_AccelBytePartyInvitePopup::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyInvitePopup_C_ExecuteUbergraph_BP_AccelBytePartyInvitePopup, K2Node_CreateDelegate_OutputDelegate_2) == 0x000024, "Member 'BP_AccelBytePartyInvitePopup_C_ExecuteUbergraph_BP_AccelBytePartyInvitePopup::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyInvitePopup_C_ExecuteUbergraph_BP_AccelBytePartyInvitePopup, CallFunc_LeaveParty_ReturnValue) == 0x000038, "Member 'BP_AccelBytePartyInvitePopup_C_ExecuteUbergraph_BP_AccelBytePartyInvitePopup::CallFunc_LeaveParty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyInvitePopup_C_ExecuteUbergraph_BP_AccelBytePartyInvitePopup, CallFunc_GetRenderOpacity_ReturnValue) == 0x000040, "Member 'BP_AccelBytePartyInvitePopup_C_ExecuteUbergraph_BP_AccelBytePartyInvitePopup::CallFunc_GetRenderOpacity_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyInvitePopup_C_ExecuteUbergraph_BP_AccelBytePartyInvitePopup, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000044, "Member 'BP_AccelBytePartyInvitePopup_C_ExecuteUbergraph_BP_AccelBytePartyInvitePopup::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyInvitePopup_C_ExecuteUbergraph_BP_AccelBytePartyInvitePopup, CallFunc_IsValid_ReturnValue) == 0x000045, "Member 'BP_AccelBytePartyInvitePopup_C_ExecuteUbergraph_BP_AccelBytePartyInvitePopup::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyInvitePopup_C_ExecuteUbergraph_BP_AccelBytePartyInvitePopup, CallFunc_Distance2D_ReturnValue) == 0x000048, "Member 'BP_AccelBytePartyInvitePopup_C_ExecuteUbergraph_BP_AccelBytePartyInvitePopup::CallFunc_Distance2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyInvitePopup_C_ExecuteUbergraph_BP_AccelBytePartyInvitePopup, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x00004C, "Member 'BP_AccelBytePartyInvitePopup_C_ExecuteUbergraph_BP_AccelBytePartyInvitePopup::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyInvitePopup_C_ExecuteUbergraph_BP_AccelBytePartyInvitePopup, CallFunc_BooleanAND_ReturnValue) == 0x00004D, "Member 'BP_AccelBytePartyInvitePopup_C_ExecuteUbergraph_BP_AccelBytePartyInvitePopup::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyInvitePopup_C_ExecuteUbergraph_BP_AccelBytePartyInvitePopup, K2Node_CreateDelegate_OutputDelegate_3) == 0x000050, "Member 'BP_AccelBytePartyInvitePopup_C_ExecuteUbergraph_BP_AccelBytePartyInvitePopup::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyInvitePopup_C_ExecuteUbergraph_BP_AccelBytePartyInvitePopup, K2Node_CreateDelegate_OutputDelegate_4) == 0x000060, "Member 'BP_AccelBytePartyInvitePopup_C_ExecuteUbergraph_BP_AccelBytePartyInvitePopup::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyInvitePopup_C_ExecuteUbergraph_BP_AccelBytePartyInvitePopup, CallFunc_AcceptPartyInvitation_ReturnValue) == 0x000070, "Member 'BP_AccelBytePartyInvitePopup_C_ExecuteUbergraph_BP_AccelBytePartyInvitePopup::CallFunc_AcceptPartyInvitation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyInvitePopup_C_ExecuteUbergraph_BP_AccelBytePartyInvitePopup, CallFunc_IsValid_ReturnValue_1) == 0x000078, "Member 'BP_AccelBytePartyInvitePopup_C_ExecuteUbergraph_BP_AccelBytePartyInvitePopup::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyInvitePopup_C_ExecuteUbergraph_BP_AccelBytePartyInvitePopup, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x00007C, "Member 'BP_AccelBytePartyInvitePopup_C_ExecuteUbergraph_BP_AccelBytePartyInvitePopup::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyInvitePopup_C_ExecuteUbergraph_BP_AccelBytePartyInvitePopup, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000080, "Member 'BP_AccelBytePartyInvitePopup_C_ExecuteUbergraph_BP_AccelBytePartyInvitePopup::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyInvitePopup_C_ExecuteUbergraph_BP_AccelBytePartyInvitePopup, CallFunc_GetWorldDeltaSeconds_ReturnValue_1) == 0x000088, "Member 'BP_AccelBytePartyInvitePopup_C_ExecuteUbergraph_BP_AccelBytePartyInvitePopup::CallFunc_GetWorldDeltaSeconds_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyInvitePopup_C_ExecuteUbergraph_BP_AccelBytePartyInvitePopup, CallFunc_GetWorldDeltaSeconds_ReturnValue_2) == 0x00008C, "Member 'BP_AccelBytePartyInvitePopup_C_ExecuteUbergraph_BP_AccelBytePartyInvitePopup::CallFunc_GetWorldDeltaSeconds_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyInvitePopup_C_ExecuteUbergraph_BP_AccelBytePartyInvitePopup, CallFunc_GetRenderOpacity_ReturnValue_1) == 0x000090, "Member 'BP_AccelBytePartyInvitePopup_C_ExecuteUbergraph_BP_AccelBytePartyInvitePopup::CallFunc_GetRenderOpacity_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyInvitePopup_C_ExecuteUbergraph_BP_AccelBytePartyInvitePopup, CallFunc_FInterpTo_ReturnValue) == 0x000094, "Member 'BP_AccelBytePartyInvitePopup_C_ExecuteUbergraph_BP_AccelBytePartyInvitePopup::CallFunc_FInterpTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyInvitePopup_C_ExecuteUbergraph_BP_AccelBytePartyInvitePopup, CallFunc_Vector2DInterpTo_ReturnValue) == 0x000098, "Member 'BP_AccelBytePartyInvitePopup_C_ExecuteUbergraph_BP_AccelBytePartyInvitePopup::CallFunc_Vector2DInterpTo_ReturnValue' has a wrong offset!");

// Function BP_AccelBytePartyInvitePopup.BP_AccelBytePartyInvitePopup_C.UpdateSendersText
// 0x00B8 (0x00B8 - 0x0000)
struct BP_AccelBytePartyInvitePopup_C_UpdateSendersText final
{
public:
	class FString                                 NewSender;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 SendersString;                                     // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Array_Get_Item_1;                         // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_AccelBytePartyInvitePopup_C_UpdateSendersText) == 0x000008, "Wrong alignment on BP_AccelBytePartyInvitePopup_C_UpdateSendersText");
static_assert(sizeof(BP_AccelBytePartyInvitePopup_C_UpdateSendersText) == 0x0000B8, "Wrong size on BP_AccelBytePartyInvitePopup_C_UpdateSendersText");
static_assert(offsetof(BP_AccelBytePartyInvitePopup_C_UpdateSendersText, NewSender) == 0x000000, "Member 'BP_AccelBytePartyInvitePopup_C_UpdateSendersText::NewSender' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyInvitePopup_C_UpdateSendersText, SendersString) == 0x000010, "Member 'BP_AccelBytePartyInvitePopup_C_UpdateSendersText::SendersString' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyInvitePopup_C_UpdateSendersText, Temp_int_Variable) == 0x000020, "Member 'BP_AccelBytePartyInvitePopup_C_UpdateSendersText::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyInvitePopup_C_UpdateSendersText, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'BP_AccelBytePartyInvitePopup_C_UpdateSendersText::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyInvitePopup_C_UpdateSendersText, CallFunc_Array_LastIndex_ReturnValue) == 0x000028, "Member 'BP_AccelBytePartyInvitePopup_C_UpdateSendersText::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyInvitePopup_C_UpdateSendersText, CallFunc_Array_Get_Item) == 0x000030, "Member 'BP_AccelBytePartyInvitePopup_C_UpdateSendersText::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyInvitePopup_C_UpdateSendersText, CallFunc_Array_Add_ReturnValue) == 0x000040, "Member 'BP_AccelBytePartyInvitePopup_C_UpdateSendersText::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyInvitePopup_C_UpdateSendersText, CallFunc_Array_Length_ReturnValue) == 0x000044, "Member 'BP_AccelBytePartyInvitePopup_C_UpdateSendersText::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyInvitePopup_C_UpdateSendersText, CallFunc_Greater_IntInt_ReturnValue) == 0x000048, "Member 'BP_AccelBytePartyInvitePopup_C_UpdateSendersText::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyInvitePopup_C_UpdateSendersText, CallFunc_Array_Find_ReturnValue) == 0x00004C, "Member 'BP_AccelBytePartyInvitePopup_C_UpdateSendersText::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyInvitePopup_C_UpdateSendersText, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'BP_AccelBytePartyInvitePopup_C_UpdateSendersText::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyInvitePopup_C_UpdateSendersText, CallFunc_Concat_StrStr_ReturnValue) == 0x000058, "Member 'BP_AccelBytePartyInvitePopup_C_UpdateSendersText::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyInvitePopup_C_UpdateSendersText, CallFunc_Array_Get_Item_1) == 0x000068, "Member 'BP_AccelBytePartyInvitePopup_C_UpdateSendersText::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyInvitePopup_C_UpdateSendersText, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000078, "Member 'BP_AccelBytePartyInvitePopup_C_UpdateSendersText::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyInvitePopup_C_UpdateSendersText, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000088, "Member 'BP_AccelBytePartyInvitePopup_C_UpdateSendersText::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyInvitePopup_C_UpdateSendersText, CallFunc_Concat_StrStr_ReturnValue_3) == 0x000098, "Member 'BP_AccelBytePartyInvitePopup_C_UpdateSendersText::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyInvitePopup_C_UpdateSendersText, CallFunc_Array_Length_ReturnValue_1) == 0x0000A8, "Member 'BP_AccelBytePartyInvitePopup_C_UpdateSendersText::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyInvitePopup_C_UpdateSendersText, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000AC, "Member 'BP_AccelBytePartyInvitePopup_C_UpdateSendersText::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyInvitePopup_C_UpdateSendersText, CallFunc_Array_Add_ReturnValue_1) == 0x0000B0, "Member 'BP_AccelBytePartyInvitePopup_C_UpdateSendersText::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyInvitePopup_C_UpdateSendersText, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000B4, "Member 'BP_AccelBytePartyInvitePopup_C_UpdateSendersText::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

}
