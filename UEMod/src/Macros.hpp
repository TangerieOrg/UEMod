#pragma once

#define MOD_NAME STR("UEMod")

#define LOG(S, ...) { Output::send<LogLevel::Normal>(STR("[") MOD_NAME STR("] ") STR(##S) STR("\n"), __VA_ARGS__); }
#define LOG_EXPR(...) { LOG(#__VA_ARGS__ L" = {}", __VA_ARGS__); }

#define DAUTO decltype(auto)
// From UML
#define BPFUNCTION(Function) void Function(UObject* Context, Extensions::FFrameExtended* Stack, void* RESULT_DECL)

#define CALL_BPFUNCTION(FunctionToCall) FunctionToCall(Context, Stack, RESULT_DECL)

#define THROW_FORMAT(S, ...) { \
		auto s = std::vformat(std::wstring(L##S L"\n"), std::make_wformat_args(__VA_ARGS__)); \
		throw std::runtime_error(std::string(s.begin(), s.end())); \
	}