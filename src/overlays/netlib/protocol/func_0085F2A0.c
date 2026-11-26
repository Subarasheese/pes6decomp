/* compiler: mwcc-3.0.1b151 */
#include "pes6/netlib_socket_transport.h"
s32 func_0085F2A0(void *rawPacket, void *rawChannel) {
    NetlibWirePacket *p = rawPacket;
    NetlibSocketChannel *channel = rawChannel;
    p->wire.sequence = ++channel->sequence;
    return func_00874540(p, channel->descriptor) ? NETLIB_SEND_FAILED : 0;
}
