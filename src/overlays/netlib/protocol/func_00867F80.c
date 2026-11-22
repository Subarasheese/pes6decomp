/* compiler: mwcc-3.0.1b151 */
#include "pes6/netlib_packet.h"

s32 func_00867F80(NetlibPacket *packet, void *output) {
    s32 readResult;
    if (!packet || !output)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x3004)
        return NETLIB_UNEXPECTED_TAG;
    func_00874470(packet);
    readResult = func_00873FD0(packet, output);
    func_00874460(packet);
    return readResult ? -71 : 0;
}
