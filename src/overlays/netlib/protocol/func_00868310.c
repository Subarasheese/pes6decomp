/* compiler: mwcc-3.0.1b151-O3 */
#pragma inline_depth(16)
#include "pes6/netlib_directory_dispatch.h"
#include "pes6/netlib_socket_transport.h"
extern s32 func_00873EE0(void *packet, void *dst, s32 size);
extern s32 func_008740E0(void *packet, u8 *value);
s32 func_00868310(NetlibPacket *packet, NetlibBulletinPage *list) {
    s32 i, n;
    if (!packet)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x2102)
        return NETLIB_UNEXPECTED_TAG;
    func_00874470(packet);
    if (((NetlibWirePacket *)packet)->wire.length > 512)
        n = 2;
    else if (((NetlibWirePacket *)packet)->wire.length > 128)
        n = 1;
    else
        n = 0;
    for (i = 0; i < n; i++) {
        s32 current = list->count;
        if (current < 0 || current >= 128)
            break;
        func_00873F60(packet, &list->rows[current].id);
        func_008740E0(packet, &list->rows[current].flag);
        func_00873EE0(packet, list->rows[current].title, sizeof(list->rows[current].title) - 1);
        func_00873EE0(packet, list->rows[current].text, sizeof(list->rows[current].text) - 1);
        list->count++;
    }
    func_00874460(packet);
    return 0;
}
