/* compiler: mwcc-3.0.1b151 */
#include "pes6/netlib_packet.h"
s32 func_00866D80(void *connection, s32 first, s8 second) {
    NetlibPacket packet;
    netlib_begin_packet(&packet, 0x3090);
    func_00874240(&packet, &first);
    func_00874420(&packet, &second);
    return netlib_send_packet(&packet, connection);
}
