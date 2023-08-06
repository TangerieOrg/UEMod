#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class UOptionLocationDistanceToSelfConsideration : public UQualifierConsideration {
public:
    float StartRangeOffset; // 0x28
    float EndRangeOffset; // 0x2c
    static UOptionLocationDistanceToSelfConsideration* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
