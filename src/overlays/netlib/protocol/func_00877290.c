/* compiler: mwcc-3.0.1b151 */
#include "pes6/netlib_packet.h"

s32 func_00877290(NetlibPacket *packet, s32 *output) {
    if (packet && output) {
        if (packet->tag != 0x8111) {
            return NETLIB_UNEXPECTED_TAG;
        }
    } else {
        return NETLIB_INVALID_ARGUMENT;
    }
    func_00874470(packet);
    func_00873FD0(packet, output);
    func_00874460(packet);
    return 0;
}
