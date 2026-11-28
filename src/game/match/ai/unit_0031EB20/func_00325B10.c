/* compiler: mwcc-3.0.1b198 */
#include "pes6/match_player_state_rows.h"

s32 func_00325B10(const MatchPlayerStateRows *state) {
    switch (state->kind) {
    case 10:
    case 12:
        if (state->stage == 1)
            return 1;
        break;
    case 6:
    case 7:
        if (!state->field0D)
            return 1;
        break;
    }
    return 0;
}
