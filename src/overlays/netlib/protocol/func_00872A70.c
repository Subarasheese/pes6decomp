/* compiler: mwcc-3.0.1b151 */
#include "pes6/netlib_packet.h"
s32 func_00872A70(void *connection, u8 first, u8 second, s8 third) {
    NetlibPacket packet;
    netlib_begin_packet(&packet, 0x4100);
    func_008743E0(&packet, &first);
    func_008743E0(&packet, &second);
    func_00874420(&packet, &third);
    return netlib_send_packet(&packet, connection);
}
