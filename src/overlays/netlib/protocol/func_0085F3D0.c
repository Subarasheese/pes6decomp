/* compiler: mwcc-3.0.1b151 */
#pragma inline_depth(16)
#include "pes6/netlib_packet.h"
#include "pes6/netlib_socket.h"
typedef struct {
    s32 tag;
    s32 payloadSize;
    s32 sequence;
} NetlibPacketPrefix;
typedef union {
    NetlibPacket packet;
    NetlibPacketPrefix header;
} NetlibSequencedPacket;
extern s32 func_00874540(void *packet, s32 descriptor);
extern s32 func_002DE2D0(s32 descriptor);
static inline s32 close_channel(NetlibSocketChannel *channel) {
    if (func_002DE2D0(channel->descriptor) != 0) {
        return -33;
    } else {
        channel->descriptor = -1;
        channel->state = 0;
        channel->sequence = 0;
        return 0;
    }
}
s32 func_0085F3D0(NetlibSocketChannel *channel, u8 reason) {
    NetlibSequencedPacket packet;
    netlib_begin_packet(&packet.packet, 3);
    func_00874420(&packet.packet, (const s8 *)&reason);
    func_00874480(&packet.packet);
    packet.header.sequence = ++channel->sequence;
    func_00874540(&packet.packet, channel->descriptor);
    return close_channel(channel);
}
