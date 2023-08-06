#pragma once
#include <cstdint>
#include "UFloatProvider.hpp"
#pragma pack(push, 1)
class UFloat_Direct : public UFloatProvider {
public:
    float Value; // 0x28
    char pad_2c[0x4];
    static UFloat_Direct* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
