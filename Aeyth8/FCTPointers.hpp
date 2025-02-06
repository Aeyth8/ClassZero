#pragma once
#include "../pch.h"

class FCT
{
public:

	inline static SDK::UFCTGameInstanceBP_C* Instance;


	inline static SDK::ACharacterSCTBP_C* Humanoid() { return static_cast<SDK::ACharacterSCTBP_C*>(Player0()->Character); };

	inline static void Ragdoll() { Humanoid()->Hit_By_Champagne_Bottle(2.0f); }
	inline static void UnRagdoll() { Humanoid()->Become_Conscious(true); }
	inline static void Burning() { Humanoid()->HitByFire(0); }
	inline static void Skiing() { Humanoid()->Toggle_Ice_Gliding(true); }
};

class A8CL
{
private:
	inline static std::string ParseCache{""};
	inline static std::vector<std::string> CommandParameters;


public:
	struct CommandStructure { const std::string Command; const std::vector<std::string> Parameters = {}; void(*Function)(); };
	inline static CommandStructure Commands[] =
	{
		{"ragdoll", {}, &FCT::Ragdoll},
		{"unragdoll", {}, &FCT::UnRagdoll},
		{"burn", {}, &FCT::Burning},
		{"ski", {}, &FCT::Skiing},
	};


	// Function used to parse custom console commands.
	inline static bool Parse(const std::string& Input) {
		CommandParameters.clear();
		ParseCache.clear();

		// Gets the first space, separating the command from the parameters.
		int CommandSpace = Input.find_first_of(" ");

		// Parses the rest of the string after the first space as parameters.
		for (char Parameters : Input.substr(CommandSpace + 1)) {
			if (Parameters != ' ') {
				ParseCache.push_back(Parameters); // Every space is a different parameter.
				continue;
			}
			CommandParameters.push_back(ParseCache);
			ParseCache.clear();
			
		}

		// Process the last parameter manually due to faulty logic and my brain is static right now.
		if (!ParseCache.empty()) CommandParameters.push_back(ParseCache);

		
		// Parses the first word as a command, and checks if it is valid.
		for (int i{0}; i < std::size(Commands); ++i) {
			if (Input.substr(0, CommandSpace) == Commands[i].Command) {
				Commands[i].Function();
				return true;
			}
		}
		
		return false;
	}


};