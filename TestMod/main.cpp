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
#include <ExceptionHandling.hpp>
#include "Macros.hpp"
#include "Util/Kismet.hpp"
#include <UEUtils/Extensions.hpp>

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

	static void HandleLocalPre(UObject* Context, FFrame& _Stack, void* RESULT_DECL) {
		decltype(auto) Stack = reinterpret_cast<FFrameExtended*>(&_Stack);
		auto fn = Stack->Node();
		auto nodeName = fn->GetName();

		if (nodeName != STR("SomeInterfaceFunction")) return;
		LOG("=== Pre Out Params ===");
		auto CurrentOutParam = Stack->OutParms();
		while (CurrentOutParam && CurrentOutParam->Property) {
			LOG("    - {}", CurrentOutParam->Property->GetName());
			CurrentOutParam = CurrentOutParam->NextOutParm;
		}
	}

	static void HandleLocalPost(UObject* Context, FFrame& _Stack, void* RESULT_DECL) {
		FFrameExtended* Stack = reinterpret_cast<FFrameExtended*>(&_Stack);
		auto nodeName = Stack->Node()->GetName();
		if (nodeName == STR("PrintToModLoader")) CALL_BPFUNCTION(PrintToModLoader);
		
		if (Context->GetClassPrivate()->IsA<UBlueprintGeneratedClass>()) {
			auto BPGen = reinterpret_cast<UBlueprintGeneratedClassExtended*>(Context->GetClassPrivate());
			if (nodeName == STR("SomeInterfaceFunction")) {
				if (BPGen->ExHasInterface(STR("CPPTestInterface_C"))) {
					struct Param {
						FString StringInput;
					};

					LOG("Input = {}", Stack->ExGetLocals<Param>()->StringInput.GetCharArray());
					Stack->ExSetOutParam(STR("StringOutput"), FString(STR("Modded Out")));
				}
				LOG("=== Post Out Params ===");
				auto CurrentOutParam = Stack->OutParms();
				while (CurrentOutParam && CurrentOutParam->Property) {
					LOG("    - {}", CurrentOutParam->Property->GetName());
					CurrentOutParam = CurrentOutParam->NextOutParm;
				}
			}
		}
	}

	/*
	EX_Return
	EX_Nothing
	EX_EndOfScript
	*/

	static void HandlePostConstruct(const FStaticConstructObjectParameters& Params, UObject* ConstructedObject) {
		UClass* classPrivate = ConstructedObject->GetClassPrivate();
		if (!classPrivate) return;
		if (classPrivate->IsA<UBlueprintGeneratedClass>()) {
			auto BPGen = reinterpret_cast<UBlueprintGeneratedClassExtended*>(classPrivate);
			if (BPGen->ExHasInterface(L"CPPTestInterface_C")) {
				LOG("Found Matching Class With Ex | {}", classPrivate->GetFullName());

				for (auto fn : BPGen->ForEachFunction()) {
					LOG("    - {}", fn->GetName());
					if (false && fn->GetName() == STR("SomeInterfaceFunction")) {
						uint8_t* script_def = fn->GetScript().GetData();
						//fn->GetScript().SetNum(3);
						LOG("I = {}", Util::expr_to_string((EExprToken)*script_def));
						// Might cause issues due to alignment
						script_def[0] = EX_Return;
						script_def[1] = EX_Nothing;
						script_def[2] = EX_EndOfScript;
					}
				}
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
			//TRY_WRAP(HandlePostConstruct)(Params, ConstructedObject);
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
