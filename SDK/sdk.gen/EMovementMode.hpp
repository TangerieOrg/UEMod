#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EMovementMode : uint8_t {
    MOVE_None = 0,
    MOVE_Walking = 1,
    MOVE_NavWalking = 2,
    MOVE_Falling = 3,
    MOVE_Swimming = 4,
    MOVE_Flying = 5,
    MOVE_Custom = 6,
    MOVE_MAX = 7,
};
#pragma pack(pop)
