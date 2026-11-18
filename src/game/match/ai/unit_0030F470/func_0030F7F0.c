/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_player.h"
#include "pes6/match_stats.h"

s32 func_0030F7F0(u32 *out, u8 id)
{
    Pes6MatchPlayer *player;
    Pes6MatchTeamStats *teams;
    u32 total;
    u8 index;

    if (id == 0 || id >= 23) {
        *out = 0;
        return 0;
    }
    player = Pes6MatchPlayer_Get(id);
    teams = D_00CB3300[0];
    total = teams[player->team].total20;
    index = func_00C17E10(player->team, player->slot);
    if (index == 0xFF) {
        *out = 0;
        return 0;
    }
    if (total == 0) {
        *out = 0;
        return 0;
    }
    *out = teams[player->team].players[index].value20 * 100 / total;
    return 1;
}
