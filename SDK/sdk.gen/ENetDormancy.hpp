#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ENetDormancy : uint8_t {
    DORM_Never = 0,
    DORM_Awake = 1,
    DORM_DormantAll = 2,
    DORM_DormantPartial = 3,
    DORM_Initial = 4,
    DORM_MAX = 5,
};
#pragma pack(pop)
