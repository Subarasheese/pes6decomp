/* compiler: mwcc-3.0.1b151-O3 */
#pragma inline_depth(16)
#include "pes6/netlib_name_list.h"
s32 func_008711D0(NetlibPacket *packet, NetlibNameList *list) {
    s32 i;
    s32 id;
    u8 kind;
    if (!packet || !list)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x4524)
        return NETLIB_UNEXPECTED_TAG;
    func_00874470(packet);
    func_00873F60(packet, &id);
    func_008740E0(packet, &kind);
    for (i = 0; i < 70; i++) {
        NetlibNameEntry *entry = &list->entries[i];
        if (!entry->id) {
            entry->id = id;
            entry->kind = kind;
            netlib_read_entry_name(packet, entry);
            netlib_count_name(list, kind);
            func_00874460(packet);
            return 0;
        }
    }
    func_00874460(packet);
    return 0;
}
