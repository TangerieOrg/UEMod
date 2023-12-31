#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPropertyAccessIndirectionType : uint8_t {
    Offset = 0,
    Object = 1,
    Array = 2,
    ScriptFunction = 3,
    NativeFunction = 4,
    EPropertyAccessIndirectionType_MAX = 5,
};
#pragma pack(pop)
