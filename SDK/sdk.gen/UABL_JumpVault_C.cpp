#include "FPointerToUberGraphFrame.hpp"
#include "UABL_JumpVault_C.hpp"
#include "UAblAbility.hpp"
#include "UAblAbilityContext.hpp"
#include "UFunction.hpp"
UABL_JumpVault_C* UABL_JumpVault_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Locomotion/Jump/ABL_JumpVault.ABL_JumpVault_C");
    return (UABL_JumpVault_C*)res;
}
void UABL_JumpVault_C::OnAbilityStart0(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Abilities/Locomotion/Jump/ABL_JumpVault.ABL_JumpVault_C.OnAbilityStart"));
    struct Params_OnAbilityStart {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityStart params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_JumpVault_C::ExecuteUbergraph_ABL_JumpVault(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Abilities/Locomotion/Jump/ABL_JumpVault.ABL_JumpVault_C.ExecuteUbergraph_ABL_JumpVault"));
    struct Params_ExecuteUbergraph_ABL_JumpVault {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UAblAbilityContext* K2Node_Event_Context; // 0x8
    }; // Size: 0x10
    Params_ExecuteUbergraph_ABL_JumpVault params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_Context = (UAblAbilityContext*)K2Node_Event_Context;
    ProcessEvent(func, &params);
}
