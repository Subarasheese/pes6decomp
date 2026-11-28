/* compiler: mwcc-3.0.1b151-O3 */
#pragma inline_depth(16)
#include "pes6/netlib_room_peers.h"
s32 func_0086D630(NetlibPacket *packet, s32 *result, NetlibRoomPeers *room) {
    s32 i;
    if (!packet || !result)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x432b)
        return NETLIB_UNEXPECTED_TAG;
    func_00874470(packet);
    func_00873FD0(packet, result);
    func_00874460(packet);
    if (*result == 0) {
        for (i = 0; i < 8; i++) {
            func_00857B70(&room->peers[i].data);
            room->peers[i].state = 0;
            room->peers[i].id = 0;
        }
        for (i = 0; i < 8; i++) {
            room->statuses[i].id = 0;
            room->statuses[i].first = 0;
            room->statuses[i].second = 0;
        }
    }
    return 0;
}
