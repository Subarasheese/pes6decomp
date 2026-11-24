/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_pitch_grid.h"

void *func_00C11C80(MatchPitchContext *map, u8 team, u8 number, u8 period) {
    u8 slot = (u8)func_00C17E10(team, number);
    u8 player = map->assignment[team][slot];
    if (team >= PITCH_SIDES || player >= PITCH_ON_FIELD || (u8)slot >= PITCH_PLAYERS) {
        team = player = 0;
    }
    return map->sides[team].player[player].second;
}
