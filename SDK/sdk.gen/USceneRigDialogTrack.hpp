#pragma once
#include <cstdint>
#include "FMovieSceneObjectBindingID.hpp"
#include "UMovieSceneNameableTrack.hpp"
class UMovieSceneSection;
#pragma pack(push, 1)
class USceneRigDialogTrack : public UMovieSceneNameableTrack {
public:
    TArray<FMovieSceneObjectBindingID> EventReceivers; // 0x90
    TArray<UMovieSceneSection*> Sections; // 0xa0
    static USceneRigDialogTrack* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
