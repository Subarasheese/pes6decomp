/* compiler: mwcc-3.0.1b210 */
#include "pes6/ending_widget_screen.h"
extern void func_002D5980(void *transition, s16 value), func_002D5960(void *transition, s16 frames);
s32 func_009010E0(void) {
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
            func_001D76B0(func_002F96F0(currentEndingScreen()->widgets, widgetIndex), 0);
        func_001ED8F0(menuWidgetLabel(endingLabels(currentEndingScreen()), 0), 0);
        for (opacityIndex = 1; opacityIndex <= 2; ++opacityIndex)
            func_001DF420(menuWidgetLabel(endingLabels(currentEndingScreen()), opacityIndex), 0);
    }
    {
        void *transition = currentEndingScreen()->transition;
        func_002D5980(transition, 255);
        func_002D5960(transition, 40);
    }
    return 1;
}
