#ifndef PES6_WIDGET_GEOMETRY_H
#define PES6_WIDGET_GEOMETRY_H

#include "pes6/widget_position.h"

typedef struct {
    u8 pad00[0x10];
    WidgetPosition position;
    WidgetPosition corners[4];
    u8 pad60[0xd8 - 0x60];
    u64 uv[4];
    u8 padf8[0x11e - 0xf8];
    u8 flags;
} WidgetGeometry;

extern void func_001EE580(WidgetGeometry *widget, WidgetPosition *corners);
extern void func_001EE5D0(WidgetGeometry *widget, WidgetPosition *position);
extern void func_001EF5B0(WidgetGeometry *widget, WidgetPosition *corners);
extern void func_001EF860(WidgetGeometry *widget, WidgetPosition *position);

#endif
