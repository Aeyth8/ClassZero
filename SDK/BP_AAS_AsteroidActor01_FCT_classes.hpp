#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AAS_AsteroidActor01_FCT

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AAS_AsteroidActor01_FCT.BP_AAS_AsteroidActor01_FCT_C
// 0x0010 (0x0230 - 0x0220)
class ABP_AAS_AsteroidActor01_FCT_C final : public AActor
{
public:
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AAS_AsteroidActor01_FCT_C">();
	}
	static class ABP_AAS_AsteroidActor01_FCT_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AAS_AsteroidActor01_FCT_C>();
	}
};
static_assert(alignof(ABP_AAS_AsteroidActor01_FCT_C) == 0x000008, "Wrong alignment on ABP_AAS_AsteroidActor01_FCT_C");
static_assert(sizeof(ABP_AAS_AsteroidActor01_FCT_C) == 0x000230, "Wrong size on ABP_AAS_AsteroidActor01_FCT_C");
static_assert(offsetof(ABP_AAS_AsteroidActor01_FCT_C, StaticMesh) == 0x000220, "Member 'ABP_AAS_AsteroidActor01_FCT_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_AAS_AsteroidActor01_FCT_C, DefaultSceneRoot) == 0x000228, "Member 'ABP_AAS_AsteroidActor01_FCT_C::DefaultSceneRoot' has a wrong offset!");

}
