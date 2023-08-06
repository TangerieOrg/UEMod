#pragma once
#include <cstdint>
#include "UInterpTrackInst.hpp"
#pragma pack(push, 1)
class UInterpTrackInstSlomo : public UInterpTrackInst {
public:
    float OldTimeDilation; // 0x28
    char pad_2c[0x4];
    static UInterpTrackInstSlomo* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
