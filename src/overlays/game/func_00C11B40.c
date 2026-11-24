/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_pitch_grid.h"
void *func_00C11B40(MatchPitchContext *map, u8 team, u8 number, u8 period) {
    u8 slot = (u8)func_00C17E10(team, number);
    if (team >= PITCH_SIDES || (u8)slot >= PITCH_PLAYERS) {
        team = (u8)(slot = 0);
    }
    return &map->sides[team].slots[(u8)slot].second;
}