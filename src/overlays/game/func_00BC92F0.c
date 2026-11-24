/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_highlights.h"

static inline s32 firstIndex(s32 id) {
    s32 value;
    if (id != 0xff)
        value = (id - 1) % 23 + 1;
    else
        value = 1;
    return value;
}
s32 func_00BC92F0(s32 index) {
    s32 different = 0;
    s32 side;
    for (side = 0; side < 2; side++) {
        s32 i = 0;
        Pes6MatchPlayer *player = &Pes6MatchPlayers[firstIndex(side * HIGHLIGHT_PLAYERS + 1)];
        for (; i < HIGHLIGHT_PLAYERS; i++, player++) {
            if (player->slot != D_00CBD3B0[index].roster[side][i]) {
                different = 1;
                break;
            }
        }
        if (different)
            break;
    }
    return different;
}
