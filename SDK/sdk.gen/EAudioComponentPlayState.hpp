#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAudioComponentPlayState : uint8_t {
    Playing = 0,
    Stopped = 1,
    Paused = 2,
    FadingIn = 3,
    FadingOut = 4,
    Count = 5,
    EAudioComponentPlayState_MAX = 6,
};
#pragma pack(pop)
