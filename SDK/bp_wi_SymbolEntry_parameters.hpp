#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: bp_wi_SymbolEntry

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "AkAudio_structs.hpp"


namespace SDK::Params
{

// Function bp_wi_SymbolEntry.bp_wi_SymbolEntry_C.OnSymbolClicked__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct bp_wi_SymbolEntry_C_OnSymbolClicked__DelegateSignature final
{
public:
	bool                                          CorrectSymbolClicked_0;                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(bp_wi_SymbolEntry_C_OnSymbolClicked__DelegateSignature) == 0x000001, "Wrong alignment on bp_wi_SymbolEntry_C_OnSymbolClicked__DelegateSignature");
static_assert(sizeof(bp_wi_SymbolEntry_C_OnSymbolClicked__DelegateSignature) == 0x000001, "Wrong size on bp_wi_SymbolEntry_C_OnSymbolClicked__DelegateSignature");
static_assert(offsetof(bp_wi_SymbolEntry_C_OnSymbolClicked__DelegateSignature, CorrectSymbolClicked_0) == 0x000000, "Member 'bp_wi_SymbolEntry_C_OnSymbolClicked__DelegateSignature::CorrectSymbolClicked_0' has a wrong offset!");

// Function bp_wi_SymbolEntry.bp_wi_SymbolEntry_C.ExecuteUbergraph_bp_wi_SymbolEntry
// 0x0580 (0x0580 - 0x0000)
struct bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FAkExternalSourceInfo>          Temp_struct_Variable;                              // 0x0008(0x0010)(ConstParm, ReferenceParm)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0018(0x0010)(ConstParm, ZeroConstructor, NoDestructor)
	TArray<struct FAkExternalSourceInfo>          Temp_struct_Variable_1;                            // 0x0028(0x0010)(ConstParm, ReferenceParm)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable_1;                          // 0x0038(0x0010)(ConstParm, ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0050(0x0088)(UObjectWrapper)
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_1;                    // 0x00D8(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_2;                    // 0x0160(0x0088)(UObjectWrapper)
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_3;                    // 0x01E8(0x0088)()
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle;                     // 0x0270(0x0278)(UObjectWrapper)
	class UActorComponent*                        CallFunc_Get_ROS_Puzzle_ROS_Puzzle_Component;      // 0x04E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Ubpc_ros_Puzzle_C*                      K2Node_DynamicCast_AsBpc_Ros_Puzzle;               // 0x04F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x04F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F9[0x7];                                      // 0x04F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0500(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0508(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x0510(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IIWiseable_C>          K2Node_DynamicCast_AsIWiseable;                    // 0x0518(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0528(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_529[0x7];                                      // 0x0529(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IIWiseable_C>          K2Node_DynamicCast_AsIWiseable_1;                  // 0x0530(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0540(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_541[0x7];                                      // 0x0541(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkComponent*                           CallFunc_GetAkComponent_AkComponent;               // 0x0548(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                           CallFunc_GetAkComponent_AkComponent_1;             // 0x0550(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostAkEvent_ReturnValue;                  // 0x0558(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostAkEvent_ReturnValue_1;                // 0x055C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0560(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0568(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterSCTBP_C*                      K2Node_DynamicCast_AsCharacter_SCTBP;              // 0x0570(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0578(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry) == 0x000008, "Wrong alignment on bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry");
static_assert(sizeof(bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry) == 0x000580, "Wrong size on bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry");
static_assert(offsetof(bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry, EntryPoint) == 0x000000, "Member 'bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry, Temp_struct_Variable) == 0x000008, "Member 'bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry, Temp_delegate_Variable) == 0x000018, "Member 'bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry, Temp_struct_Variable_1) == 0x000028, "Member 'bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry, Temp_delegate_Variable_1) == 0x000038, "Member 'bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry::Temp_delegate_Variable_1' has a wrong offset!");
static_assert(offsetof(bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry, K2Node_Event_IsDesignTime) == 0x000048, "Member 'bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry, K2Node_MakeStruct_SlateBrush) == 0x000050, "Member 'bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry, K2Node_MakeStruct_SlateBrush_1) == 0x0000D8, "Member 'bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry::K2Node_MakeStruct_SlateBrush_1' has a wrong offset!");
static_assert(offsetof(bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry, K2Node_MakeStruct_SlateBrush_2) == 0x000160, "Member 'bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry::K2Node_MakeStruct_SlateBrush_2' has a wrong offset!");
static_assert(offsetof(bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry, K2Node_MakeStruct_SlateBrush_3) == 0x0001E8, "Member 'bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry::K2Node_MakeStruct_SlateBrush_3' has a wrong offset!");
static_assert(offsetof(bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry, K2Node_MakeStruct_ButtonStyle) == 0x000270, "Member 'bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry::K2Node_MakeStruct_ButtonStyle' has a wrong offset!");
static_assert(offsetof(bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry, CallFunc_Get_ROS_Puzzle_ROS_Puzzle_Component) == 0x0004E8, "Member 'bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry::CallFunc_Get_ROS_Puzzle_ROS_Puzzle_Component' has a wrong offset!");
static_assert(offsetof(bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry, K2Node_DynamicCast_AsBpc_Ros_Puzzle) == 0x0004F0, "Member 'bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry::K2Node_DynamicCast_AsBpc_Ros_Puzzle' has a wrong offset!");
static_assert(offsetof(bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry, K2Node_DynamicCast_bSuccess) == 0x0004F8, "Member 'bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry, CallFunc_PlayAnimation_ReturnValue) == 0x000500, "Member 'bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry, CallFunc_GetOwningPlayer_ReturnValue) == 0x000508, "Member 'bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry, CallFunc_GetOwningPlayer_ReturnValue_1) == 0x000510, "Member 'bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry::CallFunc_GetOwningPlayer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry, K2Node_DynamicCast_AsIWiseable) == 0x000518, "Member 'bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry::K2Node_DynamicCast_AsIWiseable' has a wrong offset!");
static_assert(offsetof(bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry, K2Node_DynamicCast_bSuccess_1) == 0x000528, "Member 'bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry, K2Node_DynamicCast_AsIWiseable_1) == 0x000530, "Member 'bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry::K2Node_DynamicCast_AsIWiseable_1' has a wrong offset!");
static_assert(offsetof(bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry, K2Node_DynamicCast_bSuccess_2) == 0x000540, "Member 'bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry, CallFunc_GetAkComponent_AkComponent) == 0x000548, "Member 'bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry::CallFunc_GetAkComponent_AkComponent' has a wrong offset!");
static_assert(offsetof(bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry, CallFunc_GetAkComponent_AkComponent_1) == 0x000550, "Member 'bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry::CallFunc_GetAkComponent_AkComponent_1' has a wrong offset!");
static_assert(offsetof(bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry, CallFunc_PostAkEvent_ReturnValue) == 0x000558, "Member 'bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry::CallFunc_PostAkEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry, CallFunc_PostAkEvent_ReturnValue_1) == 0x00055C, "Member 'bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry::CallFunc_PostAkEvent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry, CallFunc_GetPlayerController_ReturnValue) == 0x000560, "Member 'bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000568, "Member 'bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry, K2Node_DynamicCast_AsCharacter_SCTBP) == 0x000570, "Member 'bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry::K2Node_DynamicCast_AsCharacter_SCTBP' has a wrong offset!");
static_assert(offsetof(bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry, K2Node_DynamicCast_bSuccess_3) == 0x000578, "Member 'bp_wi_SymbolEntry_C_ExecuteUbergraph_bp_wi_SymbolEntry::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");

// Function bp_wi_SymbolEntry.bp_wi_SymbolEntry_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct bp_wi_SymbolEntry_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(bp_wi_SymbolEntry_C_PreConstruct) == 0x000001, "Wrong alignment on bp_wi_SymbolEntry_C_PreConstruct");
static_assert(sizeof(bp_wi_SymbolEntry_C_PreConstruct) == 0x000001, "Wrong size on bp_wi_SymbolEntry_C_PreConstruct");
static_assert(offsetof(bp_wi_SymbolEntry_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'bp_wi_SymbolEntry_C_PreConstruct::IsDesignTime' has a wrong offset!");

}
