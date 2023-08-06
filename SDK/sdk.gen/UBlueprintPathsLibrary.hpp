#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
#pragma pack(push, 1)
class UBlueprintPathsLibrary : public UBlueprintFunctionLibrary {
public:
    static UBlueprintPathsLibrary* StaticClass();
    static FString VideoCaptureDir();
    static void ValidatePath(FString InPath, bool& bDidSucceed);
    static void Split(FString InPath, FString& PathPart, FString& FilenamePart, FString& ExtensionPart);
    static FString SourceConfigDir();
    static bool ShouldSaveToUserDir();
    static FString ShaderWorkingDir();
    static void SetProjectFilePath(FString NewGameProjectFilePath);
    static FString SetExtension(FString InPath, FString InNewExtension);
    static FString ScreenShotDir();
    static FString SandboxesDir();
    static FString RootDir();
    static void RemoveDuplicateSlashes(FString InPath, FString& OutPath);
    static FString ProjectUserDir();
    static FString ProjectSavedDir();
    static FString ProjectPluginsDir();
    static FString ProjectPersistentDownloadDir();
    static FString ProjectModsDir();
    static FString ProjectLogDir();
    static FString ProjectIntermediateDir();
    static FString ProjectDir();
    static FString ProjectContentDir();
    static FString ProjectConfigDir();
    static FString ProfilingDir();
    static void NormalizeFilename(FString InPath, FString& OutPath);
    static void NormalizeDirectoryName(FString InPath, FString& OutPath);
    static FString MakeValidFileName(FString inString, FString InReplacementChar);
    static void MakeStandardFilename(FString InPath, FString& OutPath);
    static void MakePlatformFilename(FString InPath, FString& OutPath);
    static bool MakePathRelativeTo(FString InPath, FString InRelativeTo, FString& OutPath);
    static FString LaunchDir();
    static bool IsSamePath(FString PathA, FString PathB);
    static bool IsRestrictedPath(FString InPath);
    static bool IsRelative(FString InPath);
    static bool IsProjectFilePathSet();
    static bool IsDrive(FString InPath);
    static bool HasProjectPersistentDownloadDir();
    static TArray<FString> GetToolTipLocalizationPaths();
    static TArray<FString> GetRestrictedFolderNames();
    static FString GetRelativePathToRoot();
    static TArray<FString> GetPropertyNameLocalizationPaths();
    static FString GetProjectFilePath();
    static FString GetPath(FString InPath);
    static FString GetInvalidFileSystemChars();
    static TArray<FString> GetGameLocalizationPaths();
    static FString GetExtension(FString InPath, bool bIncludeDot);
    static TArray<FString> GetEngineLocalizationPaths();
    static TArray<FString> GetEditorLocalizationPaths();
    static FString GetCleanFilename(FString InPath);
    static FString GetBaseFilename(FString InPath, bool bRemovePath);
    static FString GeneratedConfigDir();
    static FString GameUserDeveloperDir();
    static FString GameSourceDir();
    static FString GameDevelopersDir();
    static FString GameAgnosticSavedDir();
    static bool FileExists(FString InPath);
    static FString FeaturePackDir();
    static FString EnterprisePluginsDir();
    static FString EnterpriseFeaturePackDir();
    static FString EnterpriseDir();
    static FString EngineVersionAgnosticUserDir();
    static FString EngineUserDir();
    static FString EngineSourceDir();
    static FString EngineSavedDir();
    static FString EnginePluginsDir();
    static FString EngineIntermediateDir();
    static FString EngineDir();
    static FString EngineContentDir();
    static FString EngineConfigDir();
    static bool DirectoryExists(FString InPath);
    static FString DiffDir();
    static FString CreateTempFilename(FString Path, FString Prefix, FString Extension);
    static FString ConvertToSandboxPath(FString InPath, FString InSandboxName);
    static FString ConvertRelativePathToFull(FString InPath, FString InBasePath);
    static FString ConvertFromSandboxPath(FString InPath, FString InSandboxName);
    static FString Combine(TArray<FString>& InPaths);
    static bool CollapseRelativeDirectories(FString InPath, FString& OutPath);
    static FString CloudDir();
    static FString ChangeExtension(FString InPath, FString InNewExtension);
    static FString BugItDir();
    static FString AutomationTransientDir();
    static FString AutomationLogDir();
    static FString AutomationDir();
}; // Size: 0x28
#pragma pack(pop)