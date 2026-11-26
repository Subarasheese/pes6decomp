/* compiler: mwcc-3.0.1b151-O3 */
#include "pes6/netlib_session_members.h"
extern s32 func_00873EE0(void *packet, void *dst, s32 size);
extern s32 func_00874040(void *packet, s16 *value);
s32 func_00876C20(NetlibPacket *packet, NetlibSessionMembers *reply, s32 *result) {
    s32 i;
    if (!packet || !reply || !result)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x8123)
        return NETLIB_UNEXPECTED_TAG;
    func_00874470(packet);
    for (i = 0; i < reply->count; i++) {
        NetlibSessionMember *member = &reply->members[i];
        func_00874040(packet, &member->field20);
        func_00873EE0(packet, member->text, sizeof(member->text));
        func_00874040(packet, &member->field22);
    }
    func_00874460(packet);
    *result = 0;
    return 0;
}
