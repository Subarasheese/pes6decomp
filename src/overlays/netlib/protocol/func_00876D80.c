/* compiler: mwcc-3.0.1b151-O3 */
#pragma inline_depth(16)
#include "pes6/netlib_session_members.h"
extern s32 func_00873EE0(void *packet, void *dst, s32 size);
extern s32 func_00874040(void *packet, s16 *value);
extern s32 func_008740E0(void *packet, u8 *value);
extern void *func_001C48E8(void *dst, s32 value, u32 len);
s32 func_00876D80(NetlibPacket *packet, NetlibSessionMembers *reply, s32 *result) {
    s32 i;
    if (!packet || !reply || !result)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x8121)
        return NETLIB_UNEXPECTED_TAG;
    func_00874470(packet);
    func_00873F60(packet, &reply->id);
    func_001C48E8(reply->name, 0, sizeof(reply->name));
    func_00873EE0(packet, reply->name, sizeof(reply->name) - 1);
    for (i = 0; i < 3; i++)
        func_00874040(packet, &reply->values[i]);
    func_00874120(packet, &reply->mode);
    func_001C48E8(reply->secondName, 0, sizeof(reply->secondName));
    func_00873EE0(packet, reply->secondName, sizeof(reply->secondName) - 1);
    func_00873F60(packet, &reply->value04);
    func_00874040(packet, &reply->field8C);
    func_00874040(packet, &reply->field08);
    func_00874040(packet, &reply->field0A);
    func_00874040(packet, &reply->field0C);
    func_00874040(packet, &reply->field0E);
    func_00874040(packet, (s16 *)&reply->count);
    for (i = 0; i < reply->count; i++) {
        NetlibSessionMember *member = &reply->members[i];
        func_001C48E8(member, 0, sizeof(*member));
        func_00874040(packet, &member->field24);
        func_008740E0(packet, &member->field1E);
    }
    func_00874460(packet);
    *result = 0;
    return 0;
}
