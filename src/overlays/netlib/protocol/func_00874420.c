/* compiler: mwcc-3.0.1b151 */
#include "pes6/netlib_packet.h"
s32 func_00874420(void *storage, const s8 *value) {
    NetlibPacket *packet = storage;
    if (packet->cursor > 0x3ff)
        return NETLIB_PACKET_BOUNDS;
    else {
        s8 x = *value;
        packet->payload[packet->cursor] = x;
        packet->cursor++;
    }
    return 0;
}
