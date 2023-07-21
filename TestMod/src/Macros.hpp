#pragma once
#include <Mod/CppUserModBase.hpp>
#include <DynamicOutput/DynamicOutput.hpp>
#include <Unreal/UObjectGlobals.hpp>
#include <Unreal/UObject.hpp>
#include <Unreal/FFrame.hpp>
#include <UEUtils/Extensions.hpp>


#define LOG(S, ...) { Output::send<LogLevel::Normal>(STR("[TestMod] ") STR(##S) STR("\n"), __VA_ARGS__); }
#define LOG_EXPR(...) { LOG(#__VA_ARGS__ L" = {}", __VA_ARGS__); }

#define DAUTO decltype(auto)
// From UML
#define BPFUNCTION(Function) void Function(UObject* Context, Extensions::FFrameExtended* Stack, void* RESULT_DECL)

#define CALL_BPFUNCTION(Function) Function(Context, Stack, RESULT_DECL)

#define TRY_WRAP(Function) \
	[](auto... param) { \
		return TRY([&] { return Function(param...); }); \
	}

#include <string>
#include <stdexcept>
#include <format>

#define THROW_FORMAT(S, ...) { \
		auto s = std::vformat(std::wstring(L##S L"\n"), std::make_wformat_args(__VA_ARGS__)); \
		throw std::runtime_error(std::string(s.begin(), s.end())); \
	}