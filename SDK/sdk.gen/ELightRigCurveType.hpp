#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELightRigCurveType : uint8_t {
    Absolute = 0,
    Multiply = 1,
    Add = 2,
    Minimum = 3,
    Maximum = 4,
    ELightRigCurveType_MAX = 5,
};
#pragma pack(pop)
