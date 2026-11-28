/* compiler: mwcc-3.0.1b151-O3 */
#pragma opt_strength_reduction off
#pragma inline_depth(16)
#include "pes6/netlib_room_round.h"
s32 func_0086B040(NetlibPacket *packet, s8 *phase, NetlibRoomRound *room) {
    if (!packet || !phase || !room)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x437f)
        return NETLIB_UNEXPECTED_TAG;
    *phase = 1;
    room->round.phase = 1;
    netlib_reset_room_round(room);
    return 0;
}
