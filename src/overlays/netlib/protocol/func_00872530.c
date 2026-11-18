/* compiler: mwcc-3.0.1b151 */
#include "pes6/netlib_packet.h"

s32 func_00872530(void *connection) {
    NetlibPacket packet;

    netlib_begin_packet(&packet, 0x4210);
    return netlib_send_packet(&packet, connection);
}
