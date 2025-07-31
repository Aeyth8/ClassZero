#include "Hooks/Hooks.hpp"

namespace A8CL
{
namespace OFF
{
	// Basic UE Functions

	OFFSET GEngine("GEngine", 0x51AA188);
	OFFSET GWorld("GWorld", 0x51ADAE0);

	OFFSET FMalloc("FMemory::Malloc", 0x0);
	OFFSET FRealloc("FMemory::Realloc", 0x0);
	OFFSET FFree("FMemory::Free", 0x0);
	OFFSET FQuantizeSize("FMemory::QuantizeSize", 0x0);

	OFFSET FromStringTable("FText::FromStringTable", 0x0);
	OFFSET FString("FString::FString", 0x0);

	OFFSET ProcessMulticastDelegate("ProcessMulticastDelegate", 0x0);
	OFFSET LogFInternalImpl("FMsg::Logf_InternalImpl", 0x0);
	OFFSET IsNonPakFileNameAllowed("FPakPlatformFile::IsNonPakFilenameAllowed", 0x2811C30);
	OFFSET FindFileInPakFiles("FPakPlatformFile::FindFileInPakFiles", 0x280D140);
	
	OFFSET UConsole("UConsole::ConsoleCommand", 0x2F51E20);
	OFFSET Login("AGameModeBase::Login", 0x0);
	OFFSET PreLogin("AGameModeBase::PreLogin", 0x2B575F0);
	OFFSET Browse("UEngine::Browse", 0x2F24200);
	OFFSET AppPreExit("FEngineLoop::AppPreExit", 0x76DA60);
	OFFSET SpawnActor("UWorld::SpawnActor", 0x0);

	OFFSET WorldGetNetMode("UWorld::InternalGetNetMode", 0x0);
	OFFSET ActorGetNetMode("AActor::InternalGetNetMode", 0x0);
	OFFSET InitListen("UIpNetDriver::InitListen", 0x0);

	// Native Game Functions

	

	// Imported DLL Functions

}
}