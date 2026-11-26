/* compiler: mwcc-3.0.1b210 */
#pragma opt_loop_invariants off
#include "pes6/menu_display_screens.h"
extern s32 D_003E9FC0;
extern MenuDisplayPanel *D_003E9FC4[2];
static inline MenuDisplayPanel *currentScreen(void) { return D_003E9FC4[D_003E9FC0]; }
void func_0035AEA0(s32 opacity) {
    s32 count, widgetIndex;
    if (currentScreen()->active) {
        count = func_002F9630(currentScreen()->widgets);
        for (widgetIndex = 0; widgetIndex < count; ++widgetIndex)
            func_001D76B0(func_002F96F0(currentScreen()->widgets, widgetIndex), (u8)opacity);
        func_001ED8F0(menuWidgetLabel(currentScreen()->labels, 0), (u8)opacity);
        func_001DF420(menuWidgetLabel(currentScreen()->labels, 1), (u8)opacity);
    }
}
