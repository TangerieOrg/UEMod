#pragma once
#include <cstdint>
#include "UFXAdjustments.hpp"
#pragma pack(push, 1)
class UFXAdjustments_TargetGeometryCollection : public UFXAdjustments {
public:
    bool bFailIfNotFound; // 0x28
    char pad_29[0x7];
    static UFXAdjustments_TargetGeometryCollection* StaticClass();
}; // Size: 0x30
#pragma pack(pop)