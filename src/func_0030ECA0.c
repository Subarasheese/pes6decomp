/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_player.h"

/* Store squad byte 0xD6 of player [team][slot] in *out; 0 (and *out = 0) if out of range. */
int func_0030ECA0(int *out, int team, int slot)
{
    if (team < 0 || slot < 0 || team >= 2 || slot >= 32) {
        *out = 0;
        return 0;
    }
    *out = Pes6MatchSquads[team].players[slot].xD6;
    return 1;
}
