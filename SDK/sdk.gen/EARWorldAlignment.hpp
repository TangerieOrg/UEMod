#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EARWorldAlignment : uint8_t {
    Gravity = 0,
    GravityAndHeading = 1,
    Camera = 2,
    EARWorldAlignment_MAX = 3,
};
#pragma pack(pop)
