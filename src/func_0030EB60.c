/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_player.h"

extern u8 D_00591E67[];

u8 func_0030EB60(u8 id)
{
    return D_00591E67[Pes6MatchPlayer_Get(id)->side];
}
