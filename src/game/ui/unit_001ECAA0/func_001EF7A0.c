/* compiler: mwcc-3.0.1b151 */
#include "pes6/widget_geometry.h"
static inline void copyChangedCorner(WidgetGeometry *widget, s32 index, WidgetPosition *p) {
    if (!(widget->corners[index].x == p->x && widget->corners[index].y == p->y &&
          widget->corners[index].z == p->z && widget->corners[index].w == p->w)) {
        widget->corners[index] = *p;
        widget->flags |= 1;
    }
}
void func_001EF7A0(WidgetGeometry *widget, s32 index, WidgetPosition *points) {
    s32 ok;
    if (widget && index >= 0 && index < 4 && points)
        ok = 1;
    else
        ok = 0;
    if (!ok)
        return;
    copyChangedCorner(widget, index, points);
}
