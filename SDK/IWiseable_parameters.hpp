#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IWiseable

#include "Basic.hpp"


namespace SDK::Params
{

// Function IWiseable.IWiseable_C.GetAkComponent
// 0x0008 (0x0008 - 0x0000)
struct IWiseable_C_GetAkComponent final
{
public:
	class UAkComponent*                           AkComponent;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IWiseable_C_GetAkComponent) == 0x000008, "Wrong alignment on IWiseable_C_GetAkComponent");
static_assert(sizeof(IWiseable_C_GetAkComponent) == 0x000008, "Wrong size on IWiseable_C_GetAkComponent");
static_assert(offsetof(IWiseable_C_GetAkComponent, AkComponent) == 0x000000, "Member 'IWiseable_C_GetAkComponent::AkComponent' has a wrong offset!");

}
