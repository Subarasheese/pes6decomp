/* compiler: mwcc-3.0.1b151 */
#pragma inline_depth(16)
#include "pes6/netlib_packet.h"
s32 func_008752F0(void *connection, s32 id, s8 first, u8 second) {
    NetlibPacket packet;
    netlib_begin_packet(&packet, 0x9330);
    func_00874240(&packet, &id);
    func_00874420(&packet, &first);
    func_008743E0(&packet, &second);
    return netlib_send_packet(&packet, connection);
}
