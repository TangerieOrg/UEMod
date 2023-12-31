#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EPlatformInterfaceDataType : uint8_t {
    PIDT_None = 0,
    PIDT_Int = 1,
    PIDT_Float = 2,
    PIDT_String = 3,
    PIDT_Object = 4,
    PIDT_Custom = 5,
    PIDT_MAX = 6,
};
#pragma pack(pop)
