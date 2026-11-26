/* compiler: mwcc-3.0.1b210 */
#include "pes6/entry_widget_screens.h"
extern s32 D_003EA548;
extern EntryScreen20 *D_003EA54C[2];
static inline EntryScreen20 *currentScreen(void) { return D_003EA54C[D_003EA548]; }
s32 func_00919FD0(void) {
    s32 count, widgetIndex;
    s32 labelIndex;
    if (currentScreen()->active) {
        count = func_002F9630(currentScreen()->widgets);
        for (widgetIndex = 0; widgetIndex < count; ++widgetIndex)
            func_001D76B0(func_002F96F0(currentScreen()->widgets, widgetIndex), 255);
        if (currentScreen()->labelsOpen) {
            func_001ED8F0(menuWidgetLabel(currentScreen()->labels, 0), 255);
        }
        for (labelIndex = 1; labelIndex <= 10; ++labelIndex)
            func_001DF420(menuWidgetLabel(currentScreen()->labels, labelIndex), 255);
    }
    return 1;
}
