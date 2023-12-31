#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAudioSpectrumType : uint8_t {
    MagnitudeSpectrum = 0,
    PowerSpectrum = 1,
    Decibel = 2,
    EAudioSpectrumType_MAX = 3,
};
#pragma pack(pop)
