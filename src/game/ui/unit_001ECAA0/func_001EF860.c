/* compiler: mwcc-3.0.1b151 */
#include "pes6/widget_geometry.h"
void func_001EF860(WidgetGeometry *widget, WidgetPosition *position) {
    s32 valid;
    if (widget && position)
        valid = 1;
    else
        valid = 0;
    if (!valid)
        return;
    if (!(widget->position.x == position->x && widget->position.y == position->y &&
          widget->position.z == position->z && widget->position.w == position->w)) {
        widget->position = *position;
        widget->flags |= 1;
    }
}
