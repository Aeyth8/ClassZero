#ifndef PCH_H
#define PCH_H
#ifndef COUT
#define COUT std::cout
#endif
#ifndef WCOUT
#define WCOUT std::wcout
#endif

#include <windows.h>
#include <vector>
#include <ranges>

#if defined _M_X64
#pragma comment(lib, "MinHook/libMinHook.x64.lib")
#endif

#include "UnrealContainers.hpp"
#include "SDK.hpp"
#include "PropertyFixup.hpp"
#include "MinHook/MinHook.h"
#include "Aeyth8/Structs.hpp"

#include "Aeyth8/Logger.hpp"
#include "Aeyth8/Pointers.hpp"
#include "Aeyth8/Hooks/Hooks.hpp"

#endif //PCH_H