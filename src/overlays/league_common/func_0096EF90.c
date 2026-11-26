/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(8)
#include "pes6/league_roster_flags.h"

void func_0096EF90(u16 playerId, u8 team) {
    LeagueRosterAttributes *attributes = leagueRosterFlagsForPlayer(playerId, team);
    if (attributes)
        attributes->flags &= ~4;
}
