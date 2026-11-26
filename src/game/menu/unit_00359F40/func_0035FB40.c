/* compiler: mwcc-3.0.1b210 */
#include "pes6/menu_display_screens.h"
extern s32 D_003E9FC8;
extern MenuDisplayScreen *D_003E9FCC[2];
static inline MenuDisplayScreen *currentScreen(void) { return D_003E9FCC[D_003E9FC8]; }
s32 func_0035FB40(void) {
    s32 count, widgetIndex;
    s32 labelIndex;
    if (currentScreen()->active) {
        count = func_002F9630(currentScreen()->widgets);
        for (widgetIndex = 0; widgetIndex < count; ++widgetIndex)
            func_001D7D60(func_002F96F0(currentScreen()->widgets, widgetIndex), 0);
        if (currentScreen()->labelsOpen) {
            func_001EDAE0(menuWidgetLabel(currentScreen()->labels, 0), 0);
        }
        for (labelIndex = 1; labelIndex <= 4; ++labelIndex)
            func_001DF4F0(menuWidgetLabel(currentScreen()->labels, labelIndex), 0);
    }
    return 1;
}
