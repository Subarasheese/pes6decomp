/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_pitch_grid.h"
void *func_00C11AC0(MatchPitchContext *map, u8 team, u8 number, u8 period) {
    if (team >= PITCH_SIDES || period < 0 || period >= PITCH_PERIODS) {
        team = (u8)(period = 0);
    }
    return &map->sides[team].periods[period];
}