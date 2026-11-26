/* compiler: mwcc-3.0.1b151-O3 */
#pragma inline_depth(16)
#include "pes6/netlib_name_list.h"
s32 func_00870B60(NetlibPacket *packet, NetlibNameList *list) {
    s32 i;
    s32 id;
    if (!packet || !list)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x4512)
        return NETLIB_UNEXPECTED_TAG;
    func_00874470(packet);
    func_00873FD0(packet, &id);
    func_00874460(packet);
    for (i = 0; i < 70; i++) {
        NetlibNameEntry *entry = &list->entries[i];
        if (entry->id == id) {
            netlib_clear_name(entry);
        }
    }
    return 0;
}
