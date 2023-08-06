#include "AActor.hpp"
#include "ABP_Breakable_Persistent_C.hpp"
#include "ABP_ResourceTree_Base_C.hpp"
#include "FGameplayTagContainer.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UGeometryCollectionComponent.hpp"
#include "UPrimitiveComponent.hpp"
#include "URepairComponent.hpp"
bool ABP_ResourceTree_Base_C::Damaged(float DamageAmount, FVector HitLocation, FVector HitDirection, UPrimitiveComponent* PrimComp, FGameplayTagContainer MunitionTagContainer, AActor* Instigator, FVector Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_ResourceTree_Base.BP_ResourceTree_Base_C.Damaged"));
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
bool ABP_ResourceTree_Base_C::NearDeathKneeling(float DamageAmount, AActor* Instigator, FGameplayTagContainer MunitionTagContainer, FVector Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_ResourceTree_Base.BP_ResourceTree_Base_C.NearDeathKneeling"));
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
ABP_ResourceTree_Base_C* ABP_ResourceTree_Base_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Overland/BP_ResourceTree_Base.BP_ResourceTree_Base_C");
    return (ABP_ResourceTree_Base_C*)res;
}
bool ABP_ResourceTree_Base_C::Destroyed(float DamageAmount, AActor* Instigator, FGameplayTagContainer MunitionTagContainer, FVector Velocity, FVector LootSpawnLoc) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_ResourceTree_Base.BP_ResourceTree_Base_C.Destroyed"));
    struct Params_Destroyed {
        float DamageAmount; // 0x0
        char pad_4[0x4];
        AActor* Instigator; // 0x8
        FGameplayTagContainer MunitionTagContainer; // 0x10
        FVector Velocity; // 0x30
        bool ReturnValue; // 0x3c
        char pad_3d[0x3];
        FVector LootSpawnLoc; // 0x40
    }; // Size: 0x4c
    Params_Destroyed params{};
    params.DamageAmount = (float)DamageAmount;
    params.Instigator = (AActor*)Instigator;
    params.MunitionTagContainer = (FGameplayTagContainer)MunitionTagContainer;
    params.Velocity = (FVector)Velocity;
    params.LootSpawnLoc = (FVector)LootSpawnLoc;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABP_ResourceTree_Base_C::OnAttemptToHeal() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_ResourceTree_Base.BP_ResourceTree_Base_C.OnAttemptToHeal"));
    struct Params_OnAttemptToHeal {
    }; // Size: 0x0
    Params_OnAttemptToHeal params{};
    ProcessEvent(func, &params);
}
void ABP_ResourceTree_Base_C::OnAttemptToRepair() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_ResourceTree_Base.BP_ResourceTree_Base_C.OnAttemptToRepair"));
    struct Params_OnAttemptToRepair {
    }; // Size: 0x0
    Params_OnAttemptToRepair params{};
    ProcessEvent(func, &params);
}
void ABP_ResourceTree_Base_C::OnBeginRepairing() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_ResourceTree_Base.BP_ResourceTree_Base_C.OnBeginRepairing"));
    struct Params_OnBeginRepairing {
    }; // Size: 0x0
    Params_OnBeginRepairing params{};
    ProcessEvent(func, &params);
}
void ABP_ResourceTree_Base_C::OnCriticalHealthReached() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_ResourceTree_Base.BP_ResourceTree_Base_C.OnCriticalHealthReached"));
    struct Params_OnCriticalHealthReached {
    }; // Size: 0x0
    Params_OnCriticalHealthReached params{};
    ProcessEvent(func, &params);
}
void ABP_ResourceTree_Base_C::OnDoneRepairing() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_ResourceTree_Base.BP_ResourceTree_Base_C.OnDoneRepairing"));
    struct Params_OnDoneRepairing {
    }; // Size: 0x0
    Params_OnDoneRepairing params{};
    ProcessEvent(func, &params);
}
void ABP_ResourceTree_Base_C::OnFailedToBeDestroyed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_ResourceTree_Base.BP_ResourceTree_Base_C.OnFailedToBeDestroyed"));
    struct Params_OnFailedToBeDestroyed {
    }; // Size: 0x0
    Params_OnFailedToBeDestroyed params{};
    ProcessEvent(func, &params);
}
void ABP_ResourceTree_Base_C::OnFailedToBeDamaged(float DamageAmount, FVector HitLocation, FVector HitDirection, UPrimitiveComponent* PrimComp, FGameplayTagContainer MunitionTagContainer, AActor* Instigator, FVector Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_ResourceTree_Base.BP_ResourceTree_Base_C.OnFailedToBeDamaged"));
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
void ABP_ResourceTree_Base_C::OnFailedToBeHealed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_ResourceTree_Base.BP_ResourceTree_Base_C.OnFailedToBeHealed"));
    struct Params_OnFailedToBeHealed {
    }; // Size: 0x0
    Params_OnFailedToBeHealed params{};
    ProcessEvent(func, &params);
}
void ABP_ResourceTree_Base_C::OnGeometryCollectionCompletelyBroken(URepairComponent* RepairComponent, UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, FVector HitLocation, FVector HitDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_ResourceTree_Base.BP_ResourceTree_Base_C.OnGeometryCollectionCompletelyBroken"));
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
void ABP_ResourceTree_Base_C::OnGeometryCollectionDamaged(URepairComponent* RepairComponent, UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, FVector HitLocation, FVector HitDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_ResourceTree_Base.BP_ResourceTree_Base_C.OnGeometryCollectionDamaged"));
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
void ABP_ResourceTree_Base_C::OnGeometryCollectionSpawned(URepairComponent* RepairComponent, UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, FVector HitLocation, FVector HitDirection, bool bCompletelyBroken) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_ResourceTree_Base.BP_ResourceTree_Base_C.OnGeometryCollectionSpawned"));
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
void ABP_ResourceTree_Base_C::OnHealed(float healAmount, UPrimitiveComponent* PrimComp) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_ResourceTree_Base.BP_ResourceTree_Base_C.OnHealed"));
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
void ABP_ResourceTree_Base_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_ResourceTree_Base.BP_ResourceTree_Base_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_ResourceTree_Base_C::ExecuteUbergraph_BP_ResourceTree_Base(int32_t EntryPoint, float K2Node_Event_damageAmount, FVector K2Node_Event_hitLocation_3, FVector K2Node_Event_hitDirection_3, UPrimitiveComponent* K2Node_Event_primComp_1, FGameplayTagContainer K2Node_Event_MunitionTagContainer, AActor* K2Node_Event_Instigator, FVector K2Node_Event_Velocity, URepairComponent* K2Node_Event_RepairComponent_2, UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent_2, float K2Node_Event_impulseStr_2, float K2Node_Event_Radius_2, FVector K2Node_Event_hitLocation_2, FVector K2Node_Event_hitDirection_2, URepairComponent* K2Node_Event_RepairComponent_1, UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent_1, float K2Node_Event_impulseStr_1, float K2Node_Event_Radius_1, FVector K2Node_Event_hitLocation_1, FVector K2Node_Event_hitDirection_1, URepairComponent* K2Node_Event_RepairComponent, UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent, float K2Node_Event_impulseStr, float K2Node_Event_Radius, FVector K2Node_Event_hitLocation, FVector K2Node_Event_hitDirection, bool K2Node_Event_bCompletelyBroken, float K2Node_Event_healAmount, UPrimitiveComponent* K2Node_Event_primComp) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_ResourceTree_Base.BP_ResourceTree_Base_C.ExecuteUbergraph_BP_ResourceTree_Base"));
    struct Params_ExecuteUbergraph_BP_ResourceTree_Base {
        int32_t EntryPoint; // 0x0
        float K2Node_Event_damageAmount; // 0x4
        FVector K2Node_Event_hitLocation_3; // 0x8
        FVector K2Node_Event_hitDirection_3; // 0x14
        UPrimitiveComponent* K2Node_Event_primComp_1; // 0x20
        FGameplayTagContainer K2Node_Event_MunitionTagContainer; // 0x28
        AActor* K2Node_Event_Instigator; // 0x48
        FVector K2Node_Event_Velocity; // 0x50
        char pad_5c[0x4];
        URepairComponent* K2Node_Event_RepairComponent_2; // 0x60
        UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent_2; // 0x68
        float K2Node_Event_impulseStr_2; // 0x70
        float K2Node_Event_Radius_2; // 0x74
        FVector K2Node_Event_hitLocation_2; // 0x78
        FVector K2Node_Event_hitDirection_2; // 0x84
        URepairComponent* K2Node_Event_RepairComponent_1; // 0x90
        UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent_1; // 0x98
        float K2Node_Event_impulseStr_1; // 0xa0
        float K2Node_Event_Radius_1; // 0xa4
        FVector K2Node_Event_hitLocation_1; // 0xa8
        FVector K2Node_Event_hitDirection_1; // 0xb4
        URepairComponent* K2Node_Event_RepairComponent; // 0xc0
        UGeometryCollectionComponent* K2Node_Event_GeometryCollectionComponent; // 0xc8
        float K2Node_Event_impulseStr; // 0xd0
        float K2Node_Event_Radius; // 0xd4
        FVector K2Node_Event_hitLocation; // 0xd8
        FVector K2Node_Event_hitDirection; // 0xe4
        bool K2Node_Event_bCompletelyBroken; // 0xf0
        char pad_f1[0x3];
        float K2Node_Event_healAmount; // 0xf4
        UPrimitiveComponent* K2Node_Event_primComp; // 0xf8
    }; // Size: 0x100
    Params_ExecuteUbergraph_BP_ResourceTree_Base params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_damageAmount = (float)K2Node_Event_damageAmount;
    params.K2Node_Event_hitLocation_3 = (FVector)K2Node_Event_hitLocation_3;
    params.K2Node_Event_hitDirection_3 = (FVector)K2Node_Event_hitDirection_3;
    params.K2Node_Event_primComp_1 = (UPrimitiveComponent*)K2Node_Event_primComp_1;
    params.K2Node_Event_MunitionTagContainer = (FGameplayTagContainer)K2Node_Event_MunitionTagContainer;
    params.K2Node_Event_Instigator = (AActor*)K2Node_Event_Instigator;
    params.K2Node_Event_Velocity = (FVector)K2Node_Event_Velocity;
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
    ProcessEvent(func, &params);
}
