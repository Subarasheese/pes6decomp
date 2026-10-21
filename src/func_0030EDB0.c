/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_player.h"

/* Store squad byte 0xD5 of player [team][slot] in *out; 0 (and *out = 0) if out of range. */
int func_0030EDB0(int *out, int team, int slot)
{
    if (team < 0 || slot < 0 || team >= 2 || slot >= 32) {
        *out = 0;
        return 0;
    }
    *out = D_00592980[team].players[slot].xD5;
    return 1;
}
