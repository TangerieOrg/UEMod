#pragma once
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

#include <nlohmann/json.hpp>
using json = nlohmann::json;


using namespace RC;
using namespace RC::Unreal;




#define KELLOG_ADD_JSON(r) if(j.is_array()) { \
		j.push_back(r); \
	} else{ \
		j[__Helpers::from_wstring(prop->GetName()).c_str()] = r; \
	}

#define KELLOG_TO_JSON(FType) template<> inline void ToJson(json& j, FType* prop, void* value, void* data)
#define KELLOG_TO_JSON_SIMPLE_CAST(FType, RType) KELLOG_TO_JSON(FType) { auto result = static_cast<RType*>(value); KELLOG_ADD_JSON(*result) }

namespace Kellog {

namespace __Helpers {

inline std::string from_wstring(std::wstring w) {
	return std::string(w.begin(), w.end());
}

}

template <typename T>
inline void ToJson(json& j, T* prop, void* value, void* data) {
	// Unhandelled Case => Probably best to throw an error here
}

KELLOG_TO_JSON_SIMPLE_CAST(FBoolProperty, bool)
KELLOG_TO_JSON_SIMPLE_CAST(FByteProperty, uint8_t)
KELLOG_TO_JSON_SIMPLE_CAST(FIntProperty, int32_t)
KELLOG_TO_JSON_SIMPLE_CAST(FInt64Property, int64_t)
KELLOG_TO_JSON_SIMPLE_CAST(FFloatProperty, float)
KELLOG_TO_JSON_SIMPLE_CAST(FInt8Property, int8_t)
KELLOG_TO_JSON_SIMPLE_CAST(FInt16Property, int16_t)
KELLOG_TO_JSON_SIMPLE_CAST(FUInt16Property, uint16_t)
KELLOG_TO_JSON_SIMPLE_CAST(FUInt32Property, uint32_t)
KELLOG_TO_JSON_SIMPLE_CAST(FUInt64Property, uint64_t)
KELLOG_TO_JSON_SIMPLE_CAST(FDoubleProperty, double)

KELLOG_TO_JSON(FNameProperty) {
	auto result = static_cast<Unreal::FName*>(value);
	KELLOG_ADD_JSON(result->ToString().c_str())
}

KELLOG_TO_JSON(FStrProperty) {
	auto result = static_cast<Unreal::FString*>(value);
	KELLOG_ADD_JSON(result->GetCharArray())
}

KELLOG_TO_JSON(FTextProperty) {
	auto result = static_cast<Unreal::FText*>(value);
	KELLOG_ADD_JSON(result->ToString().c_str())
}

KELLOG_TO_JSON(FEnumProperty) {
	auto result = static_cast<FEnumProperty*>(prop);
	auto ptr = result->ContainerPtrToValuePtr<int64>(data);
	auto under = result->GetUnderlyingProp();
	auto eval = under->GetSignedIntPropertyValue(ptr);
	KELLOG_ADD_JSON(eval)
}

KELLOG_TO_JSON(FStructProperty) {
	// TODO
}

KELLOG_TO_JSON(FMapProperty) {
	// TODO
}

KELLOG_TO_JSON(FSetProperty) {
	// TODO
}

KELLOG_TO_JSON(FArrayProperty) {
	// TODO
}

}

#undef KELLOG_ADD_JSON
#undef KELLOG_TO_JSON
#undef KELLOG_TO_JSON_SIMPLE_CAST