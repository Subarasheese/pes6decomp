/* compiler: ee-gcc-2.9-Os-G0 */
#include "pes6/ntgui_gs_packet.h"
extern void (*D_005C36D4)(GsWidget *widget);
extern void func_001652A0(GsWidget *widget);
void func_0017F698(GsWidget *widget) {
    D_005C36D4(widget);
    func_001652A0(widget->childState.child);
}
