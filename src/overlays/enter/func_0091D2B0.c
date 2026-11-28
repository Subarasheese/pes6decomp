/* compiler: mwcc-3.0.1b210 */
#pragma opt_loop_invariants off
#include "pes6/entry_page.h"
#include "pes6/entry_widget_screens.h"
extern EntryScreenPhase D_0092A4A0[7];
static inline EntryPageDisplay *currentScreen(void) {
    return &D_003EA5D0[D_003EA5CC]->storage.display;
}
s32 func_0091D2B0(void) {
    s32 done;
    u32 phase;
    s32 opacity;
    s32 count, widgetIndex;
    s32 labelIndex;
    done = 0;
    phase = currentScreen()->phase;
    if (D_0092A4A0[phase]() == 1)
        phase++;
    if (phase >= 7)
        done = 1;
    currentScreen()->phase = phase;
    if (func_002D5870(currentScreen()->transition)) {
        opacity = func_002D58A0(currentScreen()->transition);
        if (currentScreen()->active) {
            count = func_002F9630(currentScreen()->widgets);
            for (widgetIndex = 0; widgetIndex < count; ++widgetIndex)
                func_001D76B0(func_002F96F0(currentScreen()->widgets, widgetIndex), (u8)opacity);
            func_001ED8F0(menuWidgetLabel(currentScreen()->labels, 0), (u8)opacity);
            for (labelIndex = 1; labelIndex <= 52; ++labelIndex)
                func_001DF420(menuWidgetLabel(currentScreen()->labels, labelIndex), (u8)opacity);
        }
    }
    return done;
}
