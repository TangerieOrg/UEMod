#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum SocialInteractionDisplayStatusIDs : uint8_t {
    SOCIAL_INTERACTION_DISPLAY_STATUS_AVAILABLE = 0,
    SOCIAL_INTERACTION_DISPLAY_STATUS_HIDDEN = 1,
    SOCIAL_INTERACTION_DISPLAY_STATUS_LOCKED_ASKEDFORFAVOR = 2,
    SOCIAL_INTERACTION_DISPLAY_STATUS_LOCKED_BEINGEXTORTED = 3,
    SOCIAL_INTERACTION_DISPLAY_STATUS_LOCKED_CRIMECITATIONS = 4,
    SOCIAL_INTERACTION_DISPLAY_STATUS_LOCKED_ITEM = 5,
    SOCIAL_INTERACTION_DISPLAY_STATUS_LOCKED_KNOWLEDGE = 6,
    SOCIAL_INTERACTION_DISPLAY_STATUS_LOCKED_LOCK = 7,
    SOCIAL_INTERACTION_DISPLAY_STATUS_LOCKED_MISSION = 8,
    SOCIAL_INTERACTION_DISPLAY_STATUS_LOCKED_SOCAP = 9,
    SOCIAL_INTERACTION_DISPLAY_STATUS_COUNT = 10,
    SOCIAL_INTERACTION_DISPLAY_STATUS_MAX = 11,
};
#pragma pack(pop)
