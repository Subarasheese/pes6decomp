/* compiler: mwcc-3.0.1b151-O3 */
#pragma inline_depth(16)
#include "pes6/netlib_packet.h"
extern s32 func_00873EB0(void *packet);
extern s32 func_00873EE0(void *packet, void *dst, s32 size);
extern s32 func_00874040(void *packet, s16 *value);
extern s32 func_008740E0(void *packet, u8 *value);
extern void *func_001C48E8(void *dst, s32 value, u32 len);
typedef struct {
    s32 id;
    char name[49];
    u8 reserved35[3];
} PacketName;
typedef struct {
    u8 field00, reserved01[3];
    s32 id, value08;
    char name[49];
    u8 field3D;
    s16 field3E;
    u8 field40, reserved41;
    s16 field42;
    u8 reserved44[8];
    PacketName members[4];
} SessionGroup;
typedef struct {
    SessionGroup groups[20];
    s32 count;
} SessionList;
static inline void read_name(NetlibPacket *packet, PacketName *member) {
    func_00873F60(packet, &member->id);
    func_001C48E8(member->name, 0, sizeof(member->name));
    func_00873EE0(packet, member->name, sizeof(member->name) - 1);
}
s32 func_008777D0(NetlibPacket *packet, const void *connection, SessionList *list) {
    s32 i;
    if (!packet || !connection || !list)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x5072)
        return NETLIB_UNEXPECTED_TAG;
    func_00874470(packet);
    for (i = list->count; i < 20; i++) {
        SessionGroup *group;
        if (func_00873EB0(packet) == -1)
            break;
        group = &list->groups[i];
        func_008740E0(packet, &group->field00);
        func_00873F60(packet, &group->id);
        func_001C48E8(group->name, 0, sizeof(group->name));
        func_00873EE0(packet, group->name, sizeof(group->name) - 1);
        func_00873F60(packet, &group->value08);
        func_008740E0(packet, &group->field40);
        func_008740E0(packet, &group->field3D);
        func_00874040(packet, &group->field42);
        func_00874040(packet, &group->field3E);
        read_name(packet, &group->members[0]);
        read_name(packet, &group->members[1]);
        read_name(packet, &group->members[2]);
        read_name(packet, &group->members[3]);
    }
    func_00874460(packet);
    list->count = i;
    return 0;
}
