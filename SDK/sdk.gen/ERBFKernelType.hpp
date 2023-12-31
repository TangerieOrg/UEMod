#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERBFKernelType : uint8_t {
    Gaussian = 0,
    Exponential = 1,
    Linear = 2,
    Cubic = 3,
    Quintic = 4,
    ERBFKernelType_MAX = 5,
};
#pragma pack(pop)
