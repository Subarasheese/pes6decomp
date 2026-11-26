/* compiler: ee-gcc-2.9-Os-G0 */
#include "pes6/ntgui_widget_changes.h"

typedef struct {
    NtguiWidgetUpdateHeader header;
    u8 reserved9c[0x5c0 - 0x9c];
    NtguiWidgetAttribute commonAttribute;
    u8 reserved5d0[0x5ea0 - 0x5d0];
    NtguiWidgetAttribute attribute;
    s32 options[4];
    u8 reserved5ec0[0x10];
    s32 value5ed0;
    u8 reserved5ed4[0x10];
    s32 value5ee4;
} SettingsWidget;

s32 func_00180C58(SettingsWidget *dst, const SettingsWidget *current,
                  const SettingsWidget *previous) {
    s32 changed = D_005C14A0(dst, current, previous);
    if (!func_00164238(&current->commonAttribute, &previous->commonAttribute)) {
        dst->header.redraw = 2;
        changed = 1;
    }
    if (current->value5ed0 != previous->value5ed0) {
        dst->value5ed0 = current->value5ed0;
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
    if (!func_00164238(&current->attribute, &previous->attribute)) {
        dst->attribute = current->attribute;
        dst->header.redraw = 2;
        changed = 1;
    }
    if (current->value5ee4 != previous->value5ee4) {
        dst->value5ee4 = current->value5ee4;
        dst->header.redraw = 2;
        changed = 1;
    }
    return changed;
}
