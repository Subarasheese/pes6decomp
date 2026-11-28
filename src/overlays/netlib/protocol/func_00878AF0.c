/* compiler: mwcc-3.0.1b151-O3 */
#pragma inline_depth(16)
#include "pes6/netlib_packet.h"
extern s32 func_00873EB0(void *packet);
extern s32 func_00873EE0(void *packet, void *buffer, s32 size);
extern void *func_001C48E8(void *dest, s32 value, u32 size);
extern s32 func_00874040(void *, s16 *);
typedef struct {
    s32 id, value04, value08, value0C, value10;
    u8 reserved14[0x51];
    char firstName[49];
    s16 field96;
    s8 field98;
    char secondName[49];
    s8 fieldCA, fieldCB;
    u8 reservedCC;
    char text[257];
    u8 reserved1CE[2];
} NetlibDirectoryListing;
typedef struct {
    NetlibDirectoryListing rows[100];
    s32 count;
} NetlibDirectoryListingList;
s32 func_00878AF0(NetlibPacket *packet, const void *connection, NetlibDirectoryListingList *list) {
    s32 i;
    if (!packet || !connection || !list)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x5082)
        return NETLIB_UNEXPECTED_TAG;
    func_00874470(packet);
    for (i = list->count; i < 100; i++) {
        NetlibDirectoryListing *row;
        if (func_00873EB0(packet) == -1)
            break;
        row = &list->rows[i];
        func_00873F60(packet, &row->id);
        func_00874040(packet, &row->field96);
        func_00874120(packet, &row->field98);
        func_00874120(packet, &row->fieldCB);
        func_00874120(packet, &row->fieldCA);
        func_00873F60(packet, &row->value04);
        func_00873F60(packet, &row->value08);
        func_001C48E8(row->firstName, 0, sizeof(row->firstName));
        func_00873EE0(packet, row->firstName, sizeof(row->firstName) - 1);
        func_001C48E8(row->secondName, 0, sizeof(row->secondName));
        func_00873EE0(packet, row->secondName, sizeof(row->secondName) - 1);
        func_00873F60(packet, &row->value0C);
        func_00873F60(packet, &row->value10);
        func_001C48E8(row->text, 0, sizeof(row->text));
        func_00873EE0(packet, row->text, sizeof(row->text) - 1);
    }
    func_00874460(packet);
    list->count = i;
    return 0;
}
