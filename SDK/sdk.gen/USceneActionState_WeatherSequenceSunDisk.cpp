#include "USceneActionState_WeatherSequenceAuto.hpp"
#include "USceneActionState_WeatherSequenceSunDisk.hpp"
USceneActionState_WeatherSequenceSunDisk* USceneActionState_WeatherSequenceSunDisk::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneActionState_WeatherSequenceSunDisk");
    return (USceneActionState_WeatherSequenceSunDisk*)res;
}
