/* compiler: ee-gcc-2.9-Os-G0 */
#include "pes6/ntgui_gs_packet.h"
extern void (*D_005BFD64)(GsWidget *);
void func_0016FB98(GsWidget *widget) {
    D_005BFD64(widget);
    func_0018C748(&widget->bytes[(widget->selection.page ^ 1) * 0x50 + 0x880]);
}
