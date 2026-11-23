/* compiler: mwcc-3.0.1b151 */
#include "pes6/widget_color.h"

struct ColorWidget {
    u8 beforeColor[0x48];
    WidgetColor color;
    u8 reserved[0x28];
    u8 flags;
};
void func_001DF460(ColorWidget *widget, const WidgetColor *color) {
    if (!widget || !color)
        return;
    if (widget->color.r != color->r || widget->color.g != color->g || widget->color.b != color->b ||
        widget->color.a != color->a) {
        widget->color = *color;
        widget->flags |= 4;
    }
}
