#include "USceneAction_WeatherSequenceLightingGlobalLightRigBlendable.hpp"
#include "USceneAction_WeatherSequenceLightingGlobalLightRigBlendableBlendConstant.hpp"
USceneAction_WeatherSequenceLightingGlobalLightRigBlendableBlendConstant* USceneAction_WeatherSequenceLightingGlobalLightRigBlendableBlendConstant::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceLightingGlobalLightRigBlendableBlendConstant");
    return (USceneAction_WeatherSequenceLightingGlobalLightRigBlendableBlendConstant*)res;
}