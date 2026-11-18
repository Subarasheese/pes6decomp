/* compiler: mwcc-3.0.1b151 */
#include "pes6/netlib_packet.h"

s32 func_0086A5F0(void *connection) {
    NetlibPacket packet;

    netlib_begin_packet(&packet, 0x6030);
    return netlib_send_packet(&packet, connection);
}
