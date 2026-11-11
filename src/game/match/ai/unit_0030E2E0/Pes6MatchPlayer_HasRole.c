/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_player.h"

int Pes6MatchPlayer_HasRole(u8 id, int role)
{
    return role == Pes6MatchPlayers[Pes6MatchPlayer_Index(id)].role;
}
