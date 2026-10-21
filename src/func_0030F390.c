/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_player.h"

int func_0030F390(u8 id)
{
    Pes6SquadPlayer *sp;
    int i;

    if (id == 0 || id >= 23) {
        return 0;
    }
    i = Pes6MatchPlayer_Index(id);
    sp = &D_00592980[D_0058E5B0[Pes6MatchPlayer_Index(id)].team].players[D_0058E5B0[i].slot];
    return sp->flagCF1;
}
