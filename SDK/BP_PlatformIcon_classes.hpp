#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlatformIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_PlatformIcon.BP_PlatformIcon_C
// 0x0068 (0x02C8 - 0x0260)
class UBP_PlatformIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                 ConsoleIcon;                                       // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 EpicIcon;                                          // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 GDKIcon;                                           // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 InnerBG;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 OuterBG;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PCIcon;                                            // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        PlatformIconSwitcher;                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Playstation4Icon;                                  // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Playstation5Icon;                                  // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SteamIcon;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         Scale;                                             // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Size;                                              // 0x02BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         EditorPreviewIconIndex;                            // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_PlatformIcon(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Set_Icon(const class FString& PlatformId);
	void Set_Icon_Size_by_Scale(class UImage* Image);
	void SetIconPaddingByDefinedScale(class UWidget* Widget);
	void Set_Scale_by_Defined_Size();
	void SetXboxIcon();

	void SetEpicIcon() const;
	void SetSteamIcon() const;
	void SetPlaystation4_Icon() const;
	void SetPlaystation5_Icon() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlatformIcon_C">();
	}
	static class UBP_PlatformIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlatformIcon_C>();
	}
};
static_assert(alignof(UBP_PlatformIcon_C) == 0x000008, "Wrong alignment on UBP_PlatformIcon_C");
static_assert(sizeof(UBP_PlatformIcon_C) == 0x0002C8, "Wrong size on UBP_PlatformIcon_C");
static_assert(offsetof(UBP_PlatformIcon_C, UberGraphFrame) == 0x000260, "Member 'UBP_PlatformIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PlatformIcon_C, ConsoleIcon) == 0x000268, "Member 'UBP_PlatformIcon_C::ConsoleIcon' has a wrong offset!");
static_assert(offsetof(UBP_PlatformIcon_C, EpicIcon) == 0x000270, "Member 'UBP_PlatformIcon_C::EpicIcon' has a wrong offset!");
static_assert(offsetof(UBP_PlatformIcon_C, GDKIcon) == 0x000278, "Member 'UBP_PlatformIcon_C::GDKIcon' has a wrong offset!");
static_assert(offsetof(UBP_PlatformIcon_C, InnerBG) == 0x000280, "Member 'UBP_PlatformIcon_C::InnerBG' has a wrong offset!");
static_assert(offsetof(UBP_PlatformIcon_C, OuterBG) == 0x000288, "Member 'UBP_PlatformIcon_C::OuterBG' has a wrong offset!");
static_assert(offsetof(UBP_PlatformIcon_C, PCIcon) == 0x000290, "Member 'UBP_PlatformIcon_C::PCIcon' has a wrong offset!");
static_assert(offsetof(UBP_PlatformIcon_C, PlatformIconSwitcher) == 0x000298, "Member 'UBP_PlatformIcon_C::PlatformIconSwitcher' has a wrong offset!");
static_assert(offsetof(UBP_PlatformIcon_C, Playstation4Icon) == 0x0002A0, "Member 'UBP_PlatformIcon_C::Playstation4Icon' has a wrong offset!");
static_assert(offsetof(UBP_PlatformIcon_C, Playstation5Icon) == 0x0002A8, "Member 'UBP_PlatformIcon_C::Playstation5Icon' has a wrong offset!");
static_assert(offsetof(UBP_PlatformIcon_C, SteamIcon) == 0x0002B0, "Member 'UBP_PlatformIcon_C::SteamIcon' has a wrong offset!");
static_assert(offsetof(UBP_PlatformIcon_C, Scale) == 0x0002B8, "Member 'UBP_PlatformIcon_C::Scale' has a wrong offset!");
static_assert(offsetof(UBP_PlatformIcon_C, Size) == 0x0002BC, "Member 'UBP_PlatformIcon_C::Size' has a wrong offset!");
static_assert(offsetof(UBP_PlatformIcon_C, EditorPreviewIconIndex) == 0x0002C0, "Member 'UBP_PlatformIcon_C::EditorPreviewIconIndex' has a wrong offset!");

}

