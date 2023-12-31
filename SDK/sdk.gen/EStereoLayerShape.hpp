#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EStereoLayerShape : uint8_t {
    SLSH_QuadLayer = 0,
    SLSH_CylinderLayer = 1,
    SLSH_CubemapLayer = 2,
    SLSH_EquirectLayer = 3,
    SLSH_MAX = 4,
};
#pragma pack(pop)
