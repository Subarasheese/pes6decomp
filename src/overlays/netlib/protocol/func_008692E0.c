/* compiler: mwcc-3.0.1b151 */
#include "pes6/netlib_packet_buffer.h"
typedef struct {
    u32 first, second;
    u8 data[0x40];
} NetlibDataPair;
s32 func_008692E0(void *connection, const NetlibDataPair *input) {
    NetlibPacket packet;
    if (!input)
        return NETLIB_INVALID_ARGUMENT;
    netlib_begin_packet(&packet, 0x6040);
    func_008742B0(&packet, &input->first);
    func_008742B0(&packet, &input->second);
    func_008741D0(&packet, input->data, sizeof(input->data));
    return netlib_send_packet(&packet, connection);
}
