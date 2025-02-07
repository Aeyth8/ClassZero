#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UtilityControllerFunctionLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass UtilityControllerFunctionLibrary.UtilityControllerFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UUtilityControllerFunctionLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void Get_ROS_Puzzle(class UObject* __WorldContext, class UActorComponent** ROS_Puzzle_Component);
	static void Get_Modall_Window_Manager(class UObject* __WorldContext, class Ubpc_ac_ModalWindowManager_C** ModalWindowManagerComponent);
	static void GetROSController(class UObject* __WorldContext, class AActor** ROSController_Actor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UtilityControllerFunctionLibrary_C">();
	}
	static class UUtilityControllerFunctionLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUtilityControllerFunctionLibrary_C>();
	}
};
static_assert(alignof(UUtilityControllerFunctionLibrary_C) == 0x000008, "Wrong alignment on UUtilityControllerFunctionLibrary_C");
static_assert(sizeof(UUtilityControllerFunctionLibrary_C) == 0x000028, "Wrong size on UUtilityControllerFunctionLibrary_C");

}

