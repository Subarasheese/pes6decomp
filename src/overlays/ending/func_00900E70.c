/* compiler: mwcc-3.0.1b210 */
#include "pes6/ending_widget_screen.h"
extern void func_002D5630(void *counter, s32 frames);
s32 func_00900E70(void) {
    s32 count, widgetIndex;
    s32 labelIndex;
    s32 opacityIndex;
    if (currentEndingScreen()->active) {
        count = func_002F9630(currentEndingScreen()->widgets);
        for (widgetIndex = 0; widgetIndex < count; ++widgetIndex)
            func_001D7D60(func_002F96F0(currentEndingScreen()->widgets, widgetIndex), 1);
        {
            EndingScreen *screen = currentEndingScreen();
            if (screen->labelsOpen) {
                func_001EDAE0(menuWidgetLabel(screen->labels, 0), 1);
            }
        }
        for (labelIndex = 1; labelIndex <= 2; ++labelIndex)
            func_001DF4F0(menuWidgetLabel(endingLabels(currentEndingScreen()), labelIndex), 1);
    }
    if (currentEndingScreen()->active) {
        count = func_002F9630(currentEndingScreen()->widgets);
        for (widgetIndex = 0; widgetIndex < count; ++widgetIndex)
            func_001D76B0(func_002F96F0(currentEndingScreen()->widgets, widgetIndex), 255);
        func_001ED8F0(menuWidgetLabel(endingLabels(currentEndingScreen()), 0), 255);
        for (opacityIndex = 1; opacityIndex <= 2; ++opacityIndex)
            func_001DF420(menuWidgetLabel(endingLabels(currentEndingScreen()), opacityIndex), 255);
    }
    func_002D5630(currentEndingScreen()->counter, 0);
    return 1;
}
