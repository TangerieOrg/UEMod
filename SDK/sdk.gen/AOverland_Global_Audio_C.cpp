#include "ALevelScriptActor.hpp"
#include "AOverland_Global_Audio_C.hpp"
AOverland_Global_Audio_C* AOverland_Global_Audio_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Overland/Overland_Global_Audio.Overland_Global_Audio_C");
    return (AOverland_Global_Audio_C*)res;
}
