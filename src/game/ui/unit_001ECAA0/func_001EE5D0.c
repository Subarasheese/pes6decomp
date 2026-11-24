/* compiler: mwcc-3.0.1b151 */
#include "pes6/widget_geometry.h"
void func_001EE5D0(WidgetGeometry *widget, WidgetPosition *out) {
    s32 valid;
    if (widget && out)
        valid = 1;
    else
        valid = 0;
    if (!valid)
        return;
    *out = widget->position;
}
