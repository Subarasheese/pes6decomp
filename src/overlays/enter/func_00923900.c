/* compiler: mwcc-3.0.1b210 */
#pragma opt_loop_invariants off
#include "pes6/entry_widget_screens.h"
typedef struct {
    void *widgets, *labels;
    u8 transition[8];
    u8 reserved10[0xc];
    u32 phase;
    u8 reserved20[12];
    unsigned char active : 1, labelsOpen : 1;
} MenuScreen;
extern s32 D_003EA5E4;
extern MenuScreen *D_003EA5E8[2];
extern EntryScreenPhase D_0092A8D0[7];
static inline MenuScreen *currentScreen(void) { return D_003EA5E8[D_003EA5E4]; }
static inline void applyScreenOpacity(u32 opacity) {
    s32 count, widgetIndex;
    if (currentScreen()->active) {
        count = func_002F9630(currentScreen()->widgets);
        for (widgetIndex = 0; widgetIndex < count; ++widgetIndex)
            func_001D76B0(func_002F96F0(currentScreen()->widgets, widgetIndex), (u8)opacity);
        func_001ED8F0(menuWidgetLabel(currentScreen()->labels, 0), (u8)opacity);
        func_001DF420(menuWidgetLabel(currentScreen()->labels, 1), (u8)opacity);
    }
}
s32 func_00923900(void) {
    u32 phase;
    s32 done;
    s32 opacity;
    done = 0;
    phase = currentScreen()->phase;
    if (D_0092A8D0[phase]() == 1)
        phase++;
    if (phase >= 7)
        done = 1;
    currentScreen()->phase = phase;
    if (func_002D5870(currentScreen()->transition)) {
        opacity = func_002D58A0(currentScreen()->transition);
        applyScreenOpacity(opacity);
    }
    return done;
}
