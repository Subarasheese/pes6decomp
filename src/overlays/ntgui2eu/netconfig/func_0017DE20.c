/* compiler: ee-gcc-2.9-Os-G0 */
#include "pes6/ntgui_gs_packet.h"
extern void (*D_005C1450)(GsWidget *);
void func_0017DE20(GsWidget *widget) {
    D_005C1450(widget);
    func_0018C748(&widget->bytes[(widget->selection.page ^ 1) * 0x240 + 0x910]);
}
