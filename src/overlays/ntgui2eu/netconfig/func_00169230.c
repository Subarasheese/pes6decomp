/* compiler: ee-gcc-2.9-Os-G0 */
#include "pes6/ntgui_gs_packet.h"
extern void (*D_005BFA6C)(GsWidget *widget, s32 width, s32 height);
extern void func_00169730(GsWidget *widget);
void func_00169230(GsWidget *widget, s32 width, s32 height) {
    D_005BFA6C(widget, width, height);
    widget->object.type->method130(widget);
    widget->object.type->method12C(widget);
    func_00169730(widget);
}
