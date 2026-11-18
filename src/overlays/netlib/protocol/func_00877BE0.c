/* compiler: mwcc-3.0.1b151 */
#include "pes6/netlib_packet.h"

s32 func_00877BE0(NetlibPacket *packet, s8 *output) {
    if (packet && output) {
        if (packet->tag != 0x50E2) {
            return NETLIB_UNEXPECTED_TAG;
        }
    } else {
        return NETLIB_INVALID_ARGUMENT;
    }
    func_00874470(packet);
    func_00874120(packet, output);
    func_00874460(packet);
    return 0;
}
