#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EFieldFalloffType : uint8_t {
    Field_FallOff_None = 0,
    Field_Falloff_Linear = 1,
    Field_Falloff_Inverse = 2,
    Field_Falloff_Squared = 3,
    Field_Falloff_Logarithmic = 4,
    Field_Falloff_Max = 5,
    Field_MAX = 6,
};
#pragma pack(pop)
