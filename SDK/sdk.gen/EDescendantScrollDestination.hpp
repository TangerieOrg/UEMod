#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDescendantScrollDestination : uint8_t {
    IntoView = 0,
    TopOrLeft = 1,
    Center = 2,
    BottomOrRight = 3,
    EDescendantScrollDestination_MAX = 4,
};
#pragma pack(pop)
