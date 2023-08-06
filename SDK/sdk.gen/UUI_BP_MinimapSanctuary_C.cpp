#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UMinimapSanctuary.hpp"
#include "UUI_BP_MinimapSanctuary_C.hpp"
UUI_BP_MinimapSanctuary_C* UUI_BP_MinimapSanctuary_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/MiniMap/UI_BP_MinimapSanctuary.UI_BP_MinimapSanctuary_C");
    return (UUI_BP_MinimapSanctuary_C*)res;
}
void UUI_BP_MinimapSanctuary_C::ExecuteUbergraph_UI_BP_MinimapSanctuary(int32_t EntryPoint, float K2Node_Event_Opacity, bool K2Node_Event_Visibile) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/MiniMap/UI_BP_MinimapSanctuary.UI_BP_MinimapSanctuary_C.ExecuteUbergraph_UI_BP_MinimapSanctuary"));
    struct Params_ExecuteUbergraph_UI_BP_MinimapSanctuary {
        int32_t EntryPoint; // 0x0
        float K2Node_Event_Opacity; // 0x4
        bool K2Node_Event_Visibile; // 0x8
    }; // Size: 0x9
    Params_ExecuteUbergraph_UI_BP_MinimapSanctuary params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_Opacity = (float)K2Node_Event_Opacity;
    params.K2Node_Event_Visibile = (bool)K2Node_Event_Visibile;
    ProcessEvent(func, &params);
}
void UUI_BP_MinimapSanctuary_C::SetMapOpacity(float Opacity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/MiniMap/UI_BP_MinimapSanctuary.UI_BP_MinimapSanctuary_C.SetMapOpacity"));
    struct Params_SetMapOpacity {
        float Opacity; // 0x0
    }; // Size: 0x4
    Params_SetMapOpacity params{};
    params.Opacity = (float)Opacity;
    ProcessEvent(func, &params);
}
void UUI_BP_MinimapSanctuary_C::ShowMap(bool Visibile) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/MiniMap/UI_BP_MinimapSanctuary.UI_BP_MinimapSanctuary_C.ShowMap"));
    struct Params_ShowMap {
        bool Visibile; // 0x0
    }; // Size: 0x1
    Params_ShowMap params{};
    params.Visibile = (bool)Visibile;
    ProcessEvent(func, &params);
}
