#pragma once

#include <Windows.h>
#include <filesystem>
#include <iostream>
#include <fstream>

class Logger 
{
private:
	inline static std::wstring LocalPath;
	inline static std::filesystem::path LogFolderPath;
	inline static std::wstring LogFilePath;
	inline static std::wstring LogFile{L"Debug"}; // Interchangable variable that starts as the default name
	const inline static std::wstring LogFileName{L"Debug"}; // Constant strings for the default names allowing you to easily change them within the source code.
	const inline static std::wstring LogFolderName{L"Logs\\"};
	const inline static std::wstring LogFileEx{L".log"};

	inline static void LogEnum() { LogFilePath = LocalPath + LogFolderName + LogFile + LogFileEx; } // Visualization because this hurts my brain : C:\Users\You\GameFolder\GameName\Binaries\Win64\Logs\Debug.log

	
public:
	inline static std::ofstream Log; // Why is this public? In some cases it's much easier to just directly stream content over rather than using a proprietary function, but for the rest just use the function.

	inline static void Init() {
		WCHAR EXEPath[260] = { 0 };
		GetModuleFileName(0, EXEPath, 260);

		LocalPath = EXEPath;
		size_t Endline = LocalPath.find_last_of(L"\\/");

		if (Endline != std::wstring::npos) { LocalPath = LocalPath.substr(0, Endline + 1); }

		LogFolderPath = LocalPath + LogFolderName;

		std::filesystem::create_directories(LogFolderPath.parent_path());

		LogEnum();

		for (int i{0}; GetFileAttributes(LogFilePath.c_str()) != INVALID_FILE_ATTRIBUTES; ++i) {
			LogFile = LogFileName + L"-" + std::to_wstring(i);
			LogEnum();
		}

		Log.open(LogFilePath);

		/*
		
		Make a logger with folders and multiple log enums, prevent log deletion while program is active/keep in process
		
		*/
	}

	inline static void Close() { Log << "Closing log...\n"; Log.close(); }
};
