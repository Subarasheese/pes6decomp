/* compiler: mwcc-3.0.1b151-O3 */
#pragma inline_depth(16)
#include "pes6/netlib_packet.h"
extern void *func_001C48E8(void *dst, s32 value, u32 size);
extern s32 func_00873EE0(void *packet, void *dst, s32 size);
extern s32 func_00874090(void *packet, s16 *value);
typedef struct {
    s32 id, value04, value08, value0C, values10[5];
    s8 field24, field25;
    char text26[20];
    u8 reserved3A[2];
    s32 value3C;
    s16 field40, values42[4];
    u8 reserved4A[2];
} NetlibResultTotals;
s32 func_00867810(NetlibPacket *packet, NetlibResultTotals *reply, s32 *result) {
    s32 i;
    if (!packet || !reply || !result)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x3052)
        return NETLIB_UNEXPECTED_TAG;
    func_001C48E8(reply, 0, sizeof(*reply));
    func_00874470(packet);
    func_00873FD0(packet, result);
    if (*result) {
        func_00874460(packet);
        return -71;
    }
    func_00874120(packet, &reply->field24);
    func_00873F60(packet, &reply->id);
    func_00874120(packet, &reply->field25);
    func_00873F60(packet, &reply->value04);
    func_00873F60(packet, &reply->value08);
    func_00873F60(packet, &reply->value0C);
    func_00873F60(packet, &reply->value3C);
    func_001C48E8(reply->text26, 0, sizeof(reply->text26));
    func_00873EE0(packet, reply->text26, sizeof(reply->text26) - 1);
    for (i = 0; i < 5; i++)
        func_00873F60(packet, &reply->values10[i]);
    func_00874090(packet, &reply->field40);
    for (i = 0; i < 4; i++)
        func_00874090(packet, &reply->values42[i]);
    func_00874460(packet);
    return 0;
}
