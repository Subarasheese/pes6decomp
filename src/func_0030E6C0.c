/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_player.h"

int func_0030E6C0(u8 id)
{
    if (id == 0xFF) {
        return 0xFF;
    }
    return D_0058E5B0[Pes6MatchPlayer_Index(id)].team;
}
