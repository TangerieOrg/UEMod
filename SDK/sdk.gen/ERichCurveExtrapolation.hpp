#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ERichCurveExtrapolation : uint8_t {
    RCCE_Cycle = 0,
    RCCE_CycleWithOffset = 1,
    RCCE_Oscillate = 2,
    RCCE_Linear = 3,
    RCCE_Constant = 4,
    RCCE_None = 5,
    RCCE_MAX = 6,
};
#pragma pack(pop)
