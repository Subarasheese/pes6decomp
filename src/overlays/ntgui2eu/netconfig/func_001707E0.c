/* compiler: ee-gcc-2.9-Os-G0 */
#include "pes6/ntgui_widget_timer.h"

typedef struct {
    u8 reserved00[0x89c];
    s32 active, phase, pending;
    u8 transitionState[0x940 - 0x8a8];
    s32 current, requested;
} CueWidget;

extern void func_00170860(s32 event, s64 widget);

void func_001707E0(CueWidget *widget) {
    widget->requested = 0;
    if (!widget->active) {
        widget->pending = 1;
        func_00167BB8(func_00165B00(widget), 1, widget, func_00170860);
        widget->current = widget->requested;
        widget->active = 1;
        widget->phase = 1;
        func_00189778(widget->transitionState);
    }
}
