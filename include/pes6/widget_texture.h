#ifndef PES6_WIDGET_TEXTURE_H
#define PES6_WIDGET_TEXTURE_H

#include "pes6/widget_geometry.h"

typedef struct {
    s16 x, y, width, height;
} WidgetRect;
typedef struct {
    s16 u, v;
} TexturePoint;

extern void *func_001E6E10(s32 texture);
extern void func_001EEAC0(WidgetGeometry *widget, void *texture);
extern void func_001EE630(WidgetGeometry *widget, const WidgetRect *rect);

static inline void resizeWidget(WidgetGeometry *widget, f32 width, f32 height) {
    WidgetPosition corners[4];
    if (widget) {
        func_001EE580(widget, corners);
        corners[1].y = corners[0].y;
        corners[1].x = corners[0].x + width;
        corners[2].y = corners[0].y + height;
        corners[2].x = corners[0].x;
        corners[3].y = corners[2].y;
        corners[3].x = corners[1].x;
        func_001EF5B0(widget, corners);
    }
}

static inline u64 packedTextureUV(s16 u, s16 v) {
    s32 fixedU = ((s32)u * 16) & 0x3fff;
    s32 fixedV = ((s32)v * 16) & 0x3fff;
    return (u64)fixedU | ((u64)fixedV << 16);
}

#endif
