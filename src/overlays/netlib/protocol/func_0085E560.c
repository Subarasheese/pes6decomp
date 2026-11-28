/* compiler: mwcc-3.0.1b210 */
#include "pes6/netlib_match_sync.h"
s32 func_0085E560(s16 slot, NetlibMatchSyncPacket *packet) {
    s32 state = packet->state;
    if (D_003EA358->mode != packet->mode)
        return 0;
    if (D_003EA358->finished) {
        D_003EA358->dirty = 1;
        return 0;
    }
    if (D_003EA358->sequences[slot - 1] < packet->sequence) {
        D_003EA358->sequences[slot - 1] = packet->sequence;
        if (state == 3) {
            D_003EA358->states[slot - 1] = state;
            D_003EA358->values[slot - 1] = packet->value;
            D_003EA358->dirty = 1;
            D_003EA358->receivedValue = packet->value;
        } else if (state == 0) {
            D_003EA358->states[slot - 1] = state;
            D_003EA358->values[slot - 1] = 0;
            D_003EA358->dirty = 1;
        }
    }
    D_003EA358->participants |= (u8)(1 << (slot - 1));
    if (D_003EA358->readPayload) {
        s32 size = packet->payloadSize;
        D_003EA358->readPayload(packet->payload, size);
    }
    func_0085E280(!D_003EA358->pending);
    return 0;
}
