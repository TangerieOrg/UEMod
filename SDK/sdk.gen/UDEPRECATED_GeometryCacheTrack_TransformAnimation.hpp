#pragma once
#include <cstdint>
#include "UGeometryCacheTrack.hpp"
struct FGeometryCacheMeshData;
#pragma pack(push, 1)
class UDEPRECATED_GeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack {
public:
    char pad_58[0xb0];
    static UDEPRECATED_GeometryCacheTrack_TransformAnimation* StaticClass();
    void SetMesh(FGeometryCacheMeshData& NewMeshData);
}; // Size: 0x108
#pragma pack(pop)
