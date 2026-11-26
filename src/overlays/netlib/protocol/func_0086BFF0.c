/* compiler: mwcc-3.0.1b151-O3 */
#pragma opt_strength_reduction off
#include "pes6/netlib_room.h"
s32 func_0086BFF0(NetlibPacket *packet, NetlibRoomState *state) {
    s32 i;
    s32 id = 0;
    s8 value = 0;
    if (!packet || !state)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x4368)
        return NETLIB_UNEXPECTED_TAG;
    func_00874470(packet);
    func_00873F60(packet, &id);
    func_00874120(packet, &value);
    func_00874460(packet);
    for (i = 0; i < 8; i++) {
        if (id == state->members[i].id && id != 0) {
            state->members[i].value7F = value;
            state->lastValue = id;
        }
        if (state->members[i].id == 0)
            state->members[i].value7F = 0;
    }
    func_0086A8E0(state);
    return 0;
}
