/* compiler: mwcc-3.0.1b151 */
#include "pes6/netlib_packet.h"

s32 func_00868E80(NetlibPacket *packet, s32 *result) {
    if (!(packet && result))
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x60c0)
        return NETLIB_UNEXPECTED_TAG;
    func_00874470(packet);
    func_00874460(packet);
    return 0;
}
