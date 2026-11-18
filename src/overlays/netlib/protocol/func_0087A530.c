/* compiler: mwcc-3.0.1b151 */
#include "pes6/netlib_packet.h"

s32 func_0087A530(void *connection) {
    NetlibPacket packet;

    if (!connection) {
        return NETLIB_INVALID_ARGUMENT;
    }
    netlib_begin_packet(&packet, 0x5032);
    return netlib_send_packet(&packet, connection);
}
