#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAkMidiCcValues : uint8_t {
    AkMidiCcBankSelectCoarse = 0,
    AkMidiCcModWheelCoarse = 1,
    AkMidiCcBreathCtrlCoarse = 2,
    AkMidiCcCtrl3Coarse = 3,
    AkMidiCcFootPedalCoarse = 4,
    AkMidiCcPortamentoCoarse = 5,
    AkMidiCcDataEntryCoarse = 6,
    AkMidiCcVolumeCoarse = 7,
    AkMidiCcBalanceCoarse = 8,
    AkMidiCcCtrl9Coarse = 9,
    AkMidiCcPanPositionCoarse = 10,
    AkMidiCcExpressionCoarse = 11,
    AkMidiCcEffectCtrl1Coarse = 12,
    AkMidiCcEffectCtrl2Coarse = 13,
    AkMidiCcCtrl14Coarse = 14,
    AkMidiCcCtrl15Coarse = 15,
    AkMidiCcGenSlider1 = 16,
    AkMidiCcGenSlider2 = 17,
    AkMidiCcGenSlider3 = 18,
    AkMidiCcGenSlider4 = 19,
    AkMidiCcCtrl20Coarse = 20,
    AkMidiCcCtrl21Coarse = 21,
    AkMidiCcCtrl22Coarse = 22,
    AkMidiCcCtrl23Coarse = 23,
    AkMidiCcCtrl24Coarse = 24,
    AkMidiCcCtrl25Coarse = 25,
    AkMidiCcCtrl26Coarse = 26,
    AkMidiCcCtrl27Coarse = 27,
    AkMidiCcCtrl28Coarse = 28,
    AkMidiCcCtrl29Coarse = 29,
    AkMidiCcCtrl30Coarse = 30,
    AkMidiCcCtrl31Coarse = 31,
    AkMidiCcBankSelectFine = 32,
    AkMidiCcModWheelFine = 33,
    AkMidiCcBreathCtrlFine = 34,
    AkMidiCcCtrl3Fine = 35,
    AkMidiCcFootPedalFine = 36,
    AkMidiCcPortamentoFine = 37,
    AkMidiCcDataEntryFine = 38,
    AkMidiCcVolumeFine = 39,
    AkMidiCcBalanceFine = 40,
    AkMidiCcCtrl9Fine = 41,
    AkMidiCcPanPositionFine = 42,
    AkMidiCcExpressionFine = 43,
    AkMidiCcEffectCtrl1Fine = 44,
    AkMidiCcEffectCtrl2Fine = 45,
    AkMidiCcCtrl14Fine = 46,
    AkMidiCcCtrl15Fine = 47,
    AkMidiCcCtrl20Fine = 52,
    AkMidiCcCtrl21Fine = 53,
    AkMidiCcCtrl22Fine = 54,
    AkMidiCcCtrl23Fine = 55,
    AkMidiCcCtrl24Fine = 56,
    AkMidiCcCtrl25Fine = 57,
    AkMidiCcCtrl26Fine = 58,
    AkMidiCcCtrl27Fine = 59,
    AkMidiCcCtrl28Fine = 60,
    AkMidiCcCtrl29Fine = 61,
    AkMidiCcCtrl30Fine = 62,
    AkMidiCcCtrl31Fine = 63,
    AkMidiCcHoldPedal = 64,
    AkMidiCcPortamentoOnOff = 65,
    AkMidiCcSustenutoPedal = 66,
    AkMidiCcSoftPedal = 67,
    AkMidiCcLegatoPedal = 68,
    AkMidiCcHoldPedal2 = 69,
    AkMidiCcSoundVariation = 70,
    AkMidiCcSoundTimbre = 71,
    AkMidiCcSoundReleaseTime = 72,
    AkMidiCcSoundAttackTime = 73,
    AkMidiCcSoundBrightness = 74,
    AkMidiCcSoundCtrl6 = 75,
    AkMidiCcSoundCtrl7 = 76,
    AkMidiCcSoundCtrl8 = 77,
    AkMidiCcSoundCtrl9 = 78,
    AkMidiCcSoundCtrl10 = 79,
    AkMidiCcGeneralButton1 = 80,
    AkMidiCcGeneralButton2 = 81,
    AkMidiCcGeneralButton3 = 82,
    AkMidiCcGeneralButton4 = 83,
    AkMidiCcReverbLevel = 91,
    AkMidiCcTremoloLevel = 92,
    AkMidiCcChorusLevel = 93,
    AkMidiCcCelesteLevel = 94,
    AkMidiCcPhaserLevel = 95,
    AkMidiCcDataButtonP1 = 96,
    AkMidiCcDataButtonM1 = 97,
    AkMidiCcNonRegisterCoarse = 98,
    AkMidiCcNonRegisterFine = 99,
    AkMidiCcAllSoundOff = 120,
    AkMidiCcAllControllersOff = 121,
    AkMidiCcLocalKeyboard = 122,
    AkMidiCcAllNotesOff = 123,
    AkMidiCcOmniModeOff = 124,
    AkMidiCcOmniModeOn = 125,
    AkMidiCcOmniMonophonicOn = 126,
    AkMidiCcOmniPolyphonicOn = 127,
    EAkMidiCcValues_MAX = 128,
};
#pragma pack(pop)
