#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UAblAbility.hpp"
class UAblAbilityContext;
#pragma pack(push, 1)
class UABL_Scheduled_MoveLoop_C : public UAblAbility {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xc8
    UAblAbility* NewVar_0; // 0xd0
    static UABL_Scheduled_MoveLoop_C* StaticClass();
    UAblAbility* OnGetBranchAbility0(UAblAbilityContext* Context, FName& EventName);
    void OnAbilityInterrupt0(UAblAbilityContext* Context);
    void ExecuteUbergraph_ABL_Scheduled_MoveLoop(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context);
}; // Size: 0xd8
#pragma pack(pop)
