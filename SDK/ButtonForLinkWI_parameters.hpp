#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ButtonForLinkWI

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function ButtonForLinkWI.ButtonForLinkWI_C.ExecuteUbergraph_ButtonForLinkWI
// 0x0010 (0x0010 - 0x0000)
struct ButtonForLinkWI_C_ExecuteUbergraph_ButtonForLinkWI final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkComponent*                           CallFunc_SpawnAkComponentAtLocation_ReturnValue;   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ButtonForLinkWI_C_ExecuteUbergraph_ButtonForLinkWI) == 0x000008, "Wrong alignment on ButtonForLinkWI_C_ExecuteUbergraph_ButtonForLinkWI");
static_assert(sizeof(ButtonForLinkWI_C_ExecuteUbergraph_ButtonForLinkWI) == 0x000010, "Wrong size on ButtonForLinkWI_C_ExecuteUbergraph_ButtonForLinkWI");
static_assert(offsetof(ButtonForLinkWI_C_ExecuteUbergraph_ButtonForLinkWI, EntryPoint) == 0x000000, "Member 'ButtonForLinkWI_C_ExecuteUbergraph_ButtonForLinkWI::EntryPoint' has a wrong offset!");
static_assert(offsetof(ButtonForLinkWI_C_ExecuteUbergraph_ButtonForLinkWI, K2Node_Event_IsDesignTime) == 0x000004, "Member 'ButtonForLinkWI_C_ExecuteUbergraph_ButtonForLinkWI::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ButtonForLinkWI_C_ExecuteUbergraph_ButtonForLinkWI, CallFunc_SpawnAkComponentAtLocation_ReturnValue) == 0x000008, "Member 'ButtonForLinkWI_C_ExecuteUbergraph_ButtonForLinkWI::CallFunc_SpawnAkComponentAtLocation_ReturnValue' has a wrong offset!");

// Function ButtonForLinkWI.ButtonForLinkWI_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct ButtonForLinkWI_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ButtonForLinkWI_C_PreConstruct) == 0x000001, "Wrong alignment on ButtonForLinkWI_C_PreConstruct");
static_assert(sizeof(ButtonForLinkWI_C_PreConstruct) == 0x000001, "Wrong size on ButtonForLinkWI_C_PreConstruct");
static_assert(offsetof(ButtonForLinkWI_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ButtonForLinkWI_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function ButtonForLinkWI.ButtonForLinkWI_C.GetNavigationWidget
// 0x0008 (0x0008 - 0x0000)
struct ButtonForLinkWI_C_GetNavigationWidget final
{
public:
	class UWidget*                                NavigationWidget;                                  // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ButtonForLinkWI_C_GetNavigationWidget) == 0x000008, "Wrong alignment on ButtonForLinkWI_C_GetNavigationWidget");
static_assert(sizeof(ButtonForLinkWI_C_GetNavigationWidget) == 0x000008, "Wrong size on ButtonForLinkWI_C_GetNavigationWidget");
static_assert(offsetof(ButtonForLinkWI_C_GetNavigationWidget, NavigationWidget) == 0x000000, "Member 'ButtonForLinkWI_C_GetNavigationWidget::NavigationWidget' has a wrong offset!");

// Function ButtonForLinkWI.ButtonForLinkWI_C.SetNavigationForDirection
// 0x0010 (0x0010 - 0x0000)
struct ButtonForLinkWI_C_SetNavigationForDirection final
{
public:
	EUINavigation                                 Direction;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                WidgetTarget;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ButtonForLinkWI_C_SetNavigationForDirection) == 0x000008, "Wrong alignment on ButtonForLinkWI_C_SetNavigationForDirection");
static_assert(sizeof(ButtonForLinkWI_C_SetNavigationForDirection) == 0x000010, "Wrong size on ButtonForLinkWI_C_SetNavigationForDirection");
static_assert(offsetof(ButtonForLinkWI_C_SetNavigationForDirection, Direction) == 0x000000, "Member 'ButtonForLinkWI_C_SetNavigationForDirection::Direction' has a wrong offset!");
static_assert(offsetof(ButtonForLinkWI_C_SetNavigationForDirection, WidgetTarget) == 0x000008, "Member 'ButtonForLinkWI_C_SetNavigationForDirection::WidgetTarget' has a wrong offset!");

// Function ButtonForLinkWI.ButtonForLinkWI_C.SetIsFocusable
// 0x0001 (0x0001 - 0x0000)
struct ButtonForLinkWI_C_SetIsFocusable final
{
public:
	bool                                          IsFocusable;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ButtonForLinkWI_C_SetIsFocusable) == 0x000001, "Wrong alignment on ButtonForLinkWI_C_SetIsFocusable");
static_assert(sizeof(ButtonForLinkWI_C_SetIsFocusable) == 0x000001, "Wrong size on ButtonForLinkWI_C_SetIsFocusable");
static_assert(offsetof(ButtonForLinkWI_C_SetIsFocusable, IsFocusable) == 0x000000, "Member 'ButtonForLinkWI_C_SetIsFocusable::IsFocusable' has a wrong offset!");

}
