/* compiler: mwcc-3.0.1b210 */
#include "pes6/widget_texture.h"
extern const WidgetRect D_003AB5B0[];
void func_0026D040(WidgetGeometry *widget, s32 id) {
    if (widget) {
        func_001EEAC0(widget, func_001E6E10(0x4edf));
        func_001EE630(widget, &D_003AB5B0[id]);
        resizeWidget(widget, D_003AB5B0[id].width, D_003AB5B0[id].height);
    }
}
