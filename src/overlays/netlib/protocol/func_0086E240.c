/* compiler: mwcc-3.0.1b151-O3 */
#pragma opt_strength_reduction off
#include "pes6/netlib_room.h"
extern void func_001C6158(void *array, u32 count, u32 size,
                          s32 (*compare)(const void *, const void *));
extern s32 func_0086A7E0(const void *, const void *);
s32 func_0086E240(NetlibPacket *packet, NetlibRoomState *state) {
    s32 i;
    s32 id = 0;
    if (!packet || !state)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x434c)
        return NETLIB_UNEXPECTED_TAG;
    func_00874470(packet);
    func_00873F60(packet, &id);
    func_00874460(packet);
    state->lastValue = id;
    if (id != 0) {
        for (i = 0; i < 8; i++) {
            if (id == state->members[i].id)
                state->members[i].fieldB6 = 1;
            else
                state->members[i].fieldB6 = 0;
        }
    }
    func_001C6158(state->members, 8, sizeof(state->members[0]), func_0086A7E0);
    func_0086A8E0(state);
    return 0;
}
