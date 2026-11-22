/* compiler: ee-gcc-2.9-Os-G0 */
#include "pes6/ntgui_gs_packet.h"

void func_001885E8(GsWidget *widget) {
    GsCommand *packet = (GsCommand *)(widget->bytes + 0x980);
    GsCommand *color = packet + 6;
    u32 i = 0;
    GsCommand *vertex = packet + 7;
    func_00189AD0(packet, 0x15);
    func_0018A148(packet + 1, 0xc7, 0xae, 1, 0xaf, 6, 0xb0, 0, 0xb1, 0, 0xb2, 0, 0xb4, 0, 0xb5, 0,
                  0);
    func_0018A148(packet + 2, 0x88, 0x6e, 0, 0x6f, 0, 0x70, 0, 0x71, 0xff, 0x72, 0, 0x73, 0xff, 0);
    func_0018A148(packet + 3, 0xc2, 0x63, 0, 0x64, 1, 0x65, 0, 0x66, 1, 0x67, 0x80, 0);
    func_0018A148(packet + 4, 0x49, 0x9a, 0, 0);
    func_0018A148(packet + 5, 0, 0x9b, 4, 0x9c, 1, 0x9d, 0, 0x9e, 0, 0x9f,
                  *(u32 *)(widget->bytes + 0x960), 0xa0, 0, 0xa1, 1, 0xa2, D_005C5994[0], 0x67, 0,
                  0);
    do {
        i++;
        func_0018A148(color, 1, 0);
        func_0018A148(vertex, 5, 0);

        color += 2;
        vertex += 2;
    } while (i < 8);
}
