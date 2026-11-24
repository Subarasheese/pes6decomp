/* compiler: mwcc-3.0.1b151 */
#include "pes6/widget_geometry.h"
void func_001EF5B0(WidgetGeometry *widget, WidgetPosition *points) {
    s32 ok;
    if (widget && points)
        ok = 1;
    else
        ok = 0;
    if (!ok)
        return;
    if (!(widget->corners[0].x == points[0].x && widget->corners[0].y == points[0].y &&
          widget->corners[0].z == points[0].z && widget->corners[0].w == points[0].w)) {
        widget->corners[0] = points[0];
        widget->flags |= 1;
    }
    {
        WidgetPosition *input = &points[1];
        if (!(widget->corners[1].x == input->x && widget->corners[1].y == input->y &&
              widget->corners[1].z == input->z && widget->corners[1].w == input->w)) {
            widget->corners[1] = *input;
            widget->flags |= 1;
        }
    }
    {
        WidgetPosition *input = &points[2];
        if (!(widget->corners[2].x == input->x && widget->corners[2].y == input->y &&
              widget->corners[2].z == input->z && widget->corners[2].w == input->w)) {
            widget->corners[2] = *input;
            widget->flags |= 1;
        }
    }
    if (!(widget->corners[3].x == points[3].x && widget->corners[3].y == points[3].y &&
          widget->corners[3].z == points[3].z && widget->corners[3].w == points[3].w)) {
        widget->corners[3] = points[3];
        widget->flags |= 1;
    }
}
