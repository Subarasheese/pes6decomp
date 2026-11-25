/* compiler: mwcc-3.0.1b151 */
#include "pes6/widget_color.h"

struct ColoredQuad {
    u8 pad00[0xA0];
    WidgetColor corners[4];
    u8 padB0[0x6E];
    u8 flags;
};

static inline int has_color_inputs(ColoredQuad *quad, const WidgetColor *color) {
    if (!quad || !color)
        return 0;
    return 1;
}

void func_001EEE60(ColoredQuad *quad, const WidgetColor *color) {
    if (!has_color_inputs(quad, color))
        return;
    if (quad->corners[0].r == color->r &&
        quad->corners[0].g == color->g &&
        quad->corners[0].b == color->b &&
        quad->corners[0].a == color->a)
        return;
    quad->corners[0] = *color;
    quad->corners[1] = *color;
    quad->corners[2] = *color;
    quad->corners[3] = *color;
    quad->flags |= 2;
}
