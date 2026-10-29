/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_player.h"

int Pes6MatchPlayer_GetSide(u8 playerId)
{
    return Pes6MatchPlayers[Pes6MatchPlayer_Index(playerId)].side;
}
