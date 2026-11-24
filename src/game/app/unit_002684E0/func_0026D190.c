/* compiler: mwcc-3.0.1b210 */
#include "pes6/widget_texture.h"
void func_0026D190(WidgetGeometry *widget, const WidgetRect *rect, s32 texture) {
    if (widget) {
        func_001EEAC0(widget, func_001E6E10(texture));
        func_001EE630(widget, rect);
        resizeWidget(widget, rect->width, rect->height);
    }
}
