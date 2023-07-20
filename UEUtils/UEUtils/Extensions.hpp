#pragma once
#include <string>
#include <Unreal/UObjectGlobals.hpp>
#include <Unreal/FProperty.hpp>
#include <Unreal/UClass.hpp>
#include <Unreal/FFrame.hpp>

using namespace RC;
using namespace RC::Unreal;

namespace Tangerie::Extensions {
struct FOutParmRecExtended : public FOutParmRec {
	FProperty* Property;
	uint8_t* PropAddr;
	FOutParmRecExtended* NextOutParm;
};


struct UBlueprintGeneratedClassExtended : public UBlueprintGeneratedClass {
	bool ExHasInterface(std::wstring const& InterfaceName);
};

struct FFrameExtended : public FFrame {
	FOutParmRecExtended* OutParms() { return reinterpret_cast<FOutParmRecExtended*>(FFrame::OutParms()); }

	template <typename T>
	T* ExGetOutParam(std::wstring const& ParamName) {
		auto CurrentOutParam = this->OutParms();
		while (CurrentOutParam && CurrentOutParam->Property) {
			if (CurrentOutParam->Property->GetName() == ParamName) {
				return reinterpret_cast<T*>(CurrentOutParam->PropAddr);
			}
			CurrentOutParam = CurrentOutParam->NextOutParm;
		}
		return nullptr;
	}

	template <typename T>
	bool ExSetOutParam(std::wstring const& ParamName, const T& NewValue) {
		auto outParam = this->ExGetOutParam<T>(ParamName);
		if (!outParam) return false;
		*outParam = NewValue;
		return true;
	}

	template<typename T>
	T* ExGetLocals() { return (T*)this->Locals(); }
};
}