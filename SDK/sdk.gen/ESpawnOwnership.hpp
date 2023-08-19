#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESpawnOwnership : uint8_t {
    InnerSequence = 0,
    MasterSequence = 1,
    External = 2,
    ESpawnOwnership_MAX = 3,
};
#pragma pack(pop)
