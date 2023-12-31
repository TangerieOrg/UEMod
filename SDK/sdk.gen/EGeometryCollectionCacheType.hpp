#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGeometryCollectionCacheType : uint8_t {
    None = 0,
    Record = 1,
    Play = 2,
    RecordAndPlay = 3,
    EGeometryCollectionCacheType_MAX = 4,
};
#pragma pack(pop)
