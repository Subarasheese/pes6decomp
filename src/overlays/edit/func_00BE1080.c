/* compiler: mwcc-3.0.1b210 */
#include "pes6/edit_player_params.h"

int func_00BE1080(const Pes6EditPlayerParams *player, int position) {
    if (player == 0)
        return 0;
    switch (position) {
    case 0:
        return player->gk;
    case 2:
        return player->cwp;
    case 3:
        return player->cbt;
    case 4:
        return player->sb;
    case 5:
        return player->dm;
    case 6:
        return player->wb;
    case 7:
        return player->cm;
    case 8:
        return player->sm;
    case 9:
        return player->am;
    case 10:
        return player->wg;
    case 11:
        return player->ss;
    case 12:
        return player->cf;
    }
    return 0;
}
