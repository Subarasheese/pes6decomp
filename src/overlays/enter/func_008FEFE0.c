/* compiler: mwcc-3.0.1b210 */
#include "pes6/entry_widget_screens.h"
extern s32 D_003EA518;
extern EntryScreen1C *D_003EA51C[2];
static inline EntryScreen1C *currentScreen(void) { return D_003EA51C[D_003EA518]; }
s32 func_008FEFE0(void) {
    s32 count, widgetIndex;
    s32 labelIndex;
    if (currentScreen()->active) {
        count = func_002F9630(currentScreen()->widgets);
        for (widgetIndex = 0; widgetIndex < count; ++widgetIndex)
            func_001D76B0(func_002F96F0(currentScreen()->widgets, widgetIndex), 0);
        if (currentScreen()->labelsOpen) {
            func_001ED8F0(menuWidgetLabel(currentScreen()->labels, 0), 0);
        }
        for (labelIndex = 1; labelIndex <= 12; ++labelIndex)
            func_001DF420(menuWidgetLabel(currentScreen()->labels, labelIndex), 0);
    }
    func_002D5930(currentScreen()->transition, 255, 15);
    return 1;
}
