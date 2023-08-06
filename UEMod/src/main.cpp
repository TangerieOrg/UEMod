#include <string>
#include <Helpers/String.hpp>
#include <ExceptionHandling.hpp>
#include <DynamicOutput/Output.hpp>
#include <DynamicOutput/DynamicOutput.hpp>
#include <Unreal/UObjectGlobals.hpp>
#include <Unreal/UObjectArray.hpp>
#include <Unreal/UFunction.hpp>
#include <Unreal/UPackage.hpp>
#include <Unreal/UObject.hpp>
#include <Unreal/UClass.hpp>
#include <Unreal/FFrame.hpp>
#include <Unreal/FField.hpp>
#include <Unreal/AActor.hpp>
#include <Unreal/Hooks.hpp>


#include <Unreal/Property/NumericPropertyTypes.hpp>
#include <Unreal/Property/FStructProperty.hpp>
#include <Unreal/Property/FBoolProperty.hpp>
#include <Unreal/Property/FNameProperty.hpp>
#include <Unreal/Property/FTextProperty.hpp>
#include <Unreal/Property/FEnumProperty.hpp> 
#include <Unreal/Property/FStrProperty.hpp>

#include <Unreal/Property/FArrayProperty.hpp>
#include <Unreal/Property/FMapProperty.hpp>
#include <Unreal/Property/FSetProperty.hpp>

#include <Unreal/UScriptStruct.hpp>
#include <Unreal/FScriptArray.hpp>
#include <Unreal/UEnum.hpp>
#include <Mod/CppUserModBase.hpp>
#include <UEUtils/Extensions.hpp>
#include "Macros.hpp"
#include <Kellog/FProperty.hpp>
//#include "Util/Kismet.hpp"

using namespace RC;
using namespace RC::Unreal;

#define KELLOG_BEGIN_IMPL(StructName, counter) struct StructName { \
	template<int o> struct __internal : __internal<o - 1> {}; \
	struct __meta { \
		constexpr static int Start = counter; \
	}; \
	template<> struct __internal<counter> { \
		constexpr static int N = 0; \
		constexpr static const wchar_t* Name = L#StructName; \
	};
#define KELLOG_BEGIN(StructName) KELLOG_BEGIN_IMPL(StructName, __COUNTER__)


#define KELLOG_FIELD_IMPL(Type, Name, counter) template<> struct __internal<counter> { \
		constexpr static int N = __internal<counter - 1>::N + 1; \
		constexpr static const wchar_t* Name = L#Name; \
	};
#define KELLOG_FIELD(Type, Name) KELLOG_FIELD_IMPL(Type, Name, __COUNTER__)


#define KELLOG_END_IMPL(counter) constexpr static int __numFields = __internal<counter>::N; \
	};
#define KELLOG_END() KELLOG_END_IMPL(__COUNTER__)

namespace Tangerie {
	using namespace Extensions;

	KELLOG_BEGIN(TestPacketStruct)
		KELLOG_FIELD(FString, StringProperty)
	KELLOG_END()

	KELLOG_BEGIN(OtherPacketStruct)
		KELLOG_FIELD(FString, StringProperty)
	KELLOG_END()

class UEMod : public CppUserModBase
{
public:
	UEMod() : CppUserModBase()
	{
		ModName = MOD_NAME;
		ModVersion = STR("1.0");
		ModDescription = STR("This is my awesome mod");
		ModAuthors = STR("Tangerie");
	}

	~UEMod()
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
		//auto test_prop = Stack->ExGetOutFProperty

		LOG("[{}] {}", Context->GetClassPrivate()->GetName(), params->Message.GetCharArray());
	}

	static BPFUNCTION(FillFromBytes) {
		struct Params {
			FString Bytes;
		};

		auto bytesToParse = Stack->ExGetLocals<Params>()->Bytes;

		// Parse and fill properties
	}

	static BPFUNCTION(ToBytes) {
		auto outBytes = FString(STR("aabbcc"));

		Stack->ExSetOutParam(STR("Out"), outBytes);
	}

	static BPFUNCTION(SomeInterfaceFunction) {
		struct Param {
			FString StringInput;
		};

		LOG("=== [BEGIN] SomeInterfaceFunction ===");
		LOG("Input = {}", Stack->ExGetLocals<Param>()->StringInput.GetCharArray());
		Stack->ExSetOutParam(STR("StringOutput"), FString(STR("Modded Out")));

		FProperty* nameOut = Stack->ExGetOutFProperty<FProperty>(STR("StringOutput"));
		LOG("Prop Name = {}", nameOut->GetName());
		/*auto ar = FArchive();
		nameOut->Serialize(ar);
		LOG("Archive [{}]", ar.GetSerializedProperty()->GetName());*/
		LOG("=== [END] SomeInterfaceFunction ===");
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
					SomeInterfaceFunction(Context, Stack, RESULT_DECL);
				}
				/*LOG("=== Post Out Params ===");
				auto CurrentOutParam = Stack->OutParms();
				while (CurrentOutParam && CurrentOutParam->Property) {
					LOG("    - {}", CurrentOutParam->Property->GetName());
					CurrentOutParam = CurrentOutParam->NextOutParm;
				}*/
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
			//if (BPGen->ExHasInterface(L"CPPTestInterface_C")) {
			//	LOG("Found Matching Class With Ex | {}", classPrivate->GetFullName());

			//	for (auto fn : BPGen->ForEachFunction()) {
			//		LOG("    - {}", fn->GetName());
			//		if (false && fn->GetName() == STR("SomeInterfaceFunction")) {
			//			uint8_t* script_def = fn->GetScript().GetData();
			//			//fn->GetScript().SetNum(3);
			//			LOG("I = {}", Util::expr_to_string((EExprToken)*script_def));
			//			// Might cause issues due to alignment
			//			script_def[0] = EX_Return;
			//			script_def[1] = EX_Nothing;
			//			script_def[2] = EX_EndOfScript;
			//		}
			//	}
			//}
			
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
		//Hook::RegisterProcessLocalScriptFunctionPostCallback(HandleLocalPost);
		//LOG_EXPR(TestPacketStruct::__numFields);
		LOG("Initialized");
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
		return new Tangerie::UEMod();
	}

	MY_AWESOME_MOD_API void uninstall_mod(RC::CppUserModBase* mod)
	{
		delete mod;
	}
}