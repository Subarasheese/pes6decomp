/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_stat_counters.h"

void func_00C10640(u8 side, u8 player) {
    Pes6MatchTeamStats *team = &D_00CBD8E0[side];
    if (player < PES6_MATCH_STAT_PLAYERS) {
        ++team->counters[11];
        ++team->players[player].counters[11];
        addMatchStat(team, player, 10);
    }
}
