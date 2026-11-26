/* compiler: mwcc-3.0.1b151-O3 */
#pragma inline_depth(16)
#include "pes6/netlib_packet.h"
extern void *func_001C48E8(void *dst, s32 value, u32 size);
extern s32 func_00873EE0(void *packet, void *dst, s32 size);
extern s32 func_00874040(void *packet, s16 *value);
extern s32 func_008740E0(void *packet, u8 *value);
extern void *func_001C4730(void *dst, const void *src, u32 size);
typedef struct {
    s32 id, secondId, value08, value0C, value10;
    char first[49];
    u8 field45;
    s16 field46;
    char second[49];
    u8 field79;
    s16 field7A;
    char firstText[257];
    s8 field17D;
    s16 field17E;
    char secondText[257];
    u8 reserved281;
    s16 field282;
} NetlibContactDetail;
s32 func_0087AFE0(NetlibPacket *packet, s32 *result, NetlibContactDetail *detail, s32 selectedId,
                  NetlibContactDetail *selected) {
    if (!packet || !result || !detail || !selected)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x5025)
        return NETLIB_UNEXPECTED_TAG;
    func_001C48E8(detail, 0, sizeof(*detail));
    func_00874470(packet);
    func_00873FD0(packet, result);
    if (!*result) {
        func_00873F60(packet, &detail->id);
        func_00873EE0(packet, detail->first, sizeof(detail->first) - 1);
        func_00873F60(packet, &detail->value08);
        func_00873F60(packet, &detail->value0C);
        func_00874040(packet, &detail->field282);
        func_00874040(packet, &detail->field17E);
        func_00874040(packet, &detail->field7A);
        func_00874040(packet, &detail->field46);
        func_00873F60(packet, &detail->secondId);
        func_00873EE0(packet, detail->second, sizeof(detail->second) - 1);
        func_008740E0(packet, &detail->field45);
        func_008740E0(packet, &detail->field79);
        func_00873F60(packet, &detail->value10);
        func_00874120(packet, &detail->field17D);
        func_00873EE0(packet, detail->secondText, sizeof(detail->secondText) - 1);
        func_00873EE0(packet, detail->firstText, sizeof(detail->firstText) - 1);
        if (selectedId == detail->id)
            func_001C4730(selected, detail, sizeof(*detail));
    }
    func_00874460(packet);
    return 0;
}
