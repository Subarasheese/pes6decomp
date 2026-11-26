/* compiler: mwcc-3.0.1b210 */
#include "pes6/menu_display_screens.h"
extern s32 D_003E9FC0;
extern MenuDisplayPanel *D_003E9FC4[2];
static inline MenuDisplayPanel *currentScreen(void) { return D_003E9FC4[D_003E9FC0]; }
s32 func_0035C380(void) {
    s32 count, widgetIndex;
    if (currentScreen()->active) {
        count = func_002F9630(currentScreen()->widgets);
        for (widgetIndex = 0; widgetIndex < count; ++widgetIndex)
            func_001D7D60(func_002F96F0(currentScreen()->widgets, widgetIndex), 1);
        if (currentScreen()->labelsOpen) {
            func_001EDAE0(menuWidgetLabel(currentScreen()->labels, 0), 1);
        }
        func_001DF4F0(menuWidgetLabel(currentScreen()->labels, 1), 1);
    }
    if (currentScreen()->active) {
        count = func_002F9630(currentScreen()->widgets);
        for (widgetIndex = 0; widgetIndex < count; ++widgetIndex)
            func_001D76B0(func_002F96F0(currentScreen()->widgets, widgetIndex), 0);
        func_001ED8F0(menuWidgetLabel(currentScreen()->labels, 0), 0);
        func_001DF420(menuWidgetLabel(currentScreen()->labels, 1), 0);
    }
    func_002D5930(currentScreen()->transition, 255, 15);
    return 1;
}
