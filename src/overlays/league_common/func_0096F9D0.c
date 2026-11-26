/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(8)
#include "pes6/league_roster_flags.h"
u8 func_0096F9D0(u16 playerId) {
    s32 team;
    for (team = 0; team < 72; team++) {
        u8 position = findRosterPlayer(playerId, (u8)team);
        if (position != 0xff)
            return position;
    }
    return 0xff;
}
