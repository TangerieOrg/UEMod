#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGfeSDKHighlightSignificance : uint8_t {
    NONE = 0,
    ExtremelyBad = 1,
    VeryBad = 2,
    Bad = 4,
    Neutral = 8,
    Good = 16,
    VeryGood = 32,
    ExtremelyGood = 64,
    MAX = 128,
};
#pragma pack(pop)
