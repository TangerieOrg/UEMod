#include "UABL_Creature_LoseAware_C.hpp"
#include "UAblAbility.hpp"
UABL_Creature_LoseAware_C* UABL_Creature_LoseAware_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Creature/Abilities/ABL_Creature_LoseAware.ABL_Creature_LoseAware_C");
    return (UABL_Creature_LoseAware_C*)res;
}
