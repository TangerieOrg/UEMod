#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EParticleUVFlipMode : uint8_t {
    None = 0,
    FlipUV = 1,
    FlipUOnly = 2,
    FlipVOnly = 3,
    RandomFlipUV = 4,
    RandomFlipUOnly = 5,
    RandomFlipVOnly = 6,
    RandomFlipUVIndependent = 7,
    EParticleUVFlipMode_MAX = 8,
};
#pragma pack(pop)
