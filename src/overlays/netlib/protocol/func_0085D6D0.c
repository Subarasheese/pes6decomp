/* compiler: mwcc-3.0.1b210 */
#include "pes6/netlib_match_broadcast.h"
extern void func_002B1A90(s32, NetlibMatchBroadcast *);
s32 func_0085D6D0(s32 slot, NetlibMatchBroadcast *packet) {
    NetlibLocalPlayer *peer = func_008472D0();
    if (func_002DCA50())
        return -1;
    if (func_001FC7D0(Pes6Module_GetRegion(17)) != 17 ||
        !Pes6MemRegion_IsResident(Pes6Module_GetRegion(17)))
        return -1;
    func_00859A80((s16)slot, packet->tag, 200, packet, 300);
    if (D_008B142D[0])
        return -1;
    if (peer->lastSequence > packet->sequence)
        return -1;
    func_002B1A90(slot, packet);
    peer->lastSequence = packet->sequence;
    return 0;
}
