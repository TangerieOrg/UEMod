#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UABL_OpenChest_C.hpp"
#include "UAblAbility.hpp"
#include "UAblAbilityContext.hpp"
#include "UFunction.hpp"
void UABL_OpenChest_C::OnAbilityStart0(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Abilities/Loot/ABL_OpenChest.ABL_OpenChest_C.OnAbilityStart"));
    struct Params_OnAbilityStart {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityStart params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
UABL_OpenChest_C* UABL_OpenChest_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Loot/ABL_OpenChest.ABL_OpenChest_C");
    return (UABL_OpenChest_C*)res;
}
void UABL_OpenChest_C::ExecuteUbergraph_ABL_OpenChest(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context, AActor* CallFunc_GetSelfActor_ReturnValue, int32_t CallFunc_PostDialogueEvent_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Abilities/Loot/ABL_OpenChest.ABL_OpenChest_C.ExecuteUbergraph_ABL_OpenChest"));
    struct Params_ExecuteUbergraph_ABL_OpenChest {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UAblAbilityContext* K2Node_Event_Context; // 0x8
        AActor* CallFunc_GetSelfActor_ReturnValue; // 0x10
        int32_t CallFunc_PostDialogueEvent_ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_ExecuteUbergraph_ABL_OpenChest params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_Context = (UAblAbilityContext*)K2Node_Event_Context;
    params.CallFunc_GetSelfActor_ReturnValue = (AActor*)CallFunc_GetSelfActor_ReturnValue;
    params.CallFunc_PostDialogueEvent_ReturnValue = (int32_t)CallFunc_PostDialogueEvent_ReturnValue;
    ProcessEvent(func, &params);
}
