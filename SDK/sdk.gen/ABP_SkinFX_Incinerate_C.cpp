#include "ABP_SkinFX_Incinerate_C.hpp"
#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
ABP_SkinFX_Incinerate_C* ABP_SkinFX_Incinerate_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_Incinerate.BP_SkinFX_Incinerate_C");
    return (ABP_SkinFX_Incinerate_C*)res;
}
