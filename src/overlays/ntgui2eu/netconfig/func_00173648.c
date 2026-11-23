/* compiler: ee-gcc-2.9-Os-G0 */
#include "pes6/ntgui_text_timer.h"

void func_00173648(s32 timer, s64 user) {
    NtTextTimer *widget = (NtTextTimer *)(s32)user;
    func_00189778(widget->cursorRect);
    widget->cursorVisible = !widget->cursorVisible;
    if (widget->cursorPeriod && widget->cursorEnabled == 1)
        widget->cursorTimer =
            func_00167BB8(func_00165B00(widget), widget->cursorPeriod, widget, func_00173648);
}
