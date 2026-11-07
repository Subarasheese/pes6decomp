/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_player.h"

int func_0030E360(int *out, int team, int slot)
{
    Pes6SquadPlayer *sp;

    if (team < 0 || slot < 0 || team >= 2 || slot >= 32) {
        *out = 0;
        return 0;
    }
    sp = &Pes6MatchSquads[team].players[slot];
    *out = sp->ability[4] & 0x7F;
    return 1;
}
