#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESubmixSendStage : uint8_t {
    PostDistanceAttenuation = 0,
    PreDistanceAttenuation = 1,
    ESubmixSendStage_MAX = 2,
};
#pragma pack(pop)
