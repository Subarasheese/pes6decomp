/* compiler: mwcc-3.0.1b151 */
#include "pes6/widget_position.h"
void func_00C74C50(void *widget, f32 dx, f32 dy) {
    WidgetPosition position;
    func_001D7BE0(widget, &position);
    position.x += dx;
    position.y += dy;
    func_001D7CE0(widget, &position);
}
