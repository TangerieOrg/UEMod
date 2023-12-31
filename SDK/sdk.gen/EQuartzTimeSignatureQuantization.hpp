#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EQuartzTimeSignatureQuantization : uint8_t {
    HalfNote = 0,
    QuarterNote = 1,
    EighthNote = 2,
    SixteenthNote = 3,
    ThirtySecondNote = 4,
    Count = 5,
    EQuartzTimeSignatureQuantization_MAX = 6,
};
#pragma pack(pop)
