/* compiler: mwcc-3.0.1b210 */
#include "pes6/entry_widget_screens.h"
extern s32 D_003EA5EC;
extern EntryAnimationScreen *D_003EA5F0[2];
static inline EntryAnimationScreen *currentScreen(void) { return D_003EA5F0[D_003EA5EC]; }
s32 func_00925030(void) {
    s32 count, widgetIndex;
    s32 labelIndex;
    s32 opacityIndex;
    if (currentScreen()->active) {
        count = func_002F9630(currentScreen()->widgets);
        for (widgetIndex = 0; widgetIndex < count; ++widgetIndex)
            func_001D7D60(func_002F96F0(currentScreen()->widgets, widgetIndex), 1);
        for (labelIndex = 0; labelIndex <= 5; ++labelIndex)
            func_001DF4F0(menuWidgetLabel(currentScreen()->labels, labelIndex), 1);
    }
    if (currentScreen()->active) {
        count = func_002F9630(currentScreen()->widgets);
        for (widgetIndex = 0; widgetIndex < count; ++widgetIndex)
            func_001D76B0(func_002F96F0(currentScreen()->widgets, widgetIndex), 255);
        for (opacityIndex = 0; opacityIndex <= 5; ++opacityIndex)
            func_001DF420(menuWidgetLabel(currentScreen()->labels, opacityIndex), 255);
    }
    return 1;
}
