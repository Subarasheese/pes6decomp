/* compiler: mwcc-3.0.1b151 */
#pragma opt_strength_reduction off
#include "pes6/netlib_room.h"
s32 func_0086BF10(void *connection, const NetlibRoomSlot *records) {
    NetlibPacket packet;
    s32 i;
    if (records) {
        netlib_begin_packet(&packet, 0x4369);
        for (i = 0; i < 4; i++) {
            const NetlibRoomSlot *row = &records[i];
            func_00874240(&packet, &row->id);
            func_00874420(&packet, &row->side);
            func_008743E0(&packet, &row->value09);
            func_008743E0(&packet, &row->value0A);
            func_008743E0(&packet, &row->value0B);
        }
        return netlib_send_packet(&packet, connection);
    }
    return -27;
}
