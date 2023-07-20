#pragma once
#include <string>
#include <Unreal/Script.hpp>

namespace Tangerie::Util {

inline std::wstring expr_to_string(RC::Unreal::EExprToken expr) {
	switch (expr)
	{
#define TANGERIE_X(Name, Value) case RC::Unreal::Name: return L#Name;
		#include "EExprToken.body.hpp"
#undef TANGERIE_X
	}
	return L"unknown";
}

}