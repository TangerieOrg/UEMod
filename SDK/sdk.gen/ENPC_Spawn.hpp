#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_Spawn : uint8_t {
    None = 0,
    Default = 1,
    Birth = 2,
    BurrowUp = 3,
    Descend = 4,
    Apparate = 5,
    Death = 6,
    Smoke = 7,
    CrackWall = 8,
    CrackFloor = 9,
    CrackStanding = 10,
    OnBack = 11,
    GroundOnFront = 12,
    GroundOnBack = 13,
    BurstOut = 14,
    Fall = 15,
    WallStepDown = 16,
    Freeze = 17,
    Petrified = 18,
    JumpDown = 19,
    Animagus = 20,
    Spline = 21,
    Hidden = 22,
    Asleep = 23,
    SplineSmoke = 24,
    JumpSpline = 25,
    Climb = 26,
    AncientMagic = 27,
    Reflection = 28,
    InkySmoke = 29,
    FromStone = 30,
    SlowStand = 31,
    BossSpawn = 32,
    WipeIn = 33,
    ENPC_MAX = 34,
};
#pragma pack(pop)
