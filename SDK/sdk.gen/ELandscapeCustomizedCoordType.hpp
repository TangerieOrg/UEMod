#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ELandscapeCustomizedCoordType : uint8_t {
    LCCT_None = 0,
    LCCT_CustomUV0 = 1,
    LCCT_CustomUV1 = 2,
    LCCT_CustomUV2 = 3,
    LCCT_WeightMapUV = 4,
    LCCT_MAX = 5,
};
#pragma pack(pop)
