#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CM_MenuAreaWI

#include "Basic.hpp"


namespace SDK::Params
{

// Function CM_MenuAreaWI.CM_MenuAreaWI_C.ExecuteUbergraph_CM_MenuAreaWI
// 0x0048 (0x0048 - 0x0000)
struct CM_MenuAreaWI_C_ExecuteUbergraph_CM_MenuAreaWI final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue_1;             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(CM_MenuAreaWI_C_ExecuteUbergraph_CM_MenuAreaWI) == 0x000008, "Wrong alignment on CM_MenuAreaWI_C_ExecuteUbergraph_CM_MenuAreaWI");
static_assert(sizeof(CM_MenuAreaWI_C_ExecuteUbergraph_CM_MenuAreaWI) == 0x000048, "Wrong size on CM_MenuAreaWI_C_ExecuteUbergraph_CM_MenuAreaWI");
static_assert(offsetof(CM_MenuAreaWI_C_ExecuteUbergraph_CM_MenuAreaWI, EntryPoint) == 0x000000, "Member 'CM_MenuAreaWI_C_ExecuteUbergraph_CM_MenuAreaWI::EntryPoint' has a wrong offset!");
static_assert(offsetof(CM_MenuAreaWI_C_ExecuteUbergraph_CM_MenuAreaWI, CallFunc_GetDisplayName_ReturnValue) == 0x000008, "Member 'CM_MenuAreaWI_C_ExecuteUbergraph_CM_MenuAreaWI::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CM_MenuAreaWI_C_ExecuteUbergraph_CM_MenuAreaWI, CallFunc_GetDisplayName_ReturnValue_1) == 0x000018, "Member 'CM_MenuAreaWI_C_ExecuteUbergraph_CM_MenuAreaWI::CallFunc_GetDisplayName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CM_MenuAreaWI_C_ExecuteUbergraph_CM_MenuAreaWI, CallFunc_Concat_StrStr_ReturnValue) == 0x000028, "Member 'CM_MenuAreaWI_C_ExecuteUbergraph_CM_MenuAreaWI::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(CM_MenuAreaWI_C_ExecuteUbergraph_CM_MenuAreaWI, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000038, "Member 'CM_MenuAreaWI_C_ExecuteUbergraph_CM_MenuAreaWI::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");

}

