#include "FAnimNode_AnimDynamics.hpp"
#include "FAnimNode_BoneDrivenController.hpp"
#include "FAnimNode_ConvertComponentToLocalSpace.hpp"
#include "FAnimNode_ConvertLocalToComponentSpace.hpp"
#include "FAnimNode_LinkedInputPose.hpp"
#include "FAnimNode_Root.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FPoseLink.hpp"
#include "UABP_HoggHead_PostProcess_C.hpp"
#include "UAnimInstance.hpp"
#include "UFunction.hpp"
UABP_HoggHead_PostProcess_C* UABP_HoggHead_PostProcess_C::StaticClass() {
    static auto res = find_uobject("AnimBlueprintGeneratedClass /Game/RiggedObjects/Characters/Creatures/HoggHead/ABP_HoggHead_PostProcess.ABP_HoggHead_PostProcess_C");
    return (UABP_HoggHead_PostProcess_C*)res;
}
void UABP_HoggHead_PostProcess_C::AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Characters/Creatures/HoggHead/ABP_HoggHead_PostProcess.ABP_HoggHead_PostProcess_C.AnimGraph"));
    struct Params_AnimGraph {
        FPoseLink InPose; // 0x0
        FPoseLink AnimGraph; // 0x10
    }; // Size: 0x20
    Params_AnimGraph params{};
    params.InPose = (FPoseLink)InPose;
    params.AnimGraph = (FPoseLink)AnimGraph;
    ProcessEvent(func, &params);
    AnimGraph = params.AnimGraph;
}
void UABP_HoggHead_PostProcess_C::ExecuteUbergraph_ABP_HoggHead_PostProcess(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Characters/Creatures/HoggHead/ABP_HoggHead_PostProcess.ABP_HoggHead_PostProcess_C.ExecuteUbergraph_ABP_HoggHead_PostProcess"));
    struct Params_ExecuteUbergraph_ABP_HoggHead_PostProcess {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_ABP_HoggHead_PostProcess params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
