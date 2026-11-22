/* compiler: mwcc-3.0.1b210 */
#include "pes6/edit_player_params.h"

void func_00BCFC90(Pes6EditPlayerParams *player, int ability, int value) {
    switch (ability) {
    case 0:
        player->attack = value;
        break;
    case 1:
        player->defence = value;
        break;
    case 2:
        player->balance = value;
        break;
    case 3:
        player->stamina = value;
        break;
    case 4:
        player->speed = value;
        break;
    case 5:
        player->accel = value;
        break;
    case 6:
        player->response = value;
        break;
    case 7:
        player->agility = value;
        break;
    case 8:
        player->dribAcc = value;
        break;
    case 9:
        player->dribSpe = value;
        break;
    case 10:
        player->sPassAcc = value;
        break;
    case 11:
        player->sPassSpe = value;
        break;
    case 12:
        player->lPassAcc = value;
        break;
    case 13:
        player->lPassSpe = value;
        break;
    case 14:
        player->shotAcc = value;
        break;
    case 15:
        player->shotPow = value;
        break;
    case 16:
        player->shotTec = value;
        break;
    case 17:
        player->fk = value;
        break;
    case 18:
        player->curling = value;
        break;
    case 19:
        player->heading = value;
        break;
    case 20:
        player->jump = value;
        break;
    case 21:
        player->tech = value;
        break;
    case 22:
        player->aggress = value;
        break;
    case 23:
        player->mental = value;
        break;
    case 24:
        player->gkAbil = value;
        break;
    case 25:
        player->team = value;
        break;
    case 26:
        player->condition = value;
        break;
    case 27:
        player->wfa = value;
        break;
    case 28:
        player->wff = value;
        break;
    }
}
