#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECameraShakeAttenuation : uint8_t {
    Linear = 0,
    Quadratic = 1,
    ECameraShakeAttenuation_MAX = 2,
};
#pragma pack(pop)
