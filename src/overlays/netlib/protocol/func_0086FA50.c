/* compiler: mwcc-3.0.1b151-O3 */
#pragma opt_strength_reduction off
#include "pes6/netlib_room.h"
s32 func_0086FA50(NetlibPacket *packet, s32 *result, NetlibRoomState *state, s32 id) {
    s32 i;
    if (!packet || !result || !state)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x4311)
        return NETLIB_UNEXPECTED_TAG;
    func_00874470(packet);
    func_00873FD0(packet, result);
    func_00874460(packet);
    if (*result == 0) {
        for (i = 0; i < 8; i++) {
            if (id == state->members[i].id)
                state->members[i].fieldB6 = 1;
        }
    }
    func_0086A8E0(state);
    return 0;
}
