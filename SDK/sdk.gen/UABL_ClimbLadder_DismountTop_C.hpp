#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UAblAbility.hpp"
class UAblAbilityContext;
#pragma pack(push, 1)
class UABL_ClimbLadder_DismountTop_C : public UAblAbility {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xc8
    static UABL_ClimbLadder_DismountTop_C* StaticClass();
    void OnAbilityStart0(UAblAbilityContext* Context);
    void ExecuteUbergraph_ABL_ClimbLadder_DismountTop(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context);
}; // Size: 0xd0
#pragma pack(pop)
