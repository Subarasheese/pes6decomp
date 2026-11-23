/* compiler: ee-gcc-2.9-Os-G0 */
#include "pes6/ntgui_gs_packet.h"
extern void (*D_005C3D70)(GsWidget *);
void func_0017F928(GsWidget *widget) {
    D_005C3D70(widget);
    if (widget->packetState.enabled)
        func_0018C748(&widget->bytes[(widget->selection.page ^ 1) * 0xf80 + 0x970]);
}
