#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FHairCardsTextureSettings {
    int32_t AtlasMaxResolution; // 0x0
    int32_t PixelPerCentimeters; // 0x4
    int32_t LengthTextureCount; // 0x8
    int32_t DensityTextureCount; // 0xc
}; // Size: 0x10
#pragma pack(pop)
