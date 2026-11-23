/* compiler: mwcc-3.0.1b198-O3 */
#include "pes6/widget_color.h"

extern const WidgetColor D_003D4290[];
s32 func_0020E310(s32 index, WidgetColor *color) {
    if (!color)
        return -1;
    if (index < 0 || index >= 12)
        return -2;
    color->r = D_003D4290[index].r;
    color->g = D_003D4290[index].g;
    color->b = D_003D4290[index].b;
    color->a = D_003D4290[index].a;
    return 0;
}
