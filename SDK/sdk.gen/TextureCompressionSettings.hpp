#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum TextureCompressionSettings : uint8_t {
    TC_Default = 0,
    TC_Normalmap = 1,
    TC_Masks = 2,
    TC_Grayscale = 3,
    TC_Displacementmap = 4,
    TC_VectorDisplacementmap = 5,
    TC_HDR = 6,
    TC_EditorIcon = 7,
    TC_Alpha = 8,
    TC_DistanceFieldFont = 9,
    TC_HDR_Compressed = 10,
    TC_BC7 = 11,
    TC_HalfFloat = 12,
    TC_EncodedReflectionCapture = 13,
    TC_MAX = 14,
};
#pragma pack(pop)
