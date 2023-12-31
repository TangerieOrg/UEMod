#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EParticleSystemInsignificanceReaction : uint8_t {
    Auto = 0,
    Complete = 1,
    DisableTick = 2,
    DisableTickAndKill = 3,
    Num = 4,
    EParticleSystemInsignificanceReaction_MAX = 5,
};
#pragma pack(pop)
