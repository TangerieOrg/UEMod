#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
#pragma pack(push, 1)
class UablBroomDismountBlendOutOffsetsScratchPad : public UAblAbilityTaskScratchPad {
public:
    char pad_28[0x20];
    static UablBroomDismountBlendOutOffsetsScratchPad* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
