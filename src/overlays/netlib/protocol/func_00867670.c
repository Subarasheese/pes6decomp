/* compiler: mwcc-3.0.1b151-O3 */
#pragma inline_depth(16)
#include "pes6/netlib_connection.h"
#include "pes6/netlib_packet.h"
extern s32 func_008740E0(void *packet, u8 *value);
extern s32 func_00874040(void *packet, s16 *value);
extern s32 func_00873EB0(void *packet);
typedef struct {
    u8 slot, reserved01;
    s16 first, second, third;
} NetlibScoreSlot;
s32 func_00867670(NetlibPacket *packet, void *output, void *resultOut) {
    NetlibScoreSlot *rows = output;
    s32 *result = resultOut;
    s32 i;
    u8 slot;
    if (!packet || !rows || !result)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x3062)
        return NETLIB_UNEXPECTED_TAG;
    for (i = 0; i < 5; i++) {
        rows[i].slot = 0;
        rows[i].first = 0;
        rows[i].second = 0;
        rows[i].third = 0;
    }
    func_00874470(packet);
    if (func_00873FD0(packet, result)) {
        func_00874460(packet);
        return 0;
    }
    for (i = 0; i < 2; i++) {
        NetlibScoreSlot *row;
        if (func_00873EB0(packet) == -1)
            break;
        func_008740E0(packet, &slot);
        row = &rows[slot];
        row->slot = slot;
        func_00874040(packet, &row->first);
        func_00874040(packet, &row->second);
    }
    func_00874460(packet);
    return 0;
}
