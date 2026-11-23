/* compiler: ee-gcc-2.9-Os-G0 */
#include "pes6/ntgui_text_timer.h"
extern s32 func_001744D0(NtTextTimer *, s32 x, s32 y);
void func_00173718(NtTextTimer *widget, s32 active) {
    s32 row = func_001744D0(widget, widget->point.x, widget->point.y);
    s32 direction;
    if (row >= 0) {
        widget->rowActive = 1;
        direction = func_001745A0(widget, row);
        if (direction && active) {
            if (direction < 0)
                widget->scrollOffset += widget->scrollStep;
            else {
                widget->scrollOffset -= widget->scrollStep;
                if (widget->scrollOffset < 0)
                    widget->scrollOffset = 0;
            }
        }
        widget->selectedRow = row;
        func_00173B38(widget);
        func_00173BE8(widget);
        widget->state = 2;
        func_00174380(widget);
        func_00173E10(widget);
        func_00173CF0(widget);
    }
}
