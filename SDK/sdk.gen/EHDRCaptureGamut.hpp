#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EHDRCaptureGamut : uint8_t {
    HCGM_Rec709 = 0,
    HCGM_P3DCI = 1,
    HCGM_Rec2020 = 2,
    HCGM_ACES = 3,
    HCGM_ACEScg = 4,
    HCGM_Linear = 5,
    HCGM_MAX = 6,
};
#pragma pack(pop)
