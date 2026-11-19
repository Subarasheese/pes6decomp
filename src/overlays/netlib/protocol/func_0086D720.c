/* compiler: mwcc-3.0.1b151 */
#include "pes6/netlib_packet.h"

s32 func_0086D720(void *connection) {
    NetlibPacket packet;

    netlib_begin_packet(&packet, 0x432A);
    return netlib_send_packet(&packet, connection);
}
