#pragma once
#include <cstdint>
#include "UAblAnimationTagChooser.hpp"
#pragma pack(push, 1)
class UAblAnimationTagChooser_EnemyMove : public UAblAnimationTagChooser {
public:
    char pad_50[0x8];
    static UAblAnimationTagChooser_EnemyMove* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
