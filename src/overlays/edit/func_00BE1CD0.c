/* compiler: mwcc-3.0.1b210 */
#include "pes6/edit_player_params.h"

void func_00BE1CD0(Pes6EditPlayerParams *player, int position) {
    switch (position) {
    case 0:
        player->gk ^= 1;
        break;
    case 2:
        player->cwp ^= 1;
        break;
    case 3:
        player->cbt ^= 1;
        break;
    case 4:
        player->sb ^= 1;
        break;
    case 5:
        player->dm ^= 1;
        break;
    case 6:
        player->wb ^= 1;
        break;
    case 7:
        player->cm ^= 1;
        break;
    case 8:
        player->sm ^= 1;
        break;
    case 9:
        player->am ^= 1;
        break;
    case 10:
        player->wg ^= 1;
        break;
    case 11:
        player->ss ^= 1;
        break;
    case 12:
        player->cf ^= 1;
        break;
    }
}
