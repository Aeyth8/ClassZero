#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EmergencyCheckboxWI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EmergencyCheckboxWI.EmergencyCheckboxWI_C
// 0x0128 (0x0388 - 0x0260)
class UEmergencyCheckboxWI_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBorder*                                Border_128;                                        // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ToSwapUsepaddingtoscale;                     // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                            CompletedBrush;                                    // 0x0278(0x0088)(Edit, BlueprintVisible)
	struct FSlateBrush                            CompletedBrushBorder;                              // 0x0300(0x0088)(Edit, BlueprintVisible)

public:
	void ExecuteUbergraph_EmergencyCheckboxWI(int32 EntryPoint);
	void Complete();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EmergencyCheckboxWI_C">();
	}
	static class UEmergencyCheckboxWI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEmergencyCheckboxWI_C>();
	}
};
static_assert(alignof(UEmergencyCheckboxWI_C) == 0x000008, "Wrong alignment on UEmergencyCheckboxWI_C");
static_assert(sizeof(UEmergencyCheckboxWI_C) == 0x000388, "Wrong size on UEmergencyCheckboxWI_C");
static_assert(offsetof(UEmergencyCheckboxWI_C, UberGraphFrame) == 0x000260, "Member 'UEmergencyCheckboxWI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEmergencyCheckboxWI_C, Border_128) == 0x000268, "Member 'UEmergencyCheckboxWI_C::Border_128' has a wrong offset!");
static_assert(offsetof(UEmergencyCheckboxWI_C, Image_ToSwapUsepaddingtoscale) == 0x000270, "Member 'UEmergencyCheckboxWI_C::Image_ToSwapUsepaddingtoscale' has a wrong offset!");
static_assert(offsetof(UEmergencyCheckboxWI_C, CompletedBrush) == 0x000278, "Member 'UEmergencyCheckboxWI_C::CompletedBrush' has a wrong offset!");
static_assert(offsetof(UEmergencyCheckboxWI_C, CompletedBrushBorder) == 0x000300, "Member 'UEmergencyCheckboxWI_C::CompletedBrushBorder' has a wrong offset!");

}

