#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TemplateSequence

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct TemplateSequence.TemplateSequenceBindingOverrideData
// 0x000C (0x000C - 0x0000)
struct FTemplateSequenceBindingOverrideData final
{
public:
	TWeakObjectPtr<class UObject>                 Object;                                            // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOverridesDefault;                                 // 0x0008(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FTemplateSequenceBindingOverrideData) == 0x000004, "Wrong alignment on FTemplateSequenceBindingOverrideData");
static_assert(sizeof(FTemplateSequenceBindingOverrideData) == 0x00000C, "Wrong size on FTemplateSequenceBindingOverrideData");
static_assert(offsetof(FTemplateSequenceBindingOverrideData, Object) == 0x000000, "Member 'FTemplateSequenceBindingOverrideData::Object' has a wrong offset!");
static_assert(offsetof(FTemplateSequenceBindingOverrideData, bOverridesDefault) == 0x000008, "Member 'FTemplateSequenceBindingOverrideData::bOverridesDefault' has a wrong offset!");

}
