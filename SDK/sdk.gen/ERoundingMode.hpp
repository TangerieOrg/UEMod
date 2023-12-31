#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ERoundingMode : uint8_t {
    HalfToEven = 0,
    HalfFromZero = 1,
    HalfToZero = 2,
    FromZero = 3,
    ToZero = 4,
    ToNegativeInfinity = 5,
    ToPositiveInfinity = 6,
    ERoundingMode_MAX = 7,
};
#pragma pack(pop)
