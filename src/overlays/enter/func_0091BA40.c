/* compiler: mwcc-3.0.1b210 */
#include "pes6/entry_widget_screens.h"
extern s32 D_003EA550;
extern EntryOptionScreen *D_003EA554[2];
extern void func_0091C180(s32 enabled);
static inline EntryOptionScreen *currentScreen(void) { return D_003EA554[D_003EA550]; }
s32 func_0091BA40(void) {
    s32 count, widgetIndex;
    s32 labelIndex;
    func_0091C180(1);
    if (currentScreen()->active) {
        count = func_002F9630(currentScreen()->widgets);
        for (widgetIndex = 0; widgetIndex < count; ++widgetIndex)
            func_001D76B0(func_002F96F0(currentScreen()->widgets, widgetIndex), 255);
        func_001ED8F0(menuWidgetLabel(currentScreen()->labels, 0), 255);
        for (labelIndex = 1; labelIndex <= 3; ++labelIndex)
            func_001DF420(menuWidgetLabel(currentScreen()->labels, labelIndex), 255);
    }
    return 1;
}
