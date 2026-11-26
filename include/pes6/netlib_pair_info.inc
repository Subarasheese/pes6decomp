/* The two lobby protocols use the same reply layout under different tags. */
#include "pes6/netlib_packet.h"
typedef struct {
    s32 value00;
    u8 first[17];
    u8 reserved15;
    s16 firstValue;
    u8 second[17];
    u8 reserved29;
    s16 secondValue;
} NetlibPairInfo;
extern s32 func_00873EE0(void *, void *, s32);
extern s32 func_00874090(void *, s16 *);
s32 NETLIB_REPLY_HANDLER(NetlibPacket *packet, s32 *result, NetlibPairInfo *info) {
    if (!packet || !result || !info)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != NETLIB_REPLY_TAG)
        return NETLIB_UNEXPECTED_TAG;
    func_00874470(packet);
    func_00873FD0(packet, result);
    func_00873EE0(packet, info->first, sizeof(info->first) - 1);
    func_00874090(packet, &info->firstValue);
    func_00873EE0(packet, info->second, sizeof(info->second) - 1);
    func_00874090(packet, &info->secondValue);
    func_00873F60(packet, &info->value00);
    func_00874460(packet);
    return 0;
}

#undef NETLIB_REPLY_HANDLER
#undef NETLIB_REPLY_TAG
