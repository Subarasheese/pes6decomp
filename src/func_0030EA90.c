/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_player.h"

int func_0030EA90(u8 id, int role)
{
    return role == Pes6MatchPlayers[Pes6MatchPlayer_Index(id)].role;
}
