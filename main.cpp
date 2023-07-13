#include <stdio.h>
#include <string>
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
#include "Util/Extensions.hpp"

using namespace RC;
using namespace RC::Unreal;

namespace Tangerie {
using namespace Extensions;

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

		auto params = Stack->ExGetLocals<Params>();

		LOG("NameInput = {}", params->NameInput.ToString());

		Stack->ExSetOutParam(STR("NameOutput"), FName(STR("Updated Name")));
		Stack->ExSetOutParam(STR("BoolOutput"), true);
	}

	static BPFUNCTION(PrintToModLoader) {
		struct Params {
			FString Message;
		};

		auto params = Stack->ExGetLocals<Params>();

		LOG("[{}] {}", Context->GetClassPrivate()->GetName(), params->Message.GetCharArray());
	}

	// Lua was Script Hook
	// LuaMod::m_script_hook_callbacks
	static BPFUNCTION(TestFunctionStuff) {
		decltype(auto) node = Stack->Node();

		struct Params {
			bool BoolInput;
			FName NameInput;
		};

		auto params = Stack->ExGetLocals<Params>();

		LOG("[HeyImATest] \"{}\"", params->NameInput.ToString());
		for (decltype(auto) param : node->ForEachProperty()) {
			LOG("	{} {}", param->GetClass().GetName(), param->GetName());
		}

		decltype(auto) prop = node->FindProperty(FName(STR("NameOutput")));
		if (!prop) return;
		LOG("Output = {}", prop->ContainerPtrToValuePtr<FName>(Stack->Locals())->ToString());

	}


	static void HandleLocalPre(UObject* Context, FFrame& _Stack, void* RESULT_DECL) {
		decltype(auto) Stack = reinterpret_cast<FFrameExtended*>(&_Stack);
		auto fn = Stack->Node();
		auto nodeName = fn->GetName();
		if (nodeName != STR("HeyImATest")) return;
		LOG("Pre Exec HeyImATest");

		uint8_t* script_def = fn->GetScript().GetData();
		auto code_size = fn->GetScript().Num();

		LOG("Size = {}", code_size);
		LOG("Code = {}", (void*)Stack->Code());
		auto t = std::bit_cast<FFrame_50_AndBelow*>(&Stack);
		// TODO => Change to inserting a EX_Jump after params are read
		// Bytes are EX_JUMP, uint32_t
		// Stack->Code = &Stack->Node->Script[Offset];
		t->Code += code_size - 3;
		LOG("Data = {}", (void*)script_def);
		LOG("Code = {}", (void*)Stack->Code());
		CALL_BPFUNCTION(HeyImATest);
	}

	static void HandleLocalPost(UObject* Context, FFrame& _Stack, void* RESULT_DECL) {
		FFrameExtended* Stack = reinterpret_cast<FFrameExtended*>(&_Stack);
		auto nodeName = Stack->Node()->GetName();
		//if (nodeName == STR("PrintToModLoader")) PrintToModLoader(Context, Stack, RESULT_DECL);
		if (nodeName == STR("PrintToModLoader")) CALL_BPFUNCTION(PrintToModLoader);
		/*if (nodeName == STR("HeyImATest")) {
			auto fn = Stack->Node();
			uint8_t* script_def = fn->GetScript().GetData();
			auto code_size = fn->GetScript().Num();
			size_t index = Stack->Code() - fn->GetScript().GetData() - 1;
			LOG("Size = {}", code_size);
			LOG("Code = {}", (void*)Stack->Code());
			LOG("Data = {}", (void*)script_def);
		}*/

		if (nodeName == STR("SomeInterfaceFunction")) {
			auto BPGen = Context->GetClassPrivate();
			for (auto interf : BPGen->GetInterfaces()) {
				if (interf.Class->GetName() == STR("CPPTestInterface_C")) {
					LOG("Found Matching Function");
					Stack->ExSetOutParam(STR("StringOutput"), FString(STR("Modded Out")));
				}
			}

		}
	}

	static void HandlePostConstruct(const FStaticConstructObjectParameters& Params, UObject* ConstructedObject) {
		UClass* classPrivate = ConstructedObject->GetClassPrivate();
		if (!classPrivate) return;
		if (classPrivate->IsA<UBlueprintGeneratedClass>()) {
			auto BPGen = reinterpret_cast<UBlueprintGeneratedClassExtended*>(classPrivate);
			if (BPGen->ExHasInterface(L"CPPTestInterface_C")) {
				LOG("Found Matching Class With Ex | {}", classPrivate->GetFullName());
			}
			
		}
		return;

		// Functions
		if (false && ConstructedObject->GetClassPrivate()->GetFullName() == STR("Class /Script/CoreUObject.Function")) {
			LOG("=== FUNCTION ===");
			LOG_EXPR(ConstructedObject->GetFullName());
			LOG_EXPR(ConstructedObject->GetClassPrivate()->GetFullName());
			LOG_EXPR(ConstructedObject->GetOuterPrivate()->GetFullName());
			LOG_EXPR(ConstructedObject->GetOuterPrivate()->GetClassPrivate()->GetFullName());
		}
		
		if (ConstructedObject->GetClassPrivate()->GetFullName() == STR("Class /Script/Engine.BlueprintGeneratedClass")) {
			if (ConstructedObject->GetName() == STR("CPPTestInterface_C")) {
				LOG("=== CPPTestInterface_C ===");
				LOG_EXPR(ConstructedObject->GetFullName());
			}
		}
	}


	void on_unreal_init() override {
		//Hook::RegisterProcessLocalScriptFunctionPreCallback(TRY_WRAP(HandleLocalPre));
		Hook::RegisterProcessLocalScriptFunctionPostCallback(TRY_WRAP(HandleLocalPost));
		
		Hook::RegisterStaticConstructObjectPostCallback([](const FStaticConstructObjectParameters& Params, UObject* ConstructedObject) {
			TRY_WRAP(HandlePostConstruct)(Params, ConstructedObject);
			return ConstructedObject;
		});
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
		return new Tangerie::TestMod();
	}

	MY_AWESOME_MOD_API void uninstall_mod(RC::CppUserModBase* mod)
	{
		delete mod;
	}
}
