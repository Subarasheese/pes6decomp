/* compiler: mwcc-3.0.1b151 */
#include "pes6/widget_geometry.h"
extern s32 func_001B98D0(WidgetGeometry *widget, s32 index);
void func_0026D130(WidgetGeometry *widget, s32 index, f32 x, f32 y) {
    WidgetPosition position;
    func_001B98D0(widget, index);
    func_001EE5D0(widget, &position);
    position.x = x;
    position.y = y;
    func_001EF860(widget, &position);
}
