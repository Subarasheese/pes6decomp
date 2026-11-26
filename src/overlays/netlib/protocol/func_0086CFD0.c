/* compiler: mwcc-3.0.1b151 */
#include "pes6/netlib_packet.h"
extern s32 func_00874320(void *, const u16 *);
s32 func_0086CFD0(void *connection, u16 first, u16 second) {
    NetlibPacket packet;
    netlib_begin_packet(&packet, 0x4373);
    func_00874320(&packet, &first);
    func_00874320(&packet, &second);
    return netlib_send_packet(&packet, connection);
}
