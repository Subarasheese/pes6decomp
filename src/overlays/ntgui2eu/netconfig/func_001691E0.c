/* compiler: ee-gcc-2.9-Os-G0 */
#include "pes6/ntgui_gs_packet.h"
extern void (*D_005BFA64)(GsWidget *widget, s32 x, s32 y);
extern void func_00169730(GsWidget *widget);
void func_001691E0(GsWidget *widget, s32 x, s32 y) {
    D_005BFA64(widget, x, y);
    widget->object.type->method130(widget);
    widget->object.type->method12C(widget);
    func_00169730(widget);
}
