#include "DebugHooks.hpp"
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

using namespace RC;
using namespace RC::Unreal;

#define LOG(S, ...) { Output::send<LogLevel::Normal>(STR(##S) STR("\n"), __VA_ARGS__); }

namespace Tangerie::Debug {
	// Called for /Script/**/* and /Game/**/*
	void DebugEventHook(UObject* Context, UFunction* Function, void* Parms) {
		Output::send<LogLevel::Verbose>(STR("[ProcessEvent] ({}) - {}\n"), Context->GetClassPrivate()->GetName(), Function->GetFullName());
	}
	void DebugScriptCallback(UObject* Context, FFrame& Stack, void* RESULT_DECL)
	{
		TRY([&] {
			Output::send<LogLevel::Verbose>(STR("[LocalScript] ({}) - {}\n"), Context->GetClassPrivate()->GetName(), Stack.Node()->GetFullName());
		});
	}

	void dumpScript(UObject* Context, FFrame& Stack, void* RESULT_DECL) {
		TRY([&] {
			auto node = Stack.Node();
			LOG("=== {} ===", node->GetFullName());

			for (decltype(auto) param : node->ForEachProperty()) {
				LOG("	{} {}", param->GetClass().GetName(), param->GetName());
			}
			
		});
	}

	

	void dumpScriptWithReturn(UObject* Context, FFrame& Stack, void* RESULT_DECL) {
		TRY([&] {
			auto node = Stack.Node();

			decltype(auto) ret = node->GetReturnProperty();

			if (ret == nullptr) return;

			LOG("=== {} ===", node->GetFullName());

			for (decltype(auto) param : node->ForEachProperty()) {
				LOG("	{} {}", param->GetClass().GetName(), param->GetName());
			};
			

			LOG("	RETURN {}", ret->GetClass().GetName());
		});
	}

	void DumpScriptWithReturn() {
		Hook::RegisterProcessLocalScriptFunctionPostCallback(&dumpScriptWithReturn);
	}

	void DumpScript() {
		Hook::RegisterProcessLocalScriptFunctionPostCallback(&dumpScript);
	}
}