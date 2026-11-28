/* compiler: mwcc-3.0.1b151-O3 */
#pragma opt_repositioncode off
#include "pes6/netlib_match_participants.h"
s32 func_0085E1D0(void) {
    NetlibMatchPeer *peer;
    s32 i;
    if (!D_003EA358)
        return 0;
    if (D_003EA358->ready)
        return 0;
    for (i = 1, peer = D_008B21C0.peers; i < (s32)func_00858B60(&D_008B21C0, 1) + 1; i++, peer++) {
        if (!((D_003EA358->participants >> (peer->slot - 1)) & 1))
            return 0;
    }
    return 1;
}
