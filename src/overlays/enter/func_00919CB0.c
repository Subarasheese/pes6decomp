/* compiler: mwcc-3.0.1b210 */
#pragma opt_loop_invariants off
#include "pes6/entry_widget_screens.h"
extern s32 D_003EA548;
extern EntryScreen20 *D_003EA54C[2];
extern EntryScreenPhase D_00929FC0[8];
static inline EntryScreen20 *currentScreen(void) { return D_003EA54C[D_003EA548]; }
s32 func_00919CB0(void) {
    s32 done;
    u32 phase;
    s32 opacity;
    s32 count, widgetIndex;
    s32 labelIndex;
    done = 0;
    phase = currentScreen()->phase;
    if (D_00929FC0[phase]() == 1)
        phase++;
    if (phase >= 8)
        done = 1;
    currentScreen()->phase = phase;
    if (func_002D5870(currentScreen()->transition)) {
        opacity = func_002D58A0(currentScreen()->transition);
        if (currentScreen()->active) {
            count = func_002F9630(currentScreen()->widgets);
            for (widgetIndex = 0; widgetIndex < count; ++widgetIndex)
                func_001D76B0(func_002F96F0(currentScreen()->widgets, widgetIndex), (u8)opacity);
            if (currentScreen()->labelsOpen) {
                func_001ED8F0(menuWidgetLabel(currentScreen()->labels, 0), (u8)opacity);
            }
            for (labelIndex = 1; labelIndex <= 10; ++labelIndex)
                func_001DF420(menuWidgetLabel(currentScreen()->labels, labelIndex), (u8)opacity);
        }
    }
    return done;
}
