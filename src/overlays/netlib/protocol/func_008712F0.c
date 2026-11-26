/* compiler: mwcc-3.0.1b151-O3 */
#pragma inline_depth(16)
#include "pes6/netlib_name_list.h"
s32 func_008712F0(NetlibPacket *packet, NetlibNameList *list) {
    s32 i;
    if (!packet || !list)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x3084)
        return NETLIB_UNEXPECTED_TAG;
    func_00874470(packet);
    for (i = list->count; i < 70; i++) {
        NetlibNameEntry *entry;
        if (func_00873EB0(packet) == -1)
            break;
        entry = &list->entries[i];
        func_00873F60(packet, &entry->id);
        func_008740E0(packet, &entry->kind);
        netlib_read_entry_name(packet, entry);
        netlib_count_name(list, entry->kind);
    }
    func_00874460(packet);
    list->count = i;
    return 0;
}
