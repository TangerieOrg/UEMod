#pragma once
#include <cstdint>
#include "UEnemy_InstanceQBUpdateData.hpp"
#pragma pack(push, 1)
class UEnemy_BackOnNav_InstanceQBUpdateData : public UEnemy_InstanceQBUpdateData {
public:
    char pad_30[0x28];
    static UEnemy_BackOnNav_InstanceQBUpdateData* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
