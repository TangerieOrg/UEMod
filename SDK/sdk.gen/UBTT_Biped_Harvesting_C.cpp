#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "UBTT_Biped_Harvesting_C.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
#include "UFunction.hpp"
UBTT_Biped_Harvesting_C* UBTT_Biped_Harvesting_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTT_Biped_Harvesting.BTT_Biped_Harvesting_C");
    return (UBTT_Biped_Harvesting_C*)res;
}
void UBTT_Biped_Harvesting_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Harvesting.BTT_Biped_Harvesting_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Harvesting_C::CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Harvesting.BTT_Biped_Harvesting_C.CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_0"));
    struct Params_CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Harvesting_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Harvesting.BTT_Biped_Harvesting_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Harvesting_C::ExecuteUbergraph_BTT_Biped_Harvesting(int32_t EntryPoint, uint8_t CallFunc_MakeLiteralByte_ReturnValue, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle, AActor* K2Node_Event_OwnerActor_1) {}
