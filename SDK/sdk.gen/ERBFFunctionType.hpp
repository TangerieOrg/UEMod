#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERBFFunctionType : uint8_t {
    Gaussian = 0,
    Exponential = 1,
    Linear = 2,
    Cubic = 3,
    Quintic = 4,
    DefaultFunction = 5,
    ERBFFunctionType_MAX = 6,
};
#pragma pack(pop)
