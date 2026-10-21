/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_player.h"

int func_0030E2E0(int id)
{
    Pes6MatchPlayer *p = Pes6MatchPlayer_Get(id);
    Pes6SquadPlayer *sp = &D_00592980[p->team].players[p->slot];
    return sp->ability[4] & 0x7F;
}
