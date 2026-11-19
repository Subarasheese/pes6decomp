/* compiler: mwcc-3.0.1b151 */
#include "pes6/netlib_packet.h"

s32 func_00869D90(void *connection, s8 value) {
    NetlibPacket packet;

    netlib_begin_packet(&packet, 0x6090);
    func_00874420(&packet, &value);
    return netlib_send_packet(&packet, connection);
}
