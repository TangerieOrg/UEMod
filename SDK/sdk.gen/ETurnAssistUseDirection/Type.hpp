#pragma once
#include <cstdint>
namespace ETurnAssistUseDirection {
#pragma pack(push, 1)
enum Type : uint8_t {
    FacingTarget_OR_DesiredDirection = 0,
    FallLine = 1,
    DesiredDirectionOnly = 2,
    JumpStartVelocityOnly = 3,
    FallLineWithinRange = 4,
    ETurnAssistUseDirection_MAX = 5,
};
#pragma pack(pop)
}
