#pragma once
#include <cstdint>
#include "FName_GameLogicElement.hpp"
#pragma pack(push, 1)
struct FGameLogicVarAndValueBitfield : public FName_GameLogicElement {
    FString BitfieldType; // 0x8
    FString BitfieldValue; // 0x18
}; // Size: 0x28
#pragma pack(pop)
