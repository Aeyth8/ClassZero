#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ComboCustomizationTrophyWI

#include "Basic.hpp"

#include "SCT_structs.hpp"
#include "TrophyStruct_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ComboCustomizationTrophyWI.ComboCustomizationTrophyWI_C.OnChanged__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ComboCustomizationTrophyWI_C_OnChanged__DelegateSignature final
{
public:
	class UStaticMesh*                            StaticMesh;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ComboCustomizationTrophyWI_C_OnChanged__DelegateSignature) == 0x000008, "Wrong alignment on ComboCustomizationTrophyWI_C_OnChanged__DelegateSignature");
static_assert(sizeof(ComboCustomizationTrophyWI_C_OnChanged__DelegateSignature) == 0x000008, "Wrong size on ComboCustomizationTrophyWI_C_OnChanged__DelegateSignature");
static_assert(offsetof(ComboCustomizationTrophyWI_C_OnChanged__DelegateSignature, StaticMesh) == 0x000000, "Member 'ComboCustomizationTrophyWI_C_OnChanged__DelegateSignature::StaticMesh' has a wrong offset!");

// Function ComboCustomizationTrophyWI.ComboCustomizationTrophyWI_C.ExecuteUbergraph_ComboCustomizationTrophyWI
// 0x0090 (0x0090 - 0x0000)
struct ComboCustomizationTrophyWI_C_ExecuteUbergraph_ComboCustomizationTrophyWI final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkComponent*                           CallFunc_SpawnAkComponentAtLocation_ReturnValue;   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetViewportScale_ReturnValue;             // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_ProjectWorldToScreen_ScreenPosition;      // 0x0054(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ProjectWorldToScreen_ReturnValue;         // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D[0x3];                                       // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Multiply_Vector2DFloat_ReturnValue;       // 0x0064(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D[0x3];                                       // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D[0x3];                                       // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMenuCamController_C*                   CallFunc_GetComponentByClass_ReturnValue;          // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ComboCustomizationTrophyWI_C_ExecuteUbergraph_ComboCustomizationTrophyWI) == 0x000008, "Wrong alignment on ComboCustomizationTrophyWI_C_ExecuteUbergraph_ComboCustomizationTrophyWI");
static_assert(sizeof(ComboCustomizationTrophyWI_C_ExecuteUbergraph_ComboCustomizationTrophyWI) == 0x000090, "Wrong size on ComboCustomizationTrophyWI_C_ExecuteUbergraph_ComboCustomizationTrophyWI");
static_assert(offsetof(ComboCustomizationTrophyWI_C_ExecuteUbergraph_ComboCustomizationTrophyWI, EntryPoint) == 0x000000, "Member 'ComboCustomizationTrophyWI_C_ExecuteUbergraph_ComboCustomizationTrophyWI::EntryPoint' has a wrong offset!");
static_assert(offsetof(ComboCustomizationTrophyWI_C_ExecuteUbergraph_ComboCustomizationTrophyWI, Temp_int_Variable) == 0x000004, "Member 'ComboCustomizationTrophyWI_C_ExecuteUbergraph_ComboCustomizationTrophyWI::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ComboCustomizationTrophyWI_C_ExecuteUbergraph_ComboCustomizationTrophyWI, CallFunc_Subtract_IntInt_ReturnValue) == 0x000008, "Member 'ComboCustomizationTrophyWI_C_ExecuteUbergraph_ComboCustomizationTrophyWI::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ComboCustomizationTrophyWI_C_ExecuteUbergraph_ComboCustomizationTrophyWI, CallFunc_SpawnAkComponentAtLocation_ReturnValue) == 0x000010, "Member 'ComboCustomizationTrophyWI_C_ExecuteUbergraph_ComboCustomizationTrophyWI::CallFunc_SpawnAkComponentAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ComboCustomizationTrophyWI_C_ExecuteUbergraph_ComboCustomizationTrophyWI, CallFunc_GetPlayerController_ReturnValue) == 0x000018, "Member 'ComboCustomizationTrophyWI_C_ExecuteUbergraph_ComboCustomizationTrophyWI::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(ComboCustomizationTrophyWI_C_ExecuteUbergraph_ComboCustomizationTrophyWI, CallFunc_GetViewportScale_ReturnValue) == 0x000020, "Member 'ComboCustomizationTrophyWI_C_ExecuteUbergraph_ComboCustomizationTrophyWI::CallFunc_GetViewportScale_ReturnValue' has a wrong offset!");
static_assert(offsetof(ComboCustomizationTrophyWI_C_ExecuteUbergraph_ComboCustomizationTrophyWI, CallFunc_MultiplyMultiply_FloatFloat_ReturnValue) == 0x000024, "Member 'ComboCustomizationTrophyWI_C_ExecuteUbergraph_ComboCustomizationTrophyWI::CallFunc_MultiplyMultiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ComboCustomizationTrophyWI_C_ExecuteUbergraph_ComboCustomizationTrophyWI, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000028, "Member 'ComboCustomizationTrophyWI_C_ExecuteUbergraph_ComboCustomizationTrophyWI::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ComboCustomizationTrophyWI_C_ExecuteUbergraph_ComboCustomizationTrophyWI, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000030, "Member 'ComboCustomizationTrophyWI_C_ExecuteUbergraph_ComboCustomizationTrophyWI::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ComboCustomizationTrophyWI_C_ExecuteUbergraph_ComboCustomizationTrophyWI, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000040, "Member 'ComboCustomizationTrophyWI_C_ExecuteUbergraph_ComboCustomizationTrophyWI::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(ComboCustomizationTrophyWI_C_ExecuteUbergraph_ComboCustomizationTrophyWI, CallFunc_Add_VectorVector_ReturnValue) == 0x000048, "Member 'ComboCustomizationTrophyWI_C_ExecuteUbergraph_ComboCustomizationTrophyWI::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(ComboCustomizationTrophyWI_C_ExecuteUbergraph_ComboCustomizationTrophyWI, CallFunc_ProjectWorldToScreen_ScreenPosition) == 0x000054, "Member 'ComboCustomizationTrophyWI_C_ExecuteUbergraph_ComboCustomizationTrophyWI::CallFunc_ProjectWorldToScreen_ScreenPosition' has a wrong offset!");
static_assert(offsetof(ComboCustomizationTrophyWI_C_ExecuteUbergraph_ComboCustomizationTrophyWI, CallFunc_ProjectWorldToScreen_ReturnValue) == 0x00005C, "Member 'ComboCustomizationTrophyWI_C_ExecuteUbergraph_ComboCustomizationTrophyWI::CallFunc_ProjectWorldToScreen_ReturnValue' has a wrong offset!");
static_assert(offsetof(ComboCustomizationTrophyWI_C_ExecuteUbergraph_ComboCustomizationTrophyWI, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'ComboCustomizationTrophyWI_C_ExecuteUbergraph_ComboCustomizationTrophyWI::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ComboCustomizationTrophyWI_C_ExecuteUbergraph_ComboCustomizationTrophyWI, CallFunc_Multiply_Vector2DFloat_ReturnValue) == 0x000064, "Member 'ComboCustomizationTrophyWI_C_ExecuteUbergraph_ComboCustomizationTrophyWI::CallFunc_Multiply_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ComboCustomizationTrophyWI_C_ExecuteUbergraph_ComboCustomizationTrophyWI, CallFunc_Greater_IntInt_ReturnValue) == 0x00006C, "Member 'ComboCustomizationTrophyWI_C_ExecuteUbergraph_ComboCustomizationTrophyWI::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ComboCustomizationTrophyWI_C_ExecuteUbergraph_ComboCustomizationTrophyWI, CallFunc_Array_Length_ReturnValue_1) == 0x000070, "Member 'ComboCustomizationTrophyWI_C_ExecuteUbergraph_ComboCustomizationTrophyWI::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ComboCustomizationTrophyWI_C_ExecuteUbergraph_ComboCustomizationTrophyWI, CallFunc_Add_IntInt_ReturnValue) == 0x000074, "Member 'ComboCustomizationTrophyWI_C_ExecuteUbergraph_ComboCustomizationTrophyWI::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ComboCustomizationTrophyWI_C_ExecuteUbergraph_ComboCustomizationTrophyWI, Temp_int_Variable_1) == 0x000078, "Member 'ComboCustomizationTrophyWI_C_ExecuteUbergraph_ComboCustomizationTrophyWI::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(ComboCustomizationTrophyWI_C_ExecuteUbergraph_ComboCustomizationTrophyWI, CallFunc_Less_IntInt_ReturnValue) == 0x00007C, "Member 'ComboCustomizationTrophyWI_C_ExecuteUbergraph_ComboCustomizationTrophyWI::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ComboCustomizationTrophyWI_C_ExecuteUbergraph_ComboCustomizationTrophyWI, CallFunc_GetPlayerController_ReturnValue_1) == 0x000080, "Member 'ComboCustomizationTrophyWI_C_ExecuteUbergraph_ComboCustomizationTrophyWI::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ComboCustomizationTrophyWI_C_ExecuteUbergraph_ComboCustomizationTrophyWI, CallFunc_GetComponentByClass_ReturnValue) == 0x000088, "Member 'ComboCustomizationTrophyWI_C_ExecuteUbergraph_ComboCustomizationTrophyWI::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");

