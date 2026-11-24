/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_replay.h"

s32 func_009B5C10(void) {
    s32 frame = D_00CBAA04[0];
    s32 slot;
    for (;;) {
        for (slot = 0; slot < REPLAY_SLOTS; slot++) {
            s32 code = D_003E758C->frames[frame].players[slot].primaryClip;
            if (code >= 0x59a && code < 0x5ca)
                return D_003E758C->frames[frame].otherMarker;
        }
        if (frame == D_00CBAA02[0])
            return REPLAY_NO_MARKER;
        frame = (frame + 1) % REPLAY_FRAMES;
    }
}
