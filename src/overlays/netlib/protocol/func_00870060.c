/* compiler: mwcc-3.0.1b151 */
#include "pes6/netlib_packet.h"
extern s32 func_00874160(void *packet, const char *text, s8 end);
s32 func_00870060(void *connection, const char *text) {
    NetlibPacket packet;
    if (!text)
        return NETLIB_INVALID_ARGUMENT;
    netlib_begin_packet(&packet, 0x4110);
    func_00874160(&packet, text, 0);
    return netlib_send_packet(&packet, connection);
}
