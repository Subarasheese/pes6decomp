/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_player.h"

int func_0030E460(int id)
{
    Pes6MatchPlayer *p = Pes6MatchPlayer_Get(id);
    Pes6SquadPlayer *sp = &Pes6MatchSquads[p->team].players[p->slot];
    return sp->ability[3] & 0x7F;
}
