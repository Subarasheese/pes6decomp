/* compiler: mwcc-3.0.1b151-O3 */
#pragma inline_depth(16)
#include "pes6/netlib_room_profiles.h"
s32 func_008720B0(NetlibPacket *packet, LobbyProfileList *list) {
    LobbyProfile p;
    s32 i;
    if (!packet || !list)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x4220)
        return NETLIB_UNEXPECTED_TAG;
    func_001C48E8(&p, 0, sizeof(p));
    func_00874470(packet);
    netlib_read_room_profile(packet, &p);
    func_00874460(packet);
    for (i = 0; i < 100; i++) {
        if (list->rows[i].id == p.id) {
            func_001C4730(&list->rows[i], &p, sizeof(p));
            return 0;
        }
    }
    for (i = 0; i < 100; i++) {
        if (!list->rows[i].id) {
            func_001C4730(&list->rows[i], &p, sizeof(p));
            list->count++;
            return 0;
        }
    }
    return -452;
}
