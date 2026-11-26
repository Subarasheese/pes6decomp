/* compiler: mwcc-3.0.1b151 */
#include "pes6/netlib_packet_buffer.h"
s32 func_0087B3A0(void *connection, s8 value, const void *data) {
    NetlibPacket packet;
    if (!connection || !data)
        return NETLIB_INVALID_ARGUMENT;
    netlib_begin_packet(&packet, 0x5020);
    func_00874420(&packet, &value);
    func_008741D0(&packet, data, 0x30);
    return netlib_send_packet(&packet, connection);
}
