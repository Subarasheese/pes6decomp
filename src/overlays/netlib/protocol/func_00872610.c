/* compiler: mwcc-3.0.1b151 */
#include "pes6/netlib_packet_buffer.h"
extern s32 func_00874380(void *packet, const u16 *value);
extern s32 func_00874320(void *packet, const u16 *value);
s32 func_00872610(void *connection, u8 mode, const char *first, u16 firstPort, const char *second,
                  u16 secondPort, u16 value) {
    NetlibPacket packet;
    netlib_begin_packet(&packet, 0x4202);
    func_008743E0(&packet, &mode);
    func_008741D0(&packet, first, 16);
    func_00874380(&packet, &firstPort);
    func_008741D0(&packet, second, 16);
    func_00874380(&packet, &secondPort);
    func_00874320(&packet, &value);
    return netlib_send_packet(&packet, connection);
}
