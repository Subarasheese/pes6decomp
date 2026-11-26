/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(8)
#include "pes6/league_roster_flags.h"

s32 func_0096F230(u16 playerId, u8 team) {
    LeagueRosterAttributes *attributes = leagueRosterFlagsForPlayer(playerId, team);
    if (!attributes)
        return 0;
    return (attributes->flags & 2) != 0;
}
