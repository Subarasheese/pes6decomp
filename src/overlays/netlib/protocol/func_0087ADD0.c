/* compiler: mwcc-3.0.1b151-O3 */
#pragma inline_depth(16)
#include "pes6/netlib_packet.h"
extern s32 func_00873EB0(void *packet);
extern s32 func_00873EE0(void *packet, void *buffer, s32 size);
extern void *func_001C48E8(void *dest, s32 value, u32 size);
extern s32 func_008740E0(void *, u8 *);
typedef struct {
    s32 id, value04;
    char name[49];
    u8 field39, field3A;
    char text[257];
} NetlibMessage;
typedef struct {
    NetlibMessage rows[100];
    s32 count;
} NetlibMessageList;
s32 func_0087ADD0(NetlibPacket *packet, const void *connection, NetlibMessageList *list) {
    s32 i;
    if (!packet || !connection || !list)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x5028)
        return NETLIB_UNEXPECTED_TAG;
    func_00874470(packet);
    for (i = list->count; i < 100; i++) {
        NetlibMessage *row;
        if (func_00873EB0(packet) == -1)
            break;
        row = &list->rows[i];
        func_00873F60(packet, &row->id);
        func_001C48E8(row->name, 0, sizeof(row->name));
        func_00873EE0(packet, row->name, sizeof(row->name) - 1);
        func_008740E0(packet, &row->field39);
        func_008740E0(packet, &row->field3A);
        func_00873F60(packet, &row->value04);
        func_001C48E8(row->text, 0, sizeof(row->text));
        func_00873EE0(packet, row->text, sizeof(row->text) - 1);
    }
    func_00874460(packet);
    list->count = i;
    return 0;
}
