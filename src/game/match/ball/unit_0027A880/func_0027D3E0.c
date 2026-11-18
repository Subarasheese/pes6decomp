/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_player.h"

int func_0027D3E0(const Pes6MatchPlayer *player)
{
    if (player->info->unk30 == 0x314) {
        return 1;
    }

    switch (player->info->appearance->value) {
    case 6:
    case 7:
    case 8:
        return 1;
    default:
        return 0;
    }
}
