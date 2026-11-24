/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_pitch_grid.h"

s32 func_00C12150(u8 team, u8 number) {
    MatchPitchContext *state = &D_00CBDED0;
    s32 slot = (u8)func_00C17E10(team, number);
    s32 total = 0;
    if ((u8)slot < PITCH_PLAYERS)
        total = state->counts[team][(u8)slot];
    return total;
}
