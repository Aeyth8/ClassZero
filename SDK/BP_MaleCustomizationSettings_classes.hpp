#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MaleCustomizationSettings

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SCT_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MaleCustomizationSettings.BP_MaleCustomizationSettings_C
// 0x0018 (0x02F8 - 0x02E0)
class ABP_MaleCustomizationSettings_C final : public ACustomizationOptions
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UTexture2D*                             MaskVariable;                                      // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_MaleCustomizationSettings(int32 EntryPoint);
	void K2_CreateCharacterSkinToneOptions();
	void K2_CreateEntitlementsLists();
	void K2_CreateEyeColorOptions();
	void K2_CreateCharacterPresetOptions();
	void K2_CreateFeetAppearanceOptions();
	void K2_CreateLegsAppearanceOptions();
	void K2_CreateBodyAppearanceOptions();
	void K2_CreateHeadAppearanceOptions();
	void OnSuccess_0E05AA02441F7BF6F1EA47B03D3D39B5(const struct FAccelByteModelsEntitlementPagingSlicedResult& Entitlements, int32 Code, const class FString& Message);
	void OnFail_0E05AA02441F7BF6F1EA47B03D3D39B5(int32 Code, const class FString& Message);
	void AddAppearancePreset(const TMap<class FString, float>& MorphTargets);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MaleCustomizationSettings_C">();
	}
	static class ABP_MaleCustomizationSettings_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MaleCustomizationSettings_C>();
	}
};
static_assert(alignof(ABP_MaleCustomizationSettings_C) == 0x000008, "Wrong alignment on ABP_MaleCustomizationSettings_C");
static_assert(sizeof(ABP_MaleCustomizationSettings_C) == 0x0002F8, "Wrong size on ABP_MaleCustomizationSettings_C");
static_assert(offsetof(ABP_MaleCustomizationSettings_C, UberGraphFrame) == 0x0002E0, "Member 'ABP_MaleCustomizationSettings_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_MaleCustomizationSettings_C, DefaultSceneRoot) == 0x0002E8, "Member 'ABP_MaleCustomizationSettings_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_MaleCustomizationSettings_C, MaskVariable) == 0x0002F0, "Member 'ABP_MaleCustomizationSettings_C::MaskVariable' has a wrong offset!");

}
