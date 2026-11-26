/* compiler: mwcc-3.0.1b151 */
#include "pes6/netlib_packet.h"
s32 func_00877F60(void *connection, s32 first, u8 second) {
    NetlibPacket packet;
    if (!connection)
        return NETLIB_INVALID_ARGUMENT;
    netlib_begin_packet(&packet, 0x50d0);
    func_00874240(&packet, &first);
    func_008743E0(&packet, &second);
    return netlib_send_packet(&packet, connection);
}
