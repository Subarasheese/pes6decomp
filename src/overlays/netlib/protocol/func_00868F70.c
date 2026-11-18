/* compiler: mwcc-3.0.1b151 */
#include "pes6/netlib_packet.h"

s32 func_00868F70(void *connection) {
    NetlibPacket packet;

    netlib_begin_packet(&packet, 0x60C0);
    return netlib_send_packet(&packet, connection);
}
