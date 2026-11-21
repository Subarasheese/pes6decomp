/* compiler: mwcc-3.0.1b210 */
#include "pes6/edit_player_params.h"

void func_00BE3C60(Pes6EditPlayerParams *player, int ability, int value) {
    switch (ability) {
    case 0:
        player->specialDribbling = value;
        break;
    case 1:
        player->tacticalDribble = value;
        break;
    case 8:
        player->postPlayer = value;
        break;
    case 2:
        player->positioning = value;
        break;
    case 3:
        player->reaction = value;
        break;
    case 9:
        player->linePosition = value;
        break;
    case 10:
        player->middleShooting = value;
        break;
    case 6:
        player->scoring = value;
        break;
    case 4:
        player->playmaking = value;
        break;
    case 5:
        player->passing = value;
        break;
    case 13:
        player->penalties = value;
        break;
    case 7:
        player->oneOnOneScoring = value;
        break;
    case 22:
        player->longThrow = value;
        break;
    case 14:
        player->oneTouchPass = value;
        break;
    case 11:
        player->side = value;
        break;
    case 12:
        player->centre = value;
        break;
    case 15:
        player->outside = value;
        break;
    case 16:
        player->marking = value;
        break;
    case 18:
        player->covering = value;
        break;
    case 19:
        player->defensiveLineControl = value;
        break;
    case 17:
        player->sliding = value;
        break;
    case 20:
        player->penaltyStopper = value;
        break;
    case 21:
        player->oneOnOneStopper = value;
        break;
    }
}
