#ifndef PES6_NTGUI_DISPLAY_PACKET_H
#define PES6_NTGUI_DISPLAY_PACKET_H

#include "pes6/ntgui_gs_packet.h"
void NTGUI_SETUP_DISPLAY_PACKET(GsWidget *widget) {
    func_00189AD0((GsCommand *)(widget->bytes + 0x980), NTGUI_DISPLAY_COMMANDS);
    func_0018A148((GsCommand *)(widget->bytes + 0x990), 0xC7, 0xAE, 1, 0xAF, 6, 0xB0, 0, 0xB1, 0,
                  0xB2, 0, 0xB4, 0, 0xB5, 0, 0);
    func_0018A148((GsCommand *)(widget->bytes + 0x9a0), 0x88, 0x6E, 0, 0x6F, 0, 0x70, 0, 0x71, 0xFF,
                  0x72, 0, 0x73, 0xFF, 0);
    func_0018A148((GsCommand *)(widget->bytes + 0x9b0), 0xC2, 0x63, 0, 0x64, 1, 0x65, 0, 0x66, 1,
                  0x67, 0x80, 0);
    func_0018A148((GsCommand *)(widget->bytes + 0x9c0), 0x49, 0x9A, 0, 0);
}

#endif
