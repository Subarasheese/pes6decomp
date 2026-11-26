/* compiler: mwcc-3.0.1b210 */
#include "pes6/entry_widget_screens.h"
extern s32 D_003EA548;
extern EntryScreen20 *D_003EA54C[2];
extern void func_0091A720(s32 enabled);
static inline EntryScreen20 *currentScreen(void) { return D_003EA54C[D_003EA548]; }
s32 func_0091A170(void) {
    s32 count, widgetIndex;
    s32 labelIndex;
    func_0091A720(1);
    if (currentScreen()->active) {
        count = func_002F9630(currentScreen()->widgets);
        for (widgetIndex = 0; widgetIndex < count; ++widgetIndex)
            func_001D76B0(func_002F96F0(currentScreen()->widgets, widgetIndex), 0);
        if (currentScreen()->labelsOpen) {
            func_001ED8F0(menuWidgetLabel(currentScreen()->labels, 0), 0);
        }
        for (labelIndex = 1; labelIndex <= 10; ++labelIndex)
            func_001DF420(menuWidgetLabel(currentScreen()->labels, labelIndex), 0);
    }
    func_002D5930(currentScreen()->transition, 255, 15);
    return 1;
}
