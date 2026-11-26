/* compiler: mwcc-3.0.1b210 */
#include "pes6/entry_widget_screens.h"
extern s32 D_003EA5DC;
extern EntryScreen20 *D_003EA5E0[2];
extern void func_00922CD0(s32 enabled);
static inline EntryScreen20 *currentScreen(void) { return D_003EA5E0[D_003EA5DC]; }
s32 func_00922540(void) {
    s32 count, widgetIndex;
    s32 labelIndex;
    func_00922CD0(1);
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
