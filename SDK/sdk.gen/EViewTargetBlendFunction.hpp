#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EViewTargetBlendFunction : uint8_t {
    VTBlend_Linear = 0,
    VTBlend_Cubic = 1,
    VTBlend_EaseIn = 2,
    VTBlend_EaseOut = 3,
    VTBlend_EaseInOut = 4,
    VTBlend_PreBlended = 5,
    VTBlend_MAX = 6,
};
#pragma pack(pop)
