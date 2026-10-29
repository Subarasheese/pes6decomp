/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_player.h"

float func_0030EBB0(u8 id, int n, float scale)
{
    return n * (scale * Pes6MatchPlayers[Pes6MatchPlayer_Index(id)].x14);
}
