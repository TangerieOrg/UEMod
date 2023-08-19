#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENiagaraRibbonShapeMode : uint8_t {
    Plane = 0,
    MultiPlane = 1,
    Tube = 2,
    Custom = 3,
    ENiagaraRibbonShapeMode_MAX = 4,
};
#pragma pack(pop)
