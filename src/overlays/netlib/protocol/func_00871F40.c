/* compiler: mwcc-3.0.1b151-O3 */
#pragma inline_depth(16)
#include "pes6/netlib_room_profiles.h"
s32 func_00871F40(NetlibPacket *packet, LobbyProfileList *list) {
    s32 i, id;
    if (!packet || !list)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x4221)
        return NETLIB_UNEXPECTED_TAG;
    func_00874470(packet);
    func_00873F60(packet, &id);
    func_00874460(packet);
    for (i = 0; i < 100; i++) {
        if (list->rows[i].id == id) {
            func_001C48E8(&list->rows[i], 0, sizeof(list->rows[i]));
            list->count--;
            netlib_limit_profile_count(&list->count, 0, 100);
            break;
        }
    }
    for (i = 0; i < 99; i++) {
        if (!list->rows[i].id && list->rows[i + 1].id) {
            func_001C4730(&list->rows[i], &list->rows[i + 1], sizeof(list->rows[i]));
            func_001C48E8(&list->rows[i + 1], 0, sizeof(list->rows[i]));
        }
    }
    return 0;
}
