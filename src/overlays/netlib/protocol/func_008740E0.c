/* compiler: mwcc-3.0.1b151 */
#include "pes6/netlib_packet.h"
s32 func_008740E0(void *storage, u8 *value) {
    NetlibPacket *packet = storage;
    if (packet->cursor > 0x3ff)
        return NETLIB_PACKET_BOUNDS;
    *value = packet->payload[packet->cursor];
    packet->cursor++;
    return 0;
}
