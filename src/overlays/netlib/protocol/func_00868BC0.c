/* compiler: mwcc-3.0.1b151 */
#include "pes6/netlib_packet.h"

s32 func_00868BC0(void *connection, u8 value) {
    NetlibPacket packet;

    netlib_begin_packet(&packet, 0x2005);
    func_008743E0(&packet, &value);
    return netlib_send_packet(&packet, connection);
}
