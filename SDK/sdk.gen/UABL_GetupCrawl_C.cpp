#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UABL_GetupCrawl_C.hpp"
#include "UAblAbilityContext.hpp"
#include "UAblReactionAbility.hpp"
#include "UFunction.hpp"
UABL_GetupCrawl_C* UABL_GetupCrawl_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Reactions/ABL_GetupCrawl.ABL_GetupCrawl_C");
    return (UABL_GetupCrawl_C*)res;
}
void UABL_GetupCrawl_C::OnAbilityStart(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Abilities/Reactions/ABL_GetupCrawl.ABL_GetupCrawl_C.OnAbilityStart"));
    struct Params_OnAbilityStart {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityStart params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_GetupCrawl_C::ExecuteUbergraph_ABL_GetupCrawl(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context, AActor* CallFunc_GetSelfActor_ReturnValue, int32_t CallFunc_PostDialogueEvent_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Abilities/Reactions/ABL_GetupCrawl.ABL_GetupCrawl_C.ExecuteUbergraph_ABL_GetupCrawl"));
    struct Params_ExecuteUbergraph_ABL_GetupCrawl {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UAblAbilityContext* K2Node_Event_Context; // 0x8
        AActor* CallFunc_GetSelfActor_ReturnValue; // 0x10
        int32_t CallFunc_PostDialogueEvent_ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_ExecuteUbergraph_ABL_GetupCrawl params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_Context = (UAblAbilityContext*)K2Node_Event_Context;
    params.CallFunc_GetSelfActor_ReturnValue = (AActor*)CallFunc_GetSelfActor_ReturnValue;
    params.CallFunc_PostDialogueEvent_ReturnValue = (int32_t)CallFunc_PostDialogueEvent_ReturnValue;
    ProcessEvent(func, &params);
}
