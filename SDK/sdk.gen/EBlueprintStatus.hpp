#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EBlueprintStatus {
    BS_Unknown = 0,
    BS_Dirty = 1,
    BS_Error = 2,
    BS_UpToDate = 3,
    BS_BeingCreated = 4,
    BS_UpToDateWithWarnings = 5,
    BS_MAX = 6,
};
#pragma pack(pop)
