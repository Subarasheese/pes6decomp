/* compiler: mwcc-3.0.1b151-O3 */
#pragma inline_depth(16)
#include "pes6/netlib_packet.h"
extern s32 func_00873EE0(void *packet, void *buffer, s32 size);
extern void *func_001C48E8(void *dest, s32 value, u32 size);
typedef struct {
    s32 id, sender, value08, value0C;
    char name[49];
    s8 mode;
    char text[513], label[20];
    u8 reserved257;
} NetlibChatMessage;
typedef struct {
    u8 next, reserved[3];
    NetlibChatMessage messages[50];
} NetlibChatHistory;
s32 func_00871710(NetlibPacket *packet, NetlibChatHistory *history) {
    NetlibChatMessage *row;
    if (!packet || !history)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x4784)
        return NETLIB_UNEXPECTED_TAG;
    if (history->next >= 50)
        history->next %= 50;
    {
        u8 index = history->next;
        row = &history->messages[index];
        history->next = index + 1;
    }
    row->id = 0;
    row->sender = 0;
    func_001C48E8(row->name, 0, sizeof(row->name));
    func_001C48E8(row->text, 0, sizeof(row->text));
    func_001C48E8(row->label, 0, sizeof(row->label));
    row->value08 = 0;
    row->value0C = 0;
    func_00874470(packet);
    func_00873F60(packet, &row->id);
    func_00873F60(packet, &row->sender);
    func_00873EE0(packet, row->name, sizeof(row->name) - 1);
    func_00873EE0(packet, row->text, sizeof(row->text) - 1);
    func_00873EE0(packet, row->label, sizeof(row->label) - 1);
    func_00873FD0(packet, &row->value08);
    func_00874120(packet, &row->mode);
    func_00873F60(packet, &row->value0C);
    func_00874460(packet);
    return 0;
}
