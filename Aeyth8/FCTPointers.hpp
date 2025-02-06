#pragma once
#include "../pch.h"

class FCT
{
public:

	inline static SDK::UFCTGameInstanceBP_C* Instance;


	inline static SDK::AHumanoidCharacter* Humanoid() { return static_cast<SDK::AHumanoidCharacter*>(Player0()->Character); };



};