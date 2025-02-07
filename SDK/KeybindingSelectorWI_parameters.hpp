#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KeybindingSelectorWI

#include "Basic.hpp"

#include "Slate_structs.hpp"
#include "SCT_structs.hpp"


namespace SDK::Params
{

// Function KeybindingSelectorWI.KeybindingSelectorWI_C.ExecuteUbergraph_KeybindingSelectorWI
// 0x0050 (0x0050 - 0x0000)
struct KeybindingSelectorWI_C_ExecuteUbergraph_KeybindingSelectorWI final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInputChord                            K2Node_Event_chord;                                // 0x0008(0x0020)(ConstParm, HasGetValueTypeHash)
	struct FInputChord                            K2Node_Event_chord_1;                              // 0x0028(0x0020)(ConstParm, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_GetGamepadIcon_ReturnValue;               // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeybindingSelectorWI_C_ExecuteUbergraph_KeybindingSelectorWI) == 0x000008, "Wrong alignment on KeybindingSelectorWI_C_ExecuteUbergraph_KeybindingSelectorWI");
static_assert(sizeof(KeybindingSelectorWI_C_ExecuteUbergraph_KeybindingSelectorWI) == 0x000050, "Wrong size on KeybindingSelectorWI_C_ExecuteUbergraph_KeybindingSelectorWI");
static_assert(offsetof(KeybindingSelectorWI_C_ExecuteUbergraph_KeybindingSelectorWI, EntryPoint) == 0x000000, "Member 'KeybindingSelectorWI_C_ExecuteUbergraph_KeybindingSelectorWI::EntryPoint' has a wrong offset!");
static_assert(offsetof(KeybindingSelectorWI_C_ExecuteUbergraph_KeybindingSelectorWI, K2Node_Event_chord) == 0x000008, "Member 'KeybindingSelectorWI_C_ExecuteUbergraph_KeybindingSelectorWI::K2Node_Event_chord' has a wrong offset!");
static_assert(offsetof(KeybindingSelectorWI_C_ExecuteUbergraph_KeybindingSelectorWI, K2Node_Event_chord_1) == 0x000028, "Member 'KeybindingSelectorWI_C_ExecuteUbergraph_KeybindingSelectorWI::K2Node_Event_chord_1' has a wrong offset!");
static_assert(offsetof(KeybindingSelectorWI_C_ExecuteUbergraph_KeybindingSelectorWI, CallFunc_GetGamepadIcon_ReturnValue) == 0x000048, "Member 'KeybindingSelectorWI_C_ExecuteUbergraph_KeybindingSelectorWI::CallFunc_GetGamepadIcon_ReturnValue' has a wrong offset!");

// Function KeybindingSelectorWI.KeybindingSelectorWI_C.SetKeyboardStyle
// 0x0020 (0x0020 - 0x0000)
struct KeybindingSelectorWI_C_SetKeyboardStyle final
{
public:
	struct FInputChord                            Chord;                                             // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};
static_assert(alignof(KeybindingSelectorWI_C_SetKeyboardStyle) == 0x000008, "Wrong alignment on KeybindingSelectorWI_C_SetKeyboardStyle");
static_assert(sizeof(KeybindingSelectorWI_C_SetKeyboardStyle) == 0x000020, "Wrong size on KeybindingSelectorWI_C_SetKeyboardStyle");
static_assert(offsetof(KeybindingSelectorWI_C_SetKeyboardStyle, Chord) == 0x000000, "Member 'KeybindingSelectorWI_C_SetKeyboardStyle::Chord' has a wrong offset!");

// Function KeybindingSelectorWI.KeybindingSelectorWI_C.SetGamepadStyle
// 0x0020 (0x0020 - 0x0000)
struct KeybindingSelectorWI_C_SetGamepadStyle final
{
public:
	struct FInputChord                            Chord;                                             // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};
static_assert(alignof(KeybindingSelectorWI_C_SetGamepadStyle) == 0x000008, "Wrong alignment on KeybindingSelectorWI_C_SetGamepadStyle");
static_assert(sizeof(KeybindingSelectorWI_C_SetGamepadStyle) == 0x000020, "Wrong size on KeybindingSelectorWI_C_SetGamepadStyle");
static_assert(offsetof(KeybindingSelectorWI_C_SetGamepadStyle, Chord) == 0x000000, "Member 'KeybindingSelectorWI_C_SetGamepadStyle::Chord' has a wrong offset!");

// Function KeybindingSelectorWI.KeybindingSelectorWI_C.GetGamepadIcon
// 0x0048 (0x0048 - 0x0000)
struct KeybindingSelectorWI_C_GetGamepadIcon final
{
public:
	struct FInputChord                            InputChord;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)
	class UTexture2D*                             ReturnValue;                                       // 0x0020(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USCTGameInstance*                       K2Node_DynamicCast_AsSCTGame_Instance;             // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESCTControllerType                            CallFunc_GetLastControllerType_ReturnValue;        // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A[0x6];                                       // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_GetControllerIconForKey_ReturnValue;      // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeybindingSelectorWI_C_GetGamepadIcon) == 0x000008, "Wrong alignment on KeybindingSelectorWI_C_GetGamepadIcon");
static_assert(sizeof(KeybindingSelectorWI_C_GetGamepadIcon) == 0x000048, "Wrong size on KeybindingSelectorWI_C_GetGamepadIcon");
static_assert(offsetof(KeybindingSelectorWI_C_GetGamepadIcon, InputChord) == 0x000000, "Member 'KeybindingSelectorWI_C_GetGamepadIcon::InputChord' has a wrong offset!");
static_assert(offsetof(KeybindingSelectorWI_C_GetGamepadIcon, ReturnValue) == 0x000020, "Member 'KeybindingSelectorWI_C_GetGamepadIcon::ReturnValue' has a wrong offset!");
static_assert(offsetof(KeybindingSelectorWI_C_GetGamepadIcon, CallFunc_GetGameInstance_ReturnValue) == 0x000028, "Member 'KeybindingSelectorWI_C_GetGamepadIcon::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeybindingSelectorWI_C_GetGamepadIcon, K2Node_DynamicCast_AsSCTGame_Instance) == 0x000030, "Member 'KeybindingSelectorWI_C_GetGamepadIcon::K2Node_DynamicCast_AsSCTGame_Instance' has a wrong offset!");
static_assert(offsetof(KeybindingSelectorWI_C_GetGamepadIcon, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'KeybindingSelectorWI_C_GetGamepadIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(KeybindingSelectorWI_C_GetGamepadIcon, CallFunc_GetLastControllerType_ReturnValue) == 0x000039, "Member 'KeybindingSelectorWI_C_GetGamepadIcon::CallFunc_GetLastControllerType_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeybindingSelectorWI_C_GetGamepadIcon, CallFunc_GetControllerIconForKey_ReturnValue) == 0x000040, "Member 'KeybindingSelectorWI_C_GetGamepadIcon::CallFunc_GetControllerIconForKey_ReturnValue' has a wrong offset!");

}

