/* compiler: ee-gcc-2.9-Os-G0 */
#include "pes6/ntgui_child_events.h"
#include "pes6/ntgui_gs_packet.h"

void func_0017F7A8(GsWidget *group, s32 value) {
    D_005C3760(group, value);
    func_00165BA0(group->childState.child, value);
}
