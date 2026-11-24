/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_stat_counters.h"

void func_00C10950(s32 side, s32 player) {
    Pes6MatchTeamStats *team = &D_00CBD8E0[(u8)side];
    Pes6MatchPlayerStats *current = &team->players[(u8)player];
    if ((u8)player < PES6_MATCH_STAT_PLAYERS) {
        ++current->counters[6];
    }
}
