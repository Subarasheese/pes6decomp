/* compiler: mwcc-3.0.1b151 */
#include "pes6/netlib_packet.h"
s32 func_00874320(void *storage, const u16 *value) {
    NetlibPacket *packet = storage;
    if (packet->cursor > 0x3fe)
        return NETLIB_PACKET_BOUNDS;
    else {
        u16 x = *value;
        packet->payload[packet->cursor] = (s8)(x >> 8);
        packet->cursor++;
        packet->payload[packet->cursor] = (s8)x;
        packet->cursor++;
    }
    return 0;
}
