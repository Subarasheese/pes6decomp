/* compiler: ee-gcc-2.9-Os-G0 */
#include "pes6/ntgui_widget_changes.h"
typedef union {
    u32 rgba;
    u8 channels[4];
} WidgetRgba;
typedef struct {
    NtguiWidgetUpdateHeader header;
    u8 reserved9c[0x8b0 - 0x9c];
    WidgetRgba first;
    u8 reserved8b4[12];
    WidgetRgba second;
    u8 reserved8c4[12];
    WidgetRgba source;
    s32 option;
} ColourWidget;
extern s32 (*D_005BFAA8)(ColourWidget *, const ColourWidget *, const ColourWidget *);
extern s32 func_001641F8(const WidgetRgba *, const WidgetRgba *);
s32 func_0016F168(ColourWidget *dst, const ColourWidget *current, const ColourWidget *previous) {
    s32 changed = D_005BFAA8(dst, current, previous);
    if (!func_001641F8(&current->source, &previous->source)) {
        u32 colour = current->source.rgba;
        dst->first.rgba = colour;
        dst->source.rgba = colour;
        dst->second.rgba = colour;
        dst->second.channels[3] = 0;
        dst->header.redraw = 2;
        changed = 1;
    }
    if (current->option != previous->option) {
        dst->option = current->option;
        dst->header.redraw = 2;
        changed = 1;
    }
    return changed;
}
