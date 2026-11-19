/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_player.h"
#include "pes6/match_stats.h"

s32 func_0030FF30(s16 *out, u8 id)
{
    Pes6MatchPlayer *player = Pes6MatchPlayer_Get(id);
    u8 team = player->team;
    u8 index = func_00C17E10(team, player->slot);

    if (index != 0xFF) {
        *out = D_00CB3300[0][team].players[index].value12;
    } else {
        *out = 0xFF;
    }
    return 1;
}
