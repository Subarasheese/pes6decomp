/* compiler: mwcc-3.0.1b151 */
#include "pes6/netlib_room_summary.h"

extern void *func_001C48E8(void *, s32, u32);
extern s32 func_00873EE0(void *, void *, s32);

s32 func_00869240(NetlibPacket *packet, NetlibRoomSummary *summary) {
    if (packet && summary) {
        if (packet->tag != 0x6040)
            return NETLIB_UNEXPECTED_TAG;
    } else {
        return NETLIB_INVALID_ARGUMENT;
    }
    func_001C48E8(summary->data, 0, sizeof(summary->data));
    func_00874470(packet);
    func_00873FD0(packet, &summary->first);
    func_00873FD0(packet, &summary->second);
    func_00873EE0(packet, summary->data, sizeof(summary->data));
    func_00874460(packet);
    return 0;
}
