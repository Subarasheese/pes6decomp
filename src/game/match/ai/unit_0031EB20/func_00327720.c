/* compiler: mwcc-3.0.1b198 */
#include "pes6/match_player_state_rows.h"

extern s16 func_0030DAF0(s32 side);
extern s32 func_00333710(void *report, s32 side);
extern s32 func_00325100(MatchPlayerStateRows *state, void *report, void *match, s32 side);
extern u8 D_005922E8[];

s32 func_00327720(MatchPlayerStateRows *state, void *report, void *match, u8 selected) {
    MatchStateSide *side = &state->sides[(u8)selected];
    s32 result;
    side->scores[0] = func_0030DAF0(0);
    side->scores[1] = func_0030DAF0(1);
    result = func_00333710(report, (u8)selected);
    if (D_005922E8[0])
        side->mode = 4;
    else if (result > 13)
        side->mode = 1;
    else if (result == 13)
        side->mode = 3;
    else
        side->mode = 2;
    side->previous = side->current;
    func_00325100(state, report, match, (u8)selected);
    return 1;
}
