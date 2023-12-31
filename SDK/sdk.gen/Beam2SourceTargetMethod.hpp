#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum Beam2SourceTargetMethod : uint8_t {
    PEB2STM_Default = 0,
    PEB2STM_UserSet = 1,
    PEB2STM_Emitter = 2,
    PEB2STM_Particle = 3,
    PEB2STM_Actor = 4,
    PEB2STM_MAX = 5,
};
#pragma pack(pop)
