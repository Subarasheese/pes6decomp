/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_replay.h"

ReplayPoint *func_009B41B0(s32 offset, s8 slot) {
    ReplayFrame *frame = replayNeighbor(offset);
    return &frame->players[slot].position;
}
