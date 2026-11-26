/* compiler: mwcc-3.0.1b151 */
#include "pes6/netlib_packet_buffer.h"
s32 func_0087AA30(void *connection, const void *data) {
    NetlibPacket packet;
    if (!connection)
        return NETLIB_INVALID_ARGUMENT;
    netlib_begin_packet(&packet, 0x50b0);
    func_008741D0(&packet, data, 0x100);
    return netlib_send_packet(&packet, connection);
}
