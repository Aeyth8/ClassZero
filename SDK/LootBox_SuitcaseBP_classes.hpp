#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LootBox_SuitcaseBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "LooBoxBP_classes.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass LootBox_SuitcaseBP.LootBox_SuitcaseBP_C
// 0x0028 (0x0360 - 0x0338)
class ALootBox_SuitcaseBP_C final : public ALooBoxBP_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_LootBox_SuitcaseBP_C;               // 0x0338(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               ParticleSystem;                                    // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SuitcaseLid;                                       // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UMaterialInterface*                     LidNonInteractable;                                // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Lid_Open_Rotation_Offset;                          // 0x0358(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_LootBox_SuitcaseBP(int32 EntryPoint);
	void OpenStart_Cosmetic();
	void OpenUpdate_Cosmetic(float Alpha);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LootBox_SuitcaseBP_C">();
	}
	static class ALootBox_SuitcaseBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALootBox_SuitcaseBP_C>();
	}
};
static_assert(alignof(ALootBox_SuitcaseBP_C) == 0x000008, "Wrong alignment on ALootBox_SuitcaseBP_C");
static_assert(sizeof(ALootBox_SuitcaseBP_C) == 0x000360, "Wrong size on ALootBox_SuitcaseBP_C");
static_assert(offsetof(ALootBox_SuitcaseBP_C, UberGraphFrame_LootBox_SuitcaseBP_C) == 0x000338, "Member 'ALootBox_SuitcaseBP_C::UberGraphFrame_LootBox_SuitcaseBP_C' has a wrong offset!");
static_assert(offsetof(ALootBox_SuitcaseBP_C, ParticleSystem) == 0x000340, "Member 'ALootBox_SuitcaseBP_C::ParticleSystem' has a wrong offset!");
static_assert(offsetof(ALootBox_SuitcaseBP_C, SuitcaseLid) == 0x000348, "Member 'ALootBox_SuitcaseBP_C::SuitcaseLid' has a wrong offset!");
static_assert(offsetof(ALootBox_SuitcaseBP_C, LidNonInteractable) == 0x000350, "Member 'ALootBox_SuitcaseBP_C::LidNonInteractable' has a wrong offset!");
static_assert(offsetof(ALootBox_SuitcaseBP_C, Lid_Open_Rotation_Offset) == 0x000358, "Member 'ALootBox_SuitcaseBP_C::Lid_Open_Rotation_Offset' has a wrong offset!");

}

