#ifndef PES6_WIDGET_POSITION_H
#define PES6_WIDGET_POSITION_H

#include "types.h"

typedef struct {
    f32 x, y, z, w;
} __attribute__((aligned(16))) WidgetPosition;

extern void func_001D7BE0(void *widget, WidgetPosition *out);
extern void func_001D7CE0(void *widget, WidgetPosition *position);

static inline void widget_set_position_xy(void *widget, f32 x, f32 y) {
    WidgetPosition position;
    func_001D7BE0(widget, &position);
    position.x = x;
    position.y = y;
    func_001D7CE0(widget, &position);
}

#endif
