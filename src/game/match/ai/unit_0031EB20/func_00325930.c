/* compiler: mwcc-3.0.1b198 */
#include "pes6/match_period_message.h"

s32 func_00325930(const TeamCompetition *state) {
    s32 ok = 0;
    if (state->kind == 11)
        return 0;
    switch (state->competition) {
    case 17:
    case 10:
        if (state->stage == 3)
            ok = 1;
        break;
    case 38:
    case 45:
    case 57:
    case 9:
        if (state->stage == 1)
            ok = 1;
        break;
    case 8:
        switch (state->round) {
        case 2:
            if (state->stage == 4)
                ok = 1;
            break;
        case 3:
            if (state->stage == 3)
                ok = 1;
            break;
        case 4:
            if (state->stage == 1)
                ok = 1;
            break;
        }
        break;
    }
    return ok;
}
