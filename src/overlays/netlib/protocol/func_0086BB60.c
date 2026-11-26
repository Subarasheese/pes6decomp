/* compiler: mwcc-3.0.1b151 */
#include "pes6/netlib_room_packets.h"
s32 func_0086BB60(void *connection, const NetlibRoomOptions *options) {
    NetlibPacket packet;
    if (!options)
        return -27;
    netlib_begin_packet(&packet, 0x436c);
    netlib_write_room_options(&packet, options);
    return netlib_send_packet(&packet, connection);
}
