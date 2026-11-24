/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_replay.h"

extern u8 D_00591E57[];
extern u8 D_00591F24[];

u8 func_00BD0950(void) {
    Pes6MatchPlayer *player = Pes6MatchPlayer_Get(D_00591E57[0]);
    if (D_00591F24[0] != 6) {
        Pes6MatchPlayer *last = Pes6MatchPlayer_Get(D_00591E57[0]);
        s32 i;
        for (i = 1; i < 3; i++) {
            if (D_00591E00.state.lastSide[i] != 255) {
                player = Pes6MatchPlayer_Get(D_00591E00.state.lastSide[i]);
                if (player->side != last->side)
                    break;
            }
        }
    }
    return player->id;
}
