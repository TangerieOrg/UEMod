#pragma once
#include <stdio.h>
#include <ExceptionHandling.hpp>
#include <DynamicOutput/DynamicOutput.hpp>
#include <Unreal/UObjectGlobals.hpp>
#include <Unreal/UObject.hpp>
#include <Unreal/Hooks.hpp>
#include <Unreal/UClass.hpp>
#include <Unreal/UFunction.hpp>
#include <Unreal/Common.hpp>
#include <Unreal/UFunctionStructs.hpp>
#include <Unreal/FFrame.hpp>

using namespace RC;
using namespace RC::Unreal;

namespace Tangerie::Debug {
	void DebugEventHook(UObject* Context, UFunction* Function, void* Parms);
	void DebugScriptCallback(UObject* Context, FFrame& Stack, void* RESULT_DECL);
	void DumpScriptWithReturn();
	void DumpScript();
}