#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESpectatorScreenMode : uint8_t {
    Disabled = 0,
    SingleEyeLetterboxed = 1,
    Undistorted = 2,
    Distorted = 3,
    SingleEye = 4,
    SingleEyeCroppedToFill = 5,
    Texture = 6,
    TexturePlusEye = 7,
    ESpectatorScreenMode_MAX = 8,
};
#pragma pack(pop)
