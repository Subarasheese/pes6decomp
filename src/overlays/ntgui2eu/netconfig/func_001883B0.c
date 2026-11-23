/* compiler: ee-gcc-2.9-Os-G0 */
#include "pes6/ntgui_gs_packet.h"
extern void (*D_005C3D70)(GsWidget *);
void func_001883B0(GsWidget *widget) {
    D_005C3D70(widget);
    func_0018C748(&widget->bytes[(widget->selection.page ^ 1) * 0x180 + 0x970]);
}
