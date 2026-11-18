/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_player.h"

s32 func_00311C50(s32 team, s32 slot)
{
    if (team < 0 || slot < 0 || team >= 2 || slot >= 32) {
        return 0;
    }
    return Pes6MatchSquads[team].players[slot].flagCF0;
}
