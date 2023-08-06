#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGfeSDKReturnCode {
    Success = 0,
    SuccessIpcOldSdk = 1,
    SuccessIpcOldGfe = 2,
    Error = 3,
    ErrorGfeVersion = 4,
    ErrorSdkVersion = 5,
    ErrorModuleNotLoaded = 6,
    ErrorWrongTimeRangeSet = 7,
    ErrorGeneric = 8,
    ErrorNotImplemented = 9,
    ErrorInvalidParameter = 10,
    ErrorNotSet = 11,
    ErrorShadowplayIRDisabled = 12,
    ErrorSDKInUse = 13,
    ErrorGroupNotFound = 14,
    ErrorFileNotFound = 15,
    ErrorHighlightsSetupFailed = 16,
    ErrorHighlightsNotConfigured = 17,
    ErrorHighlightSaveFailed = 18,
    ErrorUnexpectedException = 19,
    ErrorNoHighlights = 20,
    ErrorNoConnection = 21,
    ErrorPermissionNotGranted = 22,
    ErrorPermissionDenied = 23,
    ErrorInvalidHandle = 24,
    ErrorUnhandledException = 25,
    ErrorOutOfMemory = 26,
    ErrorLoadLibrary = 27,
    ErrorLibraryCallFailed = 28,
    ErrorIPCFailed = 29,
    ErrorConnection = 30,
    ErrorLibCallTimeout = 32,
    ErrorApplicationLookupFailed = 33,
    ErrorApplicationNotKnown = 34,
    ErrorFeatureDisabled = 35,
    ErrorAppNoOptimization = 36,
    ErrorAppSettingsRead = 37,
    ErrorAppSettingsWrite = 38,
    EGfeSDKReturnCode_MAX = 39,
};
#pragma pack(pop)