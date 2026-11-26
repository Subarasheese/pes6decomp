/* compiler: mwcc-3.0.1b151 */
#include "pes6/netlib_room.h"

s32 func_00869B90(NetlibPacket *packet, s32 *result, NetlibRoomState *room) {
    if (packet && result && room) {
        if (packet->tag != 0x60a1)
            return NETLIB_UNEXPECTED_TAG;
    } else {
        return NETLIB_INVALID_ARGUMENT;
    }
    func_00874470(packet);
    func_00873FD0(packet, result);
    func_00874460(packet);
    func_0086A8E0(room);
    return 0;
}
