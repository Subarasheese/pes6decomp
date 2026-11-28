/* compiler: mwcc-3.0.1b210 */
#include "pes6/netlib_match_sync.h"
s32 func_0085E4F0(s16 slot, NetlibMatchSyncPacket *packet) {
    if (!D_003EA358)
        return 0;
    if (func_002DCA40()) {
        func_0085E560(slot, packet);
    } else {
        func_0085E6A0(slot, packet);
    }
    return 0;
}
