/* compiler: mwcc-3.0.1b210 */
#include "pes6/entry_page.h"
#include "pes6/entry_widget_screens.h"
static inline EntryPageDisplay *currentScreen(void) {
    return &D_003EA5D0[D_003EA5CC]->storage.display;
}
s32 func_0091D990(void) {
    s32 count, widgetIndex;
    s32 labelIndex;
    s32 opacityIndex;
    if (currentScreen()->active) {
        count = func_002F9630(currentScreen()->widgets);
        for (widgetIndex = 0; widgetIndex < count; ++widgetIndex)
            func_001D7D60(func_002F96F0(currentScreen()->widgets, widgetIndex), 1);
        if (currentScreen()->labelsOpen) {
            func_001EDAE0(menuWidgetLabel(currentScreen()->labels, 0), 1);
        }
        for (labelIndex = 1; labelIndex <= 52; ++labelIndex)
            func_001DF4F0(menuWidgetLabel(currentScreen()->labels, labelIndex), 1);
    }
    if (currentScreen()->active) {
        count = func_002F9630(currentScreen()->widgets);
        for (widgetIndex = 0; widgetIndex < count; ++widgetIndex)
            func_001D76B0(func_002F96F0(currentScreen()->widgets, widgetIndex), 0);
        func_001ED8F0(menuWidgetLabel(currentScreen()->labels, 0), 0);
        for (opacityIndex = 1; opacityIndex <= 52; ++opacityIndex)
            func_001DF420(menuWidgetLabel(currentScreen()->labels, opacityIndex), 0);
    }
    func_002D5930(currentScreen()->transition, 255, 15);
    return 1;
}
