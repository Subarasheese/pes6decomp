/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_highlights.h"

u16 func_00BCAB40(void) {
    if (D_00CBAA02[0] - 10 < 70)
        return REPLAY_FRAMES;
    {
        s32 i;
        s32 seen;
        u16 result;
        result = REPLAY_FRAMES;
        i = 10;
        seen = 0;
        for (; i <= 70; i++) {
            u8 state = D_003E758C->frames[i].ballState;
            if (seen) {
                if ((u8)state == 1 || (u8)state == 2 || (u8)state == 3 || (u8)state == 8) {
                    result = i;
                    break;
                }
            } else if (!((u8)state == 1 || (u8)state == 2 || (u8)state == 3 || (u8)state == 8))
                seen = 1;
        }
        return result;
    }
}
