/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_player.h"

int Pes6MatchPlayer_GetSquadIndex(u8 playerId)
{
    if (playerId == 0xFF) {
        return 0xFF;
    }
    return Pes6MatchPlayers[Pes6MatchPlayer_Index(playerId)].team;
}
