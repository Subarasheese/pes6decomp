/* compiler: ee-gcc-2.9-Os-G0 */
#include "pes6/ntgui_gs_packet.h"
void func_00168530(GsWidget *widget) {
    GsCommand *packet = (GsCommand *)(widget->bytes + 0x8f0);
    func_00189AD0(packet, 2);
    func_0018A148(packet + 1, 0x45, 0x85, 1, 0);
    func_0018A148(packet + 2, 0x44, 0);
}
