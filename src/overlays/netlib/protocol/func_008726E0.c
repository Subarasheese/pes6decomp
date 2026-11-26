/* compiler: mwcc-3.0.1b151-O3 */
#pragma inline_depth(16)
#include "pes6/netlib_packet.h"
extern void *func_001C48E8(void *dst, s32 value, u32 size);
extern s32 func_00873EE0(void *packet, void *dst, s32 size);
extern s32 func_00874040(void *packet, s16 *out);
extern s32 func_00873EB0(void *packet);
typedef struct {
    s8 field00;
    u8 reserved01;
    s16 value;
    char name[33];
    u8 reserved25;
} NamedRecord;
typedef struct {
    s16 count;
    NamedRecord rows[10];
} NamedRecords;
s32 func_008726E0(NetlibPacket *packet, NamedRecords *list) {
    s32 i;
    if (!packet || !list)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x4201)
        return NETLIB_UNEXPECTED_TAG;
    list->count = 0;
    func_001C48E8(list->rows, 0, sizeof(list->rows));
    func_00874470(packet);
    func_00874040(packet, &list->count);
    for (i = 0; i < 10; i++) {
        NamedRecord *row;
        if (func_00873EB0(packet) == -1)
            break;
        row = &list->rows[i];
        func_00874120(packet, &row->field00);
        func_001C48E8(row->name, 0, sizeof(row->name));
        func_00873EE0(packet, row->name, sizeof(row->name) - 1);
        func_00874040(packet, &row->value);
    }
    func_00874460(packet);
    return 0;
}
