/* compiler: mwcc-3.0.1b151-O3 */
#pragma inline_depth(16)
#include "pes6/netlib_packet.h"
extern s32 func_00873EE0(void *packet, void *dst, s32 size);
extern s32 func_00874040(void *packet, s16 *value);
extern s32 func_00874090(void *packet, s16 *value);
extern void *func_001C48E8(void *dst, s32 value, u32 len);
typedef struct {
    s32 id, value04, value08;
    s16 field0C, reserved0E, field10, reserved12;
    s8 field14, reserved15[3], field18, reserved19[3];
    s32 value1C, value20;
    u8 reserved24[8];
    char name[65];
    s8 field6D, field6E, field6F;
    char text70[16];
    s8 field80, reserved81;
    s16 field82;
    u8 reserved84[0x101];
    s8 field185, field186;
    char text187[6];
    s8 field18D, field18E, field18F, field190, field191, field192, field193, field194;
    u8 reserved195[0x103];
} SessionDetails;
s32 func_008758E0(NetlibPacket *packet, SessionDetails *reply) {
    s16 number;
    if (!packet || !reply)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x9202)
        return NETLIB_UNEXPECTED_TAG;
    func_001C48E8(reply, 0, sizeof(*reply));
    func_00874470(packet);
    func_00873F60(packet, &reply->id);
    func_001C48E8(reply->name, 0, sizeof(reply->name));
    func_00873EE0(packet, reply->name, sizeof(reply->name) - 1);
    func_00873FD0(packet, &reply->value04);
    func_00873FD0(packet, &reply->value08);
    func_001C48E8(reply->text187, 0, sizeof(reply->text187));
    func_00873EE0(packet, reply->text187, sizeof(reply->text187) - 1);
    func_00874120(packet, &reply->field18D);
    func_00874120(packet, &reply->field6D);
    func_00874120(packet, &reply->field18E);
    func_00874090(packet, &reply->field10);
    func_00874090(packet, &reply->field0C);
    func_00874120(packet, &reply->field14);
    func_00874120(packet, &reply->field18);
    func_00874040(packet, &number);
    reply->value1C = (u16)number;
    func_00874040(packet, &number);
    reply->value20 = (u16)number;
    func_00874120(packet, &reply->field6E);
    func_00874120(packet, &reply->field6F);
    func_00874120(packet, &reply->field80);
    func_00874120(packet, &reply->field190);
    func_00874120(packet, &reply->field185);
    func_00874120(packet, &reply->field193);
    func_00874120(packet, &reply->field191);
    func_00874120(packet, &reply->field186);
    func_00874120(packet, &reply->field192);
    func_00874120(packet, &reply->field194);
    func_00874120(packet, &reply->field18F);
    func_001C48E8(reply->text70, 0, sizeof(reply->text70));
    func_00873EE0(packet, reply->text70, sizeof(reply->text70) - 1);
    func_00874040(packet, &reply->field82);
    func_00874460(packet);
    return 0;
}
