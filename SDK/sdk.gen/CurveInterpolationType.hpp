#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class CurveInterpolationType : uint8_t {
    AUTOINTERP = 0,
    LINEAR = 1,
    CONSTANT = 2,
    CurveInterpolationType_MAX = 3,
};
#pragma pack(pop)
