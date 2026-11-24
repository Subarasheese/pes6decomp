/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_stat_counters.h"

void func_00C106C0(u8 side, u8 player) {
    Pes6MatchTeamStats *team = &D_00CBD8E0[side];
    if (player < PES6_MATCH_STAT_PLAYERS) {
        Pes6MatchPlayerStats *current = matchCounterRow(team, player);
        ++team->counters[10];
        ++current->counters[10];
    }
}
