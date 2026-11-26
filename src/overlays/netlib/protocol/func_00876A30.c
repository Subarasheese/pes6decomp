/* compiler: mwcc-3.0.1b151-O3 */
#pragma inline_depth(16)
#include "pes6/netlib_packet.h"
extern s32 func_00873EB0(void *packet);
extern s32 func_00873EE0(void *packet, void *dst, s32 size);
extern s32 func_00874040(void *packet, s16 *value);
extern s32 func_008740E0(void *packet, u8 *value);
extern void *func_001C48E8(void *dst, s32 value, u32 len);
typedef struct {
    u8 field00, reserved01;
    s16 field02, field04, reserved06;
    s32 value08, id;
    char name[49];
    u8 field41;
    s16 field42;
} RosterSlot;
typedef struct {
    s16 field00, field02;
    s32 id;
    u16 count, reserved0A;
    RosterSlot slots[10];
} RosterReply;
s32 func_00876A30(NetlibPacket *packet, RosterReply *reply) {
    s32 i;
    u16 count;
    u8 size, extra;
    if (!packet || !reply)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x8131)
        return NETLIB_UNEXPECTED_TAG;
    func_00874470(packet);
    func_00873F60(packet, &reply->id);
    func_00874040(packet, &reply->field02);
    func_008740E0(packet, &size);
    reply->count = size;
    count = reply->count;
    if (count > 10)
        count = 10;
    for (i = 0; i < count; i++) {
        RosterSlot *slot;
        if (func_00873EB0(packet) == -1)
            break;
        slot = &reply->slots[i];
        func_00874040(packet, &slot->field42);
        func_00874040(packet, &slot->field02);
        func_008740E0(packet, &slot->field41);
        func_00873F60(packet, &slot->id);
        func_001C48E8(slot->name, 0, sizeof(slot->name));
        func_00873EE0(packet, slot->name, sizeof(slot->name) - 1);
        func_00874040(packet, &slot->field04);
        func_008740E0(packet, &slot->field00);
        func_00873F60(packet, &slot->value08);
        func_008740E0(packet, &extra);
    }
    func_00874460(packet);
    return 0;
}
