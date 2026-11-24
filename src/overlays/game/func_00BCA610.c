/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_highlights.h"

u16 func_00BCA610(u8 slot) {
    u16 i;
    HighlightClip *clip = D_00CBD390[(u8)slot];
    for (i = 0; i < HIGHLIGHT_FRAMES; i++) {
        if (clip->frames[i].ballPosition.x == REPLAY_MISSING)
            break;
    }
    return i;
}
