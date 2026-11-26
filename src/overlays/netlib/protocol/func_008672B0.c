/* compiler: mwcc-3.0.1b151-O3 */
#pragma inline_depth(16)
#include "pes6/netlib_connection.h"
#include "pes6/netlib_packet.h"
extern void *func_001C48E8(void *dst, s32 value, u32 size);
extern s32 func_00873EE0(void *packet, void *dst, s32 size);
extern s32 func_00874040(void *packet, s16 *field);
extern s32 func_00873EB0(void *packet);
extern s32 func_008740E0(void *packet, u8 *field);
typedef struct {
    s32 id;
    char name[49];
    u8 field35, field36, reserved37;
} NetlibRosterName;
typedef struct {
    s32 id;
    u8 field04;
    s8 field05, field06;
    u8 reserved07;
    NetlibRosterName members[4], teams[2];
    s16 values[2];
    u8 flags[2][5], reserved166[2];
} NetlibRosterRecord;
typedef struct {
    s32 count;
    NetlibRosterRecord rows[20];
} NetlibRosterPage;
s32 func_008672B0(NetlibPacket *packet, void *output, void *context) {
    NetlibRosterPage *list = output;
    s32 idx, i, j;
    if (!packet || !list || !context)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x3072)
        return NETLIB_UNEXPECTED_TAG;
    idx = list->count;
    func_00874470(packet);
    for (; idx < 20; idx++) {
        NetlibRosterRecord *row;
        if (func_00873EB0(packet) == -1)
            break;
        row = &list->rows[idx];
        func_001C48E8(row, 0, sizeof(*row));
        func_00873F60(packet, &row->id);
        for (i = 0; i < 4; i++)
            func_00873F60(packet, &row->members[i].id);
        for (i = 0; i < 4; i++)
            func_00873EE0(packet, row->members[i].name, sizeof(row->members[i].name) - 1);
        for (i = 0; i < 4; i++)
            func_008740E0(packet, &row->members[i].field35);
        for (i = 0; i < 2; i++)
            func_00874040(packet, &row->values[i]);
        for (i = 0; i < 2; i++) {
            for (j = 0; j < 5; j++)
                func_008740E0(packet, &row->flags[i][j]);
        }
        func_008740E0(packet, &row->field04);
        for (i = 0; i < 2; i++)
            func_00873F60(packet, &row->teams[i].id);
        for (i = 0; i < 2; i++)
            func_00873EE0(packet, row->teams[i].name, sizeof(row->teams[i].name) - 1);
        for (i = 0; i < 4; i++)
            func_008740E0(packet, &row->members[i].field36);
        func_00874120(packet, &row->field05);
        func_00874120(packet, &row->field06);
    }
    func_00874460(packet);
    list->count = idx;
    return 0;
}
