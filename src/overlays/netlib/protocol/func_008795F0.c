/* compiler: mwcc-3.0.1b151-O3 */
#pragma inline_depth(16)
#include "pes6/netlib_profile_reader.h"
s32 func_008795F0(NetlibPacket *packet, const void *connection, NetlibProfileList *list) {
    s32 i;
    if (!packet || !connection || !list)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x5062)
        return NETLIB_UNEXPECTED_TAG;
    func_00874470(packet);
    for (i = list->count; i < 30; i++) {
        LobbyProfile *p;
        if (func_00873EB0(packet) == -1)
            break;
        p = &list->profiles[i];
        func_00873F60(packet, &p->field00);
        func_001C48E8(p->text04, 0, sizeof(p->text04));
        func_00873EE0(packet, p->text04, sizeof(p->text04) - 1);
        netlib_read_profile_fields(packet, p);
    }
    func_00874460(packet);
    list->count = i;
    netlib_sort_profiles(0, list);
    return 0;
}
