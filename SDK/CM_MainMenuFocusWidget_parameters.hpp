#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CM_MainMenuFocusWidget

#include "Basic.hpp"


namespace SDK::Params
{

// Function CM_MainMenuFocusWidget.CM_MainMenuFocusWidget_C.GetLastFocusedWidget
// 0x0008 (0x0008 - 0x0000)
struct CM_MainMenuFocusWidget_C_GetLastFocusedWidget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CM_MainMenuFocusWidget_C_GetLastFocusedWidget) == 0x000008, "Wrong alignment on CM_MainMenuFocusWidget_C_GetLastFocusedWidget");
static_assert(sizeof(CM_MainMenuFocusWidget_C_GetLastFocusedWidget) == 0x000008, "Wrong size on CM_MainMenuFocusWidget_C_GetLastFocusedWidget");
static_assert(offsetof(CM_MainMenuFocusWidget_C_GetLastFocusedWidget, ReturnValue) == 0x000000, "Member 'CM_MainMenuFocusWidget_C_GetLastFocusedWidget::ReturnValue' has a wrong offset!");

}

