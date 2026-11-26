/* compiler: mwcc-3.0.1b210 */
#include "pes6/entry_widget_screens.h"
extern s32 D_003EA5EC;
extern EntryAnimationScreen *D_003EA5F0[2];
static inline EntryAnimationScreen *currentScreen(void) { return D_003EA5F0[D_003EA5EC]; }
s32 func_00924E30(void) {
    s32 count, widgetIndex;
    s32 labelIndex;
    if (currentScreen()->active) {
        count = func_002F9630(currentScreen()->widgets);
        for (widgetIndex = 0; widgetIndex < count; ++widgetIndex)
            func_001D7D60(func_002F96F0(currentScreen()->widgets, widgetIndex), 0);
        for (labelIndex = 0; labelIndex <= 5; ++labelIndex)
            func_001DF4F0(menuWidgetLabel(currentScreen()->labels, labelIndex), 0);
    }
    return 1;
}
