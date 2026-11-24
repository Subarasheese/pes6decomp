/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_replay.h"

ReplayQuaternion *func_009B4090(s32 offset) {
    ReplayFrame *frame = replayNeighbor(offset);
    return &frame->ballOrientation;
}
