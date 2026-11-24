#ifndef PES6_MATCH_STAT_COUNTERS_H
#define PES6_MATCH_STAT_COUNTERS_H

#include "pes6/match_stats.h"
extern Pes6MatchTeamStats D_00CBD8E0[];
typedef char check_team_statistics_stride[sizeof(Pes6MatchTeamStats) == 0x2f4 ? 1 : -1];
typedef char check_player_statistics_stride[sizeof(Pes6MatchPlayerStats) == 0x28 ? 1 : -1];
static inline void addMatchStat(Pes6MatchTeamStats *team, u8 player, s32 counter) {
    if (player < PES6_MATCH_STAT_PLAYERS) {
        ++team->counters[counter];
        ++team->players[player].counters[counter];
    }
}

static inline Pes6MatchPlayerStats *matchCounterRow(Pes6MatchTeamStats *team, u8 player) {
    return (Pes6MatchPlayerStats *)(player * sizeof(Pes6MatchPlayerStats) + (u8 *)team->players);
}
#endif
