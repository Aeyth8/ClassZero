#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_Karma

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct S_Karma.S_Karma
// 0x0028 (0x0028 - 0x0000)
struct FS_Karma final
{
public:
	int32                                         KarmaPointsPersonoid_2_7DB8E40A4A9DA677CB0E0FBD3FFA7DAA; // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         KarmaPointsResident_5_57EEB1A64AB2FF8A304E9EA460EF8120; // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Description_7_3790087344DB53187B38308AE5AEB3CA;    // 0x0008(0x0018)(Edit, BlueprintVisible)
	bool                                          Implemented_9_09D1944D4D9D30B9329F65B86D0C52BA;    // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FS_Karma) == 0x000008, "Wrong alignment on FS_Karma");
static_assert(sizeof(FS_Karma) == 0x000028, "Wrong size on FS_Karma");
static_assert(offsetof(FS_Karma, KarmaPointsPersonoid_2_7DB8E40A4A9DA677CB0E0FBD3FFA7DAA) == 0x000000, "Member 'FS_Karma::KarmaPointsPersonoid_2_7DB8E40A4A9DA677CB0E0FBD3FFA7DAA' has a wrong offset!");
static_assert(offsetof(FS_Karma, KarmaPointsResident_5_57EEB1A64AB2FF8A304E9EA460EF8120) == 0x000004, "Member 'FS_Karma::KarmaPointsResident_5_57EEB1A64AB2FF8A304E9EA460EF8120' has a wrong offset!");
static_assert(offsetof(FS_Karma, Description_7_3790087344DB53187B38308AE5AEB3CA) == 0x000008, "Member 'FS_Karma::Description_7_3790087344DB53187B38308AE5AEB3CA' has a wrong offset!");
static_assert(offsetof(FS_Karma, Implemented_9_09D1944D4D9D30B9329F65B86D0C52BA) == 0x000020, "Member 'FS_Karma::Implemented_9_09D1944D4D9D30B9329F65B86D0C52BA' has a wrong offset!");

}
