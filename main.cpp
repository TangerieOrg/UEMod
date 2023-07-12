#include <stdio.h>
#include <Mod/CppUserModBase.hpp>
#include <DynamicOutput/DynamicOutput.hpp>
#include <Unreal/UObjectGlobals.hpp>
#include <Unreal/UObject.hpp>
#include <Unreal/Hooks.hpp>
#include <Unreal/UClass.hpp>
#include <Unreal/UFunction.hpp>
#include <Unreal/Common.hpp>
#include <Unreal/UFunctionStructs.hpp>
#include <Unreal/FFrame.hpp>
#include <Unreal/FString.hpp>
#include <Unreal/FText.hpp>
#include <Unreal/FProperty.hpp>
#include <Constructs/Loop.hpp>
#include "Debug/DebugHooks.hpp"
#include "Macros.hpp"
#include "Util/Kismet.hpp"

using namespace RC;
using namespace RC::Unreal;


namespace Tangerie {

	template <class T> void SetReturnParameter(Unreal::FOutParmRec* OutParms, const wchar_t* ParamName, const T& NewValue) {
		// ensure FOutParmRec has expected properties
		struct FOutParmRecExtended : Unreal::FOutParmRec {
			Unreal::FProperty* Property;
			Unreal::uint8* PropAddr;
			Unreal::FOutParmRec* NextOutParm;
		};
		// iterate over outparms to set the deired param's pointer's value to newvalue
		auto CurrentOutParam = reinterpret_cast<FOutParmRecExtended*>(OutParms);
		while (CurrentOutParam && CurrentOutParam->Property) {
			// make sure that we only edit the correct property
			if (CurrentOutParam->Property->GetName() == ParamName) {
				// cast CurrentOutParam to NewValue's T and set the value
				*reinterpret_cast<T*>(CurrentOutParam->PropAddr) = NewValue;
			}
			// set CurrentOutParam for the next iteration / or stop the loop if nullptr
			CurrentOutParam = reinterpret_cast<FOutParmRecExtended*>(CurrentOutParam->NextOutParm);
		}
	}

class TestMod : public CppUserModBase
{
public:
	TestMod() : CppUserModBase()
	{
		ModName = STR("TestMod");
		ModVersion = STR("1.0");
		ModDescription = STR("This is my awesome mod");
		ModAuthors = STR("Tangerie");
	}

	~TestMod()
	{
	}

	static BPFUNCTION(HeyImATest) {
		LOG("YAY!!!!!!!");
		struct Params {
			bool BoolInput;
			FName NameInput;
		};

		auto params = (Params*)(Stack.Locals());

		LOG("NameInput = {}", params->NameInput.ToString());

		SetReturnParameter(Stack.OutParms(), L"NameOutput", FName(STR("Updated Name")));
		SetReturnParameter(Stack.OutParms(), L"BoolOutput", true);
	}

	static BPFUNCTION(PrintToModLoader) {
		auto node = Stack.Node();

		struct Params {
			FString Message;
		};

		decltype(auto) params = (Params*)(Stack.Locals());

		LOG("[LOG] {}", params->Message.GetCharArray());
	}

	// Lua was Script Hook
	// LuaMod::m_script_hook_callbacks
	static BPFUNCTION(TestFunctionStuff) {
		decltype(auto) node = Stack.Node();

		struct Params {
			bool BoolInput;
			FName NameInput;
		};

		decltype(auto) params = (Params*)(Stack.Locals());

		LOG("[HeyImATest] \"{}\"", params->NameInput.ToString());
		for (decltype(auto) param : node->ForEachProperty()) {
			LOG("	{} {}", param->GetClass().GetName(), param->GetName());
		}

		decltype(auto) prop = node->FindProperty(FName(STR("NameOutput")));
		if (!prop) return;
		LOG("Output = {}", prop->ContainerPtrToValuePtr<FName>(Stack.Locals())->ToString());

	}


	static BPFUNCTION(HandleLocalPre) {
		auto fn = Stack.Node();
		auto nodeName = fn->GetName();
		if (nodeName != STR("HeyImATest")) return;
		LOG("Pre Exec HeyImATest");

		uint8_t* script_def = fn->GetScript().GetData();
		auto code_size = fn->GetScript().Num();

		LOG("Size = {}", code_size);
		LOG("Code = {}", (void*)Stack.Code());
		auto t = std::bit_cast<FFrame_50_AndBelow*>(&Stack);
		// TODO => Change to inserting a EX_Jump after params are read
		// Bytes are EX_JUMP, uint32_t
		// Stack.Code = &Stack.Node->Script[Offset];
		t->Code += code_size - 3;
		LOG("Data = {}", (void*)script_def);
		LOG("Code = {}", (void*)Stack.Code());
		CALL_BPFUNCTION(HeyImATest);
	}

	static BPFUNCTION(HandleLocalPost) {
		auto nodeName = Stack.Node()->GetName();
		//if (nodeName == STR("PrintToModLoader")) PrintToModLoader(Context, Stack, RESULT_DECL);
		if (nodeName == STR("PrintToModLoader")) CALL_BPFUNCTION(PrintToModLoader);
		if (nodeName == STR("HeyImATest")) {
			auto fn = Stack.Node();
			uint8_t* script_def = fn->GetScript().GetData();
			auto code_size = fn->GetScript().Num();
			size_t index = Stack.Code() - fn->GetScript().GetData() - 1;
			LOG("Size = {}", code_size);
			LOG("Code = {}", (void*)Stack.Code());
			LOG("Data = {}", (void*)script_def);
		}
	}



	void on_unreal_init() override {
		Hook::RegisterProcessLocalScriptFunctionPostCallback(TRY_WRAP(HandleLocalPost));
		Hook::RegisterProcessLocalScriptFunctionPreCallback(TRY_WRAP(HandleLocalPre));
	}



	auto on_program_start() -> void override {
	}

	auto on_update() -> void override
	{
	}
};


}


#define MY_AWESOME_MOD_API __declspec(dllexport)
extern "C"
{
	MY_AWESOME_MOD_API RC::CppUserModBase* start_mod()
	{
		Output::send<LogLevel::Warning>(L"Test Mod Installed\n");
		return new Tangerie::TestMod();
	}

	MY_AWESOME_MOD_API void uninstall_mod(RC::CppUserModBase* mod)
	{
		Output::send<LogLevel::Warning>(L"Test Mod Uninstalled\n");
		delete mod;
	}
}
