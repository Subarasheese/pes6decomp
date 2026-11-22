/* compiler: ee-gcc-2.9-Os-G0 */
#include "pes6/ntgui_gs_packet.h"
extern void (*D_005C17A4)(GsWidget *widget, s64 value);
extern void func_001877A8(GsWidget *widget);
void func_00187778(GsWidget *widget, s64 value) {
    D_005C17A4(widget, value);
    func_001877A8(widget);
}
