/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_player.h"
extern u8 D_0092F1B0[];
Pes6MatchPlayer *func_009177C0(s32 slot) {
    u32 index = D_0092F1B0[slot];
    if (index)
        return &Pes6MatchPlayers[index];
    return 0;
}
