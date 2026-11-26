/* compiler: mwcc-3.0.1b151-O3 */
#pragma inline_depth(16)
#include "pes6/netlib_packet.h"
s32 func_00875EC0(NetlibPacket *packet, s32 *result) {
    s32 id;
    if (!packet || !result)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x8101)
        return NETLIB_UNEXPECTED_TAG;
    func_00874470(packet);
    func_00873FD0(packet, result);
    if (*result) {
        func_00874460(packet);
        return 0;
    }
    func_00873F60(packet, &id);
    func_00874460(packet);
    return 0;
}
