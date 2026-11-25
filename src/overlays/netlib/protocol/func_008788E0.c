/* compiler: mwcc-3.0.1b151 */
#include "pes6/netlib_packet.h"

extern s32 func_00874320(void *, const u16 *);
s32 func_008788E0(void *connection, u16 value) {
    NetlibPacket packet;

    if (!connection) {
        return NETLIB_INVALID_ARGUMENT;
    }
    netlib_begin_packet(&packet, 0x5087);
    func_00874320(&packet, &value);
    return netlib_send_packet(&packet, connection);
}
