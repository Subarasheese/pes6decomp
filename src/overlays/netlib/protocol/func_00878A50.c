/* compiler: mwcc-3.0.1b151 */
#include "pes6/netlib_packet_buffer.h"
s32 func_00878A50(void *connection, s32 value, const void *data) {
    NetlibPacket packet;
    if (!connection || !data)
        return NETLIB_INVALID_ARGUMENT;
    netlib_begin_packet(&packet, 0x5084);
    func_00874240(&packet, &value);
    func_008741D0(&packet, data, 0x100);
    return netlib_send_packet(&packet, connection);
}
