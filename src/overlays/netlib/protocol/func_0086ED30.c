/* compiler: mwcc-3.0.1b151-O3 */
#pragma opt_strength_reduction off
#pragma inline_depth(16)
#include "pes6/netlib_room_round.h"
s32 func_0086ED30(NetlibPacket *packet, s8 *phase, NetlibRoomRound *room) {
    s32 i;
    if (!packet || !phase || !room)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x4344)
        return NETLIB_UNEXPECTED_TAG;
    func_00874470(packet);
    func_00874120(packet, phase);
    func_00874460(packet);
    for (i = 0; i < 4; i++)
        room->round.slots.assignments.values[i] = 6;
    if (*phase == 1)
        netlib_reset_room_round(room);
    room->round.phase = *phase;
    if (room->round.phase == 1)
        room->round.phase = 11;
    func_0086A8E0(&room->state);
    return 0;
}
