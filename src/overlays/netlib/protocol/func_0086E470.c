/* compiler: mwcc-3.0.1b151-O3 */
#pragma opt_strength_reduction off
#include "pes6/netlib_room.h"
extern void *func_001C48E8(void *dst, s32 c, u32 size);
s32 func_0086E470(NetlibPacket *packet, s32 *result, s32 id, NetlibRoomState *state) {
    s32 i;
    if (!packet || !state)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x434a)
        return NETLIB_UNEXPECTED_TAG;
    func_001C48E8(state->password, 0, sizeof(state->password));
    func_00874470(packet);
    func_00873FD0(packet, result);
    func_00874460(packet);
    if (*result == 0 && id != 0) {
        for (i = 0; i < 8; i++) {
            if (id == state->members[i].id)
                state->members[i].fieldB6 = 0;
        }
    }
    func_0086A8E0(state);
    return 0;
}
