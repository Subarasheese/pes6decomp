/* compiler: mwcc-3.0.1b151 */
#include "pes6/netlib_packet.h"

s32 func_00871490(void *connection, s32 value) {
    NetlibPacket packet;

    netlib_begin_packet(&packet, 0x3080);
    func_00874240(&packet, &value);
    return netlib_send_packet(&packet, connection);
}
