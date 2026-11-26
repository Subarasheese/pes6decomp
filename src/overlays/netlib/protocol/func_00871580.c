/* compiler: mwcc-3.0.1b151 */
#include "pes6/netlib_packet.h"
s32 func_00871580(void *connection, s32 first, s8 second, s32 third) {
    NetlibPacket packet;
    netlib_begin_packet(&packet, 0x47a0);
    func_00874240(&packet, &first);
    func_00874420(&packet, &second);
    func_00874240(&packet, &third);
    return netlib_send_packet(&packet, connection);
}
