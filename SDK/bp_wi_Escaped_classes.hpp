#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: bp_wi_Escaped

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass bp_wi_Escaped.bp_wi_Escaped_C
// 0x0030 (0x0290 - 0x0260)
class Ubp_wi_Escaped_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                       NewAnimation;                                      // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Img_line_1_bottom;                                 // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_line_1_top;                                    // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_line_2_bottom;                                 // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_line_2_top;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_bp_wi_Escaped(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"bp_wi_Escaped_C">();
	}
	static class Ubp_wi_Escaped_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<Ubp_wi_Escaped_C>();
	}
};
static_assert(alignof(Ubp_wi_Escaped_C) == 0x000008, "Wrong alignment on Ubp_wi_Escaped_C");
static_assert(sizeof(Ubp_wi_Escaped_C) == 0x000290, "Wrong size on Ubp_wi_Escaped_C");
static_assert(offsetof(Ubp_wi_Escaped_C, UberGraphFrame) == 0x000260, "Member 'Ubp_wi_Escaped_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(Ubp_wi_Escaped_C, NewAnimation) == 0x000268, "Member 'Ubp_wi_Escaped_C::NewAnimation' has a wrong offset!");
static_assert(offsetof(Ubp_wi_Escaped_C, Img_line_1_bottom) == 0x000270, "Member 'Ubp_wi_Escaped_C::Img_line_1_bottom' has a wrong offset!");
static_assert(offsetof(Ubp_wi_Escaped_C, Img_line_1_top) == 0x000278, "Member 'Ubp_wi_Escaped_C::Img_line_1_top' has a wrong offset!");
static_assert(offsetof(Ubp_wi_Escaped_C, Img_line_2_bottom) == 0x000280, "Member 'Ubp_wi_Escaped_C::Img_line_2_bottom' has a wrong offset!");
static_assert(offsetof(Ubp_wi_Escaped_C, Img_line_2_top) == 0x000288, "Member 'Ubp_wi_Escaped_C::Img_line_2_top' has a wrong offset!");

}

