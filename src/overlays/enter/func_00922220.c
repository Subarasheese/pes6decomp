/* compiler: mwcc-3.0.1b210 */
#pragma opt_loop_invariants off
#include "pes6/entry_widget_screens.h"
extern s32 D_003EA5DC;
extern EntryScreen20 *D_003EA5E0[2];
extern EntryScreenPhase D_0092A7E0[7];
static inline EntryScreen20 *currentScreen(void) { return D_003EA5E0[D_003EA5DC]; }
s32 func_00922220(void) {
    s32 count, widgetIndex;
    s32 labelIndex;
    s32 done = 0;
    u32 phase = currentScreen()->phase;
    s32 opacity;
    if (D_0092A7E0[phase]() == 1)
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
            for (labelIndex = 1; labelIndex <= 3; ++labelIndex)
                func_001DF420(menuWidgetLabel(currentScreen()->labels, labelIndex), (u8)opacity);
        }
    }
    return done;
}
