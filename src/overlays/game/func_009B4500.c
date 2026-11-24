/* compiler: mwcc-3.0.1b151 */
#pragma opt_propagation off

#include "pes6/match_replay.h"

void func_009B4500(u16 frame) {
    if ((u16)frame >= REPLAY_FRAMES)
        frame = 0;
    while (D_003E758C->frames[(u16)frame].ballPosition.x == REPLAY_MISSING) {
        frame++;
        frame = (u16)frame % (u32)REPLAY_FRAMES;
    }
    D_00CBAA04[0] = frame;
}
