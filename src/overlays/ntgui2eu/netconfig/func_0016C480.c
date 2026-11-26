/* compiler: ee-gcc-2.9-Os-G0 */
#include "pes6/ntgui_widget_changes.h"

typedef struct {
    NtguiWidgetUpdateHeader header;
    u8 reserved9c[0x40c14 - 0x9c];
    s32 options[4];
    u8 reserved40c24[12];
    NtguiWidgetAttribute attribute;
    s32 value40c40;
} Widget;

s32 func_0016C480(Widget *dst, const Widget *current, const Widget *previous) {
    s32 changed = D_005C14A0(dst, current, previous);
    if (!func_00164238(&current->attribute, &previous->attribute)) {
        dst->attribute = current->attribute;
        dst->header.redraw = 2;
        changed = 1;
    }
    if (current->value40c40 != previous->value40c40) {
        dst->value40c40 = current->value40c40;
        dst->header.redraw = 2;
        changed = 1;
    }
    if (current->options[2] != previous->options[2]) {
        dst->options[2] = current->options[2];
        dst->header.redraw = 2;
        changed = 1;
    }
    if (current->options[3] != previous->options[3]) {
        dst->options[3] = current->options[3];
        dst->header.redraw = 2;
        changed = 1;
    }
    if (current->options[0] != previous->options[0]) {
        dst->options[0] = current->options[0];
        dst->header.redraw = 2;
        changed = 1;
    }
    if (current->options[1] != previous->options[1]) {
        dst->options[1] = current->options[1];
        dst->header.redraw = 2;
        changed = 1;
    }
    return changed;
}
