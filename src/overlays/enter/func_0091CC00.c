/* compiler: mwcc-3.0.1b210 */
#pragma opt_loop_invariants off
#include "pes6/entry_page.h"
#include "pes6/entry_widget_screens.h"
static inline EntryPageDisplay *currentScreen(void) {
    return &D_003EA5D0[D_003EA5CC]->storage.display;
}
void func_0091CC00(s32 opacity) {
    s32 count, widgetIndex;
    s32 labelIndex;
    if (currentScreen()->active) {
        count = func_002F9630(currentScreen()->widgets);
        for (widgetIndex = 0; widgetIndex < count; ++widgetIndex)
            func_001D76B0(func_002F96F0(currentScreen()->widgets, widgetIndex), (u8)opacity);
        func_001ED8F0(menuWidgetLabel(currentScreen()->labels, 0), (u8)opacity);
        for (labelIndex = 1; labelIndex <= 52; ++labelIndex)
            func_001DF420(menuWidgetLabel(currentScreen()->labels, labelIndex), (u8)opacity);
    }
}
