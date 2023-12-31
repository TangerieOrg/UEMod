#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_Mobility : uint8_t {
    None = 0,
    Default = 1,
    Attack = 2,
    Pressure = 3,
    Far = 4,
    RunTo = 5,
    Wander = 6,
    Scared = 7,
    Flee = 8,
    Cover = 9,
    Close = 10,
    Evade = 11,
    SeekWeapon = 12,
    Dynamic = 13,
    DynamicTarget = 14,
    DynamicSprint = 15,
    ScheduledEntity = 16,
    FollowPlayer = 17,
    Swim = 18,
    Crouch = 19,
    OnFire = 20,
    Charred = 21,
    Crouching = 22,
    UpStairs = 23,
    DownStairs = 24,
    UpSlope = 25,
    DownSlope = 26,
    Retreat = 27,
    RunToNear = 28,
    RetreatSplit = 29,
    CombatWalk = 30,
    CombatJog = 31,
    CombatRun = 32,
    CharredRunTo = 33,
    TooClose = 34,
    Alert = 35,
    Outside = 36,
    Stealth = 37,
    BackOnNav = 38,
    Charge = 39,
    RecoverWeapon = 40,
    PointOfInterest = 41,
    Override = 42,
    Count = 43,
    ENPC_MAX = 44,
};
#pragma pack(pop)
