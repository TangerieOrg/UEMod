#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EWalkableSlopeBehavior : uint8_t {
    WalkableSlope_Default = 0,
    WalkableSlope_Increase = 1,
    WalkableSlope_Decrease = 2,
    WalkableSlope_Unwalkable = 3,
    WalkableSlope_Max = 4,
};
#pragma pack(pop)
