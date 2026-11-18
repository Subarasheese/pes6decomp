/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_player.h"

extern u8 *Pes6OptionData_GetBlock2F5(void);

s32 func_00311390(u8 id)
{
    Pes6MatchPlayer *player;

    if (Pes6OptionData_GetBlock2F5()[6] != 1) {
        if (id == 0 || id >= 23) {
            return 0;
        }
        player = Pes6MatchPlayer_Get(id);
        return Pes6MatchSquads[player->team].players[player->slot].value00 != -1;
    }
    return 0;
}
