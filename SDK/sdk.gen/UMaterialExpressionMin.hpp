#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionMin : public UMaterialExpression {
public:
    FExpressionInput A; // 0x40
    FExpressionInput B; // 0x54
    float ConstA; // 0x68
    float ConstB; // 0x6c
    static UMaterialExpressionMin* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
