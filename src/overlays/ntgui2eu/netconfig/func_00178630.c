/* compiler: ee-gcc-2.9-Os-G0 */
#include "pes6/ntgui_widget_changes.h"

typedef struct {
    NtguiWidgetUpdateHeader header;
    u8 reserved9c[0x3cb0 - 0x9c];
    NtguiWidgetAttribute attribute;
} Widget;

s32 func_00178630(Widget *dst, const Widget *current, const Widget *previous) {
    s32 changed = D_005C14A0(dst, current, previous);
    if (!func_00164238(&current->attribute, &previous->attribute)) {
        dst->attribute = current->attribute;
        dst->header.redraw = 2;
        changed = 1;
    }
    return changed;
}
