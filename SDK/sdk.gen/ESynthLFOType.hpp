#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESynthLFOType : uint8_t {
    Sine = 0,
    UpSaw = 1,
    DownSaw = 2,
    Square = 3,
    Triangle = 4,
    Exponential = 5,
    RandomSampleHold = 6,
    Count = 7,
    ESynthLFOType_MAX = 8,
};
#pragma pack(pop)
