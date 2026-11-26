/* compiler: mwcc-3.0.1b151-O3 */
#pragma inline_depth(16)
#include "pes6/netlib_packet.h"
extern s32 func_00873EB0(void *packet);
extern s32 func_00873EE0(void *packet, void *buffer, s32 size);
extern void *func_001C48E8(void *dest, s32 value, u32 size);
typedef struct {
    s32 id, value04, value08;
    char name[49];
    u8 reserved3D[3];
} NetlibDirectoryEntry;
typedef struct {
    NetlibDirectoryEntry rows[30];
    s32 count;
} NetlibDirectoryEntryList;
s32 func_00879DB0(NetlibPacket *packet, const void *connection, NetlibDirectoryEntryList *list) {
    s32 i;
    if (!packet || !connection || !list)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x503c)
        return NETLIB_UNEXPECTED_TAG;
    func_00874470(packet);
    for (i = list->count; i < 30; i++) {
        NetlibDirectoryEntry *row;
        if (func_00873EB0(packet) == -1)
            break;
        row = &list->rows[i];
        func_00873F60(packet, &row->id);
        func_00873F60(packet, &row->value04);
        func_001C48E8(row->name, 0, sizeof(row->name));
        func_00873EE0(packet, row->name, sizeof(row->name) - 1);
        func_00873F60(packet, &row->value08);
    }
    func_00874460(packet);
    list->count = i;
    return 0;
}
