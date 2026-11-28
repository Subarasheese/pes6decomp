/* compiler: mwcc-3.0.1b151-O3 */
#pragma opt_strength_reduction off
#pragma inline_depth(16)
#include "pes6/netlib_room_round.h"
extern char *func_001C8590(char *, const char *, u32);
s32 func_0086D0B0(NetlibPacket *packet, NetlibRoomRound *room, char *name) {
    s32 id = 0;
    s8 value;
    s32 i, j;
    if (!packet || !room || !name)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x4371)
        return NETLIB_UNEXPECTED_TAG;
    func_00874470(packet);
    func_00873F60(packet, &id);
    func_00874120(packet, &value);
    func_00874460(packet);
    room->state.lastValue = 0;
    func_001C48E8(name, 0, 49);
    if (id) {
        for (i = 0; i < 4; i++) {
            if (room->state.slots[i].id == id && id != 0) {
                room->state.lastValue = id;
                if ((room->round.phase == 8 || room->round.phase == 10) &&
                    room->round.slots.assignments.values[i] == 6 && value == 0) {
                    for (j = 0; j < 8; j++) {
                        if (id == room->members[j].id)
                            func_001C8590(name, room->members[j].name, 48);
                    }
                }
                room->round.slots.assignments.values[i] = value;
            }
        }
    }
    func_0086A8E0(&room->state);
    return 0;
}
