/* compiler: mwcc-3.0.1b151-O3 */
#pragma inline_depth(16)
#include "pes6/netlib_packet.h"
extern s32 func_00873EB0(void *packet);
extern s32 func_00873EE0(void *packet, void *buffer, s32 size);
extern void *func_001C48E8(void *dest, s32 value, u32 size);
extern s32 func_00874040(void *, s16 *);
extern s32 func_008740E0(void *, u8 *);
typedef struct {
    char first[33];
    u8 flag;
    s16 value;
    char second[33], name[49];
    s8 field76, field77, field78;
    u8 reserved79[3];
    s32 id, secondId;
    char text[65];
    u8 reservedC5[3];
} PacketRecord;
typedef struct {
    s32 count;
    PacketRecord rows[50];
} PacketRecordList;
s32 func_00870460(NetlibPacket *packet, PacketRecordList *list) {
    s32 i;
    if (!packet || !list)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x4602)
        return NETLIB_UNEXPECTED_TAG;
    func_00874470(packet);
    for (i = list->count; i < 50; i++) {
        PacketRecord *row;
        if (func_00873EB0(packet) == -1)
            break;
        row = &list->rows[i];
        func_00873F60(packet, &row->id);
        func_001C48E8(row->name, 0, sizeof(row->name));
        func_00873EE0(packet, row->name, sizeof(row->name) - 1);
        func_00874040(packet, &row->value);
        func_001C48E8(row->first, 0, sizeof(row->first));
        func_008740E0(packet, &row->flag);
        func_001C48E8(row->second, 0, sizeof(row->second));
        func_00873EE0(packet, row->second, sizeof(row->second) - 1);
        func_00874120(packet, &row->field76);
        func_00874120(packet, &row->field77);
        func_00873F60(packet, &row->secondId);
        func_001C48E8(row->text, 0, sizeof(row->text));
        func_00873EE0(packet, row->text, sizeof(row->text) - 1);
        func_00874120(packet, &row->field78);
    }
    func_00874460(packet);
    list->count = i;
    return 0;
}
