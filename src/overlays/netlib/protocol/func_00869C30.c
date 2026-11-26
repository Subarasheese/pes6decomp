/* compiler: mwcc-3.0.1b151 */
#pragma opt_strength_reduction off
#include "pes6/netlib_room.h"
s32 func_00869C30(void *connection, const NetlibRoomSlot *records) {
    NetlibPacket packet;
    s32 i;
    if (records) {
        netlib_begin_packet(&packet, 0x60a0);
        for (i = 0; i < 2; i++) {
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
