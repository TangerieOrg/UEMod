#pragma once
#include <cstdint>
#include "UCameraFixupSetPositionMethodState.hpp"
class UTransformProvider;
#pragma pack(push, 1)
class UCameraFixupSetPositionXYZMethodState : public UCameraFixupSetPositionMethodState {
public:
    char pad_40[0x10];
    UTransformProvider* Target; // 0x50
    char pad_58[0x38];
    static UCameraFixupSetPositionXYZMethodState* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
