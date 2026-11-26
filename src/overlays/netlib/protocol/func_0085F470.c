/* compiler: mwcc-3.0.1b151 */
#include "pes6/netlib_socket.h"

extern s32 func_002DE610(s32 descriptor, s32 address, s32 size);
extern s32 func_002DE7A0(s32 descriptor, s32 level, s32 option, s32 *value, s32 size);

s32 func_0085F470(NetlibSocketChannel *channel) {
    s32 enabled;
    if (func_002DE610(channel->descriptor, (s32)&channel->peer, sizeof(channel->peer)) == 0) {
        enabled = 1;
        func_002DE7A0(channel->descriptor, 6, 1, &enabled, sizeof(enabled));
        channel->state = 0;
        channel->sequence = 0;
        return 0;
    }
    return -102;
}
