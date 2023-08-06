#pragma once
#include <cstdint>
#include "FRigUnit.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_BinaryVectorOp : public FRigUnit {
    FVector Argument0; // 0x8
    FVector Argument1; // 0x14
    FVector Result; // 0x20
    char pad_2c[0x4];
}; // Size: 0x30
#pragma pack(pop)
