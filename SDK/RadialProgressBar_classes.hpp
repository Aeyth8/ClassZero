#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RadialProgressBar

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass RadialProgressBar.RadialProgressBar_C
// 0x0070 (0x02D0 - 0x0260)
class URadialProgressBar_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                 RadialImage;                                       // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateColor                            Background_Color;                                  // 0x0270(0x0028)(Edit, BlueprintVisible)
	class UMaterialInstanceDynamic*               Material;                                          // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            Primary_Color;                                     // 0x02A0(0x0028)(Edit, BlueprintVisible)
	float                                         Percentage;                                        // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_RadialProgressBar(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetPercentage(float Percentage_0);
	void SetBackgroundColor(const struct FSlateColor& Color);
	void CreateMaterial();
	void SetPrimaryColor(const struct FSlateColor& Color);
	void GetMaterial(class UMaterialInstanceDynamic** Material_0);

	void GetBackgroundColor(struct FSlateColor* Color) const;
	void GetPrimaryColor(struct FSlateColor* Color) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RadialProgressBar_C">();
	}
	static class URadialProgressBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URadialProgressBar_C>();
	}
};
static_assert(alignof(URadialProgressBar_C) == 0x000008, "Wrong alignment on URadialProgressBar_C");
static_assert(sizeof(URadialProgressBar_C) == 0x0002D0, "Wrong size on URadialProgressBar_C");
static_assert(offsetof(URadialProgressBar_C, UberGraphFrame) == 0x000260, "Member 'URadialProgressBar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(URadialProgressBar_C, RadialImage) == 0x000268, "Member 'URadialProgressBar_C::RadialImage' has a wrong offset!");
static_assert(offsetof(URadialProgressBar_C, Background_Color) == 0x000270, "Member 'URadialProgressBar_C::Background_Color' has a wrong offset!");
static_assert(offsetof(URadialProgressBar_C, Material) == 0x000298, "Member 'URadialProgressBar_C::Material' has a wrong offset!");
static_assert(offsetof(URadialProgressBar_C, Primary_Color) == 0x0002A0, "Member 'URadialProgressBar_C::Primary_Color' has a wrong offset!");
static_assert(offsetof(URadialProgressBar_C, Percentage) == 0x0002C8, "Member 'URadialProgressBar_C::Percentage' has a wrong offset!");

}