// Function ComboCustomizationTrophyWI.ComboCustomizationTrophyWI_C.GetTrophyDTRowFromIndex
// 0x00C8 (0x00C8 - 0x0000)
struct ComboCustomizationTrophyWI_C_GetTrophyDTRowFromIndex final
{
public:
	int32                                         Index_0;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFCTAchievement*                        Achievement;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NotFound;                                          // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTrophyStruct                          Out_Row;                                           // 0x0018(0x0038)(Parm, OutParm, HasGetValueTypeHash)
	TArray<class FString>                         CallFunc_Map_Keys_Keys;                            // 0x0050(0x0010)(ReferenceParm)
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFCTAchievement*                        CallFunc_Map_Find_Value;                           // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTrophyStruct                          CallFunc_GetDataTableRowFromName_OutRow;           // 0x0088(0x0038)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ComboCustomizationTrophyWI_C_GetTrophyDTRowFromIndex) == 0x000008, "Wrong alignment on ComboCustomizationTrophyWI_C_GetTrophyDTRowFromIndex");
static_assert(sizeof(ComboCustomizationTrophyWI_C_GetTrophyDTRowFromIndex) == 0x0000C8, "Wrong size on ComboCustomizationTrophyWI_C_GetTrophyDTRowFromIndex");
static_assert(offsetof(ComboCustomizationTrophyWI_C_GetTrophyDTRowFromIndex, Index_0) == 0x000000, "Member 'ComboCustomizationTrophyWI_C_GetTrophyDTRowFromIndex::Index_0' has a wrong offset!");
static_assert(offsetof(ComboCustomizationTrophyWI_C_GetTrophyDTRowFromIndex, Achievement) == 0x000008, "Member 'ComboCustomizationTrophyWI_C_GetTrophyDTRowFromIndex::Achievement' has a wrong offset!");
static_assert(offsetof(ComboCustomizationTrophyWI_C_GetTrophyDTRowFromIndex, NotFound) == 0x000010, "Member 'ComboCustomizationTrophyWI_C_GetTrophyDTRowFromIndex::NotFound' has a wrong offset!");
static_assert(offsetof(ComboCustomizationTrophyWI_C_GetTrophyDTRowFromIndex, Out_Row) == 0x000018, "Member 'ComboCustomizationTrophyWI_C_GetTrophyDTRowFromIndex::Out_Row' has a wrong offset!");
static_assert(offsetof(ComboCustomizationTrophyWI_C_GetTrophyDTRowFromIndex, CallFunc_Map_Keys_Keys) == 0x000050, "Member 'ComboCustomizationTrophyWI_C_GetTrophyDTRowFromIndex::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(ComboCustomizationTrophyWI_C_GetTrophyDTRowFromIndex, CallFunc_Array_Get_Item) == 0x000060, "Member 'ComboCustomizationTrophyWI_C_GetTrophyDTRowFromIndex::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ComboCustomizationTrophyWI_C_GetTrophyDTRowFromIndex, CallFunc_Conv_StringToName_ReturnValue) == 0x000070, "Member 'ComboCustomizationTrophyWI_C_GetTrophyDTRowFromIndex::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ComboCustomizationTrophyWI_C_GetTrophyDTRowFromIndex, CallFunc_Map_Find_Value) == 0x000078, "Member 'ComboCustomizationTrophyWI_C_GetTrophyDTRowFromIndex::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(ComboCustomizationTrophyWI_C_GetTrophyDTRowFromIndex, CallFunc_Map_Find_ReturnValue) == 0x000080, "Member 'ComboCustomizationTrophyWI_C_GetTrophyDTRowFromIndex::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(ComboCustomizationTrophyWI_C_GetTrophyDTRowFromIndex, CallFunc_GetDataTableRowFromName_OutRow) == 0x000088, "Member 'ComboCustomizationTrophyWI_C_GetTrophyDTRowFromIndex::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(ComboCustomizationTrophyWI_C_GetTrophyDTRowFromIndex, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000C0, "Member 'ComboCustomizationTrophyWI_C_GetTrophyDTRowFromIndex::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");

// Function ComboCustomizationTrophyWI.ComboCustomizationTrophyWI_C.Initialize From Record
// 0x0010 (0x0010 - 0x0000)
struct ComboCustomizationTrophyWI_C_Initialize_From_Record final
{
public:
	TArray<struct FCloudTrophy>                   TrophyList;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(ComboCustomizationTrophyWI_C_Initialize_From_Record) == 0x000008, "Wrong alignment on ComboCustomizationTrophyWI_C_Initialize_From_Record");
static_assert(sizeof(ComboCustomizationTrophyWI_C_Initialize_From_Record) == 0x000010, "Wrong size on ComboCustomizationTrophyWI_C_Initialize_From_Record");
static_assert(offsetof(ComboCustomizationTrophyWI_C_Initialize_From_Record, TrophyList) == 0x000000, "Member 'ComboCustomizationTrophyWI_C_Initialize_From_Record::TrophyList' has a wrong offset!");

// Function ComboCustomizationTrophyWI.ComboCustomizationTrophyWI_C.DisplayNextTrophy
// 0x0088 (0x0088 - 0x0000)
struct ComboCustomizationTrophyWI_C_DisplayNextTrophy final
{
public:
	struct FCloudTrophy                           Trophy;                                            // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0040(0x0018)()
	class UAkComponent*                           CallFunc_SpawnAkComponentAtLocation_ReturnValue;   // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0068(0x0018)()
	bool                                          CallFunc_SetStaticMesh_ReturnValue;                // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ComboCustomizationTrophyWI_C_DisplayNextTrophy) == 0x000008, "Wrong alignment on ComboCustomizationTrophyWI_C_DisplayNextTrophy");
static_assert(sizeof(ComboCustomizationTrophyWI_C_DisplayNextTrophy) == 0x000088, "Wrong size on ComboCustomizationTrophyWI_C_DisplayNextTrophy");
static_assert(offsetof(ComboCustomizationTrophyWI_C_DisplayNextTrophy, Trophy) == 0x000000, "Member 'ComboCustomizationTrophyWI_C_DisplayNextTrophy::Trophy' has a wrong offset!");
static_assert(offsetof(ComboCustomizationTrophyWI_C_DisplayNextTrophy, CallFunc_Conv_StringToText_ReturnValue) == 0x000040, "Member 'ComboCustomizationTrophyWI_C_DisplayNextTrophy::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ComboCustomizationTrophyWI_C_DisplayNextTrophy, CallFunc_SpawnAkComponentAtLocation_ReturnValue) == 0x000058, "Member 'ComboCustomizationTrophyWI_C_DisplayNextTrophy::CallFunc_SpawnAkComponentAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ComboCustomizationTrophyWI_C_DisplayNextTrophy, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000060, "Member 'ComboCustomizationTrophyWI_C_DisplayNextTrophy::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(ComboCustomizationTrophyWI_C_DisplayNextTrophy, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000068, "Member 'ComboCustomizationTrophyWI_C_DisplayNextTrophy::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ComboCustomizationTrophyWI_C_DisplayNextTrophy, CallFunc_SetStaticMesh_ReturnValue) == 0x000080, "Member 'ComboCustomizationTrophyWI_C_DisplayNextTrophy::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");

// Function ComboCustomizationTrophyWI.ComboCustomizationTrophyWI_C.Get Current Trophy
// 0x0048 (0x0048 - 0x0000)
struct ComboCustomizationTrophyWI_C_Get_Current_Trophy final
{
public:
	int32                                         TrophyIndex_0;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCloudTrophy                           OutTrophy;                                         // 0x0008(0x0040)(Parm, OutParm)
};
static_assert(alignof(ComboCustomizationTrophyWI_C_Get_Current_Trophy) == 0x000008, "Wrong alignment on ComboCustomizationTrophyWI_C_Get_Current_Trophy");
static_assert(sizeof(ComboCustomizationTrophyWI_C_Get_Current_Trophy) == 0x000048, "Wrong size on ComboCustomizationTrophyWI_C_Get_Current_Trophy");
static_assert(offsetof(ComboCustomizationTrophyWI_C_Get_Current_Trophy, TrophyIndex_0) == 0x000000, "Member 'ComboCustomizationTrophyWI_C_Get_Current_Trophy::TrophyIndex_0' has a wrong offset!");
static_assert(offsetof(ComboCustomizationTrophyWI_C_Get_Current_Trophy, OutTrophy) == 0x000008, "Member 'ComboCustomizationTrophyWI_C_Get_Current_Trophy::OutTrophy' has a wrong offset!");

// Function ComboCustomizationTrophyWI.ComboCustomizationTrophyWI_C.SetCurrentTrophyUI
// 0x0038 (0x0038 - 0x0000)
struct ComboCustomizationTrophyWI_C_SetCurrentTrophyUI final
{
public:
	class ATrophyBaseBP_C*                        Trophy;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0008(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0020(0x0018)()
};
static_assert(alignof(ComboCustomizationTrophyWI_C_SetCurrentTrophyUI) == 0x000008, "Wrong alignment on ComboCustomizationTrophyWI_C_SetCurrentTrophyUI");
static_assert(sizeof(ComboCustomizationTrophyWI_C_SetCurrentTrophyUI) == 0x000038, "Wrong size on ComboCustomizationTrophyWI_C_SetCurrentTrophyUI");
static_assert(offsetof(ComboCustomizationTrophyWI_C_SetCurrentTrophyUI, Trophy) == 0x000000, "Member 'ComboCustomizationTrophyWI_C_SetCurrentTrophyUI::Trophy' has a wrong offset!");
static_assert(offsetof(ComboCustomizationTrophyWI_C_SetCurrentTrophyUI, CallFunc_Conv_StringToText_ReturnValue) == 0x000008, "Member 'ComboCustomizationTrophyWI_C_SetCurrentTrophyUI::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ComboCustomizationTrophyWI_C_SetCurrentTrophyUI, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000020, "Member 'ComboCustomizationTrophyWI_C_SetCurrentTrophyUI::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

}
