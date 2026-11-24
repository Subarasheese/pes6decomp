/* compiler: mwcc-3.0.1b151 */
#include "pes6/widget_geometry.h"
void func_001EE580(WidgetGeometry *widget, WidgetPosition *out) {
    s32 valid;
    if (widget && out)
        valid = 1;
    else
        valid = 0;
    if (!valid)
        return;
    out[0] = widget->corners[0];
    out[1] = widget->corners[1];
    out[2] = widget->corners[2];
    out[3] = widget->corners[3];
}
