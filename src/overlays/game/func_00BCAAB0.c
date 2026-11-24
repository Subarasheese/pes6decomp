/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_highlights.h"

u16 func_00BCAAB0(void) {
    u16 result = REPLAY_FRAMES;
    s32 seen = 0;
    s32 i;
    for (i = D_00CBAA02[0]; i >= 0; i--) {
        u8 state = D_003E758C->frames[i].ballState;
        if (seen) {
            if ((u8)state != 4) {
                result = i;
                break;
            }
        } else if ((u8)state == 4)
            seen = 1;
    }
    if (seen && result == REPLAY_FRAMES)
        result = 0;
    return result;
}
