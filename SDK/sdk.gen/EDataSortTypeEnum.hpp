#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDataSortTypeEnum : uint8_t {
    ChaosNiagara_DataSortType_NoSorting = 0,
    ChaosNiagara_DataSortType_RandomShuffle = 1,
    ChaosNiagara_DataSortType_SortByMassMaxToMin = 2,
    ChaosNiagara_DataSortType_SortByMassMinToMax = 3,
    ChaosNiagara_Max = 4,
};
#pragma pack(pop)
