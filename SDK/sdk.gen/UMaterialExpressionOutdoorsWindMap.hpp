#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionOutdoorsWindMap : public UMaterialExpression {
public:
    FExpressionInput Coordinate; // 0x40
    char pad_54[0x4];
    static UMaterialExpressionOutdoorsWindMap* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
