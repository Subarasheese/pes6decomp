#ifndef PES6_WIDGET_COLOR_H
#define PES6_WIDGET_COLOR_H

#include "types.h"
typedef struct {
    u8 r, g, b, a;
} WidgetColor;
typedef struct ColorWidget ColorWidget;
void func_001DF460(ColorWidget *widget, const WidgetColor *color);
s32 func_0020E310(s32 index, WidgetColor *color);

typedef struct ColoredQuad ColoredQuad;
extern void func_001EEE60(ColoredQuad *quad, const WidgetColor *color);

#endif
