#pragma once
#include <cstdint>
namespace EActivityTypeBits {
#pragma pack(push, 1)
enum Type {
    ACTIVITY_BIT_NONE = 0,
    ACTIVITY_BIT_MISSION = 1,
    ACTIVITY_BIT_MISSION_CRITICAL = 2,
    ACTIVITY_BIT_EXCURSION = 4,
    ACTIVITY_BIT_HOBO = 8,
    ACTIVITY_BIT_INVESTIGATION = 16,
    ACTIVITY_BIT_PERFORM_TASK = 32,
    ACTIVITY_BIT_PERFORM_TASK_MOVETOLOCATION = 64,
    ACTIVITY_BIT_PERFORM_TASK_MOVETOSTATION = 128,
    ACTIVITY_BIT_PERFORM_TASK_WAITFORPLAYER = 256,
    ACTIVITY_BIT_PERFORM_TASK_CUSTOMNOLOCATIONTASK = 512,
    ACTIVITY_BIT_PERFORM_TASK_CUSTOMLOCATIONTASK = 1024,
    ACTIVITY_BIT_PERFORM_TASK_TELEPORTTOSTATION = 2048,
    ACTIVITY_BIT_PERFORM_TASK_TELEPORTCURTAINDOWN = 4096,
    ACTIVITY_BIT_PERFORM_TASK_FOLLOWACTOR = 8192,
    ACTIVITY_BIT_PERFORM_TASK_WAITFORTIME = 16384,
    ACTIVITY_BIT_PERFORM_TASK_NOP = 32768,
    ACTIVITY_BIT_HAIL = 65536,
    ACTIVITY_BIT_CLASS = 131072,
    ACTIVITY_BIT_PERFORM_TASK_APPARATEOUT = 262144,
    ACTIVITY_BIT_PERFORM_TASK_FOLLOWSCRIPTEDSPLINE = 524288,
    ACTIVITY_BIT_PERFORM_TASK_FOLLOWSPLINE = 1048576,
    ACTIVITY_BIT_WANDER_AND_VANISH = 2097152,
    ACTIVITY_BIT_WALK_AWAY_AND_RECYCLE = 4194304,
    ACTIVITY_BIT_OWNS_SITE_LOCATION = 8388608,
    ACTIVITY_BIT_MAX = 8388609,
};
#pragma pack(pop)
}