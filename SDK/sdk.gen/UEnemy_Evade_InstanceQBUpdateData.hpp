#pragma once
#include <cstdint>
#include "UEnemy_InstanceQBUpdateData.hpp"
#pragma pack(push, 1)
class UEnemy_Evade_InstanceQBUpdateData : public UEnemy_InstanceQBUpdateData {
public:
    char pad_30[0x10];
    static UEnemy_Evade_InstanceQBUpdateData* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
