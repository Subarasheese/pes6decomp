/* compiler: mwcc-3.0.1b151 */
#include "pes6/netlib_packet.h"
extern void *func_001C48E8(void *destination, s32 value, u32 size);
s32 func_0086B6F0(void *connection, void *reply) {
    NetlibPacket packet;
    if (!connection || !reply)
        return -27;
    func_001C48E8(reply, 0, 0x78);
    netlib_begin_packet(&packet, 0x60d0);
    return netlib_send_packet(&packet, connection);
}
