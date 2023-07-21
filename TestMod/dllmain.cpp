#include <Windows.h>
#include <Mod/CppUserModBase.hpp>
#include <DynamicOutput/DynamicOutput.hpp>

using namespace RC;

HMODULE hMod;
std::wstring ModDLLDirectory;
HMODULE my_mod_dll = NULL;
BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH: case DLL_THREAD_ATTACH: case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	hMod = hModule;
	const int BUFSIZE = 4096;
	wchar_t buffer[BUFSIZE];
	if (::GetModuleFileNameW(hMod, buffer, BUFSIZE - 1) <= 0)
	{
		return TRUE;
	}

	std::wstring PathAndName = buffer;

	size_t found = PathAndName.find_last_of(L"/\\");
	ModDLLDirectory = PathAndName.substr(0, found);

	AddDllDirectory(ModDLLDirectory.c_str());

	auto my_mod_dll_path = ModDLLDirectory + L"\\TestMod.dll";

	my_mod_dll = LoadLibraryW(my_mod_dll_path.c_str());

	/*
	m_start_mod_func = reinterpret_cast<start_type>(GetProcAddress(m_main_dll_module, "start_mod"));
    m_uninstall_mod_func = reinterpret_cast<uninstall_type>(GetProcAddress(m_main_dll_module, "uninstall_mod"));
	*/

	return TRUE;
}

typedef CppUserModBase* (*start_type)();
typedef void (*uninstall_type)(CppUserModBase*);

#define MY_AWESOME_MOD_API __declspec(dllexport)
extern "C"
{
	MY_AWESOME_MOD_API RC::CppUserModBase* start_mod()
	{
		RC::Output::send(
			STR("TestModLoader Started [{}]\n"),
			ModDLLDirectory
		);

		return reinterpret_cast<start_type>(GetProcAddress(my_mod_dll, "start_mod"))();
	}

	MY_AWESOME_MOD_API void uninstall_mod(RC::CppUserModBase* mod)
	{
		return reinterpret_cast<uninstall_type>(GetProcAddress(my_mod_dll, "uninstall_mod"))(mod);
	}
}


