#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EReflectionsType : uint8_t {
    ScreenSpace = 0,
    RayTracing = 1,
    EReflectionsType_MAX = 2,
};
#pragma pack(pop)
