#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PersonoidMainMenuSCTBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass PersonoidMainMenuSCTBP.PersonoidMainMenuSCTBP_C
// 0x0068 (0x0310 - 0x02A8)
class APersonoidMainMenuSCTBP_C final : public ASkeletalMeshActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAkComponent*                           Ak;                                                // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Hair;                                              // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Body;                                              // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Hat;                                               // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 HumanBody;                                         // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                         Lerp_Percent_FC890CD946BF71342D482DA731409C64;     // 0x02D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Lerp__Direction_FC890CD946BF71342D482DA731409C64;  // 0x02DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                         Pad_2DD[0x3];                                      // 0x02DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Lerp;                                              // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>       DynamicMaterials;                                  // 0x02E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UTexture*                               SkinMask;                                          // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TransformDuration;                                 // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TransformPauseMin;                                 // 0x0304(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TransformPauseMax;                                 // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_PersonoidMainMenuSCTBP(int32 EntryPoint);
	void Audio_Transform(bool Reverse);
	void ReceiveBeginPlay();
	void Lerp__UpdateFunc();
	void Lerp__FinishedFunc();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PersonoidMainMenuSCTBP_C">();
	}
	static class APersonoidMainMenuSCTBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APersonoidMainMenuSCTBP_C>();
	}
};
static_assert(alignof(APersonoidMainMenuSCTBP_C) == 0x000008, "Wrong alignment on APersonoidMainMenuSCTBP_C");
static_assert(sizeof(APersonoidMainMenuSCTBP_C) == 0x000310, "Wrong size on APersonoidMainMenuSCTBP_C");
static_assert(offsetof(APersonoidMainMenuSCTBP_C, UberGraphFrame) == 0x0002A8, "Member 'APersonoidMainMenuSCTBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(APersonoidMainMenuSCTBP_C, Ak) == 0x0002B0, "Member 'APersonoidMainMenuSCTBP_C::Ak' has a wrong offset!");
static_assert(offsetof(APersonoidMainMenuSCTBP_C, Hair) == 0x0002B8, "Member 'APersonoidMainMenuSCTBP_C::Hair' has a wrong offset!");
static_assert(offsetof(APersonoidMainMenuSCTBP_C, Body) == 0x0002C0, "Member 'APersonoidMainMenuSCTBP_C::Body' has a wrong offset!");
static_assert(offsetof(APersonoidMainMenuSCTBP_C, Hat) == 0x0002C8, "Member 'APersonoidMainMenuSCTBP_C::Hat' has a wrong offset!");
static_assert(offsetof(APersonoidMainMenuSCTBP_C, HumanBody) == 0x0002D0, "Member 'APersonoidMainMenuSCTBP_C::HumanBody' has a wrong offset!");
static_assert(offsetof(APersonoidMainMenuSCTBP_C, Lerp_Percent_FC890CD946BF71342D482DA731409C64) == 0x0002D8, "Member 'APersonoidMainMenuSCTBP_C::Lerp_Percent_FC890CD946BF71342D482DA731409C64' has a wrong offset!");
static_assert(offsetof(APersonoidMainMenuSCTBP_C, Lerp__Direction_FC890CD946BF71342D482DA731409C64) == 0x0002DC, "Member 'APersonoidMainMenuSCTBP_C::Lerp__Direction_FC890CD946BF71342D482DA731409C64' has a wrong offset!");
static_assert(offsetof(APersonoidMainMenuSCTBP_C, Lerp) == 0x0002E0, "Member 'APersonoidMainMenuSCTBP_C::Lerp' has a wrong offset!");
static_assert(offsetof(APersonoidMainMenuSCTBP_C, DynamicMaterials) == 0x0002E8, "Member 'APersonoidMainMenuSCTBP_C::DynamicMaterials' has a wrong offset!");
static_assert(offsetof(APersonoidMainMenuSCTBP_C, SkinMask) == 0x0002F8, "Member 'APersonoidMainMenuSCTBP_C::SkinMask' has a wrong offset!");
static_assert(offsetof(APersonoidMainMenuSCTBP_C, TransformDuration) == 0x000300, "Member 'APersonoidMainMenuSCTBP_C::TransformDuration' has a wrong offset!");
static_assert(offsetof(APersonoidMainMenuSCTBP_C, TransformPauseMin) == 0x000304, "Member 'APersonoidMainMenuSCTBP_C::TransformPauseMin' has a wrong offset!");
static_assert(offsetof(APersonoidMainMenuSCTBP_C, TransformPauseMax) == 0x000308, "Member 'APersonoidMainMenuSCTBP_C::TransformPauseMax' has a wrong offset!");

}

