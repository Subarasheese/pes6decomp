/* compiler: mwcc-3.0.1b151-O3 */
#pragma opt_strength_reduction off
#include "pes6/netlib_room.h"
extern void func_001C6158(void *array, u32 count, u32 size,
                          s32 (*compare)(const void *, const void *));
extern s32 func_0086A7E0(const void *, const void *);
extern void *func_001C48E8(void *dst, s32 c, u32 size);
extern s32 func_00873EE0(void *packet, void *dst, s32 size);
s32 func_0086E340(NetlibPacket *packet, s32 *result, s32 id, NetlibRoomState *state) {
    s32 i;
    if (!packet || !state)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x434b)
        return NETLIB_UNEXPECTED_TAG;
    func_001C48E8(state->password, 0, sizeof(state->password));
    func_00874470(packet);
    func_00873EE0(packet, state->password, sizeof(state->password) - 1);
    func_00874460(packet);
    if (((const u8 *)state->password)[0])
        state->hasPassword = 1;
    else
        state->hasPassword = 0;
    *result = 0;
    state->lastValue = id;
    if (*result == 0 && id != 0) {
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
