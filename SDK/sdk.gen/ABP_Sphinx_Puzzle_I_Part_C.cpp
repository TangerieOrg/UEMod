#include "AActor.hpp"
#include "ABP_Sphinx_Puzzle_I_Part_C.hpp"
#include "APhoenixBudgetedActor.hpp"
#include "FGameplayTagContainer.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UAkComponent.hpp"
#include "UFunction.hpp"
#include "UGeometryCollection.hpp"
#include "UGeometryCollectionComponent.hpp"
#include "UObjectStateComponent.hpp"
#include "UObjectStateInfo.hpp"
#include "UPrimitiveComponent.hpp"
#include "URepairComponent.hpp"
#include "USceneComponent.hpp"
#include "USkeletalMeshComponent.hpp"
#include "USkinFXComponent.hpp"
#include "UStaticMeshComponent.hpp"
void ABP_Sphinx_Puzzle_I_Part_C::UserConstructionScript() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/I-ConfringoTargets/BP_Sphinx_Puzzle_I_Part.BP_Sphinx_Puzzle_I_Part_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
    }; // Size: 0x0
    Params_UserConstructionScript params{};
    ProcessEvent(func, &params);
}
ABP_Sphinx_Puzzle_I_Part_C* ABP_Sphinx_Puzzle_I_Part_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/SphinxPuzzles/Blueprints/I-ConfringoTargets/BP_Sphinx_Puzzle_I_Part.BP_Sphinx_Puzzle_I_Part_C");
    return (ABP_Sphinx_Puzzle_I_Part_C*)res;
}
bool ABP_Sphinx_Puzzle_I_Part_C::NearDeathKneeling(float DamageAmount, AActor* Instigator, FGameplayTagContainer MunitionTagContainer, FVector Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/I-ConfringoTargets/BP_Sphinx_Puzzle_I_Part.BP_Sphinx_Puzzle_I_Part_C.NearDeathKneeling"));
    struct Params_NearDeathKneeling {
        float DamageAmount; // 0x0
        char pad_4[0x4];
        AActor* Instigator; // 0x8
        FGameplayTagContainer MunitionTagContainer; // 0x10
        FVector Velocity; // 0x30
        bool ReturnValue; // 0x3c
    }; // Size: 0x3d
    Params_NearDeathKneeling params{};
    params.DamageAmount = (float)DamageAmount;
    params.Instigator = (AActor*)Instigator;
    params.MunitionTagContainer = (FGameplayTagContainer)MunitionTagContainer;
    params.Velocity = (FVector)Velocity;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABP_Sphinx_Puzzle_I_Part_C::OnHealed(float healAmount, UPrimitiveComponent* PrimComp) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/I-ConfringoTargets/BP_Sphinx_Puzzle_I_Part.BP_Sphinx_Puzzle_I_Part_C.OnHealed"));
    struct Params_OnHealed {
        float healAmount; // 0x0
        char pad_4[0x4];
        UPrimitiveComponent* PrimComp; // 0x8
    }; // Size: 0x10
    Params_OnHealed params{};
    params.healAmount = (float)healAmount;
    params.PrimComp = (UPrimitiveComponent*)PrimComp;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_I_Part_C::OnAttemptToHeal() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/I-ConfringoTargets/BP_Sphinx_Puzzle_I_Part.BP_Sphinx_Puzzle_I_Part_C.OnAttemptToHeal"));
    struct Params_OnAttemptToHeal {
    }; // Size: 0x0
    Params_OnAttemptToHeal params{};
    ProcessEvent(func, &params);
}
bool ABP_Sphinx_Puzzle_I_Part_C::Damaged(float DamageAmount, FVector HitLocation, FVector HitDirection, UPrimitiveComponent* PrimComp, FGameplayTagContainer MunitionTagContainer, AActor* Instigator, FVector Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/I-ConfringoTargets/BP_Sphinx_Puzzle_I_Part.BP_Sphinx_Puzzle_I_Part_C.Damaged"));
    struct Params_Damaged {
        float DamageAmount; // 0x0
        FVector HitLocation; // 0x4
        FVector HitDirection; // 0x10
        char pad_1c[0x4];
        UPrimitiveComponent* PrimComp; // 0x20
        FGameplayTagContainer MunitionTagContainer; // 0x28
        AActor* Instigator; // 0x48
        FVector Velocity; // 0x50
        bool ReturnValue; // 0x5c
    }; // Size: 0x5d
    Params_Damaged params{};
    params.DamageAmount = (float)DamageAmount;
    params.HitLocation = (FVector)HitLocation;
    params.HitDirection = (FVector)HitDirection;
    params.PrimComp = (UPrimitiveComponent*)PrimComp;
    params.MunitionTagContainer = (FGameplayTagContainer)MunitionTagContainer;
    params.Instigator = (AActor*)Instigator;
    params.Velocity = (FVector)Velocity;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABP_Sphinx_Puzzle_I_Part_C::OnAttemptToRepair() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/I-ConfringoTargets/BP_Sphinx_Puzzle_I_Part.BP_Sphinx_Puzzle_I_Part_C.OnAttemptToRepair"));
    struct Params_OnAttemptToRepair {
    }; // Size: 0x0
    Params_OnAttemptToRepair params{};
    ProcessEvent(func, &params);
}
bool ABP_Sphinx_Puzzle_I_Part_C::Destroyed(float DamageAmount, AActor* Instigator, FGameplayTagContainer MunitionTagContainer, FVector Velocity, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue_1, UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/I-ConfringoTargets/BP_Sphinx_Puzzle_I_Part.BP_Sphinx_Puzzle_I_Part_C.Destroyed"));
    struct Params_Destroyed {
        float DamageAmount; // 0x0
        char pad_4[0x4];
        AActor* Instigator; // 0x8
        FGameplayTagContainer MunitionTagContainer; // 0x10
        FVector Velocity; // 0x30
        bool ReturnValue; // 0x3c
        char pad_3d[0x3];
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x40
        FVector CallFunc_Add_VectorVector_ReturnValue; // 0x4c
        UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue; // 0x58
        UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue; // 0x60
        FVector CallFunc_K2_GetActorLocation_ReturnValue_1; // 0x68
        FVector CallFunc_Add_VectorVector_ReturnValue_1; // 0x74
        UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue_1; // 0x80
    }; // Size: 0x88
    Params_Destroyed params{};
    params.DamageAmount = (float)DamageAmount;
    params.Instigator = (AActor*)Instigator;
    params.MunitionTagContainer = (FGameplayTagContainer)MunitionTagContainer;
    params.Velocity = (FVector)Velocity;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_Add_VectorVector_ReturnValue = (FVector)CallFunc_Add_VectorVector_ReturnValue;
    params.CallFunc_GetObjectStateInfo_ReturnValue = (UObjectStateInfo*)CallFunc_GetObjectStateInfo_ReturnValue;
    params.CallFunc_SpawnAkComponentAtLocation_ReturnValue = (UAkComponent*)CallFunc_SpawnAkComponentAtLocation_ReturnValue;
    params.CallFunc_K2_GetActorLocation_ReturnValue_1 = (FVector)CallFunc_K2_GetActorLocation_ReturnValue_1;
    params.CallFunc_Add_VectorVector_ReturnValue_1 = (FVector)CallFunc_Add_VectorVector_ReturnValue_1;
    params.CallFunc_SpawnAkComponentAtLocation_ReturnValue_1 = (UAkComponent*)CallFunc_SpawnAkComponentAtLocation_ReturnValue_1;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABP_Sphinx_Puzzle_I_Part_C::Build(bool CallFunc_IsValid_ReturnValue, FTransform CallFunc_GetSocketTransform_ReturnValue, FHitResult CallFunc_K2_SetRelativeTransform_SweepHitResult, int32_t CallFunc_Clamp_ReturnValue) {}
void ABP_Sphinx_Puzzle_I_Part_C::OnCriticalHealthReached() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/I-ConfringoTargets/BP_Sphinx_Puzzle_I_Part.BP_Sphinx_Puzzle_I_Part_C.OnCriticalHealthReached"));
    struct Params_OnCriticalHealthReached {
    }; // Size: 0x0
    Params_OnCriticalHealthReached params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_I_Part_C::OnDoneRepairing() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/I-ConfringoTargets/BP_Sphinx_Puzzle_I_Part.BP_Sphinx_Puzzle_I_Part_C.OnDoneRepairing"));
    struct Params_OnDoneRepairing {
    }; // Size: 0x0
    Params_OnDoneRepairing params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_I_Part_C::OnFailedToBeDamaged(float DamageAmount, FVector HitLocation, FVector HitDirection, UPrimitiveComponent* PrimComp, FGameplayTagContainer MunitionTagContainer, AActor* Instigator, FVector Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/I-ConfringoTargets/BP_Sphinx_Puzzle_I_Part.BP_Sphinx_Puzzle_I_Part_C.OnFailedToBeDamaged"));
    struct Params_OnFailedToBeDamaged {
        float DamageAmount; // 0x0
        FVector HitLocation; // 0x4
        FVector HitDirection; // 0x10
        char pad_1c[0x4];
        UPrimitiveComponent* PrimComp; // 0x20
        FGameplayTagContainer MunitionTagContainer; // 0x28
        AActor* Instigator; // 0x48
        FVector Velocity; // 0x50
    }; // Size: 0x5c
    Params_OnFailedToBeDamaged params{};
    params.DamageAmount = (float)DamageAmount;
    params.HitLocation = (FVector)HitLocation;
    params.HitDirection = (FVector)HitDirection;
    params.PrimComp = (UPrimitiveComponent*)PrimComp;
    params.MunitionTagContainer = (FGameplayTagContainer)MunitionTagContainer;
    params.Instigator = (AActor*)Instigator;
    params.Velocity = (FVector)Velocity;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_I_Part_C::OnFailedToBeDestroyed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/I-ConfringoTargets/BP_Sphinx_Puzzle_I_Part.BP_Sphinx_Puzzle_I_Part_C.OnFailedToBeDestroyed"));
    struct Params_OnFailedToBeDestroyed {
    }; // Size: 0x0
    Params_OnFailedToBeDestroyed params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_I_Part_C::OnFailedToBeHealed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/I-ConfringoTargets/BP_Sphinx_Puzzle_I_Part.BP_Sphinx_Puzzle_I_Part_C.OnFailedToBeHealed"));
    struct Params_OnFailedToBeHealed {
    }; // Size: 0x0
    Params_OnFailedToBeHealed params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_I_Part_C::OnGeometryCollectionCompletelyBroken(URepairComponent* RepairComponent, UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, FVector HitLocation, FVector HitDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/I-ConfringoTargets/BP_Sphinx_Puzzle_I_Part.BP_Sphinx_Puzzle_I_Part_C.OnGeometryCollectionCompletelyBroken"));
    struct Params_OnGeometryCollectionCompletelyBroken {
        URepairComponent* RepairComponent; // 0x0
        UGeometryCollectionComponent* GeometryCollectionComponent; // 0x8
        float impulseStr; // 0x10
        float Radius; // 0x14
        FVector HitLocation; // 0x18
        FVector HitDirection; // 0x24
    }; // Size: 0x30
    Params_OnGeometryCollectionCompletelyBroken params{};
    params.RepairComponent = (URepairComponent*)RepairComponent;
    params.GeometryCollectionComponent = (UGeometryCollectionComponent*)GeometryCollectionComponent;
    params.impulseStr = (float)impulseStr;
    params.Radius = (float)Radius;
    params.HitLocation = (FVector)HitLocation;
    params.HitDirection = (FVector)HitDirection;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_I_Part_C::OnGeometryCollectionDamaged(URepairComponent* RepairComponent, UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, FVector HitLocation, FVector HitDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/I-ConfringoTargets/BP_Sphinx_Puzzle_I_Part.BP_Sphinx_Puzzle_I_Part_C.OnGeometryCollectionDamaged"));
    struct Params_OnGeometryCollectionDamaged {
        URepairComponent* RepairComponent; // 0x0
        UGeometryCollectionComponent* GeometryCollectionComponent; // 0x8
        float impulseStr; // 0x10
        float Radius; // 0x14
        FVector HitLocation; // 0x18
        FVector HitDirection; // 0x24
    }; // Size: 0x30
    Params_OnGeometryCollectionDamaged params{};
    params.RepairComponent = (URepairComponent*)RepairComponent;
    params.GeometryCollectionComponent = (UGeometryCollectionComponent*)GeometryCollectionComponent;
    params.impulseStr = (float)impulseStr;
    params.Radius = (float)Radius;
    params.HitLocation = (FVector)HitLocation;
    params.HitDirection = (FVector)HitDirection;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_I_Part_C::OnGeometryCollectionSpawned(URepairComponent* RepairComponent, UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, FVector HitLocation, FVector HitDirection, bool bCompletelyBroken) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/I-ConfringoTargets/BP_Sphinx_Puzzle_I_Part.BP_Sphinx_Puzzle_I_Part_C.OnGeometryCollectionSpawned"));
    struct Params_OnGeometryCollectionSpawned {
        URepairComponent* RepairComponent; // 0x0
        UGeometryCollectionComponent* GeometryCollectionComponent; // 0x8
        float impulseStr; // 0x10
        float Radius; // 0x14
        FVector HitLocation; // 0x18
        FVector HitDirection; // 0x24
        bool bCompletelyBroken; // 0x30
    }; // Size: 0x31
    Params_OnGeometryCollectionSpawned params{};
    params.RepairComponent = (URepairComponent*)RepairComponent;
    params.GeometryCollectionComponent = (UGeometryCollectionComponent*)GeometryCollectionComponent;
    params.impulseStr = (float)impulseStr;
    params.Radius = (float)Radius;
    params.HitLocation = (FVector)HitLocation;
    params.HitDirection = (FVector)HitDirection;
    params.bCompletelyBroken = (bool)bCompletelyBroken;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_I_Part_C::Success() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/I-ConfringoTargets/BP_Sphinx_Puzzle_I_Part.BP_Sphinx_Puzzle_I_Part_C.Success"));
    struct Params_Success {
    }; // Size: 0x0
    Params_Success params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_I_Part_C::OnBeginRepairing() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/I-ConfringoTargets/BP_Sphinx_Puzzle_I_Part.BP_Sphinx_Puzzle_I_Part_C.OnBeginRepairing"));
    struct Params_OnBeginRepairing {
    }; // Size: 0x0
    Params_OnBeginRepairing params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_I_Part_C::VineStart() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/I-ConfringoTargets/BP_Sphinx_Puzzle_I_Part.BP_Sphinx_Puzzle_I_Part_C.VineStart"));
    struct Params_VineStart {
    }; // Size: 0x0
    Params_VineStart params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_I_Part_C::Reveal() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/I-ConfringoTargets/BP_Sphinx_Puzzle_I_Part.BP_Sphinx_Puzzle_I_Part_C.Reveal"));
    struct Params_Reveal {
    }; // Size: 0x0
    Params_Reveal params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_I_Part_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/I-ConfringoTargets/BP_Sphinx_Puzzle_I_Part.BP_Sphinx_Puzzle_I_Part_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_I_Part_C::LoadSolution() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/I-ConfringoTargets/BP_Sphinx_Puzzle_I_Part.BP_Sphinx_Puzzle_I_Part_C.LoadSolution"));
    struct Params_LoadSolution {
    }; // Size: 0x0
    Params_LoadSolution params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_I_Part_C::ExecuteUbergraph_BP_Sphinx_Puzzle_I_Part(int32_t EntryPoint, URepairComponent* K2Node_Event_RepairComponent_2, UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent_2, float K2Node_Event_impulseStr_2, float K2Node_Event_Radius_2, FVector K2Node_Event_hitLocation_2, FVector K2Node_Event_hitDirection_2, URepairComponent* K2Node_Event_RepairComponent_1, UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent_1, float K2Node_Event_impulseStr_1, float K2Node_Event_Radius_1, FVector K2Node_Event_hitLocation_1, FVector K2Node_Event_hitDirection_1, URepairComponent* K2Node_Event_RepairComponent, UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent, float K2Node_Event_impulseStr, float K2Node_Event_Radius, FVector K2Node_Event_hitLocation, FVector K2Node_Event_hitDirection, bool K2Node_Event_bCompletelyBroken, float K2Node_Event_healAmount, UPrimitiveComponent* K2Node_Event_primComp, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, float K2Node_Event_damageAmount, FVector K2Node_Event_hitLocation_3, FVector K2Node_Event_hitDirection_3, UPrimitiveComponent* K2Node_Event_primComp_1, FGameplayTagContainer K2Node_Event_MunitionTagContainer, AActor* K2Node_Event_Instigator, FVector K2Node_Event_Velocity, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue_1, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue_2, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue_3, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue_4, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue_1, UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FVector CallFunc_Add_VectorVector_ReturnValue_2, UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue_2, FName CallFunc_SkinFXName_name, FName CallFunc_SkinFXName_name_1, USkinFXComponent* CallFunc_ActorStartSkinFX_skinFXComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/I-ConfringoTargets/BP_Sphinx_Puzzle_I_Part.BP_Sphinx_Puzzle_I_Part_C.ExecuteUbergraph_BP_Sphinx_Puzzle_I_Part"));
    struct Params_ExecuteUbergraph_BP_Sphinx_Puzzle_I_Part {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        URepairComponent* K2Node_Event_RepairComponent_2; // 0x8
        UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent_2; // 0x10
        float K2Node_Event_impulseStr_2; // 0x18
        float K2Node_Event_Radius_2; // 0x1c
        FVector K2Node_Event_hitLocation_2; // 0x20
        FVector K2Node_Event_hitDirection_2; // 0x2c
        URepairComponent* K2Node_Event_RepairComponent_1; // 0x38
        UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent_1; // 0x40
        float K2Node_Event_impulseStr_1; // 0x48
        float K2Node_Event_Radius_1; // 0x4c
        FVector K2Node_Event_hitLocation_1; // 0x50
        FVector K2Node_Event_hitDirection_1; // 0x5c
        URepairComponent* K2Node_Event_RepairComponent; // 0x68
        UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent; // 0x70
        float K2Node_Event_impulseStr; // 0x78
        float K2Node_Event_Radius; // 0x7c
        FVector K2Node_Event_hitLocation; // 0x80
        FVector K2Node_Event_hitDirection; // 0x8c
        bool K2Node_Event_bCompletelyBroken; // 0x98
        char pad_99[0x3];
        float K2Node_Event_healAmount; // 0x9c
        UPrimitiveComponent* K2Node_Event_primComp; // 0xa0
        UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue; // 0xa8
        float K2Node_Event_damageAmount; // 0xb0
        FVector K2Node_Event_hitLocation_3; // 0xb4
        FVector K2Node_Event_hitDirection_3; // 0xc0
        char pad_cc[0x4];
        UPrimitiveComponent* K2Node_Event_primComp_1; // 0xd0
        FGameplayTagContainer K2Node_Event_MunitionTagContainer; // 0xd8
        AActor* K2Node_Event_Instigator; // 0xf8
        FVector K2Node_Event_Velocity; // 0x100
        char pad_10c[0x4];
        UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue_1; // 0x110
        UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue_2; // 0x118
        UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue_3; // 0x120
        UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue_4; // 0x128
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x130
        FVector CallFunc_K2_GetActorLocation_ReturnValue_1; // 0x13c
        FVector CallFunc_Add_VectorVector_ReturnValue; // 0x148
        FVector CallFunc_Add_VectorVector_ReturnValue_1; // 0x154
        UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue; // 0x160
        UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue_1; // 0x168
        FVector CallFunc_K2_GetActorLocation_ReturnValue_2; // 0x170
        FVector CallFunc_Add_VectorVector_ReturnValue_2; // 0x17c
        UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue_2; // 0x188
        FName CallFunc_SkinFXName_name; // 0x190
        FName CallFunc_SkinFXName_name_1; // 0x198
        USkinFXComponent* CallFunc_ActorStartSkinFX_skinFXComponent; // 0x1a0
    }; // Size: 0x1a8
    Params_ExecuteUbergraph_BP_Sphinx_Puzzle_I_Part params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_RepairComponent_2 = (URepairComponent*)K2Node_Event_RepairComponent_2;
    params.K2Node_Event_GeometryCollectionComponent_2 = (UGeometryCollectionComponent*)K2Node_Event_GeometryCollectionComponent_2;
    params.K2Node_Event_impulseStr_2 = (float)K2Node_Event_impulseStr_2;
    params.K2Node_Event_Radius_2 = (float)K2Node_Event_Radius_2;
    params.K2Node_Event_hitLocation_2 = (FVector)K2Node_Event_hitLocation_2;
    params.K2Node_Event_hitDirection_2 = (FVector)K2Node_Event_hitDirection_2;
    params.K2Node_Event_RepairComponent_1 = (URepairComponent*)K2Node_Event_RepairComponent_1;
    params.K2Node_Event_GeometryCollectionComponent_1 = (UGeometryCollectionComponent*)K2Node_Event_GeometryCollectionComponent_1;
    params.K2Node_Event_impulseStr_1 = (float)K2Node_Event_impulseStr_1;
    params.K2Node_Event_Radius_1 = (float)K2Node_Event_Radius_1;
    params.K2Node_Event_hitLocation_1 = (FVector)K2Node_Event_hitLocation_1;
    params.K2Node_Event_hitDirection_1 = (FVector)K2Node_Event_hitDirection_1;
    params.K2Node_Event_RepairComponent = (URepairComponent*)K2Node_Event_RepairComponent;
    params.K2Node_Event_GeometryCollectionComponent = (UGeometryCollectionComponent*)K2Node_Event_GeometryCollectionComponent;
    params.K2Node_Event_impulseStr = (float)K2Node_Event_impulseStr;
    params.K2Node_Event_Radius = (float)K2Node_Event_Radius;
    params.K2Node_Event_hitLocation = (FVector)K2Node_Event_hitLocation;
    params.K2Node_Event_hitDirection = (FVector)K2Node_Event_hitDirection;
    params.K2Node_Event_bCompletelyBroken = (bool)K2Node_Event_bCompletelyBroken;
    params.K2Node_Event_healAmount = (float)K2Node_Event_healAmount;
    params.K2Node_Event_primComp = (UPrimitiveComponent*)K2Node_Event_primComp;
    params.CallFunc_GetObjectStateInfo_ReturnValue = (UObjectStateInfo*)CallFunc_GetObjectStateInfo_ReturnValue;
    params.K2Node_Event_damageAmount = (float)K2Node_Event_damageAmount;
    params.K2Node_Event_hitLocation_3 = (FVector)K2Node_Event_hitLocation_3;
    params.K2Node_Event_hitDirection_3 = (FVector)K2Node_Event_hitDirection_3;
    params.K2Node_Event_primComp_1 = (UPrimitiveComponent*)K2Node_Event_primComp_1;
    params.K2Node_Event_MunitionTagContainer = (FGameplayTagContainer)K2Node_Event_MunitionTagContainer;
    params.K2Node_Event_Instigator = (AActor*)K2Node_Event_Instigator;
    params.K2Node_Event_Velocity = (FVector)K2Node_Event_Velocity;
    params.CallFunc_GetObjectStateInfo_ReturnValue_1 = (UObjectStateInfo*)CallFunc_GetObjectStateInfo_ReturnValue_1;
    params.CallFunc_GetObjectStateInfo_ReturnValue_2 = (UObjectStateInfo*)CallFunc_GetObjectStateInfo_ReturnValue_2;
    params.CallFunc_GetObjectStateInfo_ReturnValue_3 = (UObjectStateInfo*)CallFunc_GetObjectStateInfo_ReturnValue_3;
    params.CallFunc_GetObjectStateInfo_ReturnValue_4 = (UObjectStateInfo*)CallFunc_GetObjectStateInfo_ReturnValue_4;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_K2_GetActorLocation_ReturnValue_1 = (FVector)CallFunc_K2_GetActorLocation_ReturnValue_1;
    params.CallFunc_Add_VectorVector_ReturnValue = (FVector)CallFunc_Add_VectorVector_ReturnValue;
    params.CallFunc_Add_VectorVector_ReturnValue_1 = (FVector)CallFunc_Add_VectorVector_ReturnValue_1;
    params.CallFunc_SpawnAkComponentAtLocation_ReturnValue = (UAkComponent*)CallFunc_SpawnAkComponentAtLocation_ReturnValue;
    params.CallFunc_SpawnAkComponentAtLocation_ReturnValue_1 = (UAkComponent*)CallFunc_SpawnAkComponentAtLocation_ReturnValue_1;
    params.CallFunc_K2_GetActorLocation_ReturnValue_2 = (FVector)CallFunc_K2_GetActorLocation_ReturnValue_2;
    params.CallFunc_Add_VectorVector_ReturnValue_2 = (FVector)CallFunc_Add_VectorVector_ReturnValue_2;
    params.CallFunc_SpawnAkComponentAtLocation_ReturnValue_2 = (UAkComponent*)CallFunc_SpawnAkComponentAtLocation_ReturnValue_2;
    params.CallFunc_SkinFXName_name = (FName)CallFunc_SkinFXName_name;
    params.CallFunc_SkinFXName_name_1 = (FName)CallFunc_SkinFXName_name_1;
    params.CallFunc_ActorStartSkinFX_skinFXComponent = (USkinFXComponent*)CallFunc_ActorStartSkinFX_skinFXComponent;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_I_Part_C::Broken__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/I-ConfringoTargets/BP_Sphinx_Puzzle_I_Part.BP_Sphinx_Puzzle_I_Part_C.Broken__DelegateSignature"));
    struct Params_Broken__DelegateSignature {
    }; // Size: 0x0
    Params_Broken__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_I_Part_C::Repaired__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/I-ConfringoTargets/BP_Sphinx_Puzzle_I_Part.BP_Sphinx_Puzzle_I_Part_C.Repaired__DelegateSignature"));
    struct Params_Repaired__DelegateSignature {
    }; // Size: 0x0
    Params_Repaired__DelegateSignature params{};
    ProcessEvent(func, &params);
}