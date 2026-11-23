/* compiler: ee-gcc-2.9-Os-G0 */
#include "pes6/ntgui_text_timer.h"

void func_00172CF0(NtTextTimer *widget, s32 focused) {
    if (widget->cursorTimer) {
        func_00167C38(func_00165B00(widget), widget->cursorTimer);
        widget->cursorTimer = 0;
    }
    if (focused && widget->cursorPeriod) {
        widget->cursorTimer =
            func_00167BB8(func_00165B00(widget), widget->cursorPeriod, widget, func_00173648);
        widget->cursorVisible = 1;
    }
    if (widget->focus != focused) {
        D_005C14CC(widget, focused);
        if (!focused && widget->activeText)
            func_001747A0(widget);
    }
}
