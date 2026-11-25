/* compiler: ee-gcc-2.9-Os-G0 */
#include "pes6/ntgui_widget_changes.h"

typedef struct {
    NtguiWidgetUpdateHeader header;
    u8 reserved9c[0x5a0 - 0x9c];
    u64 position;
    u32 reserved5a8;
    s32 width, height;
    u8 reserved5b4[0xc];
    NtguiWidgetAttribute colours;
    u8 reserved5d0[0xe74 - 0x5d0];
    s32 drawMode, offsetX, offsetY, valueE80, mode, sizeX, sizeY, style0, style1;
    u8 reservedE98[12];
    s32 valueEa4, refresh;
    u64 dirtyProperties;
} GeometryWidget;

extern void func_00177380(void *);
extern void func_00177408(void *);
extern void func_001777A8(GeometryWidget *);

static inline void markGeometryDirty(GeometryWidget *widget, u64 properties) {
    widget->refresh = 2;
    widget->dirtyProperties |= properties;
    widget->header.redraw = 2;
}

s32 func_001767B8(GeometryWidget *dst, const GeometryWidget *current,
                  const GeometryWidget *previous) {
    s32 geometryChanges = 0;
    s32 changed = D_005C14A0(dst, current, previous);
    s32 coloursChanged = 0;
    if (current->position != previous->position) {
        geometryChanges++;
        changed = 1;
    }
    if (current->width != previous->width || current->height != previous->height) {
        geometryChanges++;
        changed = 1;
    }
    if (!func_00164238(&current->colours, &previous->colours)) {
        coloursChanged = 1;
        changed = 1;
    }
    if (current->valueE80 != previous->valueE80) {
        dst->valueE80 = current->valueE80;
        dst->header.redraw = 2;
        changed = 1;
    }
    if (current->valueEa4 != previous->valueEa4) {
        dst->valueEa4 = current->valueEa4;
        dst->header.redraw = 2;
        changed = 1;
    }
    if (current->style0 != previous->style0) {
        dst->style0 = current->style0;
        markGeometryDirty(dst, 2);
        changed = 1;
    }
    if (current->style1 != previous->style1) {
        dst->style1 = current->style1;
        markGeometryDirty(dst, 4);
        changed = 1;
    }
    if (current->offsetX != previous->offsetX) {
        dst->offsetX = current->offsetX;
        markGeometryDirty(dst, 8);
        changed = 1;
    }
    if (current->offsetY != previous->offsetY) {
        dst->offsetY = current->offsetY;
        markGeometryDirty(dst, 8);
        changed = 1;
    }
    if (current->mode != previous->mode) {
        dst->mode = current->mode;
        func_001777A8(dst);
        markGeometryDirty(dst, 16);
        changed = 1;
    }
    if (current->sizeX != previous->sizeX) {
        dst->sizeX = current->sizeX;
        markGeometryDirty(dst, 1);
        changed = 1;
    }
    if (current->sizeY != previous->sizeY) {
        dst->sizeY = current->sizeY;
        markGeometryDirty(dst, 1);
        changed = 1;
    }
    if (geometryChanges)
        func_00177408(dst);
    if (coloursChanged)
        func_00177380(dst);
    return changed;
}
