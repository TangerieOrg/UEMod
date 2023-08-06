#pragma once
#include <cstdint>
#include "FGameplayTag.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UGameplayTagLibrary : public UDataAsset {
public:
    FGameplayTag BleedingTag; // 0x30
    FGameplayTag ChannelingTag; // 0x38
    FGameplayTag CharacterHighPostImpactVelocity; // 0x40
    FGameplayTag ChargingTag; // 0x48
    FGameplayTag CharredTag; // 0x50
    FGameplayTag CriticalHealthTag; // 0x58
    FGameplayTag DeadTag; // 0x60
    FGameplayTag DazedTag; // 0x68
    FGameplayTag FallingTag; // 0x70
    FGameplayTag FinisherTag; // 0x78
    FGameplayTag InAirTag; // 0x80
    FGameplayTag InvulnerableTag; // 0x88
    FGameplayTag NearDeathKneelTag; // 0x90
    FGameplayTag InstantDeathTag; // 0x98
    FGameplayTag OverkilledTag; // 0xa0
    FGameplayTag OnFireTag; // 0xa8
    FGameplayTag MarkedTag; // 0xb0
    FGameplayTag RagdollTag; // 0xb8
    FGameplayTag SentTag; // 0xc0
    FGameplayTag WeakTag; // 0xc8
    FGameplayTag UnawareTag; // 0xd0
    FGameplayTag VulnerableTag; // 0xd8
    FGameplayTag PlayStrongAttackBeforeDeathTag; // 0xe0
    FGameplayTag ArrestedTag; // 0xe8
    FGameplayTag ConfoundedTag; // 0xf0
    FGameplayTag CrucioedTag; // 0xf8
    FGameplayTag FrozenTag; // 0x100
    FGameplayTag ImperiusedTag; // 0x108
    FGameplayTag LevitatedTag; // 0x110
    FGameplayTag PetrifiedTag; // 0x118
    FGameplayTag LaidOutTag; // 0x120
    FGameplayTag GettingUpTag; // 0x128
    FGameplayTag ArmedStatusTag; // 0x130
    FGameplayTag UnarmedStatusTag; // 0x138
    FGameplayTag ShieldedStatusTag; // 0x140
    FGameplayTag UnshieldedStatusTag; // 0x148
    FGameplayTag AttackLightTag; // 0x150
    FGameplayTag AttackMediumTag; // 0x158
    FGameplayTag AttackHeavyTag; // 0x160
    FGameplayTag CompleteDeathTag; // 0x168
    FGameplayTag BreakBlockUnawareTag; // 0x170
    FGameplayTag BreakBlockPygmyPerkTag; // 0x178
    FGameplayTag CuttingTag; // 0x180
    FGameplayTag CharringBlowTag; // 0x188
    FGameplayTag CompanionInstigatorTag; // 0x190
    FGameplayTag DeathBlowTag; // 0x198
    FGameplayTag DeflectedTag; // 0x1a0
    FGameplayTag FinisherImpactTag; // 0x1a8
    FGameplayTag FireImpactTag; // 0x1b0
    FGameplayTag HighPostImpactVelocity; // 0x1b8
    FGameplayTag ImpactByCharacter; // 0x1c0
    FGameplayTag ImpactStrengthLightTag; // 0x1c8
    FGameplayTag ImpactStrengthHeavyTag; // 0x1d0
    FGameplayTag LeviosoTag; // 0x1d8
    FGameplayTag MeleeTag; // 0x1e0
    FGameplayTag NoInReactionAdjustment; // 0x1e8
    FGameplayTag ObjectBroke; // 0x1f0
    FGameplayTag OppugnoImpactTag; // 0x1f8
    FGameplayTag OverkillBlowTag; // 0x200
    FGameplayTag PerfectParry; // 0x208
    FGameplayTag PhysicsImpactTag; // 0x210
    FGameplayTag PopupImpactTag; // 0x218
    FGameplayTag ProtogoIgnoreImpactTag; // 0x220
    FGameplayTag ShockwaveImpactTag; // 0x228
    FGameplayTag SuperAttackTag; // 0x230
    FGameplayTag SustainedBlastTag; // 0x238
    FGameplayTag StealOnImpactTag; // 0x240
    FGameplayTag StrongerReactionImpactTag; // 0x248
    FGameplayTag StupefyImpactTag; // 0x250
    FGameplayTag TriggerReactionTag; // 0x258
    FGameplayTag UnblockableImpactTag; // 0x260
    FGameplayTag ShieldBrokenTag; // 0x268
    FGameplayTag PlayerShieldBreakerImpactTag; // 0x270
    FGameplayTag EnemyShieldBreakerTypeAImpactTag; // 0x278
    FGameplayTag EnemyShieldBreakerTypeBImpactTag; // 0x280
    FGameplayTag EnemyShieldBreakerTypeCImpactTag; // 0x288
    FGameplayTag CounterAttackImpactTag; // 0x290
    FGameplayTag DodgeBlinkAttackImpactTag; // 0x298
    FGameplayTag CharacterControlAttackImpactTag; // 0x2a0
    FGameplayTag HeavyDamageAttackImpactTag; // 0x2a8
    FGameplayTag ForcefulBlastAttackImpactTag; // 0x2b0
    FGameplayTag AOEAttackImpactTag; // 0x2b8
    FGameplayTag FinisherAttackImpactTag; // 0x2c0
    FGameplayTag HighElevationSplatteringFallDeathTag; // 0x2c8
    FGameplayTag ImperiusImpactTag; // 0x2d0
    FGameplayTag CrucioImpactTag; // 0x2d8
    FGameplayTag CrucioEnduringImpactTag; // 0x2e0
    FGameplayTag GlaciusImpactTag; // 0x2e8
    FGameplayTag MandrakeImpactTag; // 0x2f0
    FGameplayTag StupefySpecialPopupImpactTag; // 0x2f8
    FGameplayTag CrucioTalentProjectileImpactTag; // 0x300
    FGameplayTag ImmuneToImpactTag; // 0x308
    FGameplayTag EnemyDefaultGroupGameplayTag; // 0x310
    FGameplayTag CounterAttackGameplayTag; // 0x318
    FGameplayTag CounterGetupGameplayTag; // 0x320
    FGameplayTag CounterReactionGameplayTag; // 0x328
    FGameplayTag CounterRecoverGameplayTag; // 0x330
    FGameplayTag CounterStunLockGameplayTag; // 0x338
    FGameplayTag CounterRetaliateGameplayTag; // 0x340
    FGameplayTag CounterEscapeGameplayTag; // 0x348
    FGameplayTag SpecialTicketTag; // 0x350
    FGameplayTag SpecialTicketVulnerableMustAvoidTag; // 0x358
    FGameplayTag SpecialTicketVulnerableFollowupTag; // 0x360
    FGameplayTag TargetLevitatedTag; // 0x368
    FGameplayTag TargetInCCTag; // 0x370
    FGameplayTag DeathBlowGameplayTag; // 0x378
    FGameplayTag StealthTakedownGameplayTag; // 0x380
    FGameplayTag AttackChooseUpdateTag; // 0x388
    FGameplayTag AttackChooseStartTag; // 0x390
    FGameplayTag AttackExecuteTag; // 0x398
    FGameplayTag ProtegoIgnoreTag; // 0x3a0
    FGameplayTag LightAttackTag; // 0x3a8
    FGameplayTag MediumAttackTag; // 0x3b0
    FGameplayTag HeavyAttackTag; // 0x3b8
    FGameplayTag MoveTypeSightTag; // 0x3c0
    FGameplayTag MoveTypeListenTag; // 0x3c8
    FGameplayTag MoveTypeComboFinal; // 0x3d0
    FGameplayTag GameEventTag; // 0x3d8
    FGameplayTag GameEventMunitionTag; // 0x3e0
    FGameplayTag GameEventMunitionHitTag; // 0x3e8
    FGameplayTag GameEventMunitionFireTag; // 0x3f0
    FGameplayTag GameEventFootfallTag; // 0x3f8
    FGameplayTag GameEventWandLinkTag; // 0x400
    FGameplayTag GameEventObjectBrokenTag; // 0x408
    FGameplayTag GameEventPhysicsCollisionTag; // 0x410
    FGameplayTag StupefySpecial; // 0x418
    FGameplayTag LeaderGroupTag; // 0x420
    FGameplayTag DuelOpponentGroupTag; // 0x428
    FGameplayTag CompanionGroupTag; // 0x430
    FGameplayTag DuelModeIATag; // 0x438
    FGameplayTag DuelModeAATag; // 0x440
    FGameplayTag BecomeAwareInstantAATag; // 0x448
    FGameplayTag CounterTooCloseGameplayTag; // 0x450
    FGameplayTag SweetSpotDamageTag; // 0x458
    FGameplayTag HalfSweetSpotDamageTag; // 0x460
    FGameplayTag CounterAttackVulnerableTag; // 0x468
    FGameplayTag HitAlliesTag; // 0x470
    FGameplayTag WandLinkCowerV1Tag; // 0x478
    FGameplayTag WandLinkCowerV2Tag; // 0x480
    FGameplayTag WandLinkCowerV3Tag; // 0x488
    FGameplayTag WandLinkCowerV4Tag; // 0x490
    static UGameplayTagLibrary* StaticClass();
}; // Size: 0x498
#pragma pack(pop)