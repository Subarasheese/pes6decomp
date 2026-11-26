/* compiler: mwcc-3.0.1b151 */
#include "pes6/netlib_socket_transport.h"
s32 func_0085F2E0(NetlibPacket *packet, NetlibSocketChannel *channel) {
    NetlibWirePacket *p = (NetlibWirePacket *)packet;
    s32 result;
    if (p->wire.readState != 5 && p->wire.readState != 6)
        func_008744F0(packet);
    result = func_00874700(packet, channel->descriptor);
    if (result != 0) {
        if (result == -101)
            return -99;
        result = (result == -50) ? -64 : -62;
    } else {
        if (p->wire.sequence != ++channel->state)
            return -73;
        return 0;
    }
    return result;
}
