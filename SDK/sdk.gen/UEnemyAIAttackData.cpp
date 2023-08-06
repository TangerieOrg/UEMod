#include "EEnemyAIAction.hpp"
#include "EEnemy_AttackTier.hpp"
#include "EEnemy_AttackType.hpp"
#include "EEnemy_BuffType_DEPRECATED.hpp"
#include "EEnemy_LimitAttackOnTarget.hpp"
#include "EEnemy_ParryMunitionType.hpp"
#include "EEnemy_SelectCooldownType.hpp"
#include "ENPC_GameAttackState.hpp"
#include "ENPC_GameContext.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "FEnemy_ApparateToData.hpp"
#include "FEnemy_AttackRangeData.hpp"
#include "FEnemy_BallisticData.hpp"
#include "FEnemy_FlourishData.hpp"
#include "FEnemy_RunToData.hpp"
#include "FEnemy_WeaponAttackData.hpp"
#include "FGameplayTag.hpp"
#include "FGameplayTagContainer.hpp"
#include "UBehaviorTree.hpp"
#include "UClass.hpp"
#include "UEnemyAIAttackBaseData.hpp"
#include "UEnemyAIAttackData.hpp"
#include "UEnemy_AttackChoice.hpp"
#include "UEnemy_AttackExtraData.hpp"
#include "UInteractionArchitectAsset.hpp"
#include "UMultiFX2_Base.hpp"
#include "USpellToolRecord.hpp"
UEnemyAIAttackData* UEnemyAIAttackData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EnemyAIAttackData");
    return (UEnemyAIAttackData*)res;
}