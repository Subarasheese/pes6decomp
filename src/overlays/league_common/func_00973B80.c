/* compiler: mwcc-3.0.1b151 */
#include "pes6/widget_position.h"
void func_00973B80(void *widget, f32 dx, f32 dy) {
    WidgetPosition pos;
    if (!widget)
        return;
    func_001D7BE0(widget, &pos);
    pos.x += dx;
    pos.y += dy;
    func_001D7CE0(widget, &pos);
}
