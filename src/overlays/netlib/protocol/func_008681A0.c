/* compiler: mwcc-3.0.1b151 */
#include "pes6/netlib_packet.h"
extern void *func_001C48E8(void *, s32, u32);
extern s32 func_00873EE0(void *, void *, s32);
s32 func_008681A0(NetlibPacket *packet, void *output) {
    s32 status;
    if (!packet || !output)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x3002)
        return NETLIB_UNEXPECTED_TAG;
    func_001C48E8(output, 0, 16);
    func_00874470(packet);
    status = func_00873EE0(packet, output, 16);
    func_00874460(packet);
    return status ? -71 : 0;
}