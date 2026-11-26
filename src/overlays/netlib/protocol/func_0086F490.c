/* compiler: mwcc-3.0.1b151-O3 */
#pragma inline_depth(16)
#include "pes6/netlib_room_peers.h"
extern void *func_001C48E8(void *dst, s32 value, u32 size);
s32 func_0086F490(NetlibPacket *packet, NetlibRoomPeers *room, char *password, s32 *result,
                  u8 *data, s8 *mode) {
    s32 i;
    if (!packet || !room || !password || !mode)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x4321)
        return NETLIB_UNEXPECTED_TAG;
    func_001C48E8(password, 0, 17);
    func_00874470(packet);
    func_00873FD0(packet, result);
    if (*result) {
        func_00874460(packet);
        return 0;
    }
    func_00874120(packet, mode);
    func_001C48E8(data, 0x66, 32);
    func_00874460(packet);
    for (i = 0; i < 8; i++) {
        room->statuses[i].id = room->members[i].id;
        room->statuses[i].first = 0;
        room->statuses[i].second = 0;
    }
    return 0;
}
