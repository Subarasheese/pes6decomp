/* compiler: mwcc-3.0.1b151-O3 */
#pragma inline_depth(16)
#include "pes6/netlib_profile_reader.h"
s32 func_00879FC0(NetlibPacket *packet, s32 *id, NetlibProfileCounter *counter,
                  NetlibProfileList *list) {
    LobbyProfile p;
    s32 i;
    if (!packet || !id || !counter || !list)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x5039)
        return NETLIB_UNEXPECTED_TAG;
    func_001C48E8(&p, 0, sizeof(p));
    func_00874470(packet);
    func_00873F60(packet, &p.field00);
    *id = p.field00;
    func_001C48E8(p.text04, 0, sizeof(p.text04));
    func_00873EE0(packet, p.text04, sizeof(p.text04) - 1);
    netlib_read_profile_fields(packet, &p);
    func_00874460(packet);
    for (i = 0; i < 30; i++) {
        LobbyProfile *old = &list->profiles[i];
        if (p.field00 == old->field00 && old->field00 != 0) {
            func_001C4730(old, &p, sizeof(p));
            netlib_sort_profiles(counter, list);
            return 0;
        }
    }
    for (i = 0; i < 30; i++) {
        LobbyProfile *empty = &list->profiles[i];
        if (!empty->field00) {
            func_001C4730(empty, &p, sizeof(p));
            list->count++;
            netlib_sort_profiles(counter, list);
            return 0;
        }
    }
    return 0;
}
