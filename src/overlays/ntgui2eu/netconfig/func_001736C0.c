/* compiler: ee-gcc-2.9-Os-G0 */
#include "pes6/ntgui_text_timer.h"

void func_001736C0(s32 timer, s64 user) {
    NtTextTimer *widget = (NtTextTimer *)(s32)user;
    func_00173718(widget, 1);
    widget->repeatTimer =
        func_00167BB8(func_00165B00(widget), widget->repeatPeriod, widget, func_001736C0);
}
