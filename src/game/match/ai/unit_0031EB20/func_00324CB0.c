/* compiler: mwcc-3.0.1b198 */
#include "pes6/match_player_state_rows.h"

extern u8 func_00231E90(u8 team, s32 stage);

s32 func_00324CB0(MatchPlayerStateRows *state) {
    s32 i;
    if (state->kind == 6 && state->field0D) {
        for (i = 0; i < 2; ++i) {
            switch (func_00231E90(D_003E77B0->team[i % 2], (u8)(state->field0D - 1))) {
            case 1:
                state->results[i] = 1;
                break;
            case 2:
                state->results[i] = 2;
                break;
            case 3:
                state->results[i] = 3;
                break;
            }
        }
    } else {
        state->results[0] = 4;
        state->results[1] = 4;
    }
    return 1;
}
