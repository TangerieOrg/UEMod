#pragma once
#include <cstdint>
#include "FSceneRigBoundParameterDefinition.hpp"
class USceneRigParameterDefinition_Animation;
#pragma pack(push, 1)
struct FSceneRigParameterBinding_Animation : public FSceneRigBoundParameterDefinition {
    char pad_1[0x7];
}; // Size: 0x8
#pragma pack(pop)