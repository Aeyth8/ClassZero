#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VruumbaWI

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function VruumbaWI.VruumbaWI_C.ExecuteUbergraph_VruumbaWI
// 0x0108 (0x0108 - 0x0000)
struct VruumbaWI_C_ExecuteUbergraph_VruumbaWI final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0008(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0048(0x0008)(NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66[0x2];                                       // 0x0066(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class AHatStand_C*                            CallFunc_GetActorOfClass_ReturnValue;              // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79[0x3];                                       // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_PauseAnimation_ReturnValue;               // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AVruumbaRace_C*                         CallFunc_GetActorOfClass_ReturnValue_1;            // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class Ubp_wi_GlobalOxygenWarning_C*>   CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x0090(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UUserWidget*                            CallFunc_Array_Get_Item;                           // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Array_Get_Item_1;                         // 0x00A8(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D4[0x4];                                       // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00F0(0x0018)()
};
static_assert(alignof(VruumbaWI_C_ExecuteUbergraph_VruumbaWI) == 0x000008, "Wrong alignment on VruumbaWI_C_ExecuteUbergraph_VruumbaWI");
static_assert(sizeof(VruumbaWI_C_ExecuteUbergraph_VruumbaWI) == 0x000108, "Wrong size on VruumbaWI_C_ExecuteUbergraph_VruumbaWI");
static_assert(offsetof(VruumbaWI_C_ExecuteUbergraph_VruumbaWI, EntryPoint) == 0x000000, "Member 'VruumbaWI_C_ExecuteUbergraph_VruumbaWI::EntryPoint' has a wrong offset!");
static_assert(offsetof(VruumbaWI_C_ExecuteUbergraph_VruumbaWI, CallFunc_MakeLiteralText_ReturnValue) == 0x000008, "Member 'VruumbaWI_C_ExecuteUbergraph_VruumbaWI::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(VruumbaWI_C_ExecuteUbergraph_VruumbaWI, CallFunc_Conv_TextToString_ReturnValue) == 0x000020, "Member 'VruumbaWI_C_ExecuteUbergraph_VruumbaWI::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(VruumbaWI_C_ExecuteUbergraph_VruumbaWI, K2Node_CreateDelegate_OutputDelegate) == 0x000030, "Member 'VruumbaWI_C_ExecuteUbergraph_VruumbaWI::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(VruumbaWI_C_ExecuteUbergraph_VruumbaWI, Temp_int_Loop_Counter_Variable) == 0x000040, "Member 'VruumbaWI_C_ExecuteUbergraph_VruumbaWI::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(VruumbaWI_C_ExecuteUbergraph_VruumbaWI, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000048, "Member 'VruumbaWI_C_ExecuteUbergraph_VruumbaWI::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(VruumbaWI_C_ExecuteUbergraph_VruumbaWI, CallFunc_Add_IntInt_ReturnValue) == 0x000050, "Member 'VruumbaWI_C_ExecuteUbergraph_VruumbaWI::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(VruumbaWI_C_ExecuteUbergraph_VruumbaWI, Temp_int_Array_Index_Variable) == 0x000054, "Member 'VruumbaWI_C_ExecuteUbergraph_VruumbaWI::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(VruumbaWI_C_ExecuteUbergraph_VruumbaWI, Temp_int_Variable) == 0x000058, "Member 'VruumbaWI_C_ExecuteUbergraph_VruumbaWI::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(VruumbaWI_C_ExecuteUbergraph_VruumbaWI, CallFunc_Add_IntInt_ReturnValue_1) == 0x00005C, "Member 'VruumbaWI_C_ExecuteUbergraph_VruumbaWI::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VruumbaWI_C_ExecuteUbergraph_VruumbaWI, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'VruumbaWI_C_ExecuteUbergraph_VruumbaWI::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(VruumbaWI_C_ExecuteUbergraph_VruumbaWI, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000064, "Member 'VruumbaWI_C_ExecuteUbergraph_VruumbaWI::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(VruumbaWI_C_ExecuteUbergraph_VruumbaWI, K2Node_Event_IsDesignTime) == 0x000065, "Member 'VruumbaWI_C_ExecuteUbergraph_VruumbaWI::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(VruumbaWI_C_ExecuteUbergraph_VruumbaWI, CallFunc_GetActorOfClass_ReturnValue) == 0x000068, "Member 'VruumbaWI_C_ExecuteUbergraph_VruumbaWI::CallFunc_GetActorOfClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(VruumbaWI_C_ExecuteUbergraph_VruumbaWI, CallFunc_PlayAnimation_ReturnValue) == 0x000070, "Member 'VruumbaWI_C_ExecuteUbergraph_VruumbaWI::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(VruumbaWI_C_ExecuteUbergraph_VruumbaWI, CallFunc_IsValid_ReturnValue) == 0x000078, "Member 'VruumbaWI_C_ExecuteUbergraph_VruumbaWI::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(VruumbaWI_C_ExecuteUbergraph_VruumbaWI, CallFunc_PauseAnimation_ReturnValue) == 0x00007C, "Member 'VruumbaWI_C_ExecuteUbergraph_VruumbaWI::CallFunc_PauseAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(VruumbaWI_C_ExecuteUbergraph_VruumbaWI, CallFunc_GetActorOfClass_ReturnValue_1) == 0x000080, "Member 'VruumbaWI_C_ExecuteUbergraph_VruumbaWI::CallFunc_GetActorOfClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VruumbaWI_C_ExecuteUbergraph_VruumbaWI, CallFunc_IsValid_ReturnValue_1) == 0x000088, "Member 'VruumbaWI_C_ExecuteUbergraph_VruumbaWI::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VruumbaWI_C_ExecuteUbergraph_VruumbaWI, CallFunc_GetAllWidgetsOfClass_FoundWidgets) == 0x000090, "Member 'VruumbaWI_C_ExecuteUbergraph_VruumbaWI::CallFunc_GetAllWidgetsOfClass_FoundWidgets' has a wrong offset!");
static_assert(offsetof(VruumbaWI_C_ExecuteUbergraph_VruumbaWI, CallFunc_Array_Get_Item) == 0x0000A0, "Member 'VruumbaWI_C_ExecuteUbergraph_VruumbaWI::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(VruumbaWI_C_ExecuteUbergraph_VruumbaWI, CallFunc_Array_Get_Item_1) == 0x0000A8, "Member 'VruumbaWI_C_ExecuteUbergraph_VruumbaWI::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(VruumbaWI_C_ExecuteUbergraph_VruumbaWI, CallFunc_Conv_TextToString_ReturnValue_1) == 0x0000C0, "Member 'VruumbaWI_C_ExecuteUbergraph_VruumbaWI::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VruumbaWI_C_ExecuteUbergraph_VruumbaWI, CallFunc_Array_Length_ReturnValue_1) == 0x0000D0, "Member 'VruumbaWI_C_ExecuteUbergraph_VruumbaWI::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VruumbaWI_C_ExecuteUbergraph_VruumbaWI, CallFunc_Concat_StrStr_ReturnValue) == 0x0000D8, "Member 'VruumbaWI_C_ExecuteUbergraph_VruumbaWI::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(VruumbaWI_C_ExecuteUbergraph_VruumbaWI, CallFunc_Less_IntInt_ReturnValue) == 0x0000E8, "Member 'VruumbaWI_C_ExecuteUbergraph_VruumbaWI::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(VruumbaWI_C_ExecuteUbergraph_VruumbaWI, CallFunc_Conv_StringToText_ReturnValue) == 0x0000F0, "Member 'VruumbaWI_C_ExecuteUbergraph_VruumbaWI::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function VruumbaWI.VruumbaWI_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct VruumbaWI_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(VruumbaWI_C_PreConstruct) == 0x000001, "Wrong alignment on VruumbaWI_C_PreConstruct");
static_assert(sizeof(VruumbaWI_C_PreConstruct) == 0x000001, "Wrong size on VruumbaWI_C_PreConstruct");
static_assert(offsetof(VruumbaWI_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'VruumbaWI_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function VruumbaWI.VruumbaWI_C.ShowAirlockUI
// 0x0008 (0x0008 - 0x0000)
struct VruumbaWI_C_ShowAirlockUI final
{
public:
	bool                                          Show;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(VruumbaWI_C_ShowAirlockUI) == 0x000004, "Wrong alignment on VruumbaWI_C_ShowAirlockUI");
static_assert(sizeof(VruumbaWI_C_ShowAirlockUI) == 0x000008, "Wrong size on VruumbaWI_C_ShowAirlockUI");
static_assert(offsetof(VruumbaWI_C_ShowAirlockUI, Show) == 0x000000, "Member 'VruumbaWI_C_ShowAirlockUI::Show' has a wrong offset!");
static_assert(offsetof(VruumbaWI_C_ShowAirlockUI, CallFunc_SelectInt_ReturnValue) == 0x000004, "Member 'VruumbaWI_C_ShowAirlockUI::CallFunc_SelectInt_ReturnValue' has a wrong offset!");

// Function VruumbaWI.VruumbaWI_C.ProjectileCD
// 0x0010 (0x0010 - 0x0000)
struct VruumbaWI_C_ProjectileCD final
{
public:
	bool                                          OnCooldown;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsAvailable;                                       // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(VruumbaWI_C_ProjectileCD) == 0x000008, "Wrong alignment on VruumbaWI_C_ProjectileCD");
static_assert(sizeof(VruumbaWI_C_ProjectileCD) == 0x000010, "Wrong size on VruumbaWI_C_ProjectileCD");
static_assert(offsetof(VruumbaWI_C_ProjectileCD, OnCooldown) == 0x000000, "Member 'VruumbaWI_C_ProjectileCD::OnCooldown' has a wrong offset!");
static_assert(offsetof(VruumbaWI_C_ProjectileCD, IsAvailable) == 0x000001, "Member 'VruumbaWI_C_ProjectileCD::IsAvailable' has a wrong offset!");
static_assert(offsetof(VruumbaWI_C_ProjectileCD, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000004, "Member 'VruumbaWI_C_ProjectileCD::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(VruumbaWI_C_ProjectileCD, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'VruumbaWI_C_ProjectileCD::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function VruumbaWI.VruumbaWI_C.PlayHitAnimation
// 0x0030 (0x0030 - 0x0000)
struct VruumbaWI_C_PlayHitAnimation final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(VruumbaWI_C_PlayHitAnimation) == 0x000008, "Wrong alignment on VruumbaWI_C_PlayHitAnimation");
static_assert(sizeof(VruumbaWI_C_PlayHitAnimation) == 0x000030, "Wrong size on VruumbaWI_C_PlayHitAnimation");
static_assert(offsetof(VruumbaWI_C_PlayHitAnimation, Temp_int_Variable) == 0x000000, "Member 'VruumbaWI_C_PlayHitAnimation::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(VruumbaWI_C_PlayHitAnimation, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'VruumbaWI_C_PlayHitAnimation::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(VruumbaWI_C_PlayHitAnimation, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'VruumbaWI_C_PlayHitAnimation::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(VruumbaWI_C_PlayHitAnimation, CallFunc_PlayAnimation_ReturnValue) == 0x000028, "Member 'VruumbaWI_C_PlayHitAnimation::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function VruumbaWI.VruumbaWI_C.TeleportCD
// 0x0010 (0x0010 - 0x0000)
struct VruumbaWI_C_TeleportCD final
{
public:
	bool                                          OnCooldown;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsAvailable;                                       // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(VruumbaWI_C_TeleportCD) == 0x000008, "Wrong alignment on VruumbaWI_C_TeleportCD");
static_assert(sizeof(VruumbaWI_C_TeleportCD) == 0x000010, "Wrong size on VruumbaWI_C_TeleportCD");
static_assert(offsetof(VruumbaWI_C_TeleportCD, OnCooldown) == 0x000000, "Member 'VruumbaWI_C_TeleportCD::OnCooldown' has a wrong offset!");
static_assert(offsetof(VruumbaWI_C_TeleportCD, IsAvailable) == 0x000001, "Member 'VruumbaWI_C_TeleportCD::IsAvailable' has a wrong offset!");
static_assert(offsetof(VruumbaWI_C_TeleportCD, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000004, "Member 'VruumbaWI_C_TeleportCD::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(VruumbaWI_C_TeleportCD, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'VruumbaWI_C_TeleportCD::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function VruumbaWI.VruumbaWI_C.HooverActivate
// 0x0020 (0x0020 - 0x0000)
struct VruumbaWI_C_HooverActivate final
{
public:
	bool                                          Active;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(VruumbaWI_C_HooverActivate) == 0x000008, "Wrong alignment on VruumbaWI_C_HooverActivate");
static_assert(sizeof(VruumbaWI_C_HooverActivate) == 0x000020, "Wrong size on VruumbaWI_C_HooverActivate");
static_assert(offsetof(VruumbaWI_C_HooverActivate, Active) == 0x000000, "Member 'VruumbaWI_C_HooverActivate::Active' has a wrong offset!");
static_assert(offsetof(VruumbaWI_C_HooverActivate, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000004, "Member 'VruumbaWI_C_HooverActivate::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(VruumbaWI_C_HooverActivate, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x000008, "Member 'VruumbaWI_C_HooverActivate::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VruumbaWI_C_HooverActivate, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'VruumbaWI_C_HooverActivate::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(VruumbaWI_C_HooverActivate, CallFunc_PlayAnimation_ReturnValue_1) == 0x000018, "Member 'VruumbaWI_C_HooverActivate::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

// Function VruumbaWI.VruumbaWI_C.FlyActivate
// 0x0001 (0x0001 - 0x0000)
struct VruumbaWI_C_FlyActivate final
{
public:
	bool                                          Active;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(VruumbaWI_C_FlyActivate) == 0x000001, "Wrong alignment on VruumbaWI_C_FlyActivate");
static_assert(sizeof(VruumbaWI_C_FlyActivate) == 0x000001, "Wrong size on VruumbaWI_C_FlyActivate");
static_assert(offsetof(VruumbaWI_C_FlyActivate, Active) == 0x000000, "Member 'VruumbaWI_C_FlyActivate::Active' has a wrong offset!");

// Function VruumbaWI.VruumbaWI_C.Teleport WI Visibility
// 0x0001 (0x0001 - 0x0000)
struct VruumbaWI_C_Teleport_WI_Visibility final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(VruumbaWI_C_Teleport_WI_Visibility) == 0x000001, "Wrong alignment on VruumbaWI_C_Teleport_WI_Visibility");
static_assert(sizeof(VruumbaWI_C_Teleport_WI_Visibility) == 0x000001, "Wrong size on VruumbaWI_C_Teleport_WI_Visibility");
static_assert(offsetof(VruumbaWI_C_Teleport_WI_Visibility, Visible) == 0x000000, "Member 'VruumbaWI_C_Teleport_WI_Visibility::Visible' has a wrong offset!");

// Function VruumbaWI.VruumbaWI_C.Jump Boost WI
// 0x0008 (0x0008 - 0x0000)
struct VruumbaWI_C_Jump_Boost_WI final
{
public:
	int32                                         BoostNumber;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(VruumbaWI_C_Jump_Boost_WI) == 0x000004, "Wrong alignment on VruumbaWI_C_Jump_Boost_WI");
static_assert(sizeof(VruumbaWI_C_Jump_Boost_WI) == 0x000008, "Wrong size on VruumbaWI_C_Jump_Boost_WI");
static_assert(offsetof(VruumbaWI_C_Jump_Boost_WI, BoostNumber) == 0x000000, "Member 'VruumbaWI_C_Jump_Boost_WI::BoostNumber' has a wrong offset!");
static_assert(offsetof(VruumbaWI_C_Jump_Boost_WI, K2Node_SwitchInteger_CmpSuccess) == 0x000004, "Member 'VruumbaWI_C_Jump_Boost_WI::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

// Function VruumbaWI.VruumbaWI_C.UpdateTrashCounter
// 0x0028 (0x0028 - 0x0000)
struct VruumbaWI_C_UpdateTrashCounter final
{
public:
	float                                         TrashProgress;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FFloor_ReturnValue;                       // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
};
static_assert(alignof(VruumbaWI_C_UpdateTrashCounter) == 0x000008, "Wrong alignment on VruumbaWI_C_UpdateTrashCounter");
static_assert(sizeof(VruumbaWI_C_UpdateTrashCounter) == 0x000028, "Wrong size on VruumbaWI_C_UpdateTrashCounter");
static_assert(offsetof(VruumbaWI_C_UpdateTrashCounter, TrashProgress) == 0x000000, "Member 'VruumbaWI_C_UpdateTrashCounter::TrashProgress' has a wrong offset!");
static_assert(offsetof(VruumbaWI_C_UpdateTrashCounter, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000004, "Member 'VruumbaWI_C_UpdateTrashCounter::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(VruumbaWI_C_UpdateTrashCounter, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000008, "Member 'VruumbaWI_C_UpdateTrashCounter::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(VruumbaWI_C_UpdateTrashCounter, CallFunc_FFloor_ReturnValue) == 0x00000C, "Member 'VruumbaWI_C_UpdateTrashCounter::CallFunc_FFloor_ReturnValue' has a wrong offset!");
static_assert(offsetof(VruumbaWI_C_UpdateTrashCounter, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'VruumbaWI_C_UpdateTrashCounter::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

}
