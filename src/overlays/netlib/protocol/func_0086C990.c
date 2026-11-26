/* compiler: mwcc-3.0.1b151-O3 */
#pragma inline_depth(16)
#include "pes6/netlib_room_data.h"
#include "pes6/netlib_packet_buffer.h"
s32 func_0086C990(void *connection, const NetlibRoomData *row) {
    NetlibPacket packet;
    if (!row)
        return NETLIB_INVALID_ARGUMENT;
    netlib_begin_packet(&packet, 0x4351);
    func_008742B0(&packet, (const u32 *)&row->id);
    func_008742B0(&packet, (const u32 *)&row->value00);
    func_008742B0(&packet, (const u32 *)&row->value04);
    func_008742B0(&packet, (const u32 *)&row->id);
    func_008742B0(&packet, (const u32 *)&row->value0C);
    func_008741D0(&packet, row->data, sizeof(row->data));
    return netlib_send_packet(&packet, connection);
}
