/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_pitch_grid.h"
extern void func_00C12360(MatchPitchContext *, s32, s32, u8, u8, u8);
void func_00C122B0(u8 period, u8 team, u8 slot) {
    MatchPitchContext *state = &D_00CBDED0;
    if ((u32)(u8)period < 8 && (u8)team < 2 && (u8)slot < 32) {
        func_00C12360(state, 0, 2, period, team, slot);
        func_00C12360(state, 1, 3, period, team, slot);
    }
}
