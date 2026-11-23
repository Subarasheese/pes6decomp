/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_player.h"
s32 func_00AB4850(Pes6MatchPlayer *actor, s32 value) {
    Pes6SquadPlayer *p = &Pes6MatchSquads[actor->team].players[actor->slot];
    switch (p->ratingScale) {
    case 0:
        value = value * 130 / 100;
        break;
    case 1:
        value = value * 120 / 100;
        break;
    case 2:
        value = value * 110 / 100;
        break;
    case 3:
        value = value * 108 / 100;
        break;
    case 4:
        value = value * 106 / 100;
        break;
    case 5:
        value = value * 104 / 100;
        break;
    case 6:
        value = value * 102 / 100;
        break;
    case 7:
    default:
        value = value * 101 / 100;
        break;
    }
    return value;
}
