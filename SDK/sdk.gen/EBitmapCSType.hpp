#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EBitmapCSType {
    BCST_BLCS_CALIBRATED_RGB = 0,
    BCST_LCS_sRGB = 1934772034,
    BCST_LCS_WINDOWS_COLOR_SPACE = 1466527264,
    BCST_PROFILE_LINKED = 1279872587,
    BCST_PROFILE_EMBEDDED = 1296188740,
    BCST_MAX = 1934772035,
};
#pragma pack(pop)
