/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_player.h"

/* Squad byte 0xD5 of match player id. */
int func_0030ED20(int *out, u8 id)
{
    Pes6MatchPlayer *p = Pes6MatchPlayer_Get(id);

    *out = D_00592980[p->team].players[p->slot].xD5;
    return 1;
}
