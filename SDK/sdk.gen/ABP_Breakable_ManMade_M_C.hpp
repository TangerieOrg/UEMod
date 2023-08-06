#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UChildActorComponent;
class USceneComponent;
class UObjectStateInfo;
#pragma pack(push, 1)
class ABP_Breakable_ManMade_M_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UChildActorComponent* BP_Int_BCProps_OpenCrate_Small_001; // 0x250
    UChildActorComponent* BP_Int_BCProps_CloseCrate_Medium_001; // 0x258
    UChildActorComponent* BP_Prop_Barrel_Breakable_A1; // 0x260
    UChildActorComponent* BP_Prop_Barrel_Breakable_A; // 0x268
    UChildActorComponent* BP_BanditCamp_BreakableFloor; // 0x270
    UChildActorComponent* BP_Int_BCProps_Bucket_Small_001; // 0x278
    USceneComponent* DefaultSceneRoot; // 0x280
    static ABP_Breakable_ManMade_M_C* StaticClass();
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_BP_Breakable_ManMade_M(int32_t EntryPoint, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, TArray<UChildActorComponent*>& K2Node_MakeArray_Array, UChildActorComponent* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
}; // Size: 0x288
#pragma pack(pop)
