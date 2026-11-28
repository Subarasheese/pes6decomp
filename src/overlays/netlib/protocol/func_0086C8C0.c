/* compiler: mwcc-3.0.1b151-O3 */
#pragma inline_depth(16)
#include "pes6/netlib_room_data.h"
extern void *func_001C48E8(void *dst, s32 value, u32 size);
extern s32 func_00873EE0(void *packet, void *dst, s32 size);
s32 func_0086C8C0(NetlibPacket *packet, NetlibRoomData *row) {
    s32 id = 0;
    if (!packet || !row)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x4351)
        return NETLIB_UNEXPECTED_TAG;
    func_001C48E8(row->data, 0, 64);
    func_00874470(packet);
    func_00873F60(packet, &id);
    func_00873FD0(packet, &row->value00);
    func_00873F60(packet, &row->value04);
    func_00873F60(packet, &row->id);
    func_00873FD0(packet, &row->value0C);
    func_00873EE0(packet, row->data, sizeof(row->data));
    func_00874460(packet);
    return 0;
}
