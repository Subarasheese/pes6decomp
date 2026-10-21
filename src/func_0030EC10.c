/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_player.h"

/* Squad byte 0xD6 of match player id. */
int func_0030EC10(int *out, u8 id)
{
    Pes6MatchPlayer *p = Pes6MatchPlayer_Get(id);

    *out = D_00592980[p->team].players[p->slot].xD6;
    return 1;
}
