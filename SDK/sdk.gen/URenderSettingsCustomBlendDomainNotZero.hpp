#pragma once
#include <cstdint>
#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
class URenderSettingsCustomBlendDomain;
#pragma pack(push, 1)
class URenderSettingsCustomBlendDomainNotZero : public URenderSettingsCustomBlendDomainNoPreCompute {
public:
    URenderSettingsCustomBlendDomain* domain; // 0x28
    static URenderSettingsCustomBlendDomainNotZero* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
